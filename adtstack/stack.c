#include "stack.h"

void CreateEmpty(Stack *S)
{
    (*S).top = 0;
}
int IsEmpty(Stack S)
{
    if (S.top == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int IsFull(Stack S)
{
    if (S.top == MaxEl)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Push(Stack *S, InfoType X)
{
    int idx;
    idx = ++(*S).top;
    (*S).T[idx] = X;
    (*S).top = idx;
}
InfoType Pop(Stack *S)
{
    int idx;
    idx = (*S).top;
    (*S).top--;
    return (*S).T[idx];
}
void PrintStackInfo(Stack S)
{
    int i;
    if (IsEmpty(S) != 0)
    {
        printf("[");
        for (i = 1; i <= S.top; i++)
        {
            printf("%d ", S.T[i]);
        }
        printf("]");
    }
    else
    {
        printf("Stack Kosong");
    }
}
int isInfoKetemu(Stack S, InfoType X)
{
    int i, find;
    find = false;
    for (i = 1; i <= S.top; i++)
    {
        if (X == S.T[i])
        {
            find = true;
        }
    }
    return find;
}
int CariElemenStack(Stack S, InfoType X)
{
    int i, idx;
    idx = -999;
    for (i = 1; i <= S.top; i++)
    {
        if (X == S.T[i])
        {
            idx = i;
        }
    }
    return idx;
}
