/*===============================
 * ���Ա�����ʽ�洢�ṹ��������
 *
 * �����㷨: 2.8��2.9��2.10��2.11
 ================================*/

#ifndef LINKLIST_H
#define LINKLIST_H

#include <stdio.h>
#include <stdlib.h>     //�ṩmalloc��realloc��free��exitԭ��
#include "Status.h"     //**��01 ����**//

/* ������Ԫ�����Ͷ��� */
typedef int ElemType;

/*
 * �������ṹ
 *
 * ע������ĵ���������ͷ���
 */
typedef struct LNode {
    ElemType data;      // ���ݽ��
    struct LNode* next; // ָ����һ������ָ��
} LNode;

// ָ����������ָ��
typedef LNode* LinkList;


/*
 * ����
 *
 * ��visit������������L
 */
void ListTraverse(LinkList L, void(Visit)(ElemType));

/*
 * ���������������� �㷨2.11 ����������������
 *
 * ͷ�巨��������
 *
 *����ע��
 * �̲���Ĭ�ϴӿ���̨��ȡ���ݡ�
 * ����Ϊ�˷�����ԣ�����ÿ�����ж��ֶ��������ݣ�
 * ���ѡ���˴�Ԥ����ļ�path�ж�ȡ�������ݡ�
 * ���̲��е��㷨���õ���ͷ�巨�����Դ˴���ʵ�ּ��˺�׺_Head��
 */
Status CreateList_Head(char path[], LinkList* L, int n);

/*
 * β�巨��������
 *
 *����ע��
 * �̲���Ĭ�ϴӿ���̨��ȡ���ݡ�
 * ����Ϊ�˷�����ԣ�����ÿ�����ж��ֶ��������ݣ�
 * ���ѡ���˴�Ԥ����ļ�path�ж�ȡ��������
 */
Status CreateList_Tail(char path[], LinkList* L, int n);

#endif