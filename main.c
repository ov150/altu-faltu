#include<stdio.h>
// int main(){
//     int n;
//     int sum;
//     printf("Enter the value of n : ");
//     scanf("%d", &n);
//     sum = 0;
//     for(int i=1; i<=n; i++){
//         printf("%d ",i);
//         sum = sum + i;
//     }
//     printf("\nTotal of the sum = %d",sum);
//     return 0;
// }


// Enter the value of n : 10
// 1 2 3 4 5 6 7 8 9 10 
// Total of the sum = 55


// int main(){
//     int sum;
//     int n;
//     printf("Enter the value of n : ");
//     scanf("%d", &n);
//     sum = n * (n + 1) / 2;
//     printf("Total of the sum = %d",sum);
//     return 0;
// }


// Enter the value of n : 7
// Total of the sum = 28



// int main(){
//     int n;
//     int sum;
//     printf("Enter the value of n : ");
//     scanf("%d", &n);
//     sum = 0;
//     for(int i=1; i<=n; i++){
//         sum = sum + (i * i);
//         printf("%d^2 + ",i);

//     }
//     printf("\nTotal of the sum = %d",sum);
//     return 0;
// }


// Enter the value of n : 5
// 1^2 + 2^2 + 3^2 + 4^2 + 5^2 + 
// Total of the sum = 55




// int main(){
//     int n;
//     int sum;
//     printf("Enter the value of n : ");
//     scanf("%d", &n);
//     sum = n * (n + 1) * (2 * n + 1) /6;
//     printf("Total of the sum = %d",sum);
//     return 0;
// }

// Enter the value of n : 4
// Total of the sum = 30




// int main(){
//     int n;
//     float sum;
//     printf("Enter the value of n : ");
//     scanf("%d", &n);
//     sum = 0.0;
//     for(int i=1; i<=n; i++){
//         sum = sum + (1.0 / i);
//         printf("1/%d + ",i);

//     }
//     printf("\nTotal of the sum = %f",sum);
//     return 0;
// }


// Enter the value of n : 4
// 1/1 + 1/2 + 1/3 + 1/4 +
// Total of the sum = 2.083333

// int main(){
//     int n;
//     int sum;
//     printf("Enter the value n : ");
//     scanf("%d",&n);
//     sum = 0;
//     for(int i=1;i<=n;i++){
//         if(i%2==0){
//             sum = sum - i;
//             printf("-%d ",i);
//         }
//         else{
//             sum = sum + i;
//             printf("+%d ",i);
//         }

//     }
//         printf("Total of the sum = %d",sum);

// }

// Enter the value n : 4
// +1 -2 +3 -4 Total of the sum = -2


// int main()
// {
//     double i, n,sum=0;
//     n=12;
//     for(i=1;i<=n;i++)
//     {
//         if ((int)i%2==1)
//             sum+=i/(i+1);
//         else
//             sum-=i/(i+1);
//     }
//     printf("Sum: %lf",sum);
//     return 0;
// }



// int main(){
//     int n;
//     int sum = 0;
//     int fact = 1;
//     printf("Enter the values n : ");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         fact = fact * i;
//         sum = sum + fact;
//         printf("%d!+", i);
//     }
//     printf("\nTotal of the sum = %d", sum);
//     return 0;
// }


// Enter the values n : 5
// 1!+2!+3!+4!+5!+
// Total of the sum = 153

// int main(){
//     int marks[100];
//     int n;
//     printf("Enter the Array size : ");
//     scanf("%d",&n);

//     int sum =0;
//     printf("Enter the array elements : ");
//     for(int i=1; i<=n;i++){
//         scanf("%d",&marks[i]);
//     }
//     printf("Array is looking like that : ");
//     for(int i=1; i<=n;i++){
//         printf("%d",marks[i]);
//         sum = sum + marks[i];
//     }
//     printf("\nSum of the all elements = %d", sum);

//     return 0;

// }


// Enter the Array size : 6
// Enter the array elements : 1 2 3 4 5 6
// Array is looking like that : 123456
// Sum of the all elements = 21



// int main(){
//     int marks[100];
//     int n;
//     int avg;
//     printf("Enter the Array size : ");
//     scanf("%d",&n);

//     int sum = avg =0;
//     printf("Enter the array elements : ");
//     for(int i=1; i<=n;i++){
//         scanf("%d",&marks[i]);
//     }
//     printf("Array is looking like that : ");
//     for(int i=1; i<=n;i++){
//         printf("%d",marks[i]);
//         sum = sum + marks[i];
//     }
//     avg = (float)sum/n;
//     printf("\nSum of the all elements = %d", sum);
//     printf("\nAvg of the all elements = %d", avg);


