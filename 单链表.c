#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int num;
    struct Node *next;}list;


void creatList(list **head){                                                                              //建立线性表
    list *p1,*p2;
    printf("建立单链表\n");
    printf("当输入-9999时,建立链表结束\n");
    (*head)->next=p1=p2=malloc(sizeof(list));
    printf("输入数据:\n");
    scanf("%d",&p1->num);
    while(p1->num!=-9999){
    p1=malloc(sizeof(list));
    printf("输入数据:\n");
    scanf("%d",&p1->num);
    if(p->num==-9999)
    p2->next=NULL;
    else
    p2->next=p1;
    p2=p1;

       };
    }


int lenList(list *head){                                                                                    //链表的节点个数
    int len=0;
    list * p;
    p=head;
    while(p->next!=NULL){
    len++;
    p=p->next;
    }
    return len-1;
    }


void searchList(list *head){                                                                           //链表的搜索
    int search,n=0;
    list *p;
    printf("输入所要搜索的数据:");
    scanf("%d",&search);
    p=head;
    while(p->next!=NULL&&p->num!=search)
    {p=p->next;n++;}
    if(p->next==NULL)
        printf("此链表没有此数据!");
    else
        printf("找到此数据,位置为%d\n",n);
    }


void insertList(list **head){                                                                             //插入数据
    list *p1,*p2, *insert=malloc(sizeof(struct Node));
    printf("请输入要插入的数据:");
    scanf("%d",&insert->num);
    p2=p1=*head;
    while(p1->num<insert->num&&p1->next!=NULL)
        {   p2=p1;
            p1=p1->next;
        }
    if(p1->next==NULL)
        p1->next=insert;
    else
        {p2->next=insert;
          insert->next=p1;
        }
}


void deleList(list **head){                                                                                //删除数据
    int dele;
    printf("输入所要删除的数据:");
    scanf("%d",&dele);
    list *p1,*p2;
    p1=p2=* head;
    while(p1->next!=NULL&&p1->num!=dele)
    {   p2=p1;
        p1=p1->next;
    }
    if(p1->next==NULL)
        printf("没有此数据,无法删除!");
    else
        p2->next=p1->next;
}


void showList(list *head){                                                                               //展示列表
    list *p;
    p=head->next;
    if(head->next!=NULL)
    while(p!=NULL)
    {
        printf("数据为%d\n",p->num);
        p=p->next;
    }
 }


 int main() {                                                                                                              //主函数
    list *head=malloc(sizeof(list));
    head->num=-9999;
    head->next=NULL;
    void creatList(list **head);
    int     lenList(list *head);
    void searchList(list *head);
    void insertList(list **head);
    void deleList(list **head);
    void showList();
    int s;
    printf("\t1.建立链表\n2\t2.求链表节点的个数\n\t3.搜素数据\n\t4.插入数据\n\t5.删除数据\n\t6.展示列表\n\t7.退出\n");
    printf("请输入所要选择的功能:");
    scanf("%d",&s);
    while(s!=7){
    switch(s){
        case 1:creatList(&head);break;
        case 2:printf("链表的节点个数为%d\n",lenList(head));break;
        case 3:searchList(head);break;
        case 4:insertList(&head);break;
        case 5:deleList(&head);break;
        case 6:showList(head);}
        printf("请输入所要选择的功能:");
        scanf("%d",&s);
    }
    printf("%o",head);
 }
