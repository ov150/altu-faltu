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
//  #include<stdlib.h>

// struct node{
//     int data;
//     struct node *link;
// };

// int main(){
//     struct node *head=malloc(sizeof(struct node));
//      head->data=45;
//     head->link=NULL;

//     struct node *current=malloc(sizeof(struct node));
//      current->data=48;
//     current->link=NULL;
//     head->link=current;

//     current=malloc(sizeof(struct node));
//      current->data=58;
//     current->link=NULL;
//     head->link->link=current;
//     linkedListTraversal(head);

//     return 0;
// }

// void linkedListTraversal(struct node *ptr){
//     while(ptr!=NULL){
//         printf("Element: %d\n", ptr->data);
//         ptr = ptr->link;
//     }

// }