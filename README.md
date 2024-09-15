# DynoCLib

**DynoCLib** is a versatile and custom C utility library that provides dynamic memory management and essential C functions. It includes a variety of functions for allocation, string manipulation, linked lists, and more.

## Features

- Custom memory allocator for smooth and safe memory management.
- Essential C functions, including string handling, memory operations, and linked list utilities.
- Easy integration into your projects.

## Installation

1. **Clone the Repository**

   ```bash
   git clone https://github.com/yourusername/DynoCLib.git
   cd DynoCLib
   ```

2. **Build the Library**

   Run the `Makefile` to compile and create the static library archive:

   ```bash
   make
   ```

   This will generate `libar.a` in the root directory.

3. **Include the Header File**

   Ensure that the `DynoCLib.h` header file is accessible from your project. You can copy it to your project's include directory or specify the path to it.

4. **Link Against the Library**

   When compiling your project, link against the `libar.a` library. For example:

   ```bash
   gcc your_program.c -I /path_to/DynoCLib -L /path_to/DynoCLib -lar -o your_program
   ```

   Replace `/path_to/DynoCLib` with the path to the directory containing `libar.a`.

## Usage

Include the `DynoCLib.h` header file in your source files where you need to use the library functions:

```c
#include "DynoCLib.h"
```

## Functions

**DynoCLib** provides functions for:

- Allocation and deallocation
- String manipulation
- Linked list operations
- Input/output functions

Refer to `DynoCLib.h` for the full list of functions and their usage.

## Example

Here’s a simple example of using a function from DynoCLib:

```c
#include "DynoCLib.h"

int main() {
    char *str = ft_strdup("Hello, DynoCLib!");
    if (str) {
        printf("%s\n", str);
        free(str);
    }
    return 0;
}
```

## License

This library is licensed under the [MIT License](LICENSE).

## Contact

For any questions or support, please contact [your.email@example.com](mailto:abadouab@student.1337.ma).

## Contributing

Feel free to submit issues and pull requests. Contributions are welcome!

---
Happy coding! ^_^
