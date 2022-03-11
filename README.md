# printo
> You have to include the file `printo.h` in order to use this lib.

> You must add the -lprinto flag at compilation.

This lib is not that useful because printf exist, but I made it because printf is forbidden in my school. The purpose of this interdiction is to force us to create this kind of lib... (Still I'm proud to say that I've created a printf like function) 

## Features

This lib has two major function : **printo()** and  **generate_str()**

### printo()

The usage is very similar to printf, but you have to give at first parameter the output (where you want to write it), it makes possible to write in a file descriptor instead of the standard output.

The second parameter is just the str you want to write.

The next parameters are infinite and depends of your second parameter.

**printo()** support those flags:
  - int/long (%d) > The function support int and long with the same flag not like printf.
  - float/double (%f)
  - char (%c)
  - str (%s)
  - boolean (%B)
  - pointer (%p)

**Example :**
```c
int main(void)
{
  printo(1, "Hey! This an example where I add the number %d to show you how it work. Really similar to printf isn't it?", 3);
  return (0);
}
```
Output : `Hey! This an example where I add the number %d to show you how it work. Really similar to printf isn't it?`

