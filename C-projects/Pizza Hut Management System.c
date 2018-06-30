#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
void date(void);//For date.
void mp(void);  //For multiple pizzas.
void ms(void);  //For multiple sides.
void md(void);  //For multiple drinks.
void mdd(void); //For multiple desserts.
void ot(int);   //For order total.
void mh(void);  //For main heading.
void mainp(void);
void dly(void); //For delay.

void mainp(void)
{
    int a,b,c,d,e,f,g,h,i,j,k,n;
    long double z;
    system("COLOR F0");
    mh();
    date();
    printf("\n1. Home.");
    printf("\n2. Login.");
    printf("\n3. Contact us.");
    printf("\n4. Terms and Conditions.");
    printf("\n5. Connect with us.");
    printf("\n6. Exit.");

    printf("\n\nChoose The Category - ");
    scanf("%d",&a);
    system("cls");
    switch(a)
    {
	
    	case 1:
    		mh();
    		printf("Items - ");
    		printf("\n1. Pizzas");
    		printf("\n2. Sides");
    		printf("\n3. Meals");
    		printf("\n4. Drinks");
    		printf("\n5. Desserts");
    		printf("\n6. Offers");
    		printf("\n\nSelect a Category - ");
            scanf("%d",&b);
            system("cls");
    		switch(b)
    		{
    			    case 1:
    			    mh();
    			    printf("Pizzas - ");
    				printf("\n1. Veg Pizza");
    				printf("\n2. Non - Veg Pizza");
    				printf("\n\n3. Order Pizza Combos");
    	            printf("\n\nSelect a Category - ");
    	            scanf("%d",&c);
    	            system("cls");


    				switch(c)
    				{
    					case 1:
    					mh();
    					printf("Veg Pizzas - ");
    					printf("\n1. Veggie Supreme");
    		            printf("\n2. Tandoori Paneer");
    		            printf("\n3. Country Feast");
    	                printf("\n4. Rawalpindi Chana");
    	                printf("\n5. Paneer Overloaded");
    	                printf("\n\nSelect an item - ");
    	                scanf("%d",&d);
    	                system("cls");

    	                switch(d)
    	                {
    	                	case 1:
    	                	mh();
    	                	printf("\nYou Choosed Veggie Supreme.");
    	                	ot(490);
    	                	break;

    	                	case 2:
    	                	mh();
    	                	printf("\nYou Choosed Tandoori Paneer.");
    	                	ot(490);
    	                	break;

    	                	case 3:
    	                	mh();
    	                	printf("\nYou Choosed Country Feast.");
    	                	ot(449);
							break;

    	                	case 4:
    	                	mh();
							printf("\nYou Choosed Rawalpindi Chana.");
    	                	ot(460);
    	                	break;

    	                	case 5:
    	                	mh();
							printf("\nYou Choosed Paneer Overloaded.");
    	                	ot(460);
    	                	break;

						}
						break;
						case 2:
						mh();
						printf("Non - Veg Pizzas - ");
						printf("\n1. Chicken Supreme");
    		            printf("\n2. Triple Chicken Feast");
    		            printf("\n3. Chicken Pepperoni");
    	                printf("\n4. Keema Masala");
    	                printf("\n5. Spicy Chicken Overloaded");
    	                printf("\n\nSelect an item - ");
    	                scanf("%d",&e);
    	                system("cls");

    	                switch(e)
    	                {
    	                	case 1:
    	                	mh();
    	                	printf("\nYou Choosed Chicken Supreme");
    	                	ot(570);
    	                	break;

    	                	case 2:
    	                	mh();
    	                	printf("\nYou Choosed Triple Chicken Feast");
    	                	ot(590);
    	                	break;

    	                	case 3:
    	                	mh();
							printf("\nYou Choosed Chicken Pepperoni");
    	                	ot(490);
    	                	break;

    	                	case 4:
    	                	mh();
							printf("\nYou Choosed Keema Masala");
    	                	ot(460);
    	                	break;

    	                	case 5:
    	                	mh();
							printf("\nYou Choosed Spicy Chicken Overloaded");
    	                	ot(290);
    	                	break;
						}
					    break;
					    case 3:
					    mh();
					    mp();
			        }
			        break;
                    case 2:
                    	mh();
                    	printf("Sides - ");
						printf("\n1. Spanish Tomato Veg Pasta");
			            printf("\n2. Garlic Bread Spicy Supreme");
			            printf("\n3. Garlic Bread Exotica");
			            printf("\n4. Garlic Bread Stix");
			            printf("\n5. Cheese Garlic Bread");
			            printf("\n\n6. Order a Combo");
			            printf("\n\nSelect - ");
			            scanf("%d",&f);
			            system("cls");
			            
			            switch (f)
			            {
			            	case 1:
			            		mh();
			            		printf("\nYou Choosed Spanish Tomato Veg Pasta");
			            		ot(149);
			            		break;
			            		
			            	case 2:
			            		mh();
			            		printf("\nYou Choosed Garlic Bread Spicy Supreme");
			            		ot(199);
			            		break;
			            		
			            	case 3:
			            		mh();
			            		printf("\nYou Choosed Garlic Bread Exotica");
			            		ot(139);
			            		break;
			            		
			            	case 4:
			            		mh();
			            		printf("\nYou Choosed Garlic Bread Stix");
			            		ot(299);
			            		break;
			            		
			            	case 5:
			            		mh();
			            		printf("\nYou Choosed Cheese Garlic Bread");
			            		ot(109);
			            		break;
			            	
			            	case 6:
			            		mh();
			            		ms();
						}
						break;
			        case 3:
			        	mh();
			        	printf("Meals - ");
			        	printf("\n1. Triple Treat Box Veg");
			        	printf("\n2. Magic Pan Box of 4 Veg Pizzas");
			        	printf("\n3. Magic Pan Box of 4 Veg Non - Veg Pizzas");
			        	printf("\n4. Family Fun Meal For 2");
			        	printf("\n5. Overloaded Meal for 4");
			        	printf("\n\nSelect an item - ");
			        	scanf("%d",&g);
			        	system("cls");
			        	
			        	switch (g)
			        	{
			        		case 1:
			        			mh();
			            		printf("\nYou Choosed Triple Treat Box Veg");
			            		ot(499);
			            		break;
			            		
			            	case 2:
			            		mh();
			            		printf("\nYou Choosed Magic Pan Box of 4 Veg Pizzas");
    	                		ot(699);
			            		break;
			            		
			            	case 3:
			            		mh();
			            		printf("\nYou Choosed Magic Pan Box of 4 Veg Non - Veg Pizzas");
    	                		ot(999);
			            		break;
			            		
			            	case 4:
			            		mh();
			            		printf("\nYou Choosed Family Fun Meal For 2");
								ot(599);
			            		break;
			            		
			            	case 5:
			            		mh();
			            		printf("\nYou Choosed Overloaded Meal for 4");
								ot(999);
			            		break;
			        			
						}
						break;
			        
					case 4:
						mh();
						printf("Drinks - ");
					    printf("\n1. Red Bull");
			        	printf("\n2. Frooti");
			        	printf("\n3. Cafe Cuba");
			        	printf("\n4. Appy Edge");
			        	printf("\n5. Pepsi");
			        	printf("\n\n6. Order Combo");
			        	printf("\n\nSelect an item - ");
			        	scanf("%d",&h);
			        	system("cls");
						
						switch (h)
						{
							case 1:
								mh();
			            		printf("\nYou Choosed Red Bull");
			            		ot(127);
			            		break;
			            		
			            	case 2:
			            		mh();
			            		printf("\nYou Choosed Frooti");
			            		ot(61);
			            		break;
			            		
			            	case 3:
			            		mh();
			            		printf("\nYou Choosed Cafe Cuba");
			            		ot(52);
			            		break;
			            		
			            	case 4:
			            		mh();
			            		printf("\nYou Choosed Appy Edge");
			            		ot(35);
			            		break;
			            		
			            	case 5:
			            		mh();
			            		printf("\nYou Choosed Pepsi");
			            		ot(59);
			            		break;
			            		
			            	case 6:
			            		mh();
			            		md();
						}
						break;
					case 5:
						mh();
						printf("Desserts - ");
						printf("\n1. Choco Mousse");
			        	printf("\n2. Choco Truffle Cake");
			        	printf("\n3. Soft Serve Strawberry");
			        	printf("\n4. Soft Serve Chocolate");
			        	printf("\n\n5. Order Combo");
			        	printf("\n\nSelect an item - ");
			        	scanf("%d",&i);
			        	system("cls");
			        	
			        	switch (i)
			        	{
			        		case 1:
			        			mh();
			            		printf("\nYou Choosed Choco Mousse");
			            		ot(79);
			            		break;
			            		
			            	case 2:
			            		mh();
			            		printf("\nYou Choosed Choco Truffle Cake");
			            		ot(79);
			            		break;
			            		
			            	case 3:
			            		mh();
			            		printf("\nYou Choosed Soft Serve Strawberry");
			            		ot(57);
			            		break;
			            		
			            	case 4:
			            		mh();
			            		printf("\nYou Choosed Soft Serve Chocolate");
			            		ot(57);
			            		break;
			            		
			            	case 5:
			            		mh();
			            		mdd();
						}
						break;
						
					case 6:
						mh();
						printf("Offers - ");
						printf("\n1. Magic Pan Pizzas");
			        	printf("\n2. Paneer And Capsicum");
			        	printf("\n3. Chola And Onion");
			        	printf("\n4. Chicken Keema And Corn");
			        	printf("\n5. Chicken Hot And Spicy");
			        	printf("\n\nSelect an item - ");
			        	scanf("%d",&j);
			        	system("cls");
			        	
			        	switch (j)
			        	{
			        		case 1:
			        			mh();
			            		printf("\nYou Choosed Magic Pan Pizzas");
			            		ot(199);
			            		break;
			            		
			            	case 2:
			            		mh();
			            		printf("\nYou Choosed Paneer And Capsicum");
			            		ot(99);
			            		break;
			            		
			            	case 3:
			            		mh();
			            		printf("\nYou Choosed Chola And Onion");
			            		ot(105);
			            		break;
			            		
			            	case 4:
			            		mh();
			            		printf("\nYou Choosed Chicken Keema And Corn");
			            		ot(109);
			            		break;
			            		
			            	case 5:
			            		mh();
			            		printf("\nYou Choosed Chicken Hot And Spicy");
			            		ot(299);
			            		break;
						}
						break;
			
			}
			break;
		case 2:
			system("start https://goo.gl/dbFwxu");
			for(z=0;z<200000000;z++);
			mainp();
			break;
			
		case 3:
			system("start https://goo.gl/PufEfc");
			for(z=0;z<200000000;z++);
			mainp();
			break;
			
		case 4:
			system("start https://goo.gl/M3kXRz");
			for(z=0;z<200000000;z++);
			mainp();
			break;
		
		case 5:
			mh();
			printf("Connect with us - ");
			printf("\n1. On Facebook.");
			printf("\n2. On Instagram.");
			printf("\n3. On Twitter.");
			printf("\n\nSelect - ");
			scanf("%d",&k);
			system("cls");
			switch (k)
			{
				case 1:
					system("start https://goo.gl/4knHJc");
					for(z=0;z<200000000;z++);
					mainp();
					break;
					
				case 2:
					system("start https://goo.gl/DzD5SV");
					for(z=0;z<200000000;z++);
					mainp();
					break;
					
                case 3:
					system("start https://goo.gl/ufmCo0");
					for(z=0;z<200000000;z++);
					mainp();
					break;
			}
			break;
			
		case 6:
			system("color 0F");
			printf("Press any key to exit...");
			exit (1);
			break;
			
	}
  

}

