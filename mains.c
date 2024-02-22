/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allharut <allharut@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 13:45:29 by allharut          #+#    #+#             */
/*   Updated: 2023/09/15 13:45:31 by allharut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int main() // Main de ft_bzero
{
	size_t n;
	unsigned char source[n];
	int i;
	n = 10;

    printf("Contenido antes de ft_bzero:\n");
    printf("%02x ", source[i]);
    printf("\n");
    ft_bzero(source, n);
    printf("Contenido después de ft_bzero:\n");
    printf("%02x ",source[i]);
	printf("\n");
	return(0);
}
int main() //main de ft_isalnum
{
	int i;
	i = 'A';
	int result = ft_isalnum(i);
	printf("El resultado es: %d\n", result);
	return(0);
}
int main() //main de ft_isalpha
{
	int i;
	i = 'A';
	int result = ft_isalpha(i);
	printf("El resultado es: %d\n", result);
	return(0);
}
int main() //main de ft_isascii
{
	int i;
	i = 'A';
	int result = ft_isascii(i);
	printf("El resultado es: %d\n", result);
	return(0);
}
int main() //main de ft_isdigit
{
	int i;
	i = 'A';
	int result = ft_isdigit(i);
	printf("El resultado es: %d\n", result);
	return(0);
}
int main() //main de ft_isprint
{
	int i;
	i = 'A';
	int result = ft_isprint(i);
	printf("El resultado es: %d\n", result);
	return(0);
}
int main() //main de ft_memcpy
{
	char src[] = "Hello, World!";
	char dst[20];
	ft_memcpy(dst,src, sizeof(src));
	printf("Copied string is: %s\n", dst);
	return(0);
}
int main() //main de ft_memset
{
    int i;
    i = 0;
    int val = '1';
    int arr[5];// Crear un arreglo de entero
    printf("Valor original del arreglo:\n");
    //for (int i = 0; i < 5; i++)
    {
    
    printf("%d ", *arr);
    }

    printf("\n");
    // Llenar el arreglo con el valor 42 usando la función ft_memset
    ft_memset(arr, val, sizeof(arr));

    // Imprimir el contenido del arreglo
    printf("Contenido del arreglo:\n");
    //for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);

    }
    printf("\n");

    return 0;
}

int main(void) //main ft_strlen
{
	int leng;
	char str[] = "Hola mundo.";
	leng = ft_strlen(str);
	printf(leng);
	return (0);
}

int main() // man ft_memmove
{
    char src[] = "Hello, World!";
    char dst[20] = "Hola, mundo!";
    size_t length = ft_strlen(src); // Aquí proporcionamos el valor de len, el mismo que contiene el src sin "\0"

    printf("Source: %s\n", src); // imprimimos src
    printf("Original destination: %s\n", dst); //imprimimos dest originl
    ft_memmove(dst, src, length); //llamamos a la función

    printf("New Destination: %s\n", dst); // Imprimimos lo copiado en dest

    return 0;
}

int main() // main ft_strlcpy , se copia src en dest, y nos devuelve los carácteres copiados
{
    char src[] = "Hola, mundo!";
    char dest[ft_strlen(src)+1]; // El tamaño de destino debe ser suficiente para contener la cadena.

    unsigned int copied = ft_strlcpy(dest, src, (ft_strlen(src)+1));

    printf("Cadena copiada: %s\n", dest);
    printf("Número de caracteres copiados: %u\n", copied);

    return 0;
}
int main() // min ft_strlcat
{
    char dst[20] = "Hello, ";
    const char *src = "world!";

	printf("Destino original: %s\n", dst);
	printf("Objeto a copiar: %s\n", src);
	
    size_t result = ft_strlcat(dst, src, sizeof(dst));

    printf("Objeto copiado: %s\n", dst);
    printf("Carácteres copiados: %zu\n", result);

    return 0;
}
int main() // main ft_toupper
{
    char *str;
    *str = 'a';
    printf("Letra original: %s\n", str);
    ft_toupper(str);
    printf("La letra actual es: %s\n", str);
    return(0);
}
int main() // main ft_tolower
{
    char *str;
    *str = 'A';
    printf("Letra original: %s\n", str);
    ft_tolower(str);
    printf("La letra actual es: %s\n", str);
    return(0);
}
int main() // main ft_strchr
{
    const char *str;
    int character;
    str = "Hello, World!";
    character = 'o';
    printf("La frase es: %s\n", str);
    char *result = ft_strchr(str, character);
    if ( result != NULL)
    {
        printf("El carácter buscado está en la posición: %ld\n", result - str);
    }
    else
    {
        printf("El carácter '%c' no se encontró en la cadena.\n", character);
    }
    return(0);
}
int main() // main ft_strrchr
{
    const char *str = "Hola, mundo!!";
    char c = 'o';
    printf("La cadena es: %s\n", str);
    printf("El carácter buscado es: %c\n", c);
    char *result = ft_strrchr(str, c);
    printf("recultado: %s\n", result);
    

    if (result != NULL) {
        printf("La última '%c' se encuentra en la posición %ld\n", c, result - str + 1);
    } else {
        printf("El carácter '%c' no se encontró en la cadena.\n", c);
    }

    return 0;
}
int main(void) // main ft_strncmp
{
	unsigned int n;

	n = 9;

	char src[] = "Hello";
	char dest[] = "World1";
	printf("src es: %s\n", src);
	printf("dest es: %s\n", dest);

	ft_strncpy(dest, src, 9);
	printf("El nuevo dest es: %s\n", dest);
	return (0);
}
int main() //main ft_memchr
{
    const char *s = "Hello, world !";
    int c =  'o';
    size_t n = strlen(s);
    char *result = ft_memchr(s, c, n);
	printf("Resultado: %s.\n", result);

	if ( result != NULL)
	{
		printf("El byte buscado 'c' se encontró en la posición %ld.\n", result - s + 1);
	}
	else 
	{
		printf("El byte buscado 'c' no se encontró en la cadena.\n");
	}

    return(0);
}
int main() // main ft_memcmp
{
    const char *s1 = "Hola.";
    const char *s2 = "Hello.";
    int n = 5;

    int result = ft_memcmp(s1, s2, n);

    if (result < 0) {
        printf("s1 es menor que s2\n");
    } else if (result > 0) {
        printf("s1 es mayor que s2\n");
    } else {
        printf("s1 es igual a s2\n");
    }

    return 0;
}
int main() // main ft_strnstr
{
    const char *haystack = "Hola mundo, bienvenido";
    const char *needle = "mundo,";
    size_t len = strlen(haystack);
    char *result = ft_strnstr(haystack, needle, len);
    printf("El resultado: %s.\n", result);

    if (result != NULL)
    {
        printf("La subcadena se encontró en la posición %ld.\n", result - haystack);
    }
    else{
        printf("La subcadena '%s' no se encontró.\n",needle);
    }
    return(0);
}

/*int main(void) //main ft_atoi
{
	char str[] = "  203";
	int a;
	a = ft_atoi(str);
	printf("%i", a);
	return(0);
}*/