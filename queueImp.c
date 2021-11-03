// #include <stdio.h>
// #include <stdlib.h>
// #define MAX 50
// int array[MAX];
// int rear = -1;
// int front = -1;
// void insert()
// {
//     int add;
//     if (rear == MAX - 1)
//         printf("Queue Overflow.");
//     else
//     {
//         if (front == -1)
//             front = 0;
//         printf("Insert the element in queue: ");
//         scanf("%d", &add);
//         rear = rear + 1;
//         array[rear] = add;
//     }
// }
// void del()
// {
//     if (front == -1 || front >> rear){
//         printf("Queue Underflow\n");
//     }
//     ​​​​​​​​
//     else
//     {
//         ​​​​​​​​
//         printf("Element deleted from the queue %d\n", array[front]);
//         front = front + 1;
//     }
//     ​​​​​​​​
// }
// ​​​​​​​​
// void display()
// {
//     ​​​​​​​​
//     int i;
//     if (front == -1)
//         printf("Queue is empty");
//     else
//     {
//         ​​​​​​​​
//         printf("Queue is : \n");
//         for (i = front; i <= rear; i++)
//             printf("%d\n", array[i]);
//     }
//     ​​​​​​​​
// }
// ​​​​​​​​
// int main()
// {
//     ​​​​​​​​
//     int ch;
//     while (1)
//     {
//         ​​​​​​​​
//         printf("\n1. Insert element to the queue \n");
//         printf("2.Delete element from queue \n");
//         printf("3. Display all elements of queue \n");
//         printf("4. Quit\n");
//         printf("\nEnter your choice : ");
//         scanf("%d", &ch);
//         switch (ch)
//         {
//             ​​​​​​​​
//         case 1:
//             insert();
//             break;
//         case 2:
//             del();
//             break;
//         case 3:
//             display();
//             break;
//         case 4:
//             exit(1);
//         default:
//             printf("Wrong choice !!");
//         }
//         ​​​​​​​​
//     }
//     ​​​​​​​​
// }
// ​​​​​​​​