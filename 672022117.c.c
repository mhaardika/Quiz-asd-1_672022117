#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#define PI 3.14

int cont;

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void perkalian(){
        int i,j,hasilkali;
        ngulang:
        printf("\n1. Perkalian :\n");
        printf("Inputkan bilangan pertama : ");
        scanf("%d", &i);
        printf("Inputkan bilangan kedua   : ");
        scanf("%d", &j);
        hasilkali = i * j;
        printf("Hasil:\t\t\t   %d\n", hasilkali);

         printf("Mencoba lagi? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuporolan();
                }

}
void pembagian(){
        float k,l,hasilbagi;
        ngulang:
        printf("\n1. Pembagian :\n");
        printf("Inputkan bilangan pertama : ");
        scanf("%f", &k);
        printf("Inputkan bilangan kedua   : ");
        scanf("%f", &l);
        hasilbagi = k / l;
        printf("Hasil:\t\t\t   %.2f\n", hasilbagi);

        printf("Mencoba lagi? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuporolan();
                }
}
void penjumlahan(){
    int i, j, hasilpnjmlhn;
        ngulang:
        printf("\n1. Penjumlahan :\n");
        printf("Inputkan bilangan pertama : ");
        scanf("%d", &i);
        printf("Inputkan bilangan kedua   : ");
        scanf("%d", &j);
        hasilpnjmlhn = i + j;
        printf("Hasil:\t\t\t   %d\n", hasilpnjmlhn);

         printf("Mencoba lagi? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuporolan();
                }
}
void pengurangan(){
    int i,j,hasilpngrngn;
        ngulang:
        printf("\n1. Pengurangan :\n");
        printf("Inputkan bilangan pertama : ");
        scanf("%d", &i);
        printf("Inputkan bilangan kedua   : ");
        scanf("%d", &j);
        hasilpngrngn = i - j;
        printf("Hasil:\t\t\t   %d\n", hasilpngrngn);

         printf("Mencoba lagi? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuporolan();
                }
}
void Sinus(){
   double angka, hasil;
    ngulang:
    printf("Inputkan derajat sinus : ");
    scanf("%lf", &angka);
   angka = (angka * PI) / 180;
   hasil = sin(angka);

   printf("Hasil sinus adalah = %.2lf\n", hasil);

                printf("Mencoba lagi? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menusincostan();
                }
}
void cosinus(){
   double angka, hasil;
    ngulang:
    printf("Inputkan derajat cosinus : ");
    scanf("%lf", &angka);
   // Converting to radian
   angka = (angka * PI) / 180;
   hasil = cos(angka);

   printf("Hasil cosinus adalah = %.2lf\n", hasil);

                printf("Mencoba lagi? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menusincostan();
                }
}
void Tangen(){
    double angka, hasil;
    ngulang:
    printf("Inputkan derajat sinus : ");
    scanf("%lf", &angka);
   // Converting to radian
   angka = (angka * PI) / 180;
   hasil = tan(angka);

   printf("Hasil sinus adalah = %.2lf\n", hasil);
                printf("Mencoba lagi? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menusincostan();
                }
}

