// Insert an element using index(position) in a shorting order .




// #include<stdio.h>

// void display(int arr[], int n){
//     //display the array before printing
//     for(int i=0; i<n; i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int sortedArr(int arr[], int size, int element, int index, int capacity){
//     for(int i=size-1; i >= index; i--){
//         arr[i+1] = arr[i];
//     }
//     arr[index] = element;
   

//     return 1;
// }

// int main(){
//     int arr[100] = {2 ,33 ,8 ,5 ,6};
//     int size = 5;
//     int index = 1;
//     int element = 45;
//     int capacity = 100; // set the capacity to the size of the array
//     display(arr, size);
//     sortedArr(arr, size, element, index, capacity);
//     size = size + 1;
//     display(arr, size);
//     return 0;
// }


// delete an element using index(position) in a shorting order .



// #include<stdio.h>

// void display(int arr[], int n){
//     for(int i=0; i<n; i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// void deleteSortedArr(int arr[], int size, int index){
//     for(int i=index; i < size; i++){
//         arr[i] = arr[i+1];
//     }
// }

// int main(){
//     int arr[100] = {2 ,33 ,8 ,5 ,6};
//     int size = 5;
//     int index = 1;
   
//     display(arr, size);
//     deleteSortedArr(arr, size, index);
//     size = size - 1;
//     display(arr, size);
//     return 0;
// }


// #include<stdio.h>

// int linearSearch(int arr[], int size, int element){
//     for(int i=0; i<size; i++){
//         if(arr[i]==element){
//             return i;
//         }

//     }
//     return -1;

// }
// int main(){

//     int arr[] = {2,4,1,3,6,22,33,77};
//     int size = sizeof(arr)/sizeof(int);

//     int element = 22;
//     int searchIndex = linearSearch(arr, size, element);
//     printf("Element %d was found the at %d the position ", element, searchIndex);

//     return 0;
// }


// #include<stdio.h>

// int binarySearch(int arr[], int size, int element){
//     int low, high, mid;
//     low=0;
//     high = size-1;
//     while(low<=high){
//         mid = (low+high)/2;
//         if(arr[mid]==element){
//             return mid;
//         }
//         if(arr[mid]<element){
//             low = mid+1;
//         }    
//         else{
//             high = mid-1;
//         }

//     }
//     return -1;
    

// }


// int main(){

//     int arr[] = {2,4,5,7,12,45,52};
//     int size = sizeof(arr)/sizeof(int);
//     int element = 22;
//     int searchIndex = binarySearch(arr, size, element);
//     printf("Element %d was found the at %d the position ", element, searchIndex);
    
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node * next;
// };

// void linkedListTraversal(struct Node *ptr){
//     while(ptr!=NULL){
//         printf("Element: %d\n", ptr->data);
//         ptr = ptr->next;
//     }

// }

// int main(){

//     struct Node * head;
//     struct Node * second;
//     struct Node * third;
//     struct Node * fouth;

//     head = (struct  Node *) malloc(sizeof(struct Node));
//     second = (struct  Node *) malloc(sizeof(struct Node));
//     third = (struct  Node *) malloc(sizeof(struct Node));
//     fouth = (struct Node *) malloc(sizeof(struct Node));

//     head->data = 7;
//     head->next = second;

//     second->data = 11;
//     second->next = third;



//     third->data = 66;
//     third->next = fouth;

//     fouth->data = 41;
//     fouth->next = NULL;

//     linkedListTraversal(head);

//     return 0;
// }


// #include<stdio.h>

// int main(){

    
//     int size,i;
    
//     printf("Enter array length - ");
//     scanf("%d",&size);
    
//     int array[size];

//     printf("Enter array elements : \n");
//     for(i=0; i<size; i++){
//         scanf("%d",&array[i]);
//     }    

//     int el_no; //el_no means elemnet no which user should input
//     printf("How many element you want to insert - ");
//     scanf("%d",&el_no);

//     int element[el_no];

//     printf("Element value - ");
//     for(i=0; i<el_no;i++){
//      scanf("%d",&element[i]);  
//     }
//     int index[el_no];

//     printf("Index no - ");
//     for(i=0; i<el_no;i++){
//     scanf("%d",&index);   
//     }

//     for(i=0; i<el_no;i++){
//         for(i=index[i]; i< size+el_no;i++){
//             array[i+1]=array[i];
//         }
//     }
//     for(i=0; i<el_no; i++){
//         array[index[i]]=element[i];
//     }
//     for(i=0; i<size+el_no; i++){
//         printf("%d\t",array[i]);
//     }
//     return 0;
// }



// 