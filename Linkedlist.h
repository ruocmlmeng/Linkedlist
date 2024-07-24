/**
  ******************************************************************************
  * @file           : Linkedlist.h
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/24
  ******************************************************************************
  */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef int ElemeType;
typedef struct Node
{
    ElemeType data;
    struct Node * next;
}Node;
//根据用户的输入创建单链表
Node * create_List(void);

//打印链表
void Print_List(Node * p);

//根据用户的输入,创建一个有序的单链表
Node * ceate_order_List(void);

//在一个有序链表中插入一个结点，使其插入完成后，单链表任然有序
Node * Insert_Node(Node * l , Node * p);

#endif //LINKEDLIST_H