void kel_Persegi(){
    float k, l, hasil;
        ngulang:
        printf("\n1. Keliling Persegi :\n");
        printf("Inputkan Panjang Persegi : ");
        scanf("%f", &k);
        printf("Inputkan Lebar Persegi   : ");
        scanf("%f", &l);
        hasil = 2*(k+l);
        printf("Keliling Persegi Adalah = %.2f\n", hasil);

        printf("Mencoba lagi? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menukeliling();
                }
}
void kel_Trapesium(){
    float p,o,q,hasil,tinggi=0.5,simpanan;
        ngulang:
        printf("\n1. Keliling Trapesium :\n");
        printf("Inputkan Sisi Atas Trapesium Sama Kaki : ");
        scanf("%f", &p);
        printf("Inputkan Sisi Bawah Trapesium Sama Kaki   : ");
        scanf("%f", &p);
        printf("Inputkan Sisi Miring Trapesium Sama Kaki   : ");
        scanf("%f", &q);
        hasil=tinggi*(p+o);
        simpanan=hasil;
        //tinggi=1/2*(p+o);
        //printf("\n%.2f", tinggi);
        printf("Keliling Trapesium Sama Kaki adalah = %.2f\n", simpanan+p+o+q);

        printf("Mencoba lagi? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menukeliling();
                }
}
void kel_LayangLayang(){
    float p,q,hasil;
        ngulang:
        printf("\n1. Keliling Layang-Layang :\n");
        printf("Inputkan Panjang Sisi Atas : ");
        scanf("%f", &p);
        printf("Inputkan Panjang Sisi Bawah   : ");
        scanf("%f", &q);
        hasil =2*(p+q);
        printf("Keliling Layang-Layang adalah = %.2f\n", hasil);

        printf("Mencoba lagi? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menukeliling();
                }
}
void kel_Lingkaran(){
    float q,p,simpanan1,simpanan2;
    float phi =3.14;
        ngulang:
        printf("\n1. Lingkaran :\n");
        printf("Inputkan Panjang Diameter : : ");
        scanf("%f", &q);
        printf("Inputkan Panjang Jari-jari   : ");
        scanf("%f", &p);
        simpanan2=phi*q;
        simpanan2=2*(phi*p);
        printf("Keliling Lingkaran berdasar Diameter = %.2f\n", simpanan1);
        printf("Keliling Lingkaran berdasar Jari-Jari = %.2f\n", simpanan2);

        printf("Mencoba lagi? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menukeliling();
                }
}
void Luas_Persegi(){
    float a, b, hasil;
        ngulang:
        printf("\n1. Luas :\n");
        printf("Inputkan Panjang Persegi : ");
        scanf("%f", &a);
        printf("Inputkan Lebar Persegi   : ");
        scanf("%f", &b);
        hasil =a*b;
        printf("Luas Persegi Adalah = %.2f\n", hasil);

        printf("Mencoba lagi? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuluasbangundtr();
                }
}
void Luas_Trapesium(){
    float p,q,o,hasil,tinggi=0.5,simpanan;
        ngulang:
        printf("\n1. Luas Trapesium :\n");
        printf("Inputkan Sisi Atas Trapesium Sama Kaki : ");
        scanf("%f", &p);
        printf("Inputkan Sisi Bawah Trapesium Sama Kaki   : ");
        scanf("%f", &q);
        printf("Inputkan Sisi Miring Trapesium Sama Kaki   : ");
        scanf("%f", &o);
        hasil=tinggi*(p+q);
        simpanan=hasil;
        printf("Luas Trapesium Sama Kaki adalah = %.2f\n", 0.5*(p+q)*simpanan);

        printf("Mencoba lagi? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuluasbangundtr();
                }
}
void Luas_LayangLayang(){
    float c,d,hasil;
        ngulang:
        printf("\n1. Luas Layang-Layang :\n");
        printf("Inputkan Panjang Sisi Atas : ");
        scanf("%f", &c);
        printf("Inputkan Panjang Sisi Bawah   : ");
        scanf("%f", &d);
        hasil =0.5*(c*d);
        printf("Luas Layang-Layang adalah = %.2f\n", hasil);

        printf("Mencoba lagi? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuluasbangundtr();
                }
}
void Luas_Lingkaran(){
    float a,c,simpanan1,simpanan2;
    float phi=3.14;
        ngulang:
        printf("\n1. Luas Lingkaran :\n");
        printf("Inputkan Panjang Diameter : : ");
        scanf("%f", &a);
        printf("Inputkan Panjang Jari-jari   : ");
        scanf("%f", &c);
        simpanan1=0.25*phi*(a*a);
        simpanan2=phi*(c*c);
        printf("Keliling Lingkaran berdasar Diameter = %.2f\n", simpanan1);
        printf("Keliling Lingkaran berdasar Jari-Jari = %.2f\n", simpanan2);

        printf("Mencoba lagi? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuluasbangundtr();
                }
}
void Volum_Kubus(){
    float a;
        ngulang:
        printf("\n1. Volume Kubus :\n");
        printf("Inputkan Panjang Sisi Kubus : ");
        scanf("%f", &a);
        printf("Volume Kubus adalah = %.2f\n", a*a*a);

        printf("Mencoba lagi? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuvolum();
                }
}
void Volum_Prisma(){
    float a,b,c,d,e,f,hasil,tinggi=0.5,simpanan,phi=3.14;
        ngulang:
        printf("\n1. Volum Prisma :\n");
        printf("Inputkan Sisi Persegi : ");
        scanf("%f", &a);
        //kelompok segitiga
        printf("Inputkan Lebar Alas Segitiga : ");
        scanf("%f", &b);
        printf("Inputkan Tinggi Segitiga : ");
        scanf("%f", &c);
        //kelompok lingkaran
        printf("Inputkan Jari-Jari Lingkaran :");
        scanf("%f", &d);
        printf("Inputkan Diameter Lingkaran :");
        scanf("%f", &e);
        printf("Inputkan Tinggi Prisma :");
        scanf("%f", &f);
        printf("Volume Prisma Persegi adalah = %.2f\n", a*a*a);
        printf("Volume Prisma Segitiga adalah = %.2f\n", ((b*c)/2)*f);
        printf("Volume Silinder berdasar Jari-Jari adalah = %.2f\n", phi*(d*d*f));
        printf("Volume Silinder berdasar Diameter adalah = %.2f\n", 0.25*phi*(e*e)*f);

        printf("Mencoba lagi? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuvolum();
                }
}
void Volum_Limas(){
    float a,b,c,d,e,f,hasil,tinggi=0.5,simpanan,phi=3.14,luas_alas,rdiameter;
        ngulang:
        printf("\n1. Volum Prisma :\n");
        printf("Inputkan Sisi Persegi : ");
        scanf("%f", &a);
        //kelompok segitiga
        printf("Inputkan Lebar Alas Segitiga : ");
        scanf("%f", &b);
        printf("Inputkan Tinggi Segitiga : ");
        scanf("%f", &c);
        //kelompok lingkaran
        printf("Inputkan Jari-Jari Lingkaran :");
        scanf("%f", &d);
        printf("Inputkan Diameter Lingkaran :");
        scanf("%f", &e);
        printf("Inputkan Tinggi Limas :");
        scanf("%f", &f);
        luas_alas=0.5*b*f;
        rdiameter=e/2;
        printf("Volume Limas Persegi adalah = %.2f\n", 0.33*a*a*f);
        printf("Volume Limas Segitiga adalah = %.2f\n", 0.33*luas_alas*f);
        printf("Volume Limas Silinder berdasar Jari-Jari adalah = %.2f\n", phi*d*d*f);
        printf("Volume Limas Silinder berdasar Diameter adalah = %.2f\n", phi*rdiameter*rdiameter*f);

        printf("Mencoba lagi? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuvolum();
                }
}
void Volum_Lingkaran(){
    float c,d,rdiameter,simpanan2;
    float phi=3.14;
        ngulang:
        printf("\n1. Volume Bola :\n");
        printf("Masukkan Jari-Jari Lingkaran : ");
        scanf("%f", &c);
        printf("Masukkan Diameter Lingkaran : ");
        scanf("%f", &d);
        rdiameter=d/2;
        printf("Keliling Lingkaran berdasar Jari-Jari = %.2f\n", 1.33*phi*c*c*c);
        printf("Keliling Lingkaran berdasar Diameter = %.2f\n", 1.33*phi*rdiameter*rdiameter*rdiameter);

        printf("Mencoba lagi? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuvolum();
                }

}
void akar(){
    float angka;
    double simpanan;
        ngulang:
        printf ("Masukkan bilangan yang akan diakar = ");
        scanf (" %f", &angka);
        // sqrt(squareroot)
        simpanan = sqrt(angka);
        printf (" \nHasil akar dari %.2f adalah %.2f\n", angka, simpanan);

        printf("Mencoba lagi? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto*main();
                }



}
void menuporolan(){
                //Menu penjumlahan

        int input,isiMenu,y=1;
        int up=24,down=25;
        int menutambah;
        char cxy;

            system("mode con: cols=120 lines=30");
            system("color F8");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==6){
            y--;
            continue;
        }
        gotoxy(0,2);
        printf("   ");
        for(int a=0;a<41;a++){printf("+");}
        printf("\n   | >>         Tugas Kalkulator        << |\n   ");
        for(int a=0;a<41;a++){printf("+");}
        printf("\n   |                                       |\n");
        printf("   |         1. Perkalian                  |\n");
        printf("   |         2. Pembagian                  |\n");
        printf("   |         3. Penjumlahan                |\n");
        printf("   |         4. Pengurangan                |\n");
        printf("   |         5. Kembali ke Menu utama      |\n");
        printf("   |                                       |\n   ");
        for(int a=0;a<41;a++){printf("+");}
        gotoxy(8,5+y);printf(">>"); //printf("masuk poro");
            cxy=getch();
            switch(cxy){
            case 72: y--; break;
            case 80: y++; break;
            default: break;

        }
        }while((int)cxy!=13);
        isiMenu=y;
        system("cls");
        switch (isiMenu){
            case 1: perkalian(); break;
            case 2 : pembagian(); break;
            case 3 :penjumlahan(); break;
            case 4 : pengurangan(); break;
            case 5 : system("cls"); goto*main();

        }
}

