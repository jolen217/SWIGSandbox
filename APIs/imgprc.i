%module imgprc

%{
/* Include the header file for the C++ functions */
#include "include/bbox.h"
#include "include/sum.h"
%}

%include "include/bbox.h"

/* Declare the function to be wrapped */
int add(int a, int b);
//int foo(int a);
