#include <stdio.h>
int main(){
    int n;
    printf("Please input n:");
    scanf("%d", &n);
    const int size = n;//assign the value n as the size of the array
    int arr[size];
    for (int InputCount = 0; InputCount < n; InputCount++){//input to the array
        printf("Please input the number for the array:");
        scanf("%d", &arr[InputCount]);
    }
    printf ("\nThe number with even index is:");
    for (int EvenIndex = 0; EvenIndex < size; EvenIndex++){
        if (EvenIndex % 2 == 0){
            printf("%d ", arr[EvenIndex]);
        }
    }
    int EvenIndexCount = 0, EvenIndexSum = 0;
    for (int count = 0; count < n; count++){//do both: Check the number of even index and the sum of all numbers with the even index
        if (count%2==0){
            EvenIndexCount += 1;
            EvenIndexSum += arr[count];
        }
    }
    printf("\nThe number of even index is:%d\n", EvenIndexCount);
    printf("The sum of all number with the even index is:%d", EvenIndexSum);
    return 0;
}
//Dit me Lan