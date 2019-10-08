 #include<stdio.h>
 int main()
 {
 	int price;
 	float outPrice;
 	scanf("%d",&price);
 	if(price<=0){
 		return 0;
	 } 
 	outPrice = price;
 	price = (price-1)/1000;
 	switch(price)
 	{
 		case 0 : printf("discount=1,pay=%g\n",outPrice);break;
 		case 1 : printf("discount=0.95,pay=%g\n",outPrice*0.95);break;
 		case 2 : printf("discount=0.9,pay=%g\n",outPrice*0.9);break;
 		case 3 : printf("discount=0.85,pay=%g\n",outPrice*0.85);break;
 		case 4 : printf("discount=0.85,pay=%g\n",outPrice*0.85);break;
 		case 5 : printf("discount=0.8,pay=%g\n",outPrice*0.8);break;
 		default : printf("discount=0.8,pay=%g\n",outPrice*0.8);
	 }
	 return 0;
  } 
