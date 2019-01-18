#include <stdio.h>
#include "graphics.h"
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <windows.h>
#define pi 3.141592


int coox(float angle){  // dönen çubuklarýn uç noktasýnýn x koordinatýný bulur
	return floor(300 + 200 * cos(angle));
}
int cooy(float angle){// dönen çubuklarýn uç noktasýnýn y koordinatýný bulur
	return floor(300 - 200 * sin(angle));
}
int coox1(float angle){  // dönen akrep çubuðunun uç noktasýnýn x koordinatýný bulur
	return floor(300 + 140 * cos(angle));
}
int cooy1(float angle){//dönen akrep çubuðunun uç noktasýnýn y koordinatýný bulur
	return floor(300 - 140 * sin(angle));
}
void saatyaz(int sa){
	int a = sa / 10;
	int b = sa % 10;
	switch (a){
	case 0: readimagefile("sifir.bmp", 150, 600, 190, 660); break;
	case 1: readimagefile("bir.bmp", 150, 600, 190, 660); break;
	case 2: readimagefile("iki.bmp", 150, 600, 190, 660); break;
	}
	switch (b){
	case 0: readimagefile("sifir.bmp", 190, 600, 230, 660); break;
	case 1: readimagefile("bir.bmp", 190, 600, 230, 660); break;
	case 2: readimagefile("iki.bmp", 190, 600, 230, 660); break;
	case 3: readimagefile("uc.bmp", 190, 600, 230, 660); break;
	case 4: readimagefile("dort.bmp", 190, 600, 230, 660); break;
	case 5: readimagefile("bes.bmp", 190, 600, 230, 660); break;
	case 6: readimagefile("alti.bmp", 190, 600, 230, 660); break;
	case 7: readimagefile("yedi.bmp", 190, 600, 230, 660); break;
	case 8: readimagefile("sekiz.bmp", 190, 600, 230, 660); break;
	case 9: readimagefile("dokuz.bmp", 190, 600, 230, 660); break;
	
	}
	readimagefile("ikinokta.bmp", 230, 600, 270, 660);
}
void dakikayaz(int dk){
	int a = dk / 10;
	int b = dk % 10;
	switch (a){
	case 0: readimagefile("sifir.bmp", 270, 600, 310, 660); break;
	case 1: readimagefile("bir.bmp", 270, 600, 310, 660); break;
	case 2: readimagefile("iki.bmp", 270, 600, 310, 660); break;
	case 3: readimagefile("uc.bmp", 270, 600, 310, 660); break;
	case 4: readimagefile("dort.bmp", 270, 600, 310, 660); break;
	case 5: readimagefile("bes.bmp", 270, 600, 310, 660); break;
	case 6: readimagefile("alti.bmp", 270, 600, 310, 660); break;
	case 7: readimagefile("yedi.bmp", 270, 600, 310, 660); break;
	case 8: readimagefile("sekiz.bmp", 270, 600, 310, 660); break;
	case 9: readimagefile("dokuz.bmp", 270, 600, 310, 660); break;

	}
	switch (b){
	case 0: readimagefile("sifir.bmp", 310, 600, 350, 660); break;
	case 1: readimagefile("bir.bmp", 310, 600, 350, 660); break;
	case 2: readimagefile("iki.bmp", 310, 600, 350, 660); break;
	case 3: readimagefile("uc.bmp", 310, 600, 350, 660); break;
	case 4: readimagefile("dort.bmp", 310, 600, 350, 660); break;
	case 5: readimagefile("bes.bmp", 310, 600, 350, 660); break;
	case 6: readimagefile("alti.bmp", 310, 600, 350, 660); break;
	case 7: readimagefile("yedi.bmp", 310, 600, 350, 660); break;
	case 8: readimagefile("sekiz.bmp", 310, 600, 350, 660); break;
	case 9: readimagefile("dokuz.bmp", 310, 600, 350, 660); break;

	}
	readimagefile("ikinokta.bmp", 350, 600, 390, 660);
}
void saniyeyaz(int sn){
	int a =sn / 10;
	int b = sn % 10;
	switch (a){
	case 0: readimagefile("sifir.bmp", 390, 600, 430, 660); break;
	case 1: readimagefile("bir.bmp", 390, 600, 430, 660); break;
	case 2: readimagefile("iki.bmp", 390, 600, 430, 660); break;
	case 3: readimagefile("uc.bmp", 390, 600, 430, 660); break;
	case 4: readimagefile("dort.bmp", 390, 600, 430, 660); break;
	case 5: readimagefile("bes.bmp", 390, 600, 430, 660); break;
	case 6: readimagefile("alti.bmp", 390, 600, 430, 660); break;
	case 7: readimagefile("yedi.bmp", 390, 600, 430, 660); break;
	case 8: readimagefile("sekiz.bmp", 390, 600, 430, 660); break;
	case 9: readimagefile("dokuz.bmp", 390, 600, 430, 660); break;

	}
	switch (b){
	case 0: readimagefile("sifir.bmp", 430, 600, 470, 660); break;
	case 1: readimagefile("bir.bmp", 430, 600, 470, 660); break;
	case 2: readimagefile("iki.bmp", 430, 600, 470, 660); break;
	case 3: readimagefile("uc.bmp", 430, 600, 470, 660); break;
	case 4: readimagefile("dort.bmp", 430, 600, 470, 660); break;
	case 5: readimagefile("bes.bmp", 430, 600, 470, 660); break;
	case 6: readimagefile("alti.bmp", 430, 600, 470, 660); break;
	case 7: readimagefile("yedi.bmp", 430, 600, 470, 660); break;
	case 8: readimagefile("sekiz.bmp", 430, 600, 470, 660); break;
	case 9: readimagefile("dokuz.bmp", 430, 600, 470, 660); break;

	}
	
}

