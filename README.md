# printo

> You must add the -lprinto flag at compilation.

It's not that useful because printf exist but I made it because printf is forbidden in my school.

You have to include the file `printo.h` in order to use this lib.

## Features

This lib has two major function : **printo()** and  **generate_str()**

### printo()

The usage is very similar to printf, but you have to give at first parameter the output (where you want to write it), it makes possible to write in a file descriptor instead of the standard output.

The second parameter is just the str you want to write.

The next parameters are infinite and depends of your second parameter.

**printo()** is a printf like function and can support:
  - int/long (%d)
  - float/double (%f)
  - char (%c)
  - str (%s)
  - boolean (%B)
  - pointer (%p)