//     return 0;

// }

// Enter the Array size : 5
// Enter the array elements : 1 2 3  4 5
// Array is looking like that : 12345
// Sum of the all elements = 15
// Avg of the all elements = 3


// int main(){
//     int marks[100];
//     int n;
//     int max;
//     printf("Enter the Array size : ");
//     scanf("%d",&n);
//     printf("Enter the array elements : ");
//     for(int i=1; i<=n;i++){
//         scanf("%d",&marks[i]);
//     }
//     max = marks[0];
//     for(int i=1; i<=n;i++){
//         if(marks[i]>max){
//             max = marks[i];
//         }
//     }
//     printf("Max of the all elements = %d", max);

//     return 0;

// }

// Enter the Array size : 6
// Enter the array elements : 9 4 2 4 2 6
// Max of the all elements = 9


// int main(){
//     int marks[100];
//     int n;
//     int min;
//     printf("Enter the Array size : ");
//     scanf("%d",&n);
//     printf("Enter the array elements : ");
//     for(int i=1; i<=n;i++){
//         scanf("%d",&marks[i]);
//     }
//     min = marks[0];
//     for(int i=1; i<=n;i++){
//         if(min>marks[i]){
//             min = marks[i];
//         }
//     }
//     printf("Min of the all elements = %d", min);

//     return 0;

// }

// Enter the Array size : 5
// Enter the array elements : 9 4 5 2 1 
// Min of the all elements = 1

// int main(){
//     int array[100];
//     int n;
//     int fir_hig;
//     int sec_hig;
//     printf("Enter the array size : ");
//     scanf("%d",&n);

//     printf("Enter the elements of an Array : ");
//     for(int i=1;i<=n;i++){
//         scanf("%d", array[i]);
//     }
//     printf("Array is looking like : ");
//     for(int i=1;i<=n;i++){
//         printf("%d",array[i]);
//     }
// }


// int second_highest(int a[], int lenght);

// int main(){
//     int array[100] = { 4,3,2,4,5,63,32,2,2,1,41,8};

//     int result = second_highest(array,10);

//     printf("second highest : %d",result);

//     return 0;

// }


// int second_highest(int array[], int lenght){
//     int max1;
//     int max2;

//     if(array[0]>array[1]){
//         max1 = array[0];
//         max2 = array[1];
//     }
//     else{
//         max1 = array[1];
//         max2 = array[0];

//     }
//     for( int i =2; i< lenght; i++){
//         if(array[i]>max1){
//             max2 = max1;
//             max1 = array[i];
//         }
//         else if(array[i]> max2 && array[i]<max1){
//             max2 = array[i];

//         }
        
//     }
//     return max2;
// }


// int main(){
//     int i,j,k;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//             printf(" ");
//         }
//         for(k=5;k>=i;k--){
//             printf("%d",k);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 54321
//  5432
//   543
//    54
//     5

// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=5;j>i;j--){
//             printf(" ");
//         }
//         for(j=0;j<=2*(i-1);j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


//     *
//    ***
//   *****
//  *******
// *********


// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=5;j>i;j--){
//             printf(" ");
//         }
//         for(j=0;j<=2*(i-1);j++){
//             if(i==5 || j==0 || j==2*(i-1)){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
            
//         }
//         printf("\n");
//     }
//     return 0;
// }


//     *
//    * *
//   *   *
//  *     *
// *********


// array program

// int main(){
//     int a[50];
//     int n;
//     printf("Enter the size of array : ");
//     scanf("%d",&n);

//     printf("Enter the elements of array : ");
//     for(int i=1;i<=n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Array is looking : ");
//     for(int i=1;i<=n;i++){
//         printf("%d ",a[i]);
//     }
//     int largest = a[0];
//     for(int i=1;i<=n;i++){
//         if(largest<a[i]){
//             largest = a[i];
//         }
//     } 
//     printf("\n The largest number in the array = %d",largest);

//     return 0;
// }


// Enter the size of array : 5 
// Enter the elements of array : 8 5 9 3 1
// Array is looking : 8 5 9 3 1 
//  The largest number in the array = 9


// int main(){
//     int a[50];
//     int n;
//     printf("Enter the size of array : ");
//     scanf("%d",&n);

//     printf("Enter the elements of array : ");
//     for(int i=1;i<=n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Array is looking : ");
//     for(int i=1;i<=n;i++){
//         printf("%d ",a[i]);
//     }
//     int smaller = a[0];
//     for(int i=1;i<=n;i++){
//         if(smaller>a[i]){
//             smaller = a[i];
//         }
//     } 
//     printf("\n The smallest number in the array = %d", smaller);

