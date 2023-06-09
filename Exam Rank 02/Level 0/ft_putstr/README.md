# :books: ft_putstr

[Subject File](./subject.en.txt) | [Solution File](./ft_putstr.c)

## :clipboard: Explanation

The `ft_putstr` function is designed to display a string on the standard output. Here's a brief overview of the implementation:

1. The program includes the necessary header file `<unistd.h>` for the `write` function.
2. The function `ft_putstr` is defined with a parameter `char *str`.
3. Inside the function, an integer variable `i` is initialized to 0.
4. The function enters a loop that continues until the end of the string is reached (indicated by the null character `'\0'`).
5. Inside the loop, the function uses the `write` function to write the character at the current index `i` of the string `str` to the standard output.
6. The function increments `i` to move to the next character in the string.
7. The loop continues until the end of the string is reached.
8. The function completes its execution.

The allowed function `write` is used to output characters.

## :pencil: Subject

```
Assignment name  : ft_putstr
Expected files   : ft_putstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first
character.

Your function must be declared as follows:

void	ft_putstr(char *str);

```

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette: