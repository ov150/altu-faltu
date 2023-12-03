// #include<stdio.h>
// #include<stdlib.h>


// struct myArra{
//     int total_size;
//     int used_size;
//     int * ptr;

// };

// void createArr(struct myArra * a, int tSize, int uSize){
//     // (*a).total_size = tSize;
//     // (*a).used_size = uSize;
//     // int * ptr =  (int *) malloc(tSize*sizeof(int));

//     a->total_size = tSize;
//     a->used_size = uSize;
//     a->ptr =  (int *) malloc(tSize*sizeof(int));

// }

// void show(struct myArra * a){
//     for(int i=0; i < a->used_size; i++){
//         printf("%d\n", (a->ptr)[i]);

//     }
// }

// void setVal(struct myArra *a){
//     int n;
//     for(int i=0; i < a->used_size; i++){
//         printf("Enter the %d elements : ", i);
//         scanf("%d", &n);
//         (a->ptr)[i] = n;

//     }
// }

// int main(){
//     struct myArra marks;
//     createArr(&marks, 10, 2);
//     printf("valFun()\n");
//     setVal(&marks);
//     printf("Show()\n");
//     show(&marks);



//     return 0;
// }