//Function for multiple pizzas.
void mp(void)
{
	int y,z,a1,a2;
	printf("Veg Pizzas - ");
	printf("\n1. Veggie Supreme");
    printf("\n2. Tandoori Paneer");
    printf("\n3. Country Feast");
    printf("\n4. Rawalpindi Chana");
    printf("\n5. Paneer Overloaded");
    printf("\n\nNon - Veg Pizzas - ");
    printf("\n6. Chicken Supreme");
    printf("\n7. Triple Chicken Feast");
    printf("\n8. Chicken Pepperoni");
    printf("\n9. Keema Masala");
    printf("\n10. Spicy Chicken Overloaded");
    printf("\n\nNote : Choose 1st pizza from Veg category and 2nd from Non - Veg category.\n");
	printf("\nChoose any 2 Pizzas -   ");
	scanf("%d %d",&y,&z);
	
	if(y==1||y==2 & z==6)
	{
		system("cls");
		mh();
		ot(1060);
	}
	if(y==1||y==2 & z==7)
	{
		system("cls");
		mh();
		ot(1080);
	}
	if(y==1||y==2 & z==8)
	{
		system("cls");
		mh();
		ot(980);
	}
	if(y==1||y==2 & z==9)
	{
		system("cls");
		mh();
		ot(950);
	}
	if(y==1||y==2 & z==10)
	{
		system("cls");
		mh();
		ot(780);
	}
	if(y==2 & z==6)
	{
		system("cls");
		mh();
		ot(1060);
	}
	if(y==2 & z==7)
	{
		system("cls");
		mh();
		ot(1080);
	}
	if(y==2 & z==8)
	{
		system("cls");
		mh();
		ot(980);
	}
	if(y==2 & z==9)
	{
		system("cls");
		mh();
		ot(950);
	}
	if(y==2 & z==10)
	{
		system("cls");
		mh();
		ot(780);
	}
	
	if(y==3 & z==6)
	{
		system("cls");
		mh();
		ot(1019);
	}
	if(y==3 & z==7)
	{
		system("cls");
		mh();
		ot(1039);
	}
	if(y==3 & z==8)
	{
		system("cls");
		mh();
		ot(939);
	}
	if(y==3 & z==9)
	{
		system("cls");
		mh();
		ot(909);
	}
	if(y==3 & z==10)
	{
		system("cls");
		mh();
		ot(739);
	}
	
	if(y==4||y==5 & z==6)
	{
		system("cls");
		mh();
		ot(1030);
	}
	if(y==4||y==5 & z==7)
	{
		system("cls");
		mh();
		ot(1050);
	}
	if(y==4||y==5 & z==8)
	{
		system("cls");
		mh();
		ot(950);
	}
	if(y==4||y==5 & z==9)
	{
		system("cls");
		mh();
		ot(920);
	}
	if(y==4||y==5 & z==10)
	{
		system("cls");
		mh();
		ot(750);
	}
	
	if(y==5 & z==6)
	{
		system("cls");
		mh();
		ot(1030);
	}
	if(y==5 & z==7)
	{
		system("cls");
		mh();
		ot(1050);
	}
	if(y==5 & z==8)
	{
		system("cls");
		mh();
		ot(950);
	}
	if(y==5 & z==9)
	{
		system("cls");
		mh();
		ot(920);
	}
	if(y==5 & z==10)
	{
		system("cls");
		mh();
		ot(750);
	}
	
}


