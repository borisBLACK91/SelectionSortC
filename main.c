#include <stdio.h>
#include <stdlib.h>

#define N 10

//selection sort function declaration
void selectionSort(int numbers[N]);

int main()
{
    int numbers[N] = {8, 2, 15, 3, 0, 4, 2, 10, 1, 7}, i;

    printf("given array\n\n");
    for(i = 0; i<N; i++){
        printf("%d, ", numbers[i]);
    }
    printf("\n\n");
    selectionSort(numbers);

    return 0;
}

void selectionSort(int numbers[N]){

//variables declaration
int i, j, index_min, tmp;

//let's do our N-1 loops
    for(i = 0; i<N-1; i++){
        //looking for min of the sub array
        index_min = i;
        for(j = i; j<N; j++){
            if(numbers[j]<numbers[index_min]){
                index_min = j;
            }
        }
        //swapping min elt with fist elt of the sub array
        tmp = numbers[i];
        numbers[i] = numbers[index_min];
        numbers[index_min] = tmp;

    }

   printf("\n\nsorted array\n\n");
    for(i = 0; i<N; i++){
        printf("%d, ", numbers[i]);
    }
    printf("\n\n");
}
