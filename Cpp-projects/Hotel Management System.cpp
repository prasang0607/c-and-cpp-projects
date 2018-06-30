#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int room_detail();
class hotel
{
char c_name[20],c_add[30],c_phoneno[12];
public:
	int room_no,room_type,pn;
	void main_menu();
	void add_customer();
	void delete_customer(int);
	void modify_customer(int);
	void edit();
	void search_customer();
	void display_allcustomer();
	void generatebill();	
};

void hotel::main_menu()
{

while(1)	
{
	int ch;
	cout<<endl<<endl<<endl<<'\t'<<'\t'<<'\t'<<"***********MAIN MENU************";
	cout<<endl<<'\t'<<'\t'<<'\t'<<"(1)ADD CUSTOMER";
	cout<<endl<<'\t'<<'\t'<<'\t'<<"(2)SEARCH CUSTOMER";
	cout<<endl<<'\t'<<'\t'<<'\t'<<"(3)DISPLAY ALL CUSTOMER";
	cout<<endl<<'\t'<<'\t'<<'\t'<<"(4)EDIT CUSTOMER";
	cout<<endl<<'\t'<<'\t'<<'\t'<<"(5)GENERATE BILL OF CUSTOMER";
	cout<<endl<<'\t'<<'\t'<<'\t'<<"(6)EXIT";
	cout<<endl<<'\t'<<'\t'<<'\t'<<"ENTER YOUR CHOICE"<<'\t';
	cin>>ch;
	switch(ch)
	{case 1:
	add_customer();
		break;
		case 2:
		search_customer();
		break;
		case 3:
		display_allcustomer();
		break;
		case 4:
		 edit();
		break;
		case 5:
		generatebill();
		break;
		case 6:
		exit(0);
		break;
		
	}
}
}

void hotel::add_customer()
{ofstream obj;
cout<<'\t'<<'\t'<<'\t'<<"ENTER CUSTOMER DETAIL"<<endl;
fflush(stdin);
cout<<endl<<endl<<endl<<endl<<'\t'<<'\t'<<'\t'<<"ENTER THE NAME OF THE CUSTOMER"<<'\t';
gets(c_name);
cout<<endl<<'\t'<<'\t'<<'\t'<<"ENTER THE PHONE NUMBER OF THE CUSTOMER"<<'\t';
gets(c_phoneno);
cout<<endl<<'\t'<<'\t'<<'\t'<<"ENTER THE ADDRESS OF THE CUSTOMER"<<'\t';
gets(c_add);
cout<< endl<<'\t'<<'\t'<<'\t'<<"ENTER THE ROOM TYPE"<<'\t';
 room_type=room_detail();
fflush(stdin);
cout<<'\t'<<'\t'<<'\t'<<"ENTER THE ROOM NUMBER CHOSEN BY THE CUSTOMER"<<'\t';
cin>>room_no;
cout<<'\t'<<'\t'<<'\t'<<"ENTER THE AADHAR CARD NUMBER OF CUSTOMER"<<'\t';
cin>>pn;
obj.open("welcome.txt",ios::app|ios::binary|ios::out);
obj.write((char*)this,sizeof(hotel));
obj.close();
}
int room_detail()
{int choice;
cout<<endl<<'\t'<<'\t'<<'\t'<<"(1)SUPER LUXURY-SINGLE SEATER-->4000 RS";
cout<<endl<<'\t'<<'\t'<<'\t'<<"(2)SUPER LUXURY-DOUBLE SEATER-->6000 RS";
cout<<endl<<'\t'<<'\t'<<'\t'<<"(3)LUXURY-SINGLE SEATER-->2000 RS";
cout<<endl<<'\t'<<'\t'<<'\t'<<"(4)LUXURY-DOUBLE SEATER-->4000 RS";
cout<<endl<<'\t'<<'\t'<<'\t'<<"(5)DELUXE-SINGLE SEATER-->1000 RS";
cout<<endl<<'\t'<<'\t'<<'\t'<<"(6)DELUXE-SINGLE SEATER-->2000 RS";
cout<<endl<<'\t'<<'\t'<<'\t'<<"ENTER YOUR CHOICE"<<'\t';
cin>>choice;
return choice;
}
void hotel::search_customer()
{ifstream fin ("welcome.txt",ios::in|ios::binary);
int r,l=0;
cout<<endl<<'\t'<<'\t'<<'\t'<<"ENTER THE AADHAR CARD NUMBER OF CUSTOMER"<<'\t';
cin>>r;
while(!fin.eof())
{fin.read((char*)this,sizeof(hotel));
if(pn==r)
{cout<<endl<<'\t'<<'\t'<<'\t'<<"CUSTOMER DETAIL";
cout<<endl<<'\t'<<'\t'<<'\t'<<"ROOM NUMBER"<<'\t'<<room_no;
cout<<endl<<'\t'<<'\t'<<'\t'<<"NAME"<<'\t'<<c_name;
cout<<endl<<'\t'<<'\t'<<'\t'<<"ADDRESS"<<'\t'<<c_add;
cout<<endl<<'\t'<<'\t'<<'\t'<<"PHONE NUMBER"<<'\t'<<c_phoneno<<endl;
switch(room_type)
{case 1:
	cout<<'\t'<<'\t'<<'\t'<<endl<<"YOUR ROOM IS SUPER LUXURY - SINGLE SEATER ";
	break;
	case 2:
	cout<<'\t'<<'\t'<<'\t'<<endl<<"YOUR ROOM IS SUPER LUXURY - DOUBLE SEATER ";
	break;
	
    case 3:
	cout<<'\t'<<'\t'<<'\t'<<endl<<"YOUR ROOM IS LUXURY - SINGLE SEATER ";
	break;
	
	case 4:
	cout<<'\t'<<'\t'<<'\t'<<endl<<"YOUR ROOM IS LUXURY - DOUBLE SEATER ";
	break;
	
	case 5:
	cout<<'\t'<<'\t'<<'\t'<<endl<<"YOUR ROOM IS DELUXE - SINGLE SEATER ";
	break;
	case 6:
	cout<<'\t'<<'\t'<<'\t'<<endl<<"YOUR ROOM IS DELUXE - SINGLE SEATER ";
	break;
	
	default:
	cout<<'\t'<<'\t'<<'\t'<<"WRONG CHOICE";
	break;
	
	
	
}

l=1;
break;
}
}
if(l==0)
cout<<'\t'<<'\t'<<'\t'<<"ROOM IS NOT FOUND OR VACANT";
cout<<endl<<'\t'<<'\t'<<'\t'<<"PRESS ANY KEY TO CONTINUE"<<endl;
getch();
fin.close();

}