//Function for multiple sides.
void ms(void)
{
	int p,q;
	printf("Sides - ");
	printf("\n1. Spanish Tomato Veg Pasta");
	printf("\n2. Garlic Bread Spicy Supreme");
	printf("\n3. Garlic Bread Exotica");
	printf("\n4. Garlic Bread Stix");
	printf("\n5. Cheese Garlic Bread");
	printf("\n\nChoose any 2 items -  ");
	scanf("%d %d",&p,&q);
	
	if(p==1 & q==2)
	{
		system("cls");
		mh();
		ot(348);
	}
	if(p==1 & q==3)
	{
		system("cls");
		mh();
		ot(288);
	}
	
	if(p==1 & q==4)
	{
		system("cls");
		mh();
		ot(238);
	}
	if(p==1 & q==5)
	{
		system("cls");
		mh();
		ot(258);
	}
	
	if(p==2 & q==1)
	{
		system("cls");
		mh();
		ot(348);
	}
	if(p==2 & q==3)
	{
		system("cls");
		mh();
		ot(338);
	}
	
	if(p==2 & q==4)
	{
		system("cls");
		mh();
		ot(288);
	}
	if(p==2 & q==5)
	{
		system("cls");
		mh();
		ot(308);
	}
	
	if(p==3 & q==1)
	{
		system("cls");
		mh();
		ot(288);
	}
	if(p==3 & q==2)
	{
		system("cls");
		mh();
		ot(338);
	}
	
	if(p==3 & q==4)
	{
		system("cls");
		mh();
		ot(228);
	}
	if(p==3 & q==5)
	{
		system("cls");
		mh();
		ot(248);
	}
	
	if(p==4 & q==1)
	{
		system("cls");
		mh();
		ot(238);
	}
	if(p==4 & q==2)
	{
		system("cls");
		mh();
		ot(288);
	}
	
	if(p==4 & q==3)
	{
		system("cls");
		mh();
		ot(228);
	}
	if(p==4 & q==5)
	{
		system("cls");
		mh();
		ot(198);
	}
	
	if(p==5 & q==1)
	{
		system("cls");
		mh();
		ot(258);
	}
	if(p==5 & q==2)
	{
		system("cls");
		mh();
		ot(308);
	}
	
	if(p==5 & q==3)
	{
		system("cls");
		mh();
		ot(248);
	}
	if(p==5 & q==4)
	{
		system("cls");
		mh();
		ot(198);
	}
}

