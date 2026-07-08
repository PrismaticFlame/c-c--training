# Pointers

Pointers are the addresses of where data is stored in memory. Nothing more, nothing less.

So, lets say we have an standard, normal int:

```C
int i;
```

When creating/declaring a pointer, the "*" is used to declare it. Like:

```C
int *p;
```

This means "An int-pointer named p", or "pointer to an int"! p points to nothing as of right now (but it does point to something), so it has no usefulness yet. But, this does tell the C compiler that we are declaring we will use an int-pointer later.

Well, what if we want to *get* the address of that int we are pointing to? Like so!

```C
p = &i;
```

Now we have made use of that "hanging" (my term, not official) pointer we declared earlier.