void menusincostan(){

        //Menu SinCostan

        int input,isiMenu,y=1;
        int up=24,down=25;
        int menutambah;
        char cxy;

            system("mode con: cols=120 lines=30");
            system("color F8");
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
        for(int a=0;a<41;a++){printf("+");}
        printf("\n   | >>            Sincostan            << |\n   ");
        for(int a=0;a<41;a++){printf("+");}
        printf("\n   |                                       |\n");
        printf("   |         1. Sinus                      |\n");
        printf("   |         2. Cosinus                    |\n");
        printf("   |         3. Tangen                     |\n");
        printf("   |         4. Kembali ke Menu utama      |\n");
        printf("   |                                       |\n   ");
        for(int a=0;a<41;a++){printf("+");}
        gotoxy(8,5+y);printf(">>"); //printf("masuk poro");
            cxy=getch();
            switch(cxy){
            case 72: y--; break;
            case 80: y++; break;
            default: break;

            }
        }while((int)cxy!=13);
        isiMenu=y;
        system("cls");
        switch (isiMenu){
            case 1: Sinus(); break;
            case 2: cosinus(); break;
            case 3: Tangen(); break;
            case 4: system("cls"); goto*main();

        }

}

void menukeliling(){


        //Menu Keliling Luas Volume

        int input,isiMenu,y=1;
        int up=24,down=25;
        int menutambah;
        char cxy;

            system("mode con: cols=120 lines=30");
            system("color F8");
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
        for(int a=0;a<51;a++){printf("+");}
        printf("\n   | >>            Keliling Luas Volume           << |\n   ");
        for(int a=0;a<51;a++){printf("+");}
        printf("\n   |                                                 |\n");
        printf("   |         1. Hitung Keliling Bangun Datar         |\n");
        printf("   |         2. Hitung Luas Bangun Datar             |\n");
        printf("   |         3. Hitung Volume Bangun Ruang           |\n");
        printf("   |         4. Kembali ke Menu utama                |\n");
        printf("   |                                                 |\n   ");
        for(int a=0;a<51;a++){printf("+");}
        gotoxy(8,5+y);printf(">>"); //printf("masuk poro");
            cxy=getch();
            switch(cxy){
            case 72: y--; break;
            case 80: y++; break;
            default: break;

        }
        }while((int)cxy!=13);
        isiMenu=y;
        system("cls");
        switch (isiMenu){
            case 1: menukelilingbangundtr(); break;
            case 2: menuluasbangundtr(); break;
            case 3: menuvolum(); break;
            case 4: system("cls"); goto*main();

        }
}

