# 📌 Utility Functions Library (clsUtil) ⚡

> **A C++ utility class that provides various helper functions for random number generation, encryption, array operations, and string manipulation. 🚀**

---

## 🌟 Project Overview

The `clsUtil` class is a collection of utility functions designed to simplify common programming tasks in C++. It includes functionalities such as:
- Generating random numbers and characters 🎲
- Encrypting and decrypting text 🔒
- Performing various array operations 🔄
- Swapping values of different data types 🔁
- Converting numbers to text 🔢➡️📝

This class is highly modular and reusable, making it a useful addition to any C++ project.

---

## ✨ Features

### 🎲 Random Number & Character Generation
- **`Srand()`**: Seeds the random number generator.
- **`Random_Number(From, To)`**: Generates a random number within a given range.
- **`Get_RandomCharacter(CharType)`**: Generates a random character based on type (special character, digit, capital letter, small letter, mixed).

### 📝 Random Word & Key Generation
- **`Generate_Word(CharType, Length)`**: Generates a random word of a given length and character type.
- **`Generate_Key(CharType)`**: Generates a formatted key consisting of random characters.
- **`Generate_Keys(NumOfKeys, CharType)`**: Generates multiple keys and displays them.

### 🗃️ Array Operations
- **`Fill_Array_With_Random_Words(Arr, ArrLength, CharType, WordLength)`**: Fills an array with random words.
- **`Fill_Array_With_Random_Keys(Arr, ArrLength, CharType)`**: Fills an array with random keys.
- **`Fill_Array_With_Random_Numbers(Arr, ArrLength, From, To)`**: Fills an array with random numbers.
- **`Shuffle_Array(Arr, ArrLength)`**: Shuffles elements of an integer or string array.

### 🔁 Swapping Functions
- **`Swap(A, B)`**: Overloaded function that swaps values of different data types (integers, doubles, booleans, characters, strings, and custom `clsDate` objects).

### 🔒 Encryption & Decryption
- **`Encryption_Text(Text, EncryptionKey)`**: Encrypts a given text using Caesar cipher.
- **`Decryption_Text(Text, EncryptionKey)`**: Decrypts a given text using Caesar cipher.

### 🔢 Number to Text Conversion
- **`NumberToText(Number)`**: Converts an integer into its English textual representation (e.g., `123` → "One Hundred Twenty-Three").

### 📌 Miscellaneous
- **`Tabs(NumberOfTabs)`**: Generates a string containing a given number of tab characters.

---

## 🚀 How It Works

### 🔹 Random Generation
The class provides functions to generate random numbers, characters, and structured keys using the `rand()` function.

### 🔹 Encryption
The text encryption uses a basic **Caesar cipher**, shifting characters based on the provided encryption key.

### 🔹 Data Swapping
The class includes overloaded `Swap()` functions to exchange values of multiple data types.

### 🔹 Array Operations
Arrays can be filled with random values, shuffled, or manipulated with simple function calls.

### 🔹 Number-to-Text Conversion
Recursive logic is used to break down numbers into English words.

---

## 📚 Potential Enhancements

- 🔑 **Stronger Encryption**: Implement more secure encryption methods like AES or SHA hashing.
- 📂 **Database Storage**: Store generated keys and words in a database instead of arrays.
- 🖥️ **GUI Integration**: Create a graphical interface for user interaction.
- 📊 **More Data Structures**: Extend support to vectors and other data structures.

---

## ⚙️ Technologies Used

- **Language**: C++
- **Randomization**: `rand()` for number and character generation
- **File Handling**: Can be extended for persistent storage
- **Encryption**: Simple Caesar cipher
- **Recursion**: Used in number-to-text conversion

---

## 🎯 Learning Outcomes

This project demonstrates:
- ✅ **Random number & character generation**
- ✅ **Basic encryption & decryption methods**
- ✅ **Overloaded function implementation**
- ✅ **Recursive problem-solving (Number to Text conversion)**
- ✅ **Efficient string and array manipulation**

---

## 📜 License

This project is open-source. Use it, modify it, share it! 🎉

Feel free to fork, modify, and use this project in your own C++ applications! 🚀

---

## 🤝 Contributing

Contributions are welcome! If you have improvements or additional features to add, feel free to submit a Pull Request.

---

## 🏁 Ready to Explore?

### 🚀 How to Run
1. **Download** the repository to your local machine.
2. **Include** `clsUtil.h` in your project.
3. **Compile** your C++ code using a standard compiler (e.g., `g++` in terminal).
4. **Run** the program and experiment with the utility functions.

---

