# ft_printf

ft_printf is my own implementation of the printf() function, from the C standard library. 
ft_printf prints the arguments passed to it on the standard output, formatting them according to format specifiers. It returns the total number of characters printed.

## Format conversions

ft_printf handles the following format specifiers:
%c to print a character
%s to print a string
%d to print a decimal number
%i to print an integer
%u to print an unsigned integer
%x to print an unsigned hexadecimal number in lowercase
%X to print an unsigned hexadecimal number in uppercase
%% to print a percent sign
%p to print a void pointer's memory adress in hexadecimal format

## Examples

```C

# prints "42", returns 2
ft_printf("%d", 42)

# prints "a", returns 1
ft_printf("%c", 'a')

# prints "42 in hexadecimal is 2A", returns 23
ft_printf("%d in hexadecimal is %X", 42, 42)
```

## Learning focus

This is a school project, which I coded as part of the common core at 42 Paris.
With this project, I learned more about coding variadic functions using the va_start, va_arg and va_end macros.