//Function for multiple drinks.
void md(void)
{
	int p,q;
	printf("Drinks - ");
	printf("\n1. Red Bull");
	printf("\n2. Frooti");
	printf("\n3. Cafe Cuba");
	printf("\n4. Appy Edge");
	printf("\n5. Pepsi");
	printf("\n\nChoose any 2 items -  ");
	scanf("%d %d",&p,&q);
	
	if(p==1 & q==2)
	{
		system("cls");
		mh();
		ot(188);
	}
	if(p==1 & q==3)
	{
		system("cls");
		mh();
		ot(179);
	}
	
	if(p==1 & q==4)
	{
		system("cls");
		mh();
		ot(162);
	}
	if(p==1 & q==5)
	{
		system("cls");
		mh();
		ot(186);
	}
	
	if(p==2 & q==1)
	{
		system("cls");
		mh();
		ot(188);
	}
	if(p==2 & q==3)
	{
		system("cls");
		mh();
		ot(179);
	}
	
	if(p==2 & q==4)
	{
		system("cls");
		mh();
		ot(96);
	}
	if(p==2 & q==5)
	{
		system("cls");
		mh();
		ot(120);
	}
	
	if(p==3 & q==1)
	{
		system("cls");
		mh();
		ot(179);
	}
	if(p==3 & q==2)
	{
		system("cls");
		mh();
		ot(113);
	}
	
	if(p==3 & q==4)
	{
		system("cls");
		mh();
		ot(87);
	}
	if(p==3 & q==5)
	{
		system("cls");
		mh();
		ot(111);
	}
	
	if(p==4 & q==1)
	{
		system("cls");
		mh();
		ot(162);
	}
	if(p==4 & q==2)
	{
		system("cls");
		mh();
		ot(120);
	}
	
	if(p==4 & q==3)
	{
		system("cls");
		mh();
		ot(87);
	}
	if(p==4 & q==5)
	{
		system("cls");
		mh();
		ot(94);
	}
	
	if(p==5 & q==1)
	{
		system("cls");
		mh();
		ot(186);
	}
	if(p==5 & q==2)
	{
		system("cls");
		mh();
		ot(120);
	}
	
	if(p==5 & q==3)
	{
		system("cls");
		mh();
		ot(111);
	}
	if(p==5 & q==4)
	{
		system("cls");
		mh();
		ot(94);
	}
}

