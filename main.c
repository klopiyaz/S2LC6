#include <stdio.h>

int global_variable = 10; // Variable global
                          // esta variable puede ser llamada en cualquier 
                          // parte del archivo
void func();

void main(){
int i; 
// test de variable estatica 
for(i=0;i<5;i++){
func();
printf("after %d call \n",i);
}
}
void func(){
    static int counter = 0; // Variable estatica
    counter++;
    printf("func is called %d time(s)", counter);

    int local_variable = 10;
}