#include <stdio.h>

int main() {
int reminderx = 0;
int remindery = 0;
int x;
int y;
int h;
int bin [8] = {0, 0, 0, 0, 0, 0, 0, 0};
int bin2 [8] = {0, 0, 0, 0, 0, 0, 0, 0};
int bin3 [8] = {0, 0, 0, 0, 0, 0, 0, 0};
//Made By Batuhan Gümüş
printf("please enter the first number: ");
scanf("%d", &x);

printf("please enter the second number: ");
scanf("%d", &y);

int u = x + y;

if(u < -128 ){
	printf("\n you can add these two numbers in 8 bit system");
    return 0;
}
if(u > 127 ){
	printf(" \n you cant add these two numbers in 8 bit system");
    return 0;
}

if(x <=127 && x >= -128){
	if(x == -128){
		bin[0] = 1;
	}
else{
	if(x < 0){
		x = -x;
		reminderx = 1;
		bin[0] = 1;
	}
	if(x >= 64){
	   bin[1] = 1;
	   x = x - 64;
	}
	if(x >= 32){
		bin[2] = 1;
		x = x - 32;
	}
	if(x >= 16){
		bin[3] = 1;
		x = x - 16;
	}
		if(x >= 8){
		bin[4] = 1;
		x = x - 8;
	}
		if(x >= 4){
		bin[5] = 1;
		x = x - 4;
	}
		if(x >= 2){
		bin[6] = 1;
		x = x - 2;
	}
		if(x >= 1){
		bin[7] = 1;
		x = x - 1;
	}
	}
}
	
	if(y <=127 && y >= -128){
	if(y == -128){
		bin2[0] = 1;
	}
	else{
		if(y < 0){
			y = -y;
			remindery = 1;
			bin2[0] = 1;
		}
		if(y >= 64){
	   bin2[1] = 1;
	   y = y - 64;
	}
	if(y >= 32){
		bin2[2] = 1;
		y = y - 32;
	}
	if(y >= 16){
		bin2[3] = 1;
		y = y - 16;
	}
		if(y >= 8){
		bin2[4] = 1;
		y = y - 8;
	}
		if(y >= 4){
		bin2[5] = 1;
		y = y - 4;
	}
		if(y >= 2){
		bin2[6] = 1;
		y = y - 2;
	}
		if(y >= 1){
		bin2[7] = 1;
		y = y - 1;
	}
	 } 	  
	}
	
if(reminderx == 1){
        if(bin[0] == 0){
        	bin[0] = 1;
		}
		if(bin[1] == 1){
	    	bin[1] = 0;
		}
		else{ 
		    bin[1] = 1;
		}
		if(bin[2] == 1){
	    	bin[2] = 0;
		}
		else{ 
		    bin[2] = 1;
		}
		if(bin[3] == 1){
	    	bin[3] = 0;
		}
		else{ 
		    bin[3] = 1;
		}
		if(bin[4] == 1){
	    	bin[4] = 0;
		}
		else{ 
		    bin[4] = 1;
		}
		if(bin[5] == 1){
	    	bin[5] = 0;
		}
		else{ 
		    bin[5] = 1;
		}
		if(bin[6] == 1){
	    	bin[6] = 0;
		}
		else{ 
		    bin[6] = 1;
		}
		if(bin[7] == 1){
	    	bin[7] = 0;
		}
		else{ 
		    bin[7] = 1;
		}
				
		bin[7] = bin[7] + 1;
	  if(bin[7] > 1){
	  	bin[7] = 0;
	  	bin[6] = bin[6] + 1;
	  }
	  if(bin[6] > 1){
	  	bin[6] = 0;
	  	bin[5] = bin[5] + 1;
	  }
	  if(bin[5] > 1){
	  	bin[5] = 0;
	  	bin[4] = bin[4]+ 1;
	  }
	  if(bin[4] > 1){
	  	bin[4] = 0;
	  	bin[3] = bin[3] + 1;
	  }
	  if(bin[3] > 1){
	  	bin[3] = 0;
	  	bin[2] = bin[2] + 1;
	  }
	  if(bin[2] > 1){
	  	bin[2] = 0;
	  	bin[1] = bin[1] + 1;
	  }
	  if(bin[1] > 1){
	  	bin[1] = 0;
	  	bin[0] = bin[0] + 1;
	  }
	
	}
	
if(remindery == 1){
            bin2[0] = 1;
		if(bin2[1] == 1){
	    	bin2[1] = 0;
		}
		else{ 
		    bin2[1] = 1;
		}
		if(bin2[2] == 1){
	    	bin2[2] = 0;
		}
		else{ 
		    bin2[2] = 1;
		}
		if(bin2[3] == 1){
	    	bin2[3] = 0;
		}
		else{ 
		    bin2[3] = 1;
		}
		if(bin2[4] == 1){
	    	bin2[4] = 0;
		}
		else{ 
		    bin2[4] = 1;
		}
		if(bin2[5] == 1){
	    	bin2[5] = 0;
		}
		else{ 
		    bin2[5] = 1;
		}
		if(bin2[6] == 1){
	    	bin2[6] = 0;
		}
		else{ 
		    bin2[6] = 1;
		}
		if(bin2[7] == 1){
	    	bin2[7] = 0;
		}
		else{ 
		    bin2[7] = 1;
		}

	  bin2[7] = bin2[7] + 1;
	  if(bin2[7] > 1){
	  	bin2[7] = 0;
	  	bin2[6] = bin2[6] + 1;
	  }
	  if(bin2[6] > 1){
	  	bin2[6] = 0;
	  	bin2[5] = bin2[5] + 1;
	  }
	  if(bin2[5] > 1){
	  	bin2[5] = 0;
	  	bin2[4] = bin2[4] + 1;
	  }
	  if(bin2[4] > 1){
	  	bin2[4] = 0;
	  	bin2[3] = bin2[3] + 1;
	  }
	  if(bin2[3] > 1){
	  	bin2[3] = 0;
	  	bin2[2] = bin2[2] + 1;
	  }
	  if(bin2[2] > 1){
	  	bin2[2] = 0;
	  	bin2[1] = bin2[1] + 1;
	  }
	  if(bin2[1] > 1){
	  	bin2[1] = 0;
	  	bin[0] = bin[0] + 1;
	  }

}


bin3[0] = bin[0] + bin2[0];
bin3[1] = bin[1] + bin2[1];
bin3[2] = bin[2] + bin2[2];
bin3[3] = bin[3] + bin2[3];
bin3[4] = bin[4] + bin2[4];
bin3[5] = bin[5] + bin2[5];
bin3[6] = bin[6] + bin2[6];
bin3[7] = bin[7] + bin2[7];

if(bin3[7] == 2){
	bin3[7] = 0;
	bin3 [6] = bin3[6] + 1;
}
if(bin3[7] == 3){
	bin3[7] = 1;
	bin3 [6] = bin3[6] + 1;
}
if(bin3[6] ==2){
	bin3[6] = 0;
	bin3[5] = bin3[5] + 1;
}
if(bin3[6] == 3){
	bin3[6] = 1;
	bin3 [5] = bin3[5] + 1;
}
if(bin3[5] == 2){
	bin3[5] = 0;
	bin3 [4] = bin3[4] + 1;
}
if(bin3[5] == 3){
	bin3[5] = 1;
	bin3 [4] = bin3[4] + 1;
}
if(bin3[4] == 2){
	bin3[4] = 0;
	bin3[3] = bin3[3] + 1;
}
if(bin3[4] == 3){
	bin3[4] = 1;
	bin3 [3] = bin3[3] + 1;
}
if(bin3[3] == 2){
	bin3[3] = 0;
	bin3[2] = bin3[2] + 1;
}
if(bin3[3] == 3){
	bin3[3] = 1;
	bin3 [2] = bin3[2] + 1;
}
if(bin3[2] == 2){
	bin3[2] = 0;
	bin3[1] = bin3[1] + 1;
}
if(bin3[2] == 3){
	bin3[2] = 1;
	bin3 [1] = bin3[1] + 1;
}
if(bin3[1] == 2){
	bin3[1] = 0;
	bin3[0] = bin3[0] + 1;
}
if(bin3[1] == 3){
	bin3[1] = 1;
	bin3 [0] = bin3[0] + 1;
}
if(bin3[0] == 2){
	bin3[0] = 0;
}
if(bin3[0] == 3){
	bin3[0] = 1;
}


if(bin3[0] ==1){
	h = h - 128;
}
if(bin3[1] ==1){
	h = h + 64;
}
if(bin3[2] ==1){
	h = h + 32;
}
if(bin3[3] ==1){
	h = h + 16;
}
if(bin3[4] ==1){
	h = h + 8;
}
if(bin3[5] ==1){
	h = h + 4;
}
if(bin3[6] ==1){
	h = h + 2;
}
if(bin3[7] ==1){
	h = h + 1;
}

printf("----------------- \n");
printf("first binary number :");
int j;
for (j=0 ;j < 8 ;j++)
printf(" %d " ,bin[j]);

printf(" \n");
printf("second binary number:");
int a;
for (a=0 ;a < 8 ;a++)
printf(" %d " ,bin2[a]);

printf(" \n");
printf("-------------------- \n");
printf("The sum in binary:");
int b;
for (b=0 ;b < 8 ;b++)
printf(" %d " ,bin3[b]);

printf(" \n");
printf("Sum in decimal:");
printf("%d", h);

	return 0;
}
