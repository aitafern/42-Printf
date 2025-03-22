# ft_printf

Implementación personalizada de la función printf en C.

## 📝 Descripción

`ft_printf` es una recreación de la función printf de la biblioteca estándar de C. Este proyecto forma parte del plan de estudios de 42 y permite entender en profundidad cómo funcionan las funciones con argumentos variables y el formateo de cadenas.

### Conversiones soportadas:

- `%c` - Carácter
- `%s` - Cadena de caracteres
- `%p` - Puntero en formato hexadecimal
- `%d` - Número decimal (base 10)
- `%i` - Entero en base 10
- `%u` - Entero sin signo decimal (base 10)
- `%x` - Número en formato hexadecimal (base 16) con letras minúsculas
- `%X` - Número en formato hexadecimal (base 16) con letras mayúsculas
- `%%` - Signo de porcentaje

## 🛠️ Funcionalidad

La función tiene el siguiente prototipo:
```c
int ft_printf(char const *str, ...);
```

- **Parámetros**: 
  - `str` - Cadena de formato
  - `...` - Argumentos variables según los especificadores en la cadena de formato
- **Valor devuelto**: Número de caracteres impresos

## 🧩 Archivos del proyecto

- `ft_printf.c` - Función principal
- `ft_printf.h` - Archivo de cabecera
- `ft_c_s_conversions.c` - Conversiones de caracteres y cadenas
- `ft_d_conversion.c` - Conversión de decimales
- `ft_p_conversion.c` - Conversión de punteros
- `ft_u_conversion.c` - Conversión de enteros sin signo
- `ft_x_conversion.c` - Conversión hexadecimal
- `ft_strlen.c` - Función auxiliar para calcular longitud de cadenas
- `Makefile` - Para compilar el proyecto

## 💻 Uso

### Compilación

```bash
make
```

Esto generará una biblioteca estática `libftprintf.a` que puedes enlazar con tus programas.

### Ejemplo de uso

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Cadena: %s\n", "Hola mundo");
    ft_printf("Caracter: %c\n", 'A');
    ft_printf("Número: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);
    
    int num = 10;
    ft_printf("Dirección: %p\n", &num);
    
    return (0);
}
```

Para compilar con tu programa:

```bash
cc -Wall -Wextra -Werror mi_programa.c -L. -lftprintf
```

## 🔍 Detalles técnicos

- La implementación no usa ninguna función de la biblioteca estándar de C excepto `write`, `malloc`, `free` y `va_start`, `va_arg`, `va_end` y `va_copy`.
- Se gestiona correctamente cada tipo de conversión siguiendo el comportamiento de la función original.
- Las conversiones hexadecimales diferencian entre mayúsculas y minúsculas según el especificador.

## 📋 Normas del proyecto

- Máximo 25 líneas por función
- Máximo 5 funciones por archivo
- Sin errores de compilación con las flags `-Wall -Wextra -Werror`

## 📚 Aprendizaje

Este proyecto permite comprender:
- Funciones con argumentos variables en C
- Uso de macros y la biblioteca `stdarg.h`
- Formateo de diferentes tipos de datos
- Manejo de cadenas y memoria
- Conversiones entre sistemas numéricos

---

# ft_printf

Custom implementation of the printf function in C.

## 📝 Description

`ft_printf` is a recreation of the printf function from the C standard library. This project is part of the 42 curriculum and allows for a deep understanding of how variable argument functions and string formatting work.

### Supported conversions:

- `%c` - Character
- `%s` - String
- `%p` - Pointer in hexadecimal format
- `%d` - Decimal number (base 10)
- `%i` - Integer in base 10
- `%u` - Unsigned decimal integer (base 10)
- `%x` - Number in hexadecimal format (base 16) with lowercase letters
- `%X` - Number in hexadecimal format (base 16) with uppercase letters
- `%%` - Percentage sign

## 🛠️ Functionality

The function has the following prototype:
```c
int ft_printf(char const *str, ...);
```

- **Parameters**: 
  - `str` - Format string
  - `...` - Variable arguments according to the specifiers in the format string
- **Return value**: Number of characters printed

## 🧩 Project Files

- `ft_printf.c` - Main function
- `ft_printf.h` - Header file
- `ft_c_s_conversions.c` - Character and string conversions
- `ft_d_conversion.c` - Decimal conversion
- `ft_p_conversion.c` - Pointer conversion
- `ft_u_conversion.c` - Unsigned integer conversion
- `ft_x_conversion.c` - Hexadecimal conversion
- `ft_strlen.c` - Helper function for calculating string length
- `Makefile` - For compiling the project

## 💻 Usage

### Compilation

```bash
make
```

This will generate a static library `libftprintf.a` that you can link with your programs.

### Usage example

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("String: %s\n", "Hello world");
    ft_printf("Character: %c\n", 'A');
    ft_printf("Number: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);
    
    int num = 10;
    ft_printf("Address: %p\n", &num);
    
    return (0);
}
```

To compile with your program:

```bash
cc -Wall -Wextra -Werror my_program.c -L. -lftprintf
```

## 🔍 Technical Details

- The implementation does not use any function from the C standard library except `write`, `malloc`, `free`, and `va_start`, `va_arg`, `va_end`, and `va_copy`.
- Each type of conversion is properly handled following the behavior of the original function.
- Hexadecimal conversions differentiate between uppercase and lowercase according to the specifier.

## 📋 Project Norms

- Maximum 25 lines per function
- Maximum 5 functions per file
- No compilation errors with flags `-Wall -Wextra -Werror`

## 📚 Learning

This project helps to understand:
- Variable argument functions in C
- Usage of macros and the `stdarg.h` library
- Formatting different types of data
- String and memory handling
- Conversions between numeric systems