void menukelilingbangundtr(){

    //Menu Keliling Bangun Datar

        int input,isiMenu,y=1;
        int up=24,down=25;
        int menutambah;
        char cxy;

            system("mode con: cols=120 lines=30");
            system("color F8");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==6){
            y--;
            continue;
        }
        gotoxy(0,2);
        printf("   ");
        for(int a=0;a<50;a++){printf("+");}
        printf("\n   | >>            Keliling Bangun Datar         << |\n   ");
        for(int a=0;a<50;a++){printf("+");}
        printf("\n   |                                                |\n");
        printf("   |         1. Keliling Persegi                    |\n");
        printf("   |         2. Keliling Trapesium                  |\n");
        printf("   |         3. Keliling Layang-Layang              |\n");
        printf("   |         4. Keliling Lingkaran                  |\n");
        printf("   |         5. Kembali ke Menu Sebelumnya          |\n");
        printf("   |                                                |\n   ");
        for(int a=0;a<50;a++){printf("+");}
        gotoxy(8,5+y);printf(">>"); //printf("masuk poro");
            cxy=getch();
            switch(cxy){
            case 72: y--; break;
            case 80: y++; break;
            default: break;

            }
        }while((int)cxy!=13);
        isiMenu=y;
        system("cls");
        switch (isiMenu){
             case 1: kel_Persegi(); break;
             case 2 : kel_Trapesium(); break;
             case 3 : kel_LayangLayang(); break;
             case 4 : kel_Lingkaran(); break;
             case 5 : system("cls"); menukeliling();
        }
}

