#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <process.h>
#include <string.h>
#include <iomanip.h>



char user[20];

void line()
{
	char d;
	d=177;
	cout<<"\n";
	for(int l=0; l<80; l++)
		cout<<d;
}

//Function to Display Heading
void head()
{
	clrscr();
	line();
	cout<<"                                 TALK PIZZAS\n";
	cout<<"                          234, 90C HIGHGARDEN, REACH\n";
	cout<<"                                   WESTEROS";
	line();
}

//Function to Display Welcome Menu
void menu()
{

		head();
		cout<<"\n\t\t\tWELCOME\t"<<user;
		cout<<"\n\n\t\t\t1. TALK PIZZAS MENU\n";
		cout<<"\t\t\t2. AVAILABLE DELIVERY PLACES\n";
		cout<<"\t\t\t3. ORDER YOUR PIZZA\n";
		cout<<"\t\t\t4. SEARCH BY BILL NUMBER\n";
		cout<<"\t\t\t5. SEARCH BY PIZZA NAME\n";
		cout<<"\t\t\t6. CANCEL AN ORDER\n";
		cout<<"\t\t\t7. MODIFY AN ORDER\n";
		cout<<"\t\t\t8. EXIT";
		cout<<"\t\t\t\nEnter your choice: ";
}

//Function for Password
int attempt=3;
void password()
{
	head();
	int i=0;
	char num[10];
	char pass[20];
	cout<<"Attempts left: "<<attempt;
	cout<<"\n\nEnter Username: ";
	gets(user);
	cout<<"\nEnter Your Mobile Number: ";
	gets(num);
	cout<<"\nEnter Password: ";

	while(1)
	{
		pass[i]=getch();

		if(pass[i]==13)
			break;

		cout<<'*';
		i++;
	}

	pass[i]='\0';

	if(strcmp(pass,"decode")==0)
		{
			menu();
		}
	else
		{
			attempt--;
			cout<<"\n\nInvalid Password!";
			getch();

			if (attempt==0)
			       {
					cout<<"\nExiting...";
					for(long double i=0; i<2000000; i++);
					exit(0);
			       }

			else if (attempt>0)
				{
					cout<<"\nPress Enter to Try Again.";
					getch();
					clrscr();
					password();
				}

		}

}

//Structure Declaration For Pizza
void display(int i);
	struct bill
	{
		int billno;
		char name[20];
			int price;
			int fare;
			int charge;
		char dname[30];

	}

	obj[100];
	int bill=1;
	int x=1;
	int ml=0;


//Function to Display the pizza menu
void pizzam()
{

	head();
	cout<<"\n\n\t\tOUR DELICIOUS RANGE OF PIZZAS:";
	cout<<"\n\n\t\t\t1.Margherita        Rs. 150\n";
	cout<<"\t\t\t2.Farmhouse             Rs. 250\n";
	cout<<"\t\t\t3.Peppy Paneer          Rs. 500\n";
	cout<<"\t\t\t4.Mexican Green Wave    Rs. 480\n";
	cout<<"\t\t\t5.Deluxe Veggie         Rs. 320\n";
	cout<<"\t\t\t6.Veg Extravaganza      Rs. 300\n";
	cout<<"\t\t\t7.Cheese N Corn         Rs. 400\n";
	cout<<"\t\t\t8.Paneer N Corn         Rs. 520\n\n";
}

