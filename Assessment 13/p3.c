/*Question:
Create a sample linked list with about 5
entries using the following structure.
Insert a new entry before or after a given
id. Delete an entry of a given id.
Menu Items
1. Insert Entry
2. Delete Entry
3. Display List
4. Exit*/
#include<stdio.h>
#include<stdlib.h>
typedef struct student {
    int roll;
    int maths;
    int science;
    struct student *next;
}st;
int main(){
    st *head = (st *) malloc (sizeof(st));
    head->next =NULL;
    st * temp = head;
    int x =0;
    while (1){
        printf("1.ENTER AN ELEMENT\n2.INSERT AN ELEMENT\n3.DELETE AN ELEMENT \n4.DSIPLAY\n5.EXIT\n");
        scanf("%d",&x);
        if(x==1){
            st *newnode = (st *)malloc(sizeof(st));
            printf("Enter the roll  : ");
            scanf("%d",&newnode->roll);
            printf("Enter the math marks: ");
            scanf("%d",&newnode->maths);
            printf("Enter the Sci mark : ");
            scanf("%d",&newnode->science);
            newnode->next=NULL;
            temp = head->next;
            if(head->next == NULL){
                head->next = newnode; 
            }
            else{
                temp = head->next;
                while(temp->next != NULL){
                   temp = temp->next;
                   }
                temp->next = newnode;
                }
        }
        else if (x==2){
            printf("Enter the element : ");
            int y ;
            scanf("%d",&y);
            temp = head->next;

            list:
            if(temp->next != NULL && (temp->roll) < y && y < (temp->next->roll)){
                st *newnode = (st *)malloc(sizeof(st));
                newnode->roll =y;
                printf("Enter the maths  : ");
                scanf("%d",&newnode->maths);
                printf("Enter the sci mark  : ");
                scanf("%d",&newnode->science);
                newnode->next = temp->next;
                temp->next = newnode;
            }
            else if (temp->next != NULL) {
                temp = temp->next;
                goto list;
            }

        }
        else if(x==3){
            printf("Enter the element that should be deleted :");
            int y ;
            scanf("%d",&y);
            temp = head;
            while(temp->next!=NULL){
                if(y==temp->next->roll){
                    temp->next= temp->next->next;
                    break;
                }
                temp=temp->next;
            }

        }
        else if (x==4){
            temp = head->next;
            while(temp->next!=NULL){
                printf("Roll :%d ",temp->roll);
                printf("MATH :%d ",temp->maths);
                printf("SCI :%d\n",temp->science);
                temp = temp->next;
            }
            printf("Roll :%d ",temp->roll);
            printf("MATH :%d ",temp->maths);
            printf("SCI :%d\n",temp->science);
        }
        else return 0;
    }
}

/*SAMPLE OUTPUT FOR REF:
1.ENTER AN ELEMENT
2.INSERT AN ELEMENT
3.DELETE AN ELEMENT 
4.DSIPLAY
5.EXIT
1
Enter the roll  : 10
Enter the math marks: 10
Enter the Sci mark : 10
1.ENTER AN ELEMENT
2.INSERT AN ELEMENT
3.DELETE AN ELEMENT
4.DSIPLAY
5.EXIT
1
Enter the roll  : 20
Enter the math marks: 20
Enter the Sci mark : 20
1.ENTER AN ELEMENT
2.INSERT AN ELEMENT
3.DELETE AN ELEMENT
4.DSIPLAY
5.EXIT
1
Enter the roll  : 30
Enter the math marks: 30
Enter the Sci mark : 30
1.ENTER AN ELEMENT
2.INSERT AN ELEMENT
3.DELETE AN ELEMENT
4.DSIPLAY
5.EXIT
1
Enter the roll  : 40
Enter the math marks: 40
Enter the Sci mark : 40
1.ENTER AN ELEMENT
2.INSERT AN ELEMENT
3.DELETE AN ELEMENT
4.DSIPLAY
5.EXIT
1
Enter the roll  : 50
Enter the math marks: 50
Enter the Sci mark : 50
1.ENTER AN ELEMENT
2.INSERT AN ELEMENT
3.DELETE AN ELEMENT
4.DSIPLAY
5.EXIT
2
Enter the element : 25
Enter the maths  : 25
Enter the sci mark  : 25
1.ENTER AN ELEMENT
2.INSERT AN ELEMENT
3.DELETE AN ELEMENT
4.DSIPLAY
5.EXIT
3
Enter the element that should be deleted :30
1.ENTER AN ELEMENT
2.INSERT AN ELEMENT
3.DELETE AN ELEMENT
4.DSIPLAY
5.EXIT
4
Roll :10 MATH :10 SCI :10
Roll :20 MATH :20 SCI :20
Roll :25 MATH :25 SCI :25
Roll :40 MATH :40 SCI :40
Roll :50 MATH :50 SCI :50
1.ENTER AN ELEMENT
2.INSERT AN ELEMENT
3.DELETE AN ELEMENT
4.DSIPLAY
5.EXIT*/
