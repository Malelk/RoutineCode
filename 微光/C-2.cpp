#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    int *array;
    int row;
    int line;
} two_dimensional_array;

two_dimensional_array construct_two_dimensional_array(int row, int line);
void insert_into_array(two_dimensional_array *array, int value, int row, int line);
int read_from_array(two_dimensional_array *array, int row, int line);
void traverse_array(two_dimensional_array *array);
void destory_array(two_dimensional_array *array);
void malloc_error();
void out_of_index_error();

void construct_two_dimensional_array(two_dimensional_array *array, int row, int line)
{
    array->line = row;
    array->row = line;
    array->array = (int *)malloc(row * line * sizeof(int));
    if (array->array == NULL)
        malloc_error();
    memset(array->array, 0, row * line * sizeof(int)); //将malloc数组初始化为0
}

void insert_into_array(two_dimensional_array *array, int value, int row, int line)
{
    if (row > array->row || line > array->line || row < 0 || line < 0)
    {
        out_of_index_error();
        return;
    }
    array->array[row * array->row + line] = value;
    return;
}

int read_from_array(two_dimensional_array *array, int row, int line)
{
    if (row > array->row || line > array->line || row < 0 || line < 0)
    {
        out_of_index_error();
        return 114514;
    }
    else
        return array->array[row * array->row + line];
}

void traverse_array(two_dimensional_array *array)
{
    for (int i = 0; i < array->line * array->row; i++)
    {
        cout << array->array[i] << " ";
        if (!((i + 1) % array->row))
            cout << endl;
    }
}

void destory_array(two_dimensional_array *array)
{
    free(array->array);
    array->array = NULL;
}

void malloc_error()
{
    cout << "malloc_error" << endl;
    return;
}

void out_of_index_error()
{
    cout << "index_error" << endl;
}

int main()
{
    two_dimensional_array array;
    construct_two_dimensional_array(&array, 3, 4);
    printf("%d\n", array.row);
    printf("%d\n", array.line);
    insert_into_array(&array, 1, 0, 1);
    insert_into_array(&array, 2, 1, 2);
    insert_into_array(&array, 3, 2, 3);
    printf("%d\n", read_from_array(&array, 1, 2));
    printf("%d\n", read_from_array(&array, 2, 3));
    traverse_array(&array);
    destory_array(&array);
    return 0;
}
