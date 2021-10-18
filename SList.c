#include<stdio.h>
#include<stdlib.h>
typedef int Elemtype;

typedef struct LNode
{
    Elemtype data;
    struct LNode* next;
}LNode,*LinkList;

//不会改变链表的头指针，传一级指针
void SListprint(LNode*phead)//遍历单链表
{
    LNode* cur=phead;
    while(cur!=NULL)
    {
        printf("%d->",cur->data);
        cur=cur->next;
    }
    printf("NULL\n");

}

LNode* BuySListNode(Elemtype x)//创造一个结点函数
{
    LNode*newNode=(LNode*)malloc(sizeof(LNode));
    if(newNode==NULL)
    {
        printf("申请结点失败");
        exit(-1);
    }
    newNode->data=x;
    newNode->next=NULL;
    return newNode;
}

void SListPushBack(LNode**pphead,Elemtype x)//会改变链表的头指针，传二级指针
{
    LNode* newNode=BuySListNode(x);
    if(*pphead==NULL)
    {
        *pphead=newNode;
    }
    else
    {
        LNode*tail=*pphead;
        while(tail->next!=NULL)
        {
            tail=tail->next;
        }
        tail->next=newNode;
    }

}

void SListPushFront(LNode**pphead,Elemtype x)
{
    LNode* head=BuySListNode(x);
    head->next=*pphead;
    *pphead=head;
}

void SListPopFront(LNode**pphead)
{
    LNode* next=(*pphead)->next;
    free(*pphead);
    *pphead=next;
}

void SListPopBack(LNode**pphead)
{
    if(*pphead==NULL)
    {
        return ;
    }
    else if((*pphead)->next==NULL)
    {
        free(*pphead);
        *pphead=NULL;
    } 
    else
    {
        LNode* prev=NULL;
        LNode* tail=*pphead;
        while(tail->next!=NULL)
        {
            prev=tail;
            tail=tail->next;
        }
        free(tail);
        prev->next=NULL;
    }
    
}

LNode* SListFind(LNode*phead,Elemtype x)
{
    LNode* cur=phead;
    while(cur)
    {
        if(cur->data==x)
        {
            return cur;
        }
    
    cur=cur->next;
    }
    return NULL;
}

void SListInsert(LNode**pphead,LNode*pos,Elemtype x)
{
    LNode* newNode=BuySListNode(x);
    LNode* prev=*pphead;
    if(pos==*pphead)
    {
        SListPushFront(pphead,x);
    }
    else
    {
    while(prev->next!=pos)
    {
        prev=prev->next;
    }
    prev->next=newNode;
    newNode->next=pos;
    }
}

void SListErase(LNode**pphead,LNode*pos)
{
    if(pos==*pphead)
    {
        SListPopFront(pphead);
    }
    else
    {
    LNode*prev=*pphead;
    while(prev->next!=pos)
    {
        prev=prev->next;
    }
    prev->next=pos->next;
    free(pos);
    }
}

void test2()
{
    LNode* pList=NULL;//只有一个头指针
    SListPushBack(&pList,1);
    SListPushBack(&pList,2);
    SListPushBack(&pList,3);
    SListPushBack(&pList,4);
    SListPushBack(&pList,5);
     //想在3前面插入一个30
    LNode*pos=SListFind(pList,1);
    if(pos)
    {
        SListInsert(&pList,pos,30);
    }
    SListprint(pList);

}

void text3()
{
    LNode* pList=NULL;//只有一个头指针
    SListPushBack(&pList,1);
    SListPushBack(&pList,2);
    SListPushBack(&pList,3);
    SListPushBack(&pList,4);
    SListPushBack(&pList,5);
     //想删除5
    LNode*pos=SListFind(pList,5);
    if(pos)
    {
        SListErase(&pList,pos);
    }
    SListprint(pList);

    pos=SListFind(pList,1);
    if(pos)
    {
        SListErase(&pList,pos);
    }
    SListprint(pList);

    pos=SListFind(pList,2);
    if(pos)
    {
        SListErase(&pList,pos);
    }
    SListprint(pList);

    pos=SListFind(pList,3);
    if(pos)
    {
        SListErase(&pList,pos);
    }
    SListprint(pList);
    
    pos=SListFind(pList,4);
    if(pos)
    {
        SListErase(&pList,pos);
    }
    SListprint(pList);

}

int main()
{
    LNode* pList=NULL;//只有一个头指针
    SListPushBack(&pList,1);
    SListPushBack(&pList,2);
    SListPushBack(&pList,3);
    SListPushBack(&pList,4);
    SListPushBack(&pList,5);
    SListPushFront(&pList,0);
    SListprint(pList);

    SListPopFront(&pList);//头删
    SListprint(pList);

    SListPopBack(&pList);//尾删
    SListPopBack(&pList);
    SListprint(pList);

    test2();//检测插入

    text3();//检测删除
    
    return 0;

}
