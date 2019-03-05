#include <stdio.h>
#include "graphics.h"
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <windows.h>
#include <time.h>
#include <string.h>
#define pi 3.141592


int coox(float angle){  // dönen çubuklarýn uç noktasýnýn x koordinatýný bulur
	return floor(300 + 200 * cos(angle));
}
int cooy(float angle){// dönen çubuklarýn uç noktasýnýn y koordinatýný bulur
	return floor(300 - 200 * sin(angle));
}
int coox2(float angle) {  // dönen çubuklarýn uç noktasýnýn x koordinatýný bulur
	return floor(300 + 174 * cos(angle));
}
int cooy2(float angle) {// dönen çubuklarýn uç noktasýnýn y koordinatýný bulur
	return floor(300 - 174 * sin(angle));
}
int coox1(float angle){  // dönen akrep çubuðunun uç noktasýnýn x koordinatýný bulur
	return floor(300 + 130 * cos(angle));
}
int cooy1(float angle){//dönen akrep çubuðunun uç noktasýnýn y koordinatýný bulur
	return floor(300 - 130 * sin(angle));
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
void update_wakeup() {

}

int main(){
	int yil=0;
	int ay=0;
	int gun=0;
	int saat =0;//12 saat biçimindeki saati tutar
	int dakika=0;
	int saniye=0;
	int i, j, k;
	int s24=0;//24 saat biçimindeki saati tutar
	char cevap;

	/*printf("\n\tSaati ayarlamak istiyor musunuz (E/H)?   ");
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
	}*/
	time_t rawtime;
		struct tm *timeinfo;
		time(&rawtime);
		timeinfo = localtime(&rawtime);

		yil = 1900 + timeinfo->tm_year;
		ay = 1 + timeinfo->tm_mon;
		gun = timeinfo->tm_mday;

		s24 = timeinfo->tm_hour;
		dakika = timeinfo->tm_min;
		saniye = timeinfo->tm_sec;
		saat = s24 % 12;
	
	initwindow(600, 750, "ANTIOCHUS DIGITAL");
	
	
	float aci1, aci2,aci3;

	while (1){
		
		
		 aci1 = 90-saniye*6;//saniyelik açýsý (radyan)
		 aci2 = 90-dakika*6;//yelkovan açýsý(radyan)
		 aci3 = 90-(saat*30)-(dakika/10)*5;//akrep açýsý(radyan)

		for (i = saat; i < 12; i++){
			
			for (j = dakika; j<60; j++){
				
				for (k = saniye; k < 60; k++){

					
					char tarih[11] = { (char)(48 + (gun / 10)), (char)(48 + (gun % 10)), '.' , (char)(48 + (ay / 10)), (char)(48 + (ay % 10)), '.', (char)(48 + (yil / 1000)) , (char)(48 + ((yil % 1000) / 100)),(char)(48 + ((yil % 100) / 10)), (char)(48 + (yil % 10)),'\0' };


					setcolor(8);
					outtextxy(10, 10, "Antiochus Clock, Bedir Bayar'a ait Antiochus Software oluþumu tarafýndan");
					outtextxy(10, 30, "BGI kullanýlarak kodlanan analog ve dijital özellikli saattir.");
					setlinestyle(0, 0x3333, 15);
					circle(300, 300, 215);
					setlinestyle(0, 0x3333, 1);
					
					setbkcolor(COLOR(90,60,60));
					setfillstyle(EMPTY_FILL, 8);
					fillellipse(300, 300, 180, 180);
					setfillstyle(SOLID_FILL,COLOR(10,10,10));
					fillellipse(300, 300, 20, 20);
					//circle(300, 300, 180);
					setcolor(7);
					
					outtextxy(270, 220, tarih);
					outtextxy(250, 380, "A N T I O C H U S");
					outtextxy(275, 410, "C L O C K");
					setcolor(15);
					setbkcolor(0);
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
					outtextxy(127,193,"10");
					outtextxy(197,124,"11");

					setcolor(COLOR(100,0,0));
					setlinestyle(0,0x3333,3);
					line(300, 300, coox(aci1*pi/180), cooy(aci1*pi/180));
					setcolor(COLOR(10,10,10));
					setlinestyle(0, 0x3333, 8);
					line(300, 300, coox2(aci2*pi / 180), cooy2(aci2*pi / 180));
					//setcolor(12);
					line(300, 300, coox1(aci3*pi / 180), cooy1(aci3*pi / 180));
					setcolor(15);
					setlinestyle(0, 0x3333, 1);
					aci1 -= 6;
					

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