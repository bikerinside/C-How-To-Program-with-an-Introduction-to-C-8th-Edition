/*

3.22
(Predecrementing vs. Postdecrementing) Write a program that demonstrates the difference
between predecrementing and postdecrementing using the decrement operator --.

*/

#include <stdio.h>

int main()

{

  int i = 1,
      j = 1;
    /* this line code will print 0 because var i will first decremented */
    printf("\nPredecrementing i = %d \n", --i);
    /* instead in this case print 1 because j will postdecremented after this line of code */
    printf("Postdecrementing j = %d\n", j--);
    /* now j is decremented */
    printf("Postdecrementing j = %d\n", j);

    return 0;

}
