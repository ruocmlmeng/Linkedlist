/**
  ******************************************************************************
  * @file           : Linkedlist.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/24
  ******************************************************************************
  */

#include "Linkedlist.h"

#include <stdio.h>
#include <stdlib.h>

/*
 *  create_List:根据用户的输入，建立一个单链表
 *  返回值：
 *          返回创建的单链表的第一个结点的指针 Node*
 */
Node * create_List(void)
{
    ElemeType d;//保存输入的数据
    Node * f = NULL;//永远指向单链表的第一个结点
    while (1)
    {
        scanf("%d",&d);
        if(d == 0)
        {
            //用户指定，如果输入为0的话就表示结束
            break;
        }
        Node *p =malloc(sizeof(Node));
        p->data = d;
        p->next = NULL;
        if( f == NULL)
        {
            //p将作为链表的第一个数据节点
            f = p;
        }
        else
        {
            //定义指针l ，初始化指向链表的第一个结点f
            Node * l = f;
            while(l->next)
            {
                l = l->next;
            }
            l->next = p;
        }
    }
    return f;
}
/*
 *
 *  Print_List:打印链表中所有的数据域
 *  返回值：
 *          无返回值
 */
void Print_List(Node * p)
{
    while (p)
    {
        printf("%d-> ",p->data);
        p = p->next;
    }
    printf("NULL\n");
}
/*
 *  create_order_list:根据用户的输入,创建一个有序的单链表
 *  返回值：
 *          返回创建的单链表第一个结点的指针
 */
Node * ceate_order_List(void)
{
    ElemeType d;//保存输入的数据
    Node * f = NULL;//单链表的第一个结点的指针
    while (1)
    {
        scanf("%d",&d);
        if(d == 0)
        {
            break;
        }
        Node * p = malloc(sizeof(Node));
        p->data = d;
        p->next = NULL;
        f = Insert_Node(f,p);
    }
    return f;
}

/*
 *  Insert_Node:在一个有序链表中插入一个结点，使其插入完成后，单链表任然有序
 *  @l： 指向一个单链表(单链表的第一个数据节点)
 *  @p: 指向待插入的那个结点
 *  返回值:
 *      返回插入之后链表的第一个机电的指针
 */
Node * Insert_Node(Node * l , Node * p)
{
    //判断链表是否存在
    if(l == NULL || p->data <= l->data) //头插法
    {
        p->next = l;
        return p;
    }
    Node * current = l;
    while (current -> next != NULL && current -> next ->data < p->data)
    {
        current = current -> next;//找到插入的位置
    }
    if(current ->next ==  NULL)
    {
        //尾插法
        current->next = p;
    }
    else
    {
        //中间插入
        p->next = current->next; //插入新节点
        current->next = p;
    }


    return l;//返回头节点
}