void menuluasbangundtr(){

    //Menu Luas Bangun Datar

        int input,isiMenu,y=1;
        int up=24,down=25;
        int menutambah;
        char cxy;

            system("mode con: cols=120 lines=30");
            system("color F8");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==6){
            y--;
            continue;
        }
        gotoxy(0,2);
        printf("   ");
        for(int a=0;a<50;a++){printf("+");}
        printf("\n   | >>             Luas Bangun Datar            << |\n   ");
        for(int a=0;a<50;a++){printf("+");}
        printf("\n   |                                                |\n");
        printf("   |         1. Luas Persegi                        |\n");
        printf("   |         2. Luas Trapesium                      |\n");
        printf("   |         3. Luas Layang-Layang                  |\n");
        printf("   |         4. Luas Lingkaran                      |\n");
        printf("   |         5. Kembali ke Menu Sebelumnya          |\n");
        printf("   |                                                |\n   ");
        for(int a=0;a<50;a++){printf("+");}
        gotoxy(8,5+y);printf(">>"); //printf("masuk poro");
            cxy=getch();
            switch(cxy){
            case 72: y--; break;
            case 80: y++; break;
            default: break;

            }
        }while((int)cxy!=13);
        isiMenu=y;
        system("cls");
        switch (isiMenu){
             case 1: Luas_Persegi(); break;
             case 2 : Luas_Trapesium(); break;
             case 3 : Luas_LayangLayang(); break;
             case 4 : Luas_Lingkaran(); break;
             case 5 : system("cls"); menukeliling();
        }

}

void menuvolum(){

    //Menu Volum Bangun Ruang

        int input,isiMenu,y=1;
        int up=24,down=25;
        int menutambah;
        char cxy;

            system("mode con: cols=120 lines=30");
            system("color F8");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==6){
            y--;
            continue;
        }
        gotoxy(0,2);
        printf("   ");
        for(int a=0;a<50;a++){printf("+");}
        printf("\n   | >>             Volume Bangun Ruang          << |\n   ");
        for(int a=0;a<50;a++){printf("+");}
        printf("\n   |                                                |\n");
        printf("   |         1. Volume Kubus                        |\n");
        printf("   |         2. Volume Prisma                       |\n");
        printf("   |         3. Volume Limas                        |\n");
        printf("   |         4. Volume Bola                         |\n");
        printf("   |         5. Kembali ke Menu Sebelumnya          |\n");
        printf("   |                                                |\n   ");
        for(int a=0;a<50;a++){printf("+");}
        gotoxy(8,5+y);printf(">>"); //printf("masuk poro");
            cxy=getch();
            switch(cxy){
            case 72: y--; break;
            case 80: y++; break;
            default: break;

            }
        }while((int)cxy!=13);
        isiMenu=y;
        system("cls");
        switch (isiMenu){
             case 1: Volum_Kubus(); break;
             case 2 : Volum_Prisma(); break;
             case 3 : Volum_Limas(); break;
             case 4 : Volum_Lingkaran(); break;
             case 5 : system("cls"); menukeliling;
        }

}

main(){
    int input,isiMenu,y=1;
    int up=24,down=25;
    int menutambah;
    char cxy;

    system("mode con: cols=120 lines=30");
    system("color F8");
    system("cls");
    do{
    if(y==0){
         y++;
         continue;
    }
        if(y==6){
            y--;
            continue;
        }
    gotoxy(0,2);
    printf("   ");
    for(int a=0;a<41;a++){printf("+");}
    printf("\n   | >>         Tugas Kalkulator        << |\n   ");
    for(int a=0;a<41;a++){printf("+");}
    printf("\n   |                                       |\n");
    printf("   |         1. PingPoroLanSudo            |\n");
    printf("   |         2. SinCosTan                  |\n");
    printf("   |         3. Hitung Keliling dan Luas   |\n");
    printf("   |         4. Hitung Akar Kuadrat        |\n");
    printf("   |         5. Exit                       |\n");
    printf("   |                                       |\n   ");
    for(int a=0;a<41;a++){printf("+");}
    gotoxy(8,5+y);printf(">>");
            cxy=getch();
            switch(cxy){
            case 72: y--; break;
            case 80: y++; break;
            default: break;
        }
    }while((int)cxy!=13);
    isiMenu=y;
    system("cls");

    switch (isiMenu){
    case 1: menuporolan(); break;
    case 2: menusincostan(); break;
    case 3: menukeliling(); break;
    case 4: akar(); break;
    default : printf("\t\t\t\t\t\tAnda Telah Logout\n"); exit(0);
    }

}
