#include <stdio.h>
#include"graphics.h"

int main(){
	int i = 0;
	initwindow(600, 600);
	setbkcolor(BLUE);

	for (i = 0; i < 6; i++){
		line(100 * i, 0, 100 * i, 600);
	}
	while (1) delay(200)

}