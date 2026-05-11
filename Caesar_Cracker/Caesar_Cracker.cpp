#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <cctype>
#include <cstdlib>


using namespace std;



void clearScreen()
{
#ifdef _WIN32
	system("cls");
#else
	system("clear");

#endif // _WIN32

}


void loadingAnimation(string text, int dots = 3, int delay = 300)
{
	for (int i = 0; i < dots; i++) {
		cout << text;
		for (int j = 0; j <= i; j++) {
			cout << ".";
		}
		cout << "\r";
		cout.flush();
		this_thread::sleep_for(chrono::milliseconds(delay));
	}
	cout << string(text.size() + dots, ' ') << "\r";
}


string encryptText(string text, int key)
{
	string r = "";
	for (char c : text) {
		if (isupper(c)) {
			r += char((c - 'A' + key) % 26 + 'A');
		}
		else if (islower(c)) {
			r += char((c - 'a' + key) % 26 + 'a');
		}
		else
			r += c;
	}
	return r;
}


string decryptText(string text, int key)
{
	string r = "";
	for (char c : text) {
		if (isupper(c)) {
			r += char((c - 'A' - key + 26) % 26 + 'A');
		}
		else if (islower(c)) {
			r += char((c - 'a' - key + 26) % 26 + 'a');
		}
		else
			r += c;
	}
	return r;
}


void brutForce(string cipher)
{
	clearScreen();

	cout << "\033[32m";
	cout << "#######################################\n";
	cout << "#     LUNCHING BRUTE FORCE ATTACK     #\n";
	cout << "#######################################\n\n";

	loadingAnimation("\033[32mInitializing Attack", 5, 200);

	cout << "\033[32mScanning all possible keys...\n\n";

	for (int key = 1; key <= 25; key++) {
		cout << "[";

		int filled = key * 4;

		for (int i = 0; i < 100; i++) {
			if (i < filled)
				cout << "\033[32m#";
			else
				cout << '.';
		}

		cout << "\033[0m]  ";
		cout << "\033[32m" << (key * 4) << "%\r";
		cout.flush();
		this_thread::sleep_for(chrono::milliseconds(80));
	}

	cout << "\n\n--- POSSIBLE DECRYPTION ---\n\n";

	for (int key = 1; key <= 25; key++) {
		cout << "\033[32mKey " << (key < 10 ? "0" : "")
			<< key << " : " << decryptText(cipher, key) << "\n";

		this_thread::sleep_for(chrono::milliseconds(100));
	}
	cout << "\nAttack complete.\n\033[0m";
}








int main()
{
	int choice;

	while (true) {
		clearScreen();

		cout << "\033[32m###################################\n";
		cout << "#   CAESAR CIPHER TERMINAL v1.0   #\n";
		cout << "###################################\n\n";
		cout << "[1] Encrypt Text\n";
		cout << "[2] Decrypt Text\n";
		cout << "[3] Brute Force Attack\n";
		cout << "[4] Exit\n\n";
		cout << "Select Option : \033[0m";

		cin >> choice;
		cin.ignore();

		if (choice == 1) {
			clearScreen();
			string text;
			int key;

			cout << "\033[32mEnter text to encrypt:\n> \033[0m";
			getline(cin, text);

			cout << "\033[32mEnter Key (1-25): \033[0m";
			cin >> key;

			cout << "\n\033[32mEncryption...\n\033[0m";
			loadingAnimation("\033[32mProcessing", 4, 200);

			cout << "\033[32mEncrypted Text: \n"
				<< encryptText(text, key) << "\033[0m\n\n";

			system("pause");
		}
		else if (choice == 2) {
			clearScreen();
			string text;
			int key;

			cout << "\033[32mEnter Text to decrypt: \n>\033[0m";
			getline(cin, text);

			cout << "\033[32mEnter Key (1-25): \033[0m";
			cin >> key;

			cout << "\n\033[32mDecrypting...\n\033[0m";
			loadingAnimation("\033[32mProcessing", 4, 200);

			cout << "\n\033[32mDecrypted Text: \n"
				<< decryptText(text, key) << "\033[0m\n\n";

			system("pause");
		}
		else if (choice == 3) {
			clearScreen();

			string cipher;

			cout << "\033[32mEnter Cipher Text: \n>\033[0m";
			getline(cin, cipher);

			brutForce(cipher);

			cout << "\n";
			system("pause");
		}
		else if (choice == 4) {
			clearScreen();
			cout << "\033[32mGoo By HACKER :)\033[0m";
			break;
		}
		else {
			cout << "Invalid Option!\n";
			this_thread::sleep_for(chrono::seconds(1));
		}
	}

	return 0;

}