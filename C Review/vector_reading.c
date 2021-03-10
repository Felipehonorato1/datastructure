#include <stdio.h>

void print_array(int array[], int n){
    for(int i =0; i<n; i++){
        printf("%d ", array[i]);
    }
}

int main(){

int n; // Number of elements in vector
printf("Type size of your array: ");
scanf("%d",&n);

int arr[n];
for(int i =0; i<n; i++){
    printf("%d element: ", i);
    scanf("%d",&arr[i]);
}

print_array(arr,n);


return 0;
}
