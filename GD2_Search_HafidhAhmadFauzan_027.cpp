#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int pencarian (char st[], char m){
    int i, posisi, panjang;

    i=0;
    posisi=-1;
    panjang=strlen(st);
    while((i<panjang-1)&&posisi==-1)
    {
        if(st[i]==m)
            posisi=i;
            i++;
    }
    return posisi;
}
int main(){
    printf("Pencarian dengan metode Binary Search\n\n");
	printf("===========================================================\n\n");
	
    char kalimat[]="Hafidh Ahmad Fauzan"; // Masukkan kalimat -> disini saya memasukkan nama
    char dicari='u'; // mencari huruf U pada nama saya
    printf("\nPosisi %c dalam string %s berada pada indeks ke- (%d)\n",dicari,kalimat,pencarian(kalimat,dicari));
    system ("PAUSE");
    return 0;
}
