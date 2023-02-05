#include <stdio.h>
#include <conio.h>
#include <windows.h>
//dika
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

main(){
    int x, n, angka, simpanan,y=1;
    int isi,batas,bil,temp,temp2,tengahkiri,tengahkanan,segitiga1,segitiga2,segitiga3,segitiga4,spas1,spas2;

    char pil;

    system("cls");
    do{
    if(y==0){
         y++;
         continue;
    }
        if(y==5){
            y--;
            continue;
        }
    gotoxy(0,2);
    printf("   ");
    for(int a=0;a<33;a++){printf("=");}
    printf("\n   | **          Menu           ** |\n   ");
    for(int a=0;a<33;a++){printf("=");}
    //printf("\n   |                               |\n");
    printf("\n   |         1. Level 1            |\n");
    printf("   |         2. Level 2            |\n");
    printf("   |         3. Level 3            |\n");
    printf("   |         4. Keluar             |\n");
    printf("   |                               |\n   ");
    for(int a=0;a<33;a++){printf("=");}
    gotoxy(8,4+y);printf("==>"); //gotoxy(28,5+y);printf("<<");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
    }
    }while((int)pil!=13);
    simpanan=y;
    system("cls");
    switch (simpanan){
    case 1:{
        system("cls");
        printf("Masukan angka: ");
        scanf("%d", &angka);
        for(x=0; x<=angka; x++){
            simpanan=x;
            for(y=0; y<=x; y++){
            printf("%d",simpanan);
            simpanan++;
            }printf("\n");
        }
        printf("\n");
        break;
    case 2: {
           system("cls");
        printf("Masukkan angka : ");
        scanf("%d", &simpanan);
        for(int i=1; i<=simpanan; i++){
            for(int j=1; j<=i; j++){
            printf ("%d", i*j);
        }
            printf("\n");

    }
    break;
    case 3: {
        system("cls");
        printf("Masukan Bilangan: ");
        scanf("%d",&bil);
        isi=bil-1;
        temp=isi;
        temp2=isi;
        for (batas=1;batas<=isi;batas++){

            for (spas1=isi;spas1>=batas;spas1--)
        printf("%s"," ");
                for (segitiga1=1;segitiga1<=batas;segitiga1++)
       printf("%d",segitiga1);

        for (segitiga2=batas-1;segitiga2>=1;segitiga2--)
        printf("%d",segitiga2);
        printf("\n");
}

        for(tengahkiri=1;tengahkiri<=bil;tengahkiri++)
        printf("%d",tengahkiri);
            for(tengahkanan=bil-1;tengahkanan>=1;tengahkanan--)
        printf("%d",tengahkanan);
        printf("\n");

        for (batas=1;batas<=isi;batas++){

            for (spas2=1;spas2<=batas;spas2++)
        printf("%s"," ");
        for (segitiga3=1;segitiga3<=temp;segitiga3++)
        printf("%d",segitiga3);temp=temp-1;

        for (segitiga4=temp2-1;segitiga4>=1;segitiga4--)
        printf("%d",segitiga4);temp2=temp2-1;
        printf("\n");

        }
        break;

    case 4: {
        printf("Anda Keluar"); system("pause > null"); exit(0);
    }
    default : break;

}

}

}
}
system("pause > null");
system("pause");
goto*main();
}
