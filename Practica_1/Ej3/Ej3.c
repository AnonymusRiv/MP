int i, j=25;
int *pi, *pj = &i;
*pj = j+5;
i=*pj+5;
pi=pj;
*pi=i+j;

/*
a) La dirección de memoria de i (F9C)
b) La dirección de memoria de j (FE9)
c) La dirección de memoria de i (&i)
d) El valor de i
e) 60
f) &i
g) i
h) 62
*/