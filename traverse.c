#include <stdio.h>
int main() {
    char myStrings[][500] = { "Tareq", "Ramim", "Hamza", "Ujjal", "Mithila", "Shafiqul", "Tonu", };

int i = 0;
for( i = 0; i < sizeof(myStrings) ; i++)
{
   printf(" %s\n", myStrings[i]);
 
}
    return 0;
}