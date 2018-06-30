#include<iostream>
#include<fstream>
#include<cstring>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;

void choose();
void exit();
void sleep();

class Book
{
	char bookName[50], issuerName[30]; int bookId; float price;
	public:
		Book()
		{
			strcpy(bookName,"No title");
			strcpy(issuerName,"No name");
			bookId = 0;
			price = 0;
		}
		void getBook();
		void showBook();
		int storeBook();
		void viewAllBooks();
		void searchBook(char *);
		void deleteBook(char *);
		void updateBook(char *);
};

void Book:: getBook()
{
	cin.ignore();
	cout<<"\n Enter title: ";
	cin.getline(bookName,49);
	cout<<" Issuing to: ";
	cin.getline(issuerName,29);
	cout<<" Enter book ID: ";
	cin>>bookId;
	cout<<" Enter price: ";
	cin>>price;
}

void Book:: showBook()
{
	cout<<"\n Issued to: "<<issuerName<<endl<<" Title: "<<bookName<<endl<<" Book ID: "<<bookId<<endl<<" Price: "<<price<<endl;
}

int Book:: storeBook()
{
	if(bookId==0 && price==0)
	{
		cout<<"\n Book data not initialized\n";
		return 0;
	}
	else
	{
		ofstream fout;
		fout.open("LMS.dat",ios::app | ios::binary);
		fout.write((char *)this, sizeof(*this));
		fout.close();
		cout<<"\n Stored successfully\n";
		return 1;
	}
}

void Book:: viewAllBooks()
{
	ifstream fin;
	fin.open("LMS.dat",ios::in | ios::binary);
	if(!fin)
	cout<<"File not found";
	while(fin.read((char *)this, sizeof(*this)))
	{
		showBook();
	}
	fin.close();
}

void Book:: searchBook(char *t)
{
	ifstream fin;
	int flag=0;
	fin.open("LMS.dat",ios::in | ios::binary);
	if(!fin)
	cout<<" File not found";
	
	while(fin.read((char *)this, sizeof(*this)))
	{
		if(!strcmpi(t,issuerName))
		{
			showBook();
			flag++;			
		}
	}
	if(flag==0)
	cout<<" Record not found or doesn't exist";
	fin.close();
}

void Book::updateBook(char *t)
{
	fstream file;
	file.open("LMS.dat",ios::in | ios::out | ios::ate | ios::binary);
	file.seekg(0);
	while(file.read((char *)this,sizeof(*this)))
	{
		if(!strcmpi(t,issuerName))
		{
			getBook();
			file.seekp(file.tellp()-sizeof(*this));
			file.write((char*)this,sizeof(*this));
		}
	}
	cout<<"\n Record updated successfully";
	file.close();
}

void Book:: deleteBook(char *t)
{
	ofstream fout;
	ifstream fin;
	fin.open("LMS.dat",ios::in | ios::binary);
	if(!fin)
		cout<<"\n File not found\n";
	else
	{
		fout.open("temp.dat",ios::out | ios::binary);
		while(fin.read((char *)this, sizeof(*this)))
		{
			if(strcmpi(t,issuerName))
				fout.write((char *)this, sizeof(*this));
		}
		fin.close();
		fout.close();
		remove("LMS.dat");
		rename("temp.dat","LMS.dat");
		cout<<"\n Record deleted successfully\n";
	}
}

int main()
{
	system("color 0F");
	cout<<"\t\t\t  Welcome to Library Management System\n\n";
	goto login;
	login:
	char username[20];	
	cout<<"\n\n\n\n\n\t\t\tEnter Username: ";
	gets(username);
	if(strcmpi(username,"username") == 0)
	{
		string pass = "";
		cout<<"\n\t\t\tEnter Password: ";
		char ch=getch();
		while(ch!=13)
		{
			pass.push_back(ch);
			cout<<'*';
			ch=getch();
		}
		if(pass=="password")
		{
			cout<<"\n\n\t\t\tLogging you in....";
			for(int i=0; i<pow(10,9); i++);
			system("cls");
 			//Access approved
 			choose ();
		}
		else
		{
			system("cls");
			cout<<"\t\t\t  Welcome to Library Management System\n\n\t\t\t\t  Access Denied, Try Again\n\n";			
			goto login;
		}
	}
	else 
	{
		system("cls");
		cout<<"\t\t\t  Welcome to Library Management System\n\n\t\t\t\t  Access Denied, Try Again\n\n";			
		goto login;
	}
	return 0;
}

void choose()
{
	system("color F0");
	char name[30];
	here:
	Book b;
	system("cls");
	cout<<"\t\t\t  Welcome to Library Management System\n\n";
	cout<<"\n 1. Add a Record\n 2. View a Record\n 3. Update a Record\n 4. View all Records\n 5. Delete a Record\n 6. Exit\n\n Choose a category: ";
	int x;
	cin>>x;
	switch(x)
	{
		case 1:
			b.getBook();
			b.storeBook();
			for(int i=0; i<pow(8,10); i++);
			goto here;
		case 2:
			system("cls");
			cin.ignore();
			cout<<"\n Issued to: ";
			cin.getline(name,29);
			b.searchBook(name);
			sleep();
			goto here;
		case 3:
			system("cls");
			fflush(stdin);
			cout<<"\n Issued to: ";
			cin.getline(name,29);
			b.updateBook(name);
			for(int i=0; i<pow(8,10); i++);
			goto here;
		case 4:
			system("cls");
			b.viewAllBooks();
			sleep();
			goto here;
		case 5:
			cin.ignore();
			cout<<"\n Issued to: ";
			cin.getline(name,29);
			b.deleteBook(name);
			for(int i=0; i<pow(8,10); i++);
			goto here;
		case 6:
			exit();			
	}
}

void exit()
{
	system("cls");
	system("color 0F");
	cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\tExiting....";
	for(int i=0; i<pow(10,9); i++);
	exit(0);	
}

void sleep()
{ for(int i=0; i<4000000000; i++); }
