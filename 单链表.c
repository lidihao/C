#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int num;
    struct Node *next;}list;


void creatList(list **head){                                                                              //�������Ա�
    list *p1,*p2;
    printf("����������\n");
    printf("������-9999ʱ,�����������\n");
    (*head)->next=p1=p2=malloc(sizeof(list));
    printf("��������:\n");
    scanf("%d",&p1->num);
    while(p1->num!=-9999){
    p1=malloc(sizeof(list));
    printf("��������:\n");
    scanf("%d",&p1->num);
    if(p->num==-9999)
    p2->next=NULL;
    else
    p2->next=p1;
    p2=p1;

       };
    }


int lenList(list *head){                                                                                    //����Ľڵ����
    int len=0;
    list * p;
    p=head;
    while(p->next!=NULL){
    len++;
    p=p->next;
    }
    return len-1;
    }


void searchList(list *head){                                                                           //���������
    int search,n=0;
    list *p;
    printf("������Ҫ����������:");
    scanf("%d",&search);
    p=head;
    while(p->next!=NULL&&p->num!=search)
    {p=p->next;n++;}
    if(p->next==NULL)
        printf("������û�д�����!");
    else
        printf("�ҵ�������,λ��Ϊ%d\n",n);
    }


void insertList(list **head){                                                                             //��������
    list *p1,*p2, *insert=malloc(sizeof(struct Node));
    printf("������Ҫ���������:");
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


void deleList(list **head){                                                                                //ɾ������
    int dele;
    printf("������Ҫɾ��������:");
    scanf("%d",&dele);
    list *p1,*p2;
    p1=p2=* head;
    while(p1->next!=NULL&&p1->num!=dele)
    {   p2=p1;
        p1=p1->next;
    }
    if(p1->next==NULL)
        printf("û�д�����,�޷�ɾ��!");
    else
        p2->next=p1->next;
}


void showList(list *head){                                                                               //չʾ�б�
    list *p;
    p=head->next;
    if(head->next!=NULL)
    while(p!=NULL)
    {
        printf("����Ϊ%d\n",p->num);
        p=p->next;
    }
 }


 int main() {                                                                                                              //������
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
    printf("\t1.��������\n2\t2.������ڵ�ĸ���\n\t3.��������\n\t4.��������\n\t5.ɾ������\n\t6.չʾ�б�\n\t7.�˳�\n");
    printf("��������Ҫѡ��Ĺ���:");
    scanf("%d",&s);
    while(s!=7){
    switch(s){
        case 1:creatList(&head);break;
        case 2:printf("����Ľڵ����Ϊ%d\n",lenList(head));break;
        case 3:searchList(head);break;
        case 4:insertList(&head);break;
        case 5:deleList(&head);break;
        case 6:showList(head);}
        printf("��������Ҫѡ��Ĺ���:");
        scanf("%d",&s);
    }
    printf("%o",head);
 }
