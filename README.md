
## 🗣️ About

> _The aim of this project is to code a custom C library to be used in all future projects._

For more detailed information, look at the [**subject of this project.**](https://github.com/edenjamsalem/libft/subject.pdf)

## List of functions from the subject:

> _**Many other useful custom functions have been added since_

### Functions from `<ctype.h>` library

* [`ft_isascii`](ft_isascii.c)               - test for ASCII character.                                               
* [`ft_isalnum`](ft_isalnum.c)	           - alphanumeric character test.                                            
* [`ft_isalpha`](ft_isalpha.c)               - alphabetic character test.                                              
* [`ft_isdigit`](ft_isdigit.c)               - decimal-digit character test.                                          
* [`ft_isprint`](ft_isprint.c)               - printing character test (space character inclusive).                    
* [`ft_tolower`](ft_tolower.c)               - upper case to lower case letter conversion.                             
* [`ft_toupper`](ft_toupper.c)               - lower case to upper case letter conversion.                             

### Functions from `<stdlib.h>` library

* [`ft_atoi`](ft_atoi.c)		- convert ASCII string to integer.
* [`ft_calloc`](ft_calloc.c)	- memory allocation.

### Functions from `<strings.h>` library

* [`ft_bzero`](ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](ft_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](ft_memcpy.c)		- copy memory area.

### Functions from `<string.h>` library

* [`ft_strlen`](ft_strlen.c)				- find length of string.
* [`ft_strchr`](ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strnstr`](ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strncmp`](ft_strncmp.c) 			- compare strings (size-bounded).
* [`ft_strdup`](ft_strdup.c)				- save a copy of a string (with malloc).
* [`ft_strlcpy`](ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](ft_strlcat.c)			- size-bounded string concatenation.

### Non-standard functions

* [`ft_itoa`](ft_itoa.c)					- convert integer to ASCII string.
* [`ft_substr`](ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](ft_strmapi.c)			- create new string from modifying string with specified function.
* [`ft_striteri`](ft_striteri.c)			- 
* [`ft_putchar_fd`](ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr_fd`](ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl_fd`](ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr_fd`](ft_putnbr_fd.c)		- output integer to given file.

### Linked list functions

* [`ft_lstnew`](ft_lstnew.c)				- create new list.
* [`ft_lstsize`](ft_lstsize.c)			- count elements of a list.
* [`ft_lstlast`](ft_lstlast.c)			- find last element of list.
* [`ft_lstadd_back`](ft_lstadd_back.c)	- add new element at end of list.
* [`ft_lstadd_front`](ft_lstadd_front.c)	- add new element at beginning of list.
* [`ft_lstdelone`](ft_lstdelone.c)		- delete element from list.
* [`ft_lstclear`](ft_lstclear.c)			- delete sequence of elements of list from a starting point.
* [`ft_lstiter`](ft_lstiter.c)			- apply function to content of all list's elements.
* [`ft_lstmap`](ft_lstmap.c)				- apply function to content of all list's elements into new list.


## 🛠️ Usage

### Requirements

The library is written in C language and needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile the library, go to its path and run:

```shell
$ make
```

**2. Cleaning all binary (.o) and executable files (.a)**

To clean all files generated while doing a make, go to the path and run:

```shell
$ make fclean
```

**3. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```

And link the executable **libft.a** in your Makefile

## 📋 Testing

You can use any of this third party testers to test the project
§§

* [Tripouille/libfTester](https://github.com/Tripouille/libftTester)
* [ska42/libft-war-machine](https://github.com/ska42/libft-war-machine)
* [alelievr/libft-unit-test](https://github.com/alelievr/libft-unit-test)
