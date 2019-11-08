#include <stdio.h>
#include <stdlib.h>
int main()
{
    char menu[100],size[100],flav[100],top[100];
    int tp[5];
    int tmtp[5];
    int cost=0; // sum cost of tea
    int cnt; // counter
    int i;



    x: //The 'q' restart
    system("cls");

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
    printf("3: Brown sugar %41s\n\n","+10");
    printf("Toppings\n\n");
    printf("0: Boba %58s\n","+5 (%d unit left)",tp[0]);
    printf("1: Popping boba  %50s\n","+15 (%d unit left)",tp[1]);
    printf("2: Jelly  %57s\n","+10 (%d unit left)",tp[2]);
    printf("3: Pudding  %55s\n","+10 (%d unit left)",tp[3]);



    printf("Please Enter your Menu\n");
    gets(menu);
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
    for (cnt=0;cnt<2;)
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

    printf("Sum = %d",cost);


		
	int hun, fit, tw, te, fi;
	int ihun, ifit, itw, ite, ifi;
	int total;
	char a;
	
		hun = 0;
		fit = 0;
		tw	= 0; 
		te	= 0;
		fi	= 0;
			
		ihun = 0;
		ifit = 0;
		itw  = 0;
		ite  = 0;
		ifi  = 0;
	
	
		printf("Machine cash : (100 = %d, 50 = %d, 20 = %d, 10 = %d, 5 = %d)\n", hun, fit, tw, te, fi);
		printf("insert money (enter 'q' to exit) :\n");
	
		
		printf("100: ");
			scanf(" %c",&a);
			if( a == 'q'){
				goto x;
			}
			else{
				ihun = ( a - 48);
			}
			 a = 0;
		printf("50: ");
			scanf(" %c",&a);
			if( a == 'q'){
				goto x;
			}
			else{
				ifit = (a - 48);
			}
			 a = 0;
		printf("20: ");
			scanf(" %c",&a);
			if( a == 'q'){
				goto x;
			}
			else{
				itw = (a - 48);
			}
			 a = 0;
		printf("10: ");
			scanf(" %c",&a);
			if( a == 'q'){
				goto x;
			}
			else{
				ite = (a - 48);
			}
			 a = 0;
		printf("5: ");
			scanf(" %c",&a);
			if( a == 'q'){
				goto x;
			}
			else{
				ifi = (a - 48);
			}
			 a = 0;
		
	int itotal = (ihun *100) + (ifit *50) + (itw *20) + (ite *10) + (ifi *5);
		
		printf("Total input: %d\n", itotal);
		
		int price;
		
		/*printf("Insert Price: ");
		scanf(" %d", &price);*/
		
		//compute change
		
		int change = itotal - cost;
		int c;
		int chun, cfit, ctw, cten, cfiv;
			
			chun = 0;
			cfit = 0;
			ctw  = 0;
			cten = 0;
			cfiv = 0;  
			c = change;
		
		do
		{
				if(change - 100 < 0)
				{
					break;
				}
				change = change - 100;
				c = change;
				
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




