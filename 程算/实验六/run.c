/*
 *                   江城子 . 程序员之歌
 * 
 *               十年生死两茫茫，写程序，到天亮。
 *                   千行代码，Bug何处藏。
 *               纵使上线又怎样，朝令改，夕断肠。
 * 
 *               领导每天新想法，天天改，日日忙。
 *                   相顾无言，惟有泪千行。
 *               每晚灯火阑珊处，夜难寐，加班狂。
 * 
 */


#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "lab52.h"

#define DE printf("DEBUG\n")
#define FN printf("--------------\n")
int CurrentCnt;

int main()
{
    int operate;
    GoodsList *goodslist;
    GoodsInfo tempGood;
    init_list(&goodslist);
    //output_all_items(goodslist);
    char goods_id[MAX_ID_LEN + 5];
    bool flag = true;
    //DE;
    output_all_items(goodslist);
    FN;
    bubble_sort(goodslist);
    output_all_items(goodslist);
    return 0;
    while (flag)
    {

        printf("1.ï¿½ï¿½Ê¾ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Æ·ï¿½ï¿½ï¿½ï¿½Ï¢\n");
        printf("2.ï¿½Þ¸ï¿½Ä³ï¿½ï¿½ï¿½ï¿½Æ·ï¿½ï¿½ï¿½ï¿½Ï¢\n");
        printf("3.ï¿½ï¿½ï¿½ï¿½Ä³ï¿½ï¿½ï¿½ï¿½Æ·ï¿½ï¿½ï¿½ï¿½Ï¢\n");
        printf("4.É¾ï¿½ï¿½Ä³ï¿½ï¿½ï¿½ï¿½Æ·ï¿½ï¿½ï¿½ï¿½Ï¢\n");
        printf(" 5.ï¿½ï¿½ï¿½ï¿½Ä³ï¿½ï¿½ï¿½ï¿½Æ·ï¿½ï¿½ï¿½ï¿½Ï¢\n");
        printf(" 6.ï¿½ï¿½Æ·ï¿½ï¿½ï¿½Ì²ï¿½ï¿½Ë³ï¿½ÏµÍ³\n");
        printf("7.ï¿½ï¿½ï¿½ï¿½Æ·ï¿½Û¸ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½\n");
        printf(" 8.(ï¿½ï¿½ï¿½ï¿½)É¾ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½\n");
        printf("ï¿½ï¿½ï¿½Ì²ï¿½ï¿½Ë³ï¿½ÏµÍ³\n");

        /**
         *
         *  1.ï¿½ï¿½Ê¾ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Æ·ï¿½ï¿½ï¿½ï¿½Ï¢
            2.ï¿½Þ¸ï¿½Ä³ï¿½ï¿½ï¿½ï¿½Æ·ï¿½ï¿½ï¿½ï¿½Ï¢
            3.ï¿½ï¿½ï¿½ï¿½Ä³ï¿½ï¿½ï¿½ï¿½Æ·ï¿½ï¿½ï¿½ï¿½Ï¢
            4.É¾ï¿½ï¿½Ä³ï¿½ï¿½ï¿½ï¿½Æ·ï¿½ï¿½ï¿½ï¿½Ï¢
            5.ï¿½ï¿½ï¿½ï¿½Ä³ï¿½ï¿½ï¿½ï¿½Æ·ï¿½ï¿½ï¿½ï¿½Ï¢
            6.ï¿½ï¿½Æ·ï¿½ï¿½ï¿½Ì²ï¿½ï¿½Ë³ï¿½ÏµÍ³
            7.ï¿½ï¿½ï¿½ï¿½Æ·ï¿½Û¸ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
            8.(ï¿½ï¿½ï¿½ï¿½)É¾ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
         */
        scanf("%d", &operate);
        switch (operate)
        {
            // case 1:
            //     output_all_items(goodslist);
            //     break;
            // case 2:
            //     read_line(goods_id, MAX_ID_LEN);
            //     change_item(goodslist, goods_id, read_goods_info());
            //     break;
            // case 3:
            //     tempGood = read_goods_info();
            //     int choice;
            //     scanf("%d", &choice);
            //     insert_item(goodslist, tempGood, choice);
            //     break;
            // case 4:
            //     read_line(goods_id, MAX_ID_LEN);
            //     delete_item(goodslist, goods_id);
            //     break;
            // case 5:
            //     read_line(goods_id, MAX_ID_LEN);
            //     search_item(goodslist, goods_id);
            //     break;
            // case 6:
            //     save_to_file(goodslist);
            //     return 0;
            //     break;
            // case 7:
            //     bubble_sort(goodslist);
            //     break;
            // case 8:
            //     destory_list_and_file(&goodslist);
            //     flag = false;
            //     break;
            // default:
            //     flag = false;
        }
    }
    //destory_list(&goodslist);
    return 0;
}