//Function for multiple desserts.
void mdd(void)
{
	int p,q;
	printf("Desserts - ");
	printf("\n1. Choco Mousse");
	printf("\n2. Choco Truffle Cake");
	printf("\n3. Soft Serve Strawberry");
	printf("\n4. Soft Serve Chocolate");
	printf("\n\nChoose any 2 items -  ");
	scanf("%d %d",&p,&q);
	
	if(p==1 && q==2)
	{
		system("cls");
		mh();
		ot(158);
	}
	if(p==1 & q==3)
	{
		system("cls");
		mh();
		ot(136);
	}
	if(p==1 & q==4)
	{
		system("cls");
		mh();
		ot(136);
	}
	if(p==2 & q==1)
	{
		system("cls");
		mh();
		ot(158);
	}
	if(p==2 & q==3)
	{
		system("cls");
		mh();
		ot(136);
	}
	if(p==2 & q==4)
	{
		system("cls");
		mh();
		ot(136);
	}
	if(p==3 & q==1)
	{
		system("cls");
		mh();
		ot(136);
	}
	if(p==3 & q==2)
	{
		system("cls");
		mh();
		ot(136);
	}
	if(p==3 & q==4)
	{
		system("cls");
		mh();
		ot(114);
	}
	if(p==4 & q==1)
	{
		system("cls");
		mh();
		ot(136);
	}
	if(p==4 & q==2)
	{
		system("cls");
		mh();
		ot(136);
	}
	if(p==4 & q==3)
	{
		system("cls");
		mh();
		ot(114);
	}

}