//Function to Order a Pizza
void pizza()
{
	back:
	head();
	int ch;
	int q=0;
	cout<<"\nCHOOSE A PIZZA YOU WISH TO ORDER:\n";
	cout<<"\t\t\t1.Margherita\n";
	cout<<"\t\t\t2.Farmhouse\n";
	cout<<"\t\t\t3.Peppy Paneer\n";
	cout<<"\t\t\t4.Mexican Green Wave\n";
	cout<<"\t\t\t5.Deluxe Veggie\n";
	cout<<"\t\t\t6.Veg Extravaganza\n";
	cout<<"\t\t\t7.Cheese N Corn\n";
	cout<<"\t\t\t8.Paneer N Corn\n\n";
	cout<<"Enter Your Choice:";
	cin>>ch;

	if(ch==1)
	{
		strcpy(obj[x].name, "Margherita");
		obj[x].price=150;
	}


	else if(ch==2)
	{
		strcpy(obj[x].name, "Farmhouse");
		obj[x].price=250;
	}


	else if(ch==3)
	{
		strcpy(obj[x].name, "Peppy Paneer");
		obj[x].price=500;
	}


	else if(ch==4)
	{
		strcpy(obj[x].name, "Mexican Green Wave");
		obj[x].price=480;
	}


	else if(ch==5)
	{
		strcpy(obj[x].name, "Deluxe Veggie");
		obj[x].price=320;
	}


	else if(ch==6)
	{
		strcpy(obj[x].name, "Veg Extravaganza");
		obj[x].price=300;
	}


	else if(ch==7)
	{
		strcpy(obj[x].name, "Cheese N Corn");
		obj[x].price=420;
	}


	else if(ch==8)
	{
		strcpy(obj[x].name, "Paneer N Corn");
		obj[x].price=520;
	}

	else
	{
		cout<<"\n\nWrong Choice.\nPress Enter to choose again.";
		getch();
		q=1;
	}

		if(q==1)
		{
			goto back;
		}

	flag:
	head();
	int ych;
	cout<<"\nCHOOSE A PLACE WHERE YOU WANT YOUR PIZZA TO BE DELIVERED:\n";
	cout<<"\t\t\t1. C.H.B.\n";
	cout<<"\t\t\t2. Shastri Nagar\n";
	cout<<"\t\t\t3. Pratap Nagar\n";
	cout<<"\t\t\t4. Kudi Bhagtasni\n";
	cout<<"\t\t\t5. Sardarpura\n";
	cout<<"\t\t\t6. Mandore\n";
	cout<<"\nEnter your choice: ";
	cin>>ych;
	int t=0;

	switch(ych)
	{
	case 1:	strcpy(obj[x].dname, "C.H.B.");
		obj[x].charge=50;
		obj[x].fare=obj[x].price+obj[x].charge;
		obj[x].billno=bill++;
		ml++;
		break;

	case 2:	strcpy(obj[x].dname, "Shastri Nagar");
		obj[x].charge=70;
		obj[x].fare=obj[x].price+obj[x].charge;
		obj[x].billno=bill++;
		ml++;
		break;

	case 3:	strcpy(obj[x].dname, "Pratap Nagar");
		obj[x].charge=30;
		obj[x].fare=obj[x].price+obj[x].charge;
		obj[x].billno=bill++;
		ml++;
		break;

	case 4:	strcpy(obj[x].dname, "Kudi Bhagtasni");
		obj[x].charge=120;
		obj[x].fare=obj[x].price+obj[x].charge;
		obj[x].billno=bill++;
		ml++;
		break;

	case 5:	strcpy(obj[x].dname, "Sardarpura");
		obj[x].charge=100;
		obj[x].fare=obj[x].price+obj[x].charge;
		obj[x].billno=bill++;
		ml++;
		break;

	case 6:	strcpy(obj[x].dname, "Mandore");
		obj[x].charge=159;
		obj[x].fare=obj[x].price+obj[x].charge;
		obj[x].billno=bill++;
		ml++;
		break;

	default: cout<<"\nWrong Choice.\nPress Enter to choose again." ;
		 getch();
		 t=1;
	}

	if(t==0)
	{
		char e;
		head();
		display(x);
		cout<<"\n\n\n\t\t\t\t**BON APPETITE**";
		cout<<"\nDo you Wish to Order More(Y/N)? ";
		cin>>e;
			if(e=='y'||e=='Y')
				goto back;

	}
	else if(t==1)
	{
		goto flag;
	}

}

//Function to Modify an Order
void modify()
{
	head();
	int mno, ref=0, q=0, b=0;
	cout<<"Total Number of Order: "<<ml;
	cout<<"\nEnter the Order number which you wish to modify: ";
	cin>>mno;
	for(int i=0;i<bill;i++)
	{
		if(obj[i].billno==mno)
			{
				cout<<"\nMatch found\n";
				ref=1;
				display(i);
				getch();
				break;
			}
	}
if(ref==0)
cout<<"Match Not Found!";

else if(ref==1)
{
	grt:
	head();
	q=0;
	cout<<"\n\nEnter new pizza name: ";
	gets(obj[i].name);

	if(strcmpi(obj[i].name,"Margherita")==0)
	{
		obj[i].price=150;
	}

	else if(strcmpi(obj[i].name,"Farmhouse")==0)
	{
		obj[i].price=250;
	}

	else if(strcmpi(obj[i].name,"Peppy Paneer")==0)
	{
		obj[i].price=500;
	}

	else if(strcmpi(obj[i].name,"Mexican Green Wave")==0)
	{
		obj[i].price=480;
	}

	else if(strcmpi(obj[i].name,"Deluxe Veggie")==0)
	{
		obj[i].price=320;
	}

	else if(strcmpi(obj[i].name,"Veg Extravaganza")==0)
	{
		obj[i].price=300;
	}

	else if(strcmpi(obj[i].name,"Cheese N Corn")==0)
	{
		obj[i].price=420;
	}

	else if(strcmpi(obj[i].name,"Paneer N Corn")==0)
	{
		obj[i].price=520;
	}

	else
	{
		cout<<"\n\nWrong Pizza Name.\nPress Enter to modify again.";
		getch();
		q=1;
	}

		if(q==1)
		{
			goto grt;
		}

	mrt:
	head();
	b=0;
	cout<<"\nEnter new Delivery Place: ";
	gets(obj[i].dname);

	if(strcmpi(obj[i].dname, "C.H.B.")==0)
	{
		obj[i].charge=50;
		obj[i].fare=obj[i].price+obj[i].charge;
	}

	else if(strcmpi(obj[i].dname, "Shastri Nagar")==0)
	{
		obj[i].charge=70;
		obj[i].fare=obj[i].price+obj[i].charge;
	}

	else if(strcmpi(obj[i].dname, "Pratap Nagar")==0)
	{
		obj[i].charge=30;
		obj[i].fare=obj[i].price+obj[i].charge;
	}

	else if(strcmpi(obj[i].dname, "Kudi Bhagtasni")==0)
	{
		obj[i].charge=120;
		obj[i].fare=obj[i].price+obj[i].charge;
	}

	else if(strcmpi(obj[i].dname, "Sardarpura")==0)
	{
		obj[i].charge=100;
		obj[i].fare=obj[i].price+obj[i].charge;
	}

	else if(strcmpi(obj[i].dname, "Mandore")==0)
	{
		obj[i].charge=159;
		obj[i].fare=obj[i].price+obj[i].charge;
	}

	else
	{
		cout<<"\n\nWrong Delivery Place.\nPress Enter to modify again.";
		getch();
		b=1;
	}

		if(b==1)
		{
			goto mrt;
		}
	head();
	cout<<"Order Successfully Modified";
	getch();
	}

}

