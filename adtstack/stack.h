#define InfoType int
#define MaxEl 8 // jumlah elemen
#define true 0
#define false 1

typedef struct Stack
{
    int T[MaxEl + 1];
    int top;
} Stack;

void CreateEmpty(Stack *S);
int IsEmpty(Stack S);
int IsFull(Stack S);
void Push(Stack *S, InfoType X);
InfoType Pop(Stack *S);
void PrintStackInfo(Stack S);
int isInfoKetemu(Stack S, InfoType X);
int CariElemenStack(Stack S, InfoType X);