void init_list(GoodsList **pL)
{
    //DE;
    FILE *f = fopen(GOODS_FILE_NAME, "r");
    if (f == NULL)
    {
        perror("error");
        return;
    }
    GoodsList *tmp = malloc(sizeof(GoodsList));
    if (tmp == NULL)
    {
        perror("error");
        return;
    }
    GoodsList *head = malloc(sizeof(GoodsList));
    if (head == NULL)
    {
        perror("error");
        return;
    }
    head->next = NULL;
    *pL = head;
    //printf("%p\n",*pL);
    int filePD = 0;
    while (filePD != EOF)
    {
       // printf("%p %p\n",(*pL)->next,head);
        // DE;
        tmp = (GoodsList *)malloc(sizeof(GoodsList));
        if (tmp == NULL)
            return;
        GoodsInfo tmpGoodsinfo;
        filePD = fscanf(f, "%s %s %d %s %d %d\n", tmpGoodsinfo.goods_id, tmpGoodsinfo.goods_name, &tmpGoodsinfo.goods_price, tmpGoodsinfo.goods_discount, &tmpGoodsinfo.goods_amount, &tmpGoodsinfo.goods_remain);
        //printf("%s\n%d\n", tmpGoodsinfo.goods_id, filePD);
        if (filePD == EOF)
            break;
        tmp->data = tmpGoodsinfo;
        tmp->next = NULL;
        head->next = tmp;
        head = tmp;
        CurrentCnt++;
        //output_one_item(head);
    }
   // output_all_items(*pL);
    fclose(f);

    return;
}
void output_one_item(GoodsList *p)
{
    GoodsInfo tmpGoodsinfo = p->data;
    printf("%s %s %d %s %d %d\n", 
        tmpGoodsinfo.goods_id, tmpGoodsinfo.goods_name, tmpGoodsinfo.goods_price, tmpGoodsinfo.goods_discount, tmpGoodsinfo.goods_amount, tmpGoodsinfo.goods_remain);
    return;
}
void output_all_items(GoodsList *L)
{
    while(L->next!=NULL)
    {
        output_one_item(L->next);
        L = L->next;
    }
}
bool insert_item(GoodsList *L, GoodsInfo goodsInfo, int choice){
    CurrentCnt++;
    if(choice == 0) //Î²ï¿½ï¿½
    {
        GoodsList *head =L;
        while(head->next!=NULL) 
        {
            head = head ->next;
        }
        GoodsList *tmp = malloc(sizeof(GoodsList));
        if(tmp==NULL) return false;
        else 
        {
            tmp ->data = goodsInfo;
            tmp ->next = NULL;
            head ->next = tmp;
            return true;
        }
    }
    else 
    {
        GoodsList *head =L;
        int cnt = 0;
        do
        {
            if(cnt == choice - 1)
            {
                GoodsList *tmp = malloc(sizeof(GoodsList));
                if(tmp==NULL) return false;
                tmp ->next  = head ->next;
                tmp ->data = goodsInfo;
                head ->next = tmp;
                return true;
            }
            cnt++;
            head = head ->next;
        }while(head !=NULL);
        return false;
    }
    
}
bool delete_item(GoodsList *L, char* goods_id) {
    bool ans = false;
    GoodsList *head = L;
    while(head->next!=NULL) 
    {
        GoodsList *tmp = head ->next;
      
        bool flag = true;
        int l1 = strlen(tmp->data.goods_id), l2 = strlen(goods_id);
        if(l1!=l2) flag = false;
        else    
            for(int i = 0; i < l1; i++) 
            {
                if(tmp->data.goods_id[i]!=goods_id[i])
                    flag = false; 
            }
     //   DE;
        if(flag == true)
        {
    
            head ->next = tmp->next;
            free(tmp);
            ans = true;
            break;
        }
        head = head ->next;
    }
   // printf("ans = %d\n",ans);
   CurrentCnt-=ans;
    return ans;

}
GoodsList* search_item(GoodsList *L, char* goods_id)
{
    GoodsList *head = L, *ans = NULL;
    while ((head ->next !=NULL))
    {
        if(strcmp(head ->next->data.goods_id,goods_id)==0)
        {
            ans = head->next;
            break;
        }
        else    
            head = head ->next;
    }
    return ans;
}
bool change_item(GoodsList *L, char* goods_id, GoodsInfo new_info)
{
    GoodsList *target = search_item(L,goods_id);
    if(target == NULL) return false;
    target ->data = new_info;
    return true;
}
void destory_list(GoodsList **L)
{
    GoodsList *head = *L;
    while(head!=NULL)
    {
        GoodsList *tmp = head ->next;
        free(head);
        head = tmp;
    }
    *L = NULL;
    CurrentCnt = 0;
    return;
}
void destory_list_and_file(GoodsList **L)
{
    destory_list(L);
    remove(GOODS_FILE_NAME);
    return;
}
int save_to_file(GoodsList *L)
{
    FILE *f = fopen(GOODS_FILE_NAME,"w+");
    GoodsList *head = L;
    int cnt = 0;
    while(head->next!=NULL)
    {
        GoodsInfo tmpGoodsinfo = head->next->data;
        fprintf(f,"%s\t%s\t%d\t%s\t%d\t%d\n", 
        tmpGoodsinfo.goods_id, tmpGoodsinfo.goods_name, tmpGoodsinfo.goods_price, tmpGoodsinfo.goods_discount, tmpGoodsinfo.goods_amount, 
        tmpGoodsinfo.goods_remain);
        head = head ->next;
        cnt++;
    }// DE;
    fclose(f);
    return cnt;
}
void bubble_sort(GoodsList *L)

{

    GoodsList *left = L ->next;
    GoodsList *right = NULL;
    int cnt = CurrentCnt;
    while(cnt) 
    {
        right = left ;
        while(right->next !=NULL)
        {
            //printf("%s\t%s\n",left->data.goods_id,right->data.goods_id);
            GoodsList *neRight = right->next;
            if(right->data.goods_price >= neRight ->data.goods_price)
            {
                GoodsInfo tmp = right ->data;
                right ->data = neRight ->data;
                neRight ->data = tmp;
            }
            right = right ->next;
        }
        cnt--;

    }
    return ;
}
GoodsInfo read_goods_info()
{
    GoodsInfo tmp;
    read_line(tmp.goods_id,MAX_ID_LEN);
    read_line(tmp.goods_name,MAX_NAME_LEN);
    scanf("%d",&tmp.goods_price);
    read_line(tmp.goods_discount,MAX_DISCOUNT_LEN);
    scanf("%d%d",&tmp.goods_amount,&tmp.goods_remain);
    return tmp;
}