//     return 0;
// }


// Enter the size of array : 5
// Enter the elements of array : 5 9 10 21 4
// Array is looking : 5 9 10 21 4
//  The smallest number in the array = 4


// int main(){
//     int a[50];
//     int n;
//     int largest1= 0;
//     int largest2 = 0;
//     int temp =0;
//     printf("Enter the size of array : ");
//     scanf("%d",&n);

//     printf("Enter the elements of array : ");
//     for(int i=1;i<=n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Array is looking : ");
//     for(int i=1;i<=n;i++){
//         printf("%d ",a[i]);
//     }
//     largest1 = a[0];
//     largest2 = a[1];

//     if(largest1 < largest2){
//         temp = largest1;
//         largest1= largest2;
//         largest2 = temp;
//     }
//     for(int i=1;i<=n;i++){
//         if(a[i]<largest1){
//             largest2 = largest1;
//             largest1 = a[i];
//         }
//         else if(a[i] > largest2 && a[i] != largest1){
//             largest2 = a[i];
//         }
//     } 
//     printf("\n The largest1 number in the array = %d", largest1);
//     printf("\n The largest2 number in the array = %d", largest2);

//     return 0;
// }

// Enter the size of array : 6
// Enter the elements of array : 3 5 6 7 2 9
// Array is looking : 3 5 6 7 2 9 
// The largest1 number in the array = 2
// The largest2 number in the array = 9


// int main(){
//     int a[100];
//     int n;
//     int extra;
//     int position;
//     int i;
//     printf("Enter the size of array : ");
//     scanf("%d",&n);

//     printf("Enter the elements of array : ");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("\nArray is looking : ");
//     for(i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
//     printf("\nEnter the position of the element : ");
//     scanf("%d", &position);

//     printf("\nEnter the extra element to add : ");
//     scanf("%d", &extra);
 

//     for(i=n-1; i>=position; i--){
//         a[i + 1]= a[i];
//     }

//     a[position-1] = extra;

//     printf("\n");

//     for(i=0;i<=n;i++){
//         printf("%d ",a[i]);
//     }

//     return 0;
// }

// Enter the size of array : 4
// Enter the elements of array : 4 2 1 3

// Enter the position of the element : 5
// Enter the elements of array : 4 2 3 5 1 6

// Array is looking : 4 2 3 5 1 6
// Enter the position of the element : 2

// Enter the extra element to add : 7

// 4 7 3 3 5 1 6




// int main(){
//     int a[100];
//     int n;
//     int search;
//     int found =0;
//     int i;
//     printf("Enter the size of array : ");
//     scanf("%d",&n);

//     printf("Enter the elements of array : ");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("\nArray is looking : ");
//     for(i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
//     printf("\nEnter the element what you found: ");
//     scanf("%d", &search);

//     for(i=0;i<n;i++){
//         if(a[i] == search){
//             found = 1;
//             break;
//         }
//     }
//     if(found == 1){
//         printf("\n%d we found the element in  posion %d", search, i+1);
//     }
//     else{
//         printf("\n%d we don't find the element in the array", search);
//     }

//     return 0;
// }




// int main(){
//     int a[100];
//     int n;
//     int delete;
//     int index = -1;
//     int i;
//     printf("Enter the size of array : ");
//     scanf("%d",&n);

//     printf("Enter the elements of array : ");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("\nArray is looking : ");
//     for(i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
//     printf("\nEnter the element for delete: ");
//     scanf("%d", &delete);

//     for(i=0;i<n;i++){
//         if(a[i] == delete){
//             index = i;
//             break;
//         }
//     }
//     if(index!= -1){
//         for(i=index;i<n-1;i++){
//             a[i] = a[i+1];
//         }
//         printf("new Array :");
//         for(i =0;i<n-1;i++){
//             printf("%d ",a[i]);
//         }
//     }
//     else{
//         printf("\n%d we don't find the element in the array", delete);
//     }

//     return 0;
// }



// int main(){
//     int a[100];
//     int n;
//     int delete;
//     int index = -1;
//     int i;
//     printf("Enter the size of array : ");
//     scanf("%d",&n);

//     printf("Enter the elements of array : ");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("\nArray is looking : ");
//     for(i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
//     printf("\nEnter the element for delete: ");
//     scanf("%d", &delete);

