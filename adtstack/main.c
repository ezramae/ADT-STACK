/* NIM	: 3411201084
   NAMA	: EZRA MAE CRISNAWENI
   INFORMATIKA-C */
#include <stdio.h>
#include "stack.c"

int main()
{
	printf("***********ADT STACK***********\n");
	printf("NIM	: 3411201084\n");
	printf("Nama	: EZRA MAE CRISNAWENI\n");
	printf("--------------------------------\n");
    Stack S;
    CreateEmpty(&S); //membuat stack kosong
    printf("Isi elemen :"); 
    Push(&S, 5); //push elemen
    Push(&S, 2);
    Push(&S, 4);
    Push(&S, 2);
    Push(&S, 5);
    Push(&S, 9);
    Push(&S, 1);
    PrintStackInfo(S);  //mencetak elemen yang sudah dipush
    printf("\n");
    printf("Sesudah di pop :"); //
    Pop(&S); //pop elemen
    Pop(&S);
    Pop(&S);
    PrintStackInfo(S); //mencetak sisa elemen yang terdapat diindex setelah dipop
    printf("\n");
    printf("Apakah elemen dengan nilai 5 ada? : ");
    if (isInfoKetemu(S, 5) == 0) //mengecek apakah elemen yang dicari ada atau tidak
    {
        printf("Ada\n"); //jika elemen yang dicari ada, maka akan menghasilkan output 'ada'
    }
    else
    {
        printf("Tidak ada\n"); //jika elemen yang dicari tidak ada, maka akan menghasilkan output 'tidak ada'
    }
    printf("Element dengan nilai 5 berjumlah : ");
    printf("%d", CariElemenStack(S, 5)); //mencari elemen
}
