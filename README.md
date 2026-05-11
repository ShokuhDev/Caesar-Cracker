# 🔐 Caesar Cracker

A simple and useful **C++ terminal-based Caesar Cipher tool** for encrypting, decrypting, and brute-forcing Caesar-encrypted text.

This project is great for learning and practicing:
- 🧠 Basic cryptography concepts
- 💻 C++ programming
- 🔡 String and character manipulation
- 🛠️ Brute-force logic

---

## ✨ Features

- 🔒 Encrypt text using a custom Caesar Cipher key
- 🔓 Decrypt text using a known key
- 🧨 Brute-force Caesar Cipher by trying all possible keys
- 🖥️ Simple terminal-based interface
- 🔤 Supports uppercase and lowercase letters
- ➖ Non-alphabetic characters remain unchanged

---

## 🧠 About Caesar Cipher

The Caesar Cipher is one of the simplest and most famous encryption methods.

It works by shifting each letter in the alphabet by a fixed number.

### Example with key `3`

- `A` becomes `D`
- `B` becomes `E`
- `X` becomes `A`

Example:

`hello world` → `khoor zruog`

---

## ⚙️ Program Modes

When you run the program, you will see a menu like this:
```text
1. Encrypt
2. Decrypt
3. Brute Force
4. Exit

### 🔒 Encrypt
Use this option to encrypt plain text using a key.

### 🔓 Decrypt
Use this option to decrypt encrypted text using the correct key.

### 🧨 Brute Force
Use this option to try every possible Caesar Cipher key from `1` to `25`.

### 🚪 Exit
Closes the program.

---

## 📸 Example

### Input
text
Text: hello world
Key: 3

### Encrypted Output
text
khoor zruog

### Decrypted Output
text
hello world

---

## 🗂️ Project Structure

text
Caesar-Cracker/
├── main.cpp
├── README.md
├── .gitignore
├── Caesar_Cracker.sln
└── Caesar_Cracker.vcxproj

---

## 🚀 Getting Started

You can use this project in two ways:

### ✅ Option 1: Download the Executable

If you do not want to build the project manually, you can download the ready-to-use executable from the **Releases** section of this repository.

👉 **Download from the [Releases](../../releases) section**

> The executable file is available in **Releases**, not in the main repository files.

---

### 🛠️ Option 2: Build From Source

If you want to compile the project yourself, follow these steps.

#### Requirements

- A C++ compiler
- Visual Studio (recommended if you are using the included solution and project files)

#### Build with Visual Studio

1. Open the solution file:
   `Caesar_Cracker.sln`

2. Select build configuration:
   - `Release`
   - `x64` or `x86`

3. Build the project

After building, the executable will usually be generated inside:

text
x64/Release/

or

text
Release/

---

## ▶️ How to Use

After starting the program, choose one of the menu options.

### Encrypt
1. Select `1`
2. Enter the plain text
3. Enter the key
4. The program will display the encrypted text

### Decrypt
1. Select `2`
2. Enter the encrypted text
3. Enter the key
4. The program will display the decrypted text

### Brute Force
1. Select `3`
2. Enter the encrypted text
3. The program will try all possible keys from `1` to `25`

---

## 💡 Use Cases

This project can be useful for:

- Learning how Caesar Cipher works
- Practicing C++ programming
- Understanding basic encryption and decryption logic
- Trying simple brute-force attacks for educational purposes

---

## 🧪 Technologies Used

- C++
- C++ Standard Library
- Visual Studio

---

## 📌 Notes

- This project is made for educational purposes
- It is a beginner-friendly implementation of the Caesar Cipher
- It focuses on simplicity and readability
- It is useful for students and developers learning C++

---

## 🔮 Future Improvements

Possible future improvements include:

- Better terminal user interface
- File input and output support
- Better input validation
- Improved cross-platform compatibility
- Custom alphabet support
- Cleaner output formatting

---

## 🤝 Contributing

Contributions, suggestions, and improvements are welcome.

If you would like to contribute:

1. Fork the repository
2. Make your changes
3. Submit a pull request

---

## 👨‍💻 Author

Developed by **ShokuhDev**

---

## 📥 Download

If you want the ready-to-run executable, please visit the **Releases** section:

👉 **[Download from Releases](../../releases)**

---

## ⭐ Support

If you like this project, consider giving it a **star** on GitHub.

---

## 📜 License

This project is open-source and available under the **MIT License**.
1. **فایل `.gitignore` نهایی**
2. **متن Release v1.0**
3. **نسخه حتی حرفه‌ای‌تر README با badge**
