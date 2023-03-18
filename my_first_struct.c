
// Description
// Structures in C are similar to the concept of package.

// You can have multiple object inside your package and with a struct you can have multiple variable in it.

// A struct is a type.

// You are defining a struct of type struct s_box which will contains variables.

// example:

// struct s_coordinate {
//   int x;
//   int y;
// }

// int main() {
//   struct s_coordinate coord;
  
//   coord.x = 0;
//   coord.y = 0;
//   return 0;
// }
// A struct has a special behavior if it's a pointer on a struct or not.

// If it's a pointer on a struct, in order to reach the variable you will use ->

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
#include<string.h>
#include<stdio.h>
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


void my_first_struct(integer_array* param_1)
{
printf("%d\n",param_1->size);
for(int i=0; i<param_1->size;i++){
    printf("%d\n",*(param_1->array+i));
}
}