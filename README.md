# printo
> You have to include the file `printo.h` in order to use this lib.

> You must add the -lprinto flag at compilation.

This lib is not that useful because printf exist, but I made it because printf is forbidden in my school. The purpose of this interdiction is to force us to create this kind of lib... (Still I'm proud to say that I've created a printf like function)

## Usage

ye

## Features

This lib has two major function : **printo()** and  **generate_str()**

### printo()

**Prototype :**
```c
void printo(int fd, char *text, ...);
```

The usage is very similar to printf, but you have to give at first parameter the output (where you want to write it), it makes possible to write in a file descriptor instead of the standard output.

The second parameter is just the str you want to write.

The next parameters are infinite and depends of your second parameter.

**printo()** support those [flags](#supported-flags).
  

**Example :**
```c
#include <printo.h>

int main(void)
{
  printo(1, "Hey! This example print the number %d to show you how it work. Pretty similar to printf isn't it?", 3);
  return (0);
}
```
Output : 
```
$> gcc main.c -lprinto
$> ./a.out
Hey! This an example where I add the number 3 to show you how it work. Really similar to printf isn't it?
```

### generate_str()

**Prototype :**
```c
char *generate_str(char *text, ...);
```

The usage is similar to **printo()**, but has two differencies.
- You don't need to precise the output because this function doesn't print antyhing.
- The function return the char* instead of print it. 

The first parameter is just the str you want to write.

The next parameters are infinite and depends of your second parameter.

**generate_str()** support those [flags](#supported-flags).

**Example :**
```c
#include <printo.h>

int main(void)
{
  char *str;
  
  str = generate_str("Hey! This another test with a boolean at the state %B!", true);
  printo(1, "%s\n", str);
  free(str);
  return (0);
}
```
Output : 
```
$> gcc main.c -lprinto
$> ./a.out
Hey! This another test with a boolean at the state true!
```

# Supported flags
  - int/long (%d) *The function support int and long with the same flag not like printf.*
  - float/double (%f)
  - char (%c)
  - str (%s)
  - boolean (%B)
  - pointer (%p)