//Function for order total.
void ot(int x)
{
	int o,n,p,q;
	date();
	printf("\nEnter quantity - ");
	scanf("%d",&o);
	n=o*x;
	p=n*0.18;
	printf("\n\nYour Bill - \n");
	printf("\n\t Net Price   =  Rs %d",n);
	printf("\n\t GST         =  Rs %d",p);
	system("COLOR FC");
	printf("\n\t-----------------------");
	printf("\n\t Grand Total =  Rs %d",p+n);
	printf("\n\t-----------------------");
	printf("\n\nThanks for visiting...\nHope to see you again.");
	printf("\n\nBy - Pizza Hut, LPU.\n\n");
	dly();
}
//For delay
void dly (void)
{
	long double i;
    for(i=0;i<800000000;i++);
    system("cls");
	mainp();
}
//For main heading.
void mh(void)
{
	printf("\t\t\t\t     /********** WELCOME TO PIZZA HUT *********\\\n");
    printf("\t\t\t\t\t  /******** MAKE IT GREAT ********\\\n");
    printf("\n");
}
//For date.
void date(void)
{
	SYSTEMTIME stime;
	GetSystemTime (&stime);
	printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   Date: %d / %d / %d",stime.wDay,stime.wMonth,stime.wYear);
}
main()
{
	char s[20];
	int i;
	mh();
	date();
	printf("\n\n\n\t\t\tEnter Password: ");
	gets(s);
	i=strcmp(s,"password");
	if(i<0||i>0)
	{
		printf("\n\n\t\t\tAccess Denied...");
		printf("\n\t\t\tPress any button to exit..\n\n\t\t\t");
		getch ();
	}
	else
	{
		system("cls");
		mainp();
	}
}
