#include <bits/stdc++.h>
using namespace std;
#define NAME 12

typedef struct Node
{
    string name; //����
    int score;   //����
    struct Node *next, *pre;
} Linked_List_Node;

typedef struct
{
    Linked_List_Node *head, *end;
    int length;
} Linked_List;

Linked_List_Node *linked_list_node_construct(char name[], int score);
Linked_List *linked_list_consctruct();
void add_node_to_head(Linked_List *linkedList, Linked_List_Node *node);
void add_node_to_bottom(Linked_List *linkedList, Linked_List_Node *node);
void delete_linked_list_node_by_name(Linked_List *linkedList, char name[]);
void print_linked_list_nodes(Linked_List *linkedList);

/*
**����:����name��ɼ�score
**���:�����������ڵ��ָ��
**��������:ͨ�������ͳɼ�����һ������ڵ�
*/
Linked_List_Node *linked_list_node_construct(string name, int score)
{
    Linked_List_Node *tmp = new Linked_List_Node;
    tmp->name = name;
    tmp->score = score;
    tmp->next = NULL;
    tmp->pre = NULL;
    return tmp;
}

/*
**����:��
**���:��ʼ��ͷָ���볤�ȵ�����ָ��
**��������:����һ���Ѿ���ʼ��ͷָ���볤�ȵ�����ָ��
*/
Linked_List *linked_list_consctruct()
{
    Linked_List *tmp = new Linked_List;
    tmp->head = NULL;
    tmp->end = NULL;
    tmp->length = 0;
    return tmp;
}

/*
**����:ָ�������ָ��linkedList��ָ������ڵ��ָ��node
**���:��
**��������:ͨ��ͷ�巨�ķ�ʽ��һ���ڵ���뵽����֮��
*/
void add_node_to_head(Linked_List *linkedList, Linked_List_Node *node)
{
    if (linkedList->head != NULL)
    {
        Linked_List_Node *tmp = linkedList->head;
        linkedList->head = node;
        node->next = tmp;
        tmp->pre = node;
    }
    else
    {
        linkedList->head = node;
        linkedList->end = node;
    }
    linkedList->length++;
    return;
}

/*
**����:ָ�������ָ��linkedList��ָ������ڵ��ָ��node
**���:��
**��������:ͨ��β��ķ�ʽ��һ���ڵ���뵽����֮��
*/
void add_node_to_bottom(Linked_List *linkedList, Linked_List_Node *node)
{
    if (linkedList->end == NULL)
    {
        linkedList->end = node;
        linkedList->head = node;
    }
    else
    {
        node->pre = linkedList->end;
        linkedList->end->next = node;
        linkedList->end = node;
    }
    linkedList->length++;
}

/*
**����:ָ�������ָ��linkedList������name
**���:��
**��������:ɾ�������ж������������һ�µĽڵ�
*/
void delete_linked_list_node_by_name(Linked_List *linkedList, string name)
{
    Linked_List_Node *now = linkedList->head;
    Linked_List_Node *pre = NULL;
    while (now != NULL)
    {
        if (now->name == name)
        {
            --linkedList->length;
            if (now == linkedList->head)
            {
                linkedList->head = now->next;
                now->next = NULL;
                return;
            }
            if (now == linkedList->end)
            {
                linkedList->end = pre;
                pre->next = NULL;
                return;
            }
            pre->next = now->next;
            now->next = NULL;
            return;
        }
        pre = now;
        now = now->next;
    }

    if (now == NULL)
    {
        cout << "Not Found" << endl;
        return;
    }
    return;
}

/*
**����:ָ�������ָ��linkedList
**���:��
**��������:����������ӡÿλ֧����Ķ����Լ��÷�
*/
void print_linked_list_nodes(Linked_List *linkedList)
{
    Linked_List_Node *now = linkedList->head;
    while (now != NULL)
    {

        cout << now->name << " " << now->score << endl;
        // if(now!=linkedList->head) cout<<"pre is"<<now->pre->name<<" ";
        //   if(now!=linkedList->end) cout<<"next is"<<now->next->name<<" ";
        //cout<<endl;
        now = now->next;
    }
    cout << "--------------" << endl;
}
void linked_sort(Linked_List *ls, int cnt)
{
    if (cnt == ls->length)
        return;
    Linked_List_Node *now = ls->head;
    while (now != NULL && now != ls->end)
    {
        if (now->next->score > now->score)
        {
            Linked_List_Node *tmp;
            if (now->pre != NULL)
                now->pre->next = now->next;
            else
                ls->head = now->next;
            now->next->pre = now->pre;
            if (now->next->next == NULL)
            {
                ls->end = now;
            }
            else
                now->next->next->pre = now;
            tmp = now->next->next;
            now->next->next = now;
            now->pre = now->next;
            now->next = tmp;
        }
        else
            now = now->next;
    }
    cnt++;
    linked_sort(ls, cnt);
}
Linked_List *fanzhuan(Linked_List *ls)
{
    Linked_List *tmp = linked_list_consctruct();
    Linked_List_Node *now = ls->head;
    while (now != NULL)
    {
        //    cout << now->name << " "<<now->next->name<<endl;
        add_node_to_head(tmp, linked_list_node_construct(now->name, now->score));
        now = now->next;
    }
    return tmp;
}
/*
**������ĳ���Ҫ������:
**����һ��������
**����4������ڵ㣬�ֱ���: (name:Jack score:77),(name:Alice score:82),(name:Joseph score:90),(name:ha score:91)
**����һ��������ӡ���еĽڵ���Ϣ
**ɾ������Ϊha����Ӧ�Ľڵ�
**���±���һ��������ӡ���еĽڵ���Ϣ
*/
int main()
{

    Linked_List *ls = linked_list_consctruct();
    string jack = "Jack", alice = "Alice", joe = "Joseph", haa = "ha";
    Linked_List_Node *Jack = linked_list_node_construct(jack, 77);
    Linked_List_Node *Alice = linked_list_node_construct(alice, 82);
    Linked_List_Node *Joseph = linked_list_node_construct(joe, 90);
    Linked_List_Node *ha = linked_list_node_construct(haa, 91);
    add_node_to_bottom(ls, Jack);
    add_node_to_bottom(ls, Alice);
    add_node_to_bottom(ls, Joseph);
    add_node_to_bottom(ls, ha);
    print_linked_list_nodes(ls);
    linked_sort(ls, 0);
    print_linked_list_nodes(ls);
    ls = fanzhuan(ls);
    // delete_linked_list_node_by_name(ls, haa);
    print_linked_list_nodes(ls);
    // cout << "--------------" << endl;
    // delete_linked_list_node_by_name(ls, alice);
    // print_linked_list_nodes(ls);
    // cout << "--------------" << endl;
    // delete_linked_list_node_by_name(ls, jack);
    // print_linked_list_nodes(ls);
    return 0;
}