//     for(i=0;i<n;i++){
//         if(a[i] == delete){
//             index = i;
//             break;
//         }
//     }
//     if(index!= -1){
//         for(i=index;i<n-1;i++){
//             a[i] = a[i+1];
//         }
//         printf("new Array :");
//         for(i =0;i<n-1;i++){
//             printf("%d ",a[i]);
//         }
//     }
//     else{
//         printf("\n%d we don't find the element in the array", delete);
//     }

//     return 0;
// }


// Program to calculate the sum of n numbers entered by the user

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//   int n, i, *ptr, sum = 0;

//   printf("Enter number of elements: ");
//   scanf("%d", &n);

//   ptr = (int*) malloc(n * sizeof(int));
 
//   // if memory cannot be allocated
//   if(ptr == NULL) {   
//     printf("Error! memory not allocated.");
//     exit(0);
//   }

//   printf("Enter elements: ");
//   for(i = 0; i < n; ++i) {
//     scanf("%d", ptr + i);
//     sum += *(ptr + i);
//   }

//   printf("Sum = %d", sum);

  
//   // deallocating the memory
//   free(ptr);

//   return 0;
// }

// int main(){
//     int i,j,k;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//             printf(" ");
//         }
//         for(k=5;k>=i;k--){
//             printf("%d",k);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 54321
//  5432
//   543
//    54
//     5

// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=5;j>i;j--){
//             printf(" ");
//         }
//         for(j=0;j<=2*(i-1);j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(i=4;i>=1;i--){
//       for(j=5;j>i;j--){
//         printf(" ");
//       }
//       for(j=0;j<=2*(i-1);j++){
//         printf("*");
//       }
//       printf("\n");
//     }
//     return 0;
// }



// int main(){
//   int i,j;
//   for(i=1;i<=5;i++){
//     for(j=5;j>i;j--){
//       printf(" ");
//     }
//     for(j=1;j<=i;j++){
//       printf("%d", j);
//     }
//     printf("\n");
//   }
// }




// #include<stdlib.h>

// int main(){
//   int *ptr;
//   int n;
//   printf("Enter the size of array : ");
//   scanf("%d" ,&n);

//   ptr = (int*) calloc(n, sizeof(int));
//   printf("Enter the elements of an array : ");
//   for(int i=0;i<n;i++){
//     scanf("%d", &ptr[i]);
//   }
//   printf("Array is looking like this : ");
//   for(int i=0;i<n;i++){
//     printf("%d",ptr[i]);
//   }
//   printf("\n");
//   printf("Enter the New size of array : ");
//   scanf("%d" ,&n);

//   ptr = (int*) realloc(ptr, n*sizeof(int));
//   printf("Enter the elements of an array : ");

//   for(int i=0;i<n;i++){
//     scanf("%d", &ptr[i]);
//   }
//   printf("New Array is looking like this : ");
//   for(int i=0;i<n;i++){
//     printf("%d",ptr[i]);
//   }


//   return 0;
// }
// int main(){
//   for(int i=0;i<5;i++){
//     for(int j=0;j<5;j++){
//       if(i%2==0){
//         printf("0");
//       }
//       else{
//       printf("1");
//       }
//     }
//     printf("\n");
//   }
// }

// 00000
// 11111
// 00000
// 11111
// 00000



// int main(){
//   for(int i=0;i<5;i++){
//     for(int j=0;j<5;j++){
//       if(i==0 || i==4 || j ==0 || j==4){
//         printf("0");
//       }
//       else{
//       printf("1");
//       }
//     }
//     printf("\n");
//   }
// }

// 00000
// 01110
// 01110
// 01110
// 00000



// int main(){
//   for(int i=0;i<5;i++){
//     for(int j=0;j<5;j++){
//       if(i==0 || i==4 || j ==0 || j==4){
//         printf("0");
//       }
//       else{
//       printf("1");
//       }
//     }
//     printf("\n");
//   }
// }





// #include<string.h>
// void main(){
//     char *p, *s;
//     int k;
//     p="abc";
//     strcpy(s,p);
//     strrev(s);
//     k = strcmp(p,s);
//     if(k==0){
//         printf("Yes");
//     }
//     else{
//         printf("Not");
//     }
// }


// struct emp{
//     char name[50];
//     int age;
// };
// int main(){
//     struct emp e;
//     strcpy(e.name,"vivek");
//     e.age =20;
//     printf("Name of the emp is %s", e.name);
//     printf("\nAge of the emp is %d",e.age);


//     return 0;
// }

// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=5;j>i;j++){
//             printf(" ");
//         }
//         for(int j=0;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int x = 10;
//     x= (x < 20) ? 20: x;
//     printf("%d", x--);
//     printf("%d", x);
//     return 0;
// }