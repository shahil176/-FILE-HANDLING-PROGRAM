# -FILE-HANDLING-PROGRAM 
*COMPANY*: CODTECH IT SOLUTIONS PVT.LTD
**NAME*: SHAHIL MURMU
*INTERN ID*: CT04DF2444
*DOMAIN*: C LANGUAGE
*DURATION*: 4 WEEKS
*MENTOR*: NEELA SANTOSH KUMAR
 #Task 1 Description – File Handling Program in C:

The primary goal of Task 1 is to implement a File Handling Program in the C programming language that demonstrates the core file operations: create/write, append, and read. This task forms the foundation for understanding how data is managed persistently using files rather than temporary storage such as variables or arrays in memory. File handling is a crucial concept in software development, especially in systems programming, data processing, text manipulation tools, and database-related applications.

This program is designed in a modular and user-interactive way, where a user is prompted to enter a file name, and then is presented with a menu offering four options: write, append, read, and exit. Based on the user’s selection, the respective file operation is performed.

At the core of the program are three functions: writeFile(), appendFile(), and readFile(). Each function takes a filename as input and performs the required operation using standard file I/O functions provided by the <stdio.h> library.

The writeFile() function opens the file in write mode ("w"), which either creates a new file if it doesn’t exist or overwrites the contents of an existing file. The user is asked to enter the content to write, which is stored using fgets() to allow spaces and then written to the file using fputs(). Once done, the file is closed to ensure data is safely saved.

The appendFile() function performs similar steps, but it opens the file in append mode ("a"), which ensures that new data is added to the end of the file without disturbing the previous contents. This is useful for log systems, chat records, or anytime ongoing data entries are made to a file.

The readFile() function opens the file in read mode ("r") and reads its contents character by character using fgetc() until the end-of-file (EOF) is reached. This demonstrates how data can be retrieved from a file and displayed to the user. Reading files is especially important in scenarios where data is stored across sessions or processed for analytics.

The main() function begins by asking the user for the filename to be used and enters a loop where the user can perform any operation repeatedly until they choose to exit. Input validation is performed to handle cases like incorrect choices, and getchar() is used to clear newline characters from the input buffer to prevent bugs during string input.

This program serves as a foundational exercise for students and interns to understand how to work with files using C. It introduces them to file pointers (FILE *), modes of opening files ("r", "w", "a"), and basic I/O functions such as fopen(), fgetc(), fputs(), and fclose().

Beyond the technical skills, this task also builds awareness of real-world applications of file handling, such as:

Configuration and log file creation

Data storage in non-volatile memory

Implementing backup systems

Developing text editors or CLI tools


Moreover, practicing file handling helps in debugging file-related issues, improving memory efficiency (as files don’t reside in RAM), and ensuring programs become persistent and reliable.

In conclusion, this file handling program is a practical and essential component of any beginner’s journey into C programming and systems development. It not only reinforces basic syntax and logic building but also introduces core file manipulation techniques that are widely used in both academic and industrial projects. The skills gained through this task lay the groundwork for more advanced concepts such as file encryption, database engines, and data serialization techniques in C.
 #OUTPUT
 ![Image](https://github.com/user-attachments/assets/45d18c14-0e17-4f55-be42-e9b383832d2a)