int main(){
	int saat ;//12 saat biçimindeki saati tutar
	int dakika;
	int saniye;
	int i, j, k;
	int s24;//24 saat biçimindeki saati tutar
	char cevap;
	printf("\n\tSaati ayarlamak istiyor musunuz (E/H)?   ");
	scanf("%c", &cevap);
	if (cevap == 'E' || cevap == 'e'){
		printf("\nSaati giriniz : "); scanf("%d", &s24);
		
		saat = s24%12;
		printf("\nDakikayi giriniz : "); scanf("%d", &dakika);
		printf("\nSaniyeyi giriniz : "); scanf("%d", &saniye);
	}
	else{
		saat = 0;
		dakika = 0;
		saniye = 0;
		s24 = 0;
	}
	
	initwindow(600, 750, "saat");
	
	
	float aci1, aci2,aci3;

	while (1){

		 aci1 = 90-saniye*6;//saniyelik açýsý (radyan)
		 aci2 = 90-dakika*6;//yelkovan açýsý(radyan)
		 aci3 = 90-(saat*30)-(dakika/10)*5;//akrep açýsý(radyan)

		for (i = saat; i < 12; i++){
			
			for (j = dakika; j<60; j++){
				
				for (k = saniye; k < 60; k++){
					circle(300, 300, 205);
					circle(300, 300, 206);
					circle(300, 300, 207);
					circle(300, 300, 180);
					outtextxy(270, 420, "C  A  S  I  O");
					outtextxy(290, 102, "12");
					outtextxy(463,198,"2");
					outtextxy(393,127,"1");
					outtextxy(490, 295, "3");
					outtextxy(463,390,"4");
					outtextxy(390,460,"5");
					outtextxy(296, 485, "6");
					outtextxy(202,459,"7");
					outtextxy(128,390,"8");
					outtextxy(102, 293, "9");
					outtextxy(124,193,"10");
					outtextxy(194,121,"11");

					
					line(300, 300, coox(aci1*pi/180), cooy(aci1*pi/180));
					line(300, 300, coox(aci2*pi / 180), cooy(aci2*pi / 180));
					line(300, 300, coox1(aci3*pi / 180), cooy1(aci3*pi / 180));
					aci1 -= 6;
					printf("%d  %d  %d\n", s24, j, k);

					saatyaz(s24);
					dakikayaz(j);
					saniyeyaz(k);

					swapbuffers();
					delay(955);
					cleardevice();
				}
				aci2 -= 6;
				if (j % 10 == 0){
					aci3 -= 5;
				}
				saniye = 0;
				k = 0;
				aci1 = 90;
			}
			dakika = 0;
			j = 0;
			aci2 = 90;
		}
		++s24;
		s24 = s24 % 24;
		saat = s24%12;
		i = 0;
		aci3 = 90;
	}

	system("pause");
	return 0;
}