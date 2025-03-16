# Libft

<p align="center">
  <img src="https://user-images.githubusercontent.com/94384240/170144677-24ff4d41-6e4a-491a-adfa-7dcf0eac630a.jpeg" alt="42 School Logo" width="300">
</p>

## 🏛 42 Cursus - Libft

This was the first project I completed at 42 Lisbon. The goal was to create our own C library by implementing commonly used functions for future use!

📜 To see the project subject, [click here](https://github.com/jlebre/libft/blob/main/libft.pdf)!

---

## 🚀 Implemented Functions

### 📌 Mandatory Functions

| Function | Description |
|----------|------------|
| [ft_atoi](https://github.com/jlebre/libft/blob/main/src/ft_atoi.c) | Converts a string to an integer |
| [ft_bzero](https://github.com/jlebre/libft/blob/main/src/ft_bzero.c) | Fills memory with zeros |
| [ft_calloc](https://github.com/jlebre/libft/blob/main/src/ft_calloc.c) | Allocates and initializes memory |
| [ft_isalnum](https://github.com/jlebre/libft/blob/main/src/ft_isalnum.c) | Checks if alphanumeric |
| [ft_isalpha](https://github.com/jlebre/libft/blob/main/src/ft_isalpha.c) | Checks if a letter |
| [ft_isascii](https://github.com/jlebre/libft/blob/main/src/ft_isascii.c) | Checks if ASCII |
| [ft_isdigit](https://github.com/jlebre/libft/blob/main/src/ft_isdigit.c) | Checks if a digit |
| [ft_isprint](https://github.com/jlebre/libft/blob/main/src/ft_isprint.c) | Checks if printable |
| [ft_memcpy](https://github.com/jlebre/libft/blob/main/src/ft_memcpy.c) | Copies memory |
| [ft_memmove](https://github.com/jlebre/libft/blob/main/src/ft_memmove.c) | Moves memory |
| [ft_memset](https://github.com/jlebre/libft/blob/main/src/ft_memset.c) | Fills memory |
| [ft_putchar_fd](https://github.com/jlebre/libft/blob/main/src/ft_putchar_fd.c) | Writes a character to fd |
| [ft_putendl_fd](https://github.com/jlebre/libft/blob/main/src/ft_putendl_fd.c) | Writes a string with newline |
| [ft_putnbr_fd](https://github.com/jlebre/libft/blob/main/src/ft_putnbr_fd.c) | Writes a number to fd |
| [ft_putstr_fd](https://github.com/jlebre/libft/blob/main/src/ft_putstr_fd.c) | Writes a string to fd |
| [ft_strchr](https://github.com/jlebre/libft/blob/main/src/ft_strchr.c) | Locates a character in a string |
| [ft_strdup](https://github.com/jlebre/libft/blob/main/src/ft_strdup.c) | Duplicates a string |
| [ft_strlen](https://github.com/jlebre/libft/blob/main/src/ft_strlen.c) | Returns string length |
| [ft_strncmp](https://github.com/jlebre/libft/blob/main/src/ft_strncmp.c) | Compares two strings |
| [ft_strnstr](https://github.com/jlebre/libft/blob/main/src/ft_strnstr.c) | Locates a substring |
| [ft_substr](https://github.com/jlebre/libft/blob/main/src/ft_substr.c) | Returns a substring |

🔗 To see all functions, check the [source code](https://github.com/jlebre/libft/tree/main/src).

---

### 🎁 Bonus Functions

| Function | Description |
|----------|------------|
| [ft_lstnew](https://github.com/jlebre/libft/blob/main/src/ft_lstnew.c) | Creates a new list node |
| [ft_lstadd_front](https://github.com/jlebre/libft/blob/main/src/ft_lstadd_front.c) | Adds node to the front |
| [ft_lstadd_back](https://github.com/jlebre/libft/blob/main/src/ft_lstadd_back.c) | Adds node to the back |
| [ft_lstsize](https://github.com/jlebre/libft/blob/main/src/ft_lstsize.c) | Returns list size |
| [ft_lstlast](https://github.com/jlebre/libft/blob/main/src/ft_lstlast.c) | Returns last node |
| [ft_lstdelone](https://github.com/jlebre/libft/blob/main/src/ft_lstdelone.c) | Frees a node |
| [ft_lstclear](https://github.com/jlebre/libft/blob/main/src/ft_lstclear.c) | Frees the entire list |
| [ft_lstiter](https://github.com/jlebre/libft/blob/main/src/ft_lstiter.c) | Applies function to each node |
| [ft_lstmap](https://github.com/jlebre/libft/blob/main/src/ft_lstmap.c) | Applies function and creates a new list |

---

## 📂 Important Files

🔹 To see the `.h` file, [click here](https://github.com/jlebre/libft/blob/main/libft.h).

🔹 To see the `Makefile`, [click here](https://github.com/jlebre/libft/blob/main/Makefile).

---

## ✅ Testing

This project passed Moulinette and the following testers:

- [libftTester](https://github.com/Tripouille/libftTester)
- [libft-war-machine](https://github.com/y3ll0w42/libft-war-machine)
- [libft-unit-test](https://github.com/alelievr/libft-unit-test)

![Screenshot 2022-05-25 002835](https://user-images.githubusercontent.com/94384240/170148099-cae105d8-9eab-465e-8a4f-5e01825d5e73.png)

---

## 🛠 How to Use

To compile and use the library:

```bash
make
```

To use the functions in your project, include `libft.h` and link the library when compiling:

```bash
gcc -Wall -Wextra -Werror main.c -L. -lft -o program
```

⚠️ **Note**: To use the code as it is, move all files inside `/src` to the same folder as the `Makefile` and `libft.h`.

---

📌 **Project completed at 42 Lisbon!**
