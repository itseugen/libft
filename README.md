<h1 align="center">
	<p>
		libft
	</p>
</h1>
<h2 align="center">
	<p>
			My Library with own versions of C standard functions
	</p>
</h2>
<p align="center">
Coded in
	<a href="https://skillicons.dev">
		<img src="https://skillicons.dev/icons?i=c" />
	</a>
</p>

### Most of the functions in this library are my own versions of existing standard functions.
The definition of the library functions can be found [here](https://www.ibm.com/docs/en/i/7.3?topic=extensions-standard-c-library-functions-table-by-name).

### The functions mentioned below are either not part of the libc or only in it in a different form:

- ft_substr:
  - Creates a substring out of string "s" from position "start" with a maximum lenght of "len".
  - Prototype:
  char *ft_substr(char const *s, unsigned int start, size_t len);

- ft_strjoin:
  - Creates a new string by adding the string "s2" to the end of "s1"
  - Prototype:
  char *ft_strjoin(char const *s1, char const *s2);

- ft_strtrim:
  - Removes all characters from a set of characters "set" from the start and end of a string "s" 
  and returns the trimmed string.
  - Prototype:
  char *ft_strtrim(char const *s1, char const *set);

- ft_split:
  - Splits up a string "s" into substrings which are seperated by any amount of a character "c"
  and returns an array of the newly created strings.
  - Prototype:
  char **ft_split(char const *s, char c);

- ft_itoa:
  - Turns an integer "n" into a string and returns the string.
  - Prototype:
  char	*ft_itoa(int n);

- ft_strmapi:
  - Applies the function "f" to each element of the string "s" and creating a new string it returns.
  - Prototype:
  char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

- ft_striteri:
  - Applies the function "f" to each element of the string "s".
  - Prototype:
  void ft_striteri(char *s, void (*f)(unsigned int, char*));
  
- ft_putchar_fd:
  - Outputs a character "c" to the file descriptor "fd".
  - Prototype:
  void ft_putchar_fd(char c, int fd);
 
- ft_putstr_fd:
  - Outputs a string "s" to the file descriptor "fd".
  - Prototype:
  void ft_putstr_fd(char *s, int fd);

- ft_putendl_fd:
  - Outputs a string "s" followed by a newline to the file descriptor "fd".
  - Prototype:
  void ft_putendl_fd(char *s, int fd);
  
- ft_putnbr_fd:
  - Outputs an integer "n" to the file descriptor "fd"
  - Prototype:
  void ft_putnbr_fd(int n, int fd);

<sub><sup>This project is part of my studies at 42 Heilbronn</sup></sub>