void hotel::display_allcustomer()
{ifstream fin("hotelreservation.txt",ios::in|ios::binary);
cout<<endl<<"LIST OF ROOMS ALLOTED";
cout<<endl<<'\t'<<"ROOMNO   NAME     ADDRESS       PHONENO"<<endl;
while(fin)
{fin.read((char*)this,sizeof(hotel));
cout<<'\t'<<room_no<<'\t'<<c_name<<'\t'<<"  "<<c_add<<"  "<<'\t'<<"  "<<c_phoneno <<endl;
break;
}
cout<<endl<<"PRESS ANY KEY TO CONTINUE";
getch();
fin.close();
}

void hotel::edit()
{int choice,r;
cout<<endl<<"EDIT CUSTOMER DETAIL";
cout<<endl<<"1-MODIFY";
cout<<endl<<"2-DELETE";
cout<<endl<<"ENTER YOUR CHOICE"<<'\t';
cin>>choice;
cout<<"ENTER THE AADHAR CARD NUMBER"<<'\t';
cin>>r;
switch(choice)
{case 1:
	modify_customer(r);
	break;
	case 2:
		delete_customer(r);
		break;
		default:
			cout<<"WRONG CHOICE";
}cout<<"press any key to continue";
getch();
}
void hotel::generatebill()
{ long int room_charge,f_charge,days,total;
ifstream fin ("welcome.txt",ios::in);
int r,l=0;
cout<<endl<<'\t'<<'\t'<<'\t'<<"ENTER THE AADHAR CARD NUMBER OF CUSTOMER"<<'\t';
cin>>r;
while(!fin.eof())
{fin.read((char*)this,sizeof(hotel));
if(pn==r)
{cout<<endl<<'\t'<<'\t'<<'\t'<<"CUSTOMER DETAIL";
cout<<endl<<'\t'<<'\t'<<'\t'<<"ROOM NUMBER"<<'\t'<<room_no;
cout<<endl<<'\t'<<'\t'<<'\t'<<"NAME"<<'\t'<<c_name;
cout<<endl<<'\t'<<'\t'<<'\t'<<"ADDRESS"<<'\t'<<c_add;
cout<<endl<<'\t'<<'\t'<<'\t'<<"PHONE NUMBER"<<'\t'<<c_phoneno<<endl;
switch(room_type)

{case 1:
	room_charge=4000;
	break;
	case 2:
	room_charge=6000;
	break;
	case 3:
	room_charge=2000;
	break;
	case 4:
	room_charge=4000;
	break;
	case 5:
	room_charge=1000;
	break;
	case 6:
	room_charge=2000;
	break;
	
}
}
break;
}
cout<<"ENTER THE FOOD CHARGE OF THE CUSTOMER"<<'\t';
cin>>f_charge;
cout<<"ENTER THE NO OF DAYS CUSTOMER STAYED"<<'\t';
cin>>days;
total=(days*room_charge)+f_charge;
cout<<"BILL OF CUTOMER IS INC ALL THE TAXES"<<'\t'<<total;
}
void hotel::modify_customer(int r)
{long pos,flag=0;
fstream file("welcome.txt",ios::in|ios::out|ios::binary);
while(!file.eof())
{pos=file.tellg();
file.read((char*)this,sizeof(hotel));
if(pn==r)
{cout<<endl<<'\t'<<'\t'<<'\t'<<"ENTER CUSTOMER DETAIL";
fflush(stdin);
cout<<endl<<'\t'<<'\t'<<'\t'<<"NAME"<<'\t';
gets(c_name);
cout<<endl<<'\t'<<'\t'<<'\t'<<"ADDRESS"<<'\t';
gets(c_add);
cout<<endl<<'\t'<<'\t'<<'\t'<<"PHONE NUMBER"<<'\t';
gets(c_phoneno);
file.seekg(pos);
file.write((char*)this,sizeof(hotel));
cout<<endl<<'\t'<<'\t'<<'\t'<<"RECORD IS MODIFIED"<<endl;
flag=1;
break;

}
}
if(flag=0)
cout<<endl<<"SORRY ROOM IS NOT FOUND OR VACANT";
file.close();
}
void hotel::delete_customer(int r)
{int l=0;
char ch;
ifstream fin("welcome.txt",ios::in);
ofstream fout("hello.txt",ios::out);
while(!fin.eof())
{fin.read((char*)this,sizeof(hotel));
if(pn==r)
{cout<<endl<<"NAME"<<'\t'<<c_name;
cout<<endl<<"ADDRESS"<<'\t'<<c_add;
cout<<endl<<"PHONE NUMBER"<<'\t'<<c_phoneno;
cout<<endl<<"DO YOU WANT TO DELETE THIS RECORD"<<'\t';
cin>>ch;
if(ch=='n'||ch=='N')

fout.write((char*)this,sizeof(hotel));
l=1;
break;
}
else

fout.write((char*)this,sizeof(hotel));
}
fin.close();
fout.close();
if(l==0)
cout<<endl<<"SORRY THIS ROOM IS NOT FOUND";
else
{remove("welcome.txt");
rename("hello.dat","hotelreservation.txt");
}

}


 int main()
{hotel h;
cout<<"###############################################################################"<<endl;
cout<<'\t'<<'\t'<<'\t'<<'\t'<<"HOTEL RESERVATION SYSTEM"<<endl<<endl;
cout<<"###############################################################################"<<endl<<endl<<endl;
cout<<"CREATED BY ABHINAV ANAND"<<endl<<endl<<endl;
cout<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<"PRESS ANY KEY TO CONTINUE!!-->";
getch();
goto login;
login:
char username[20];
cout<<endl<<endl<<endl<<'\t'<<'\t'<<"************WELCOME TO LOVELY HOTEL************"<<endl<<endl<<endl;
cout<<'\t'<<"Enter the Login USERNAME FOR THE SYSTEM"<<'\t';
gets(username);
if(strcmpi(username,"username")==0)
{string pass="";
cout<<'\t'<<"ENTER PASSWORD"<<'\t';
char ch=_getch();
while(ch!=13)
{pass.push_back(ch);
cout<<'*';
ch=_getch();
}
if(pass=="password")
{
cout<<endl<<'\t'<<"ACCESS APPROVED";
 h.main_menu();
}
else
{
cout<<'\t'<<"ACCESS DENIED : PASSWORD IS WRONG TRY AGAIN";
goto login;
}
}else 
{
cout<<'\t'<<"ACCESS DENIED : USERNAME IS WRONG TRY AGAIN";
goto login;
}

}


