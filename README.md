# libft
My Library with own versions of C standard functions

Most of the functions in this library are my own versions of existing standard functions.

The functions mentioned below are either not part of the libc or only in it in a different form:

ft_substr:
  Creates a substring out of string "s" from position "start" with a maximum lenght of "len".
  Prototype:
  char *ft_substr(char const *s, unsigned int start, size_t len);

ft_strjoin:
  Creates a new string by adding the string "s2" to the end of "s1"
  Prototype:
  char *ft_strjoin(char const *s1, char const *s2);

ft_strtrim:
  Removes all characters from a set of characters "set" from the start and end of a string "s" 
  and returns the trimmed string.
  Prototype:
  char *ft_strtrim(char const *s1, char const *set);

ft_split:
  Splits up a string "s" into substrings which are seperated by any amount of a character "c"
  and returns an array of the newly created strings.
  Prototype:
  char **ft_split(char const *s, char c)
