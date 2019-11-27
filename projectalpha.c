#include <stdio.h>
#include <stdlib.h>
void update_price();
int main()
{
    char menu[100],size[100],flav[100],top[100];
    int tp[5];
    int tmtp[5];
     // sum cost of tea
    int cnt; // counter
    int i;
        int MONEY_CASHIER[5] ={100,50,20,10,5};
        int MONEY_STOCK[5] = {1,0,1,1,0};
	int ihun, ifit, itw, ite, ifi;
	int total;
	char a;
        int sum_STOCK = 0;
        int imon[5] = {0,0,0,0,0,};
	int itotal = (imon[0] *100) + (imon[1] *50) + (imon[2] *20) + (imon[3] *10) + (imon[4] *5);
		int c;
        int cost;
		int chun, cfit, ctw, cten, cfiv;
        int change = itotal - cost;
        		int price;



    x: //The 'q' restartint cost=0;
    system("cls");
    cost = 0;


    for (i=0;i<4;i++) //Topping Stock
        tp[i]=1;    
    
    
    printf("Welcome to Boba cafe\n");
    printf("Menu %50s \n","M   L");
    printf("0: Black tea %42s\n","30 40");
    printf("1: Green tea %42s\n","30 40");
    printf("2: Thai tea %43s\n","30 40");
    printf("3: Pasion fruit green tea %29s\n","45 55");
    printf("4: Taro smoothie  tea %33s\n","40 50");
    printf("5: Peach tea %42s\n\n","35 45");
    printf("Flavor\n\n");   
    printf("0: Normal %42s\n","+0");
    printf("1: Milk %44s\n","+5");
    printf("2: Honey %43s\n","+5");
    printf("3: Brown sugar %38s\n\n","+10");
    printf("Toppings\n\n");
    printf("0: Boba %43s","+5"); printf("(%d unit left)\n",tp[0]);
    printf("1: Popping boba  %35s","+15"); printf("(%d unit left)\n",tp[1]);
    printf("2: Jelly  %42s","+10"); printf("(%d unit left)\n",tp[2]);
    printf("3: Pudding  %40s","+10"); printf("(%d unit left)\n\n",tp[3]);



    printf("Please Enter your Menu\n");
    scanf("%s",menu);
    for (cnt=0;cnt<1;)
    {
        if (menu[1]=='\0')
        {
            switch(menu[0]){
                case 'q':goto x;
                case '0':printf("You choose Black Tea\n");cost+=30;cnt++;break;
                case '1':printf("You choose Green Tea\n");cost+=30;cnt++;break;
                case '2':printf("You choose Thai Tea\n");cost+=30;cnt++;break;
                case '3':printf("You choose Fruit n' Green Tea\n");cost+=45;cnt++;break;
                case '4':printf("You choose Smoothie\n");cost+=40;cnt++;break;
                case '5':printf("You choose Peach Tea\n");cost+=35;cnt++;break;
                default :printf("Invalid Input\n");printf("Please Enter your Menu\n");scanf("%s",menu);break;
            }
        }
        else
        {
            printf("Invalid Input\n");
            printf("Please Enter your Menu\n");
            scanf("%s",menu);
        }
    }
    // cnt=0; // reset counter
    // a: //get out of the menu loop


    printf("Please Enter your size\n");
    scanf("%s",size);
    for (cnt=0;cnt<1;)
    {
        if (size[1]=='\0')
        {
            switch(size[0]){
                case 'q':goto x;
                case 'm':printf("You choose Medium Size\n");cnt++;break;
                case 'l':printf("You choose Large Size\n");cost+=10;cnt++;break;
                default :printf("Invalid Input\n");printf("Please Enter your Menu\n");scanf("%s",size);
            }
        }
        else
        {
            printf("Invalid Input\n");
            printf("Please Enter your size\n");
            scanf("%s",size);
        }
    }
    // b: //get out of size loop


    printf("Please Enter your flavor\n");
    scanf("%s",flav);
    for (cnt=0;cnt<1;)
    {
        if (flav[1]=='\0')
        {
            switch(flav[0]){
                case 'q':goto x;
                case '0':printf("You choose Normal Flavor\n");cnt++;break;
                case '1':printf("You choose Milk Flavor\n");cost+=5;cnt++;break;
                case '2':printf("You choose Honey\n");cost+=5;cnt++;break;
                case '3':printf("You choose Brown Sugar Flavor\n");cost+=5;cnt++;break;
                default :printf("Invalid Input\n");printf("Please Enter your Menu\n");scanf("%s",size);
            }
        }
        else
        {
            printf("Invalid Input\n");
            printf("Please Enter your flavor\n");
            scanf("%s",flav);
        }
    }
    // c: //get out of size loop


    for (i=0;i<4;i++)
        tmtp[i]=tp[i];
        int m;
        m<3;
        printf("How many topping do you want?(maximum 2)\n");
       do{
        scanf("%d",&m);
       }while(m<0||m>2);{
       }
    for (cnt=0;cnt<m;)
    {   
        printf("Please Enter your topping\n");  
        scanf("%s",top);
        if (top[1]=='\0')
        {
            switch(top[0]){
                case 'q':goto x;
                case '0':if (tmtp[0]>0)
                    {
                        printf("You choose Boba topping for the %d topping\n",++cnt);
                        tmtp[0]--;
                        cost+=5;
                        break;
                    }
                    else 
                    {
                        printf("Sorry! Out of Stock!\n");
                        break;
                    }
                case '1':if (tmtp[1]>0)
                    {
                        printf("You choose Pop Boba topping for the %d topping\n",++cnt);
                        tmtp[1]--;
                        cost+=15;
                        break;
                    }
                    else 
                    {
                        printf("Sorry! Out of Stock!\n");
                        break;
                    }
                case '2':if (tmtp[2]>0)
                    {
                        printf("You choose Jelly topping for the %d topping\n",++cnt);
                        tmtp[2]--;
                        cost+=10;
                        break;
                    }
                    else 
                    {
                        printf("Sorry! Out of Stock!\n");
                        break;
                    }
                case '3':if (tmtp[3]>0) 
                    {
                        printf("You choose Pudding topping for the %d topping\n",++cnt);
                        tmtp[3]--;
                        cost+=10;
                        break;
                    }
                    else 
                    {
                        printf("Sorry! Out of Stock!\n");
                        break;
                    }
                case '9':printf("You choose None for the %d topping\n",++cnt);if (cnt==1) cnt=2;break;
                default :printf("Invalid Input");printf("Please Enter your Menu\n");scanf("%s",flav);
            }
        }
        else
        {
            printf("Invalid Input\n");
            printf("Please Enter your topping\n");
            scanf("%s",flav);
        }
    }

    printf("Sum = %d\n",cost);

    int conf;
    printf("Reay to pay your order sir?(1=y or 0=n)\n");
    scanf("%d",&conf);
    if(conf == 0){
        goto x;
    }

		
	/*int MONEY_CASHIER[5] ={100,50,20,10,5};
    int MONEY_STOCK[5] = {1,0,1,1,0};
	int ihun, ifit, itw, ite, ifi;
	int total;
	char a;*/
	
		//int imon[5] = {0,0,0,0,0,};
	
	
		printf("Machine cash : (100 = %d, 50 = %d, 20 = %d, 10 = %d, 5 = %d)\n", MONEY_STOCK[0],MONEY_STOCK[1],MONEY_STOCK[2],MONEY_STOCK[3],MONEY_STOCK[4]);
		printf("insert money (enter 'q' to exit) :\n");
	
		
		printf("100: ");
			scanf(" %c",&a);
			if( a == 'q'){
				goto x;
			}
			else{
				imon[0] = ( a - 48);
			}
			 a = 0;
		printf("50: ");
			//scanf(" %s",a);
            z:
            gets(a);
            int cnt = 0;
            int i;
            for (i=0;i<strlen(a);i++)
            {
                if (isdigit(a[i]!=0))
                {
                    cnt++;
                }
            }
            if (cnt!=strlen(a))
            {
                goto z;
            }
            pp = atoi(a);

			if( a == 'q'){
				goto x;
			}
			else{
				imon[1] = (a - 48);
			}
			 a = 0;
		printf("20: ");
			scanf(" %c",&a);
			if( a == 'q'){
				goto x;
			}
			else{
				imon[2] = (a - 48);
			}
			 a = 0;
		printf("10: ");
			scanf(" %c",&a);
			if( a == 'q'){
				goto x;
			}
			else{
				imon[3] = (a - 48);
			}
			 a = 0;
		printf("5: ");
			scanf(" %c",&a);
			if( a == 'q'){
				goto x;
			}
			else{
				imon[4] = (a - 48);
			}
			 a = 0;
		
	/*int itotal = (ihun *100) + (ifit *50) + (itw *20) + (ifi *10) + (ifi *5);*/
		
		printf("Total input: %d\n", itotal);
		
		/*int price;*/
		
		/*printf("Insert Price: ");
		scanf(" %d", &price);*/
		
		//compute change
		/*int sum_STOCK  = 0;
		int change = itotal - cost;
		int c;
		int chun, cfit, ctw, cten, cfiv;*/
			
			chun = 0;
			cfit = 0;
			ctw  = 0;
			cten = 0;
			cfiv = 0;  
			c = change;
		 for(int i = 0 ; i<5 ; i++){
            sum_STOCK += MONEY_STOCK[i];
        }
        if(sum_STOCK-change>=0){
            goto y ;
        }
        else
        {
            printf("Not enough money");
            return 0;
        }
        y :
		do
		{
				if(change - 100 < 0)
				{
					break;
				}
				change = change - 100;
				c = change;                         
				chun--;
				chun ++;
		}
		while( c > 0 );
		do
			{
				if(change - 50 < 0)
				{
					break;
				}
				change = change - 50;
				c = change;
				cfit ++;
			}
		while( c > 0 );
		do
			{
				if(change - 20 < 0)
				{
					break;
				}
				change = change - 20;
				c = change;
				ctw ++;
			}
		while( c > 0 );
		do	
			{
				if(change - 10 < 0)
				{
					break;
				}
				change = change - 10;
				c = change;
				cten ++;
			}
		while( c > 0 );
		do	
			{
				if(change - 5 < 0)
				{
					break;
				}
				change = change - 5;
				c = change;
				cfiv ++;
			}
		while( c > 0);
		
	

		printf("Here is your change\n");		
		printf("100: %d\n", chun);
		printf("50: %d\n", cfit);
		printf("20: %d\n", ctw);
		printf("10: %d\n", cten);
		printf("5: %d\n", cfiv);
				
		
			// int c: printf("exit\n");
		
		
		return 0;
	}