//Function to Search an Order through Order No.
void searchbill()
{
	head();
	int no, m=0;
	cout<<"\nTotal number of Orders: "<<ml;
	cout<<"\nEnter the Order number you want to search: ";
	cin>>no;
	for(int i=1; i<=bill;i++)
	{
		if(no==obj[i].billno)
		{
			display(i);
			m=1;
		}
	}

	if(!m)
	cout<<"No such order present";
}

//Function to seach through pizza name
void searchname()
{
	head();
	char arr[20],ych;
	int i,j=0;
	cout<<"\nTotal number of Orders: "<<ml;
	do
	{
		cout<<"\nEnter Pizza Name you want to search for: ";
		gets(arr);
		for(i=0;i<bill;i++)
		{
			if(strcmpi(arr,obj[i].name)==0)
			{
				display(i);
				j=1;
			}
		 }
		 if(j==0)
		 cout<<"No order with this pizza name "<<arr;
		 cout<<"\n\nDo you wish to search more?(Y/N):  ";
		 cin>>ych;
	}while(ych=='Y'||ych=='y');
}


//Funtion to Display Orders
void display(int y)
{
	head();
	cout<<"\n\t\t\t\t **YOUR ORDER**" ;
	cout<<"\nOrder Number: "<<obj[y].billno;
	cout<<"\nPizza Ordered:"<<obj[y].name;
	cout<<"\nPrice:Rs."<<obj[y].price;
	cout<<"\nDelivery At:"<<obj[y].dname;
	cout<<"\nDelivery Charges:Rs."<<obj[y].charge;
	cout<<"\nTotal Fare:Rs. "<<obj[y].fare;

}


//Function to Display Available Delivery Places for a Pizza
void destinations()
{
	head();
	char ch;
	cout<<"Available destinations for your Pizza are:";
	cout<<"\t\t\t1. C.H.B.\n";
	cout<<"\t\t\t2. Shastri Nagar\n";
	cout<<"\t\t\t3. Pratap Nagar\n";
	cout<<"\t\t\t4. Kudi Bhagtasni\n";
	cout<<"\t\t\t5. Sardarpura\n";
	cout<<"\t\t\t6. Mandore\n";

}

//Function to Cancel an Order through Order no.
void cancel()
{
	head();
	int flag=0,n;
	cout<<"Enter the order no. which you wish to cancel: ";
	cin>>n;
	for(int i=0;i<=bill;i++)
	{
		if(obj[i].billno==n)
		{	flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"Invalid Order Number";
	}
	else
	{
		for(int d=flag;d<=x;d++)
		{
			obj[d]=obj[d+1];
		}
		cout<<"Order Cancelled";x--;
	}
}

int yut;
void tec()
{	head();
	cout<<"\n\n\t1.LOGIN";
	cout<<"\n\t2.EXIT";
	cout<<"\n\n\tEnter Your Choice: ";
	cin>>yut;

	switch(yut)
	{
	case 2: exit(0);
		break;
	default:cout<<"\nWrong Choice";
	}
}


void main()
{       int mch;
	char ch;
	textcolor(CYAN);
	textbackground(BLACK);
	clrscr();
	tec();
	if (yut==1)
	password();
	do
	{
		clrscr();
		head();
		menu();

		cin>>mch;
		switch (mch)
		{ 	case 1: pizzam();
				break;
			case 2: destinations();
				break;
			case 3: pizza();
				break;
			case 4: searchbill();
				break;
			case 5: searchname();
				break;
			case 6: cancel();
				break;
			case 7: modify();
				break;
			case 8: exit(0);
				break;
			default:cout<<"\nWrong choice.";
		 }
	    cout<<"\n\n\nDo you wish to continue(Y/N)? ";
		cin>>ch;
	}while(ch=='Y'||ch=='y');
	clrscr();
	cout<<"\nThank You! Visit Again!";

 getch();
}