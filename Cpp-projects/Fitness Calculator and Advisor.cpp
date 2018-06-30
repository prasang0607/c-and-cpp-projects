#include<iostream>
#include<fstream>
#include<conio.h>
#include<cstring>
#include<math.h>
#include<iomanip>
#include<unistd.h>
using namespace std;

void choose();
void head();
void exit();

class maleCal {
	protected:
	char name[20];
	int age; float mass, height;
	float bmi, calorie, fatPer, iWeight, lbm;
	
	public:
		void getData();
		void calculateM();
		void showData();
		void showAdvise();
		void storeData();
		void searchData(char *iname);
};

//defining maleCal member functions
void maleCal:: getData()
{
	cin.ignore();
	cout<<"\n Enter name: ";
	gets(name);
	cout<<" Enter age: ";
	cin>>age;
	cout<<" Enter mass (in kg): ";
	cin>>mass;
	cout<<" Enter height (in cm): ";
	cin>>height;
	if(age>100 || mass>250 || height>240 ){
		system("cls");
		cout<<" Invalid input, enter your details again\n";
		getData();
	}
}

void maleCal:: calculateM()
{
	bmi = mass / pow((height/100),2);
	calorie = (10*mass) + (6.25*height) - (5*age) + 5;
	fatPer = (1.2*bmi) + (0.23*age) - 5.4; 
	iWeight = (2.2*bmi) + (3.5*bmi*((height/100)-1.5));
	lbm = (0.407*mass) + (0.267*height) - 19.2;
}

void maleCal:: showData()
{
	system("cls");
	cout<<"\n Details:\n Name: "<<name<<"\n Age: "<<age<<" yrs"<<"\n Height: "<<height<<" cm"<<"\n Weight: "<<mass<<" kgs\n"; 
	cout<<"\n Results:\n Body Mass Index: "<<fixed<<setprecision(2)<<bmi<<" kg/m2"<<endl;
	cout<<" Basal Metabloic Rate: "<<fixed<<setprecision(2)<<calorie<<" Calories/day"<<endl;
	cout<<" Body Fat Percentage: "<<fixed<<setprecision(2)<<fatPer<<" %"<<endl;
	cout<<" Ideal Body Weight: "<<fixed<<setprecision(2)<<iWeight<<" kgs"<<endl;
	cout<<" Lean Body Mass: "<<fixed<<setprecision(2)<<lbm<<" kgs\n\n";
}

void maleCal::showAdvise()
{
	cout<<" Advise:\n";
	if(bmi>18.5 && bmi<25.6){
		cout<<" BMI result: Normal, Yay!! you are going well\n";
		cout<<"\n Tips to become more healthy:\n"
				"  1. Eat fruits,salad and green vegetables\n  2. Drink 5 litre water daily\n  3. Eat fish, egg or meat weekly\n"
				"  4. Doing exercise daily\n  5. Avoid smoking, drinking alcohol and from tabacco.\n\n";
	}
	else if(bmi<18.5){
		cout<<" BMI result: Underweight, You will need to gain some weight to reach normal BMI range\n";
		cout<<"\n Health diseases that may occur:\n"
				"  1. Diabetes\n  2. High Blood Pressure\n  3. Fatty Lever Diseases\n"
				"  4. Cancer\n  5. Kidney Diseases\n\n";
		cout<<" Tips to become healthy:\n"
				"  1. Meat, fish, eggs and other protein foods\n  2. Full-cream milk\n  3. Cereal with milk and sugar\n"
				"  4. Boiled egg or bacon or sausage\n  5. Fruits and vegetables\n\n";
	}
	else{
		cout<<" BMI result: Overweight, You will need to loss some weight to reach normal BMI range\n";
		cout<<"\n Health diseases that may occur:\n"
				"  1. Diabetes\n  2. High Blood Pressure\n  3. Fatty Lever Diseases\n"
				"  4. Cancer\n  5. Kidney Diseases\n\n";
		cout<<" Tips to become healthy:\n"
				"  1. Doing exercise and loss weight\n  2. Eat salad\n  3. Food with less salt (sodium) and quit smoking\n"
				"  4. Avoid drinking alcohol\n  5. Try to keep your glucose level normal\n\n";
	}
	cout<<" Note: for more tips go to 'more' section\n\n";
	cout<<" You should take "<<fixed<<setprecision(2)<<calorie<<" Calories/day\n";
	cout<<" Your Ideal Weight is "<<fixed<<setprecision(2)<<iWeight<<" kgs\n";
	cout<<" Your Lean Body Mass is "<<fixed<<setprecision(2)<<lbm<<" kgs\n";
}

void maleCal::storeData()
{
	ofstream fout;
	fout.open("Records.dat",ios::out | ios::binary | ios::app);
	fout.write((char *)this, sizeof(*this));
	fout.close();
}

void maleCal:: searchData(char *iname)
{
	ifstream fin;
	int flag=0;
	fin.open("Records.dat",ios::in | ios::binary);
	if(!fin)
	cout<<"File not found";
	
	while(fin.read((char *)this, sizeof(*this)))
	{
		if(!strcmpi(iname,name))
		{
			showData();
			flag++;			
		}
	}
	if(flag==0)
	cout<<"\n Record not found or doesn't exist";
	fin.close();
	sleep(4);
	choose();
}

class femaleCal: public maleCal  {
	public:
		void calculateF();
};

void femaleCal:: calculateF()
{
	bmi = mass / pow((height/100),2);
	calorie = (10*mass) + (6.25*height) - (5*age) -161;
	fatPer = (1.2*bmi) + (0.23*age) - 16.2; 
	iWeight = (2.2*bmi) + (3.5*bmi*((height/100)-1.5));
	lbm = (0.252*mass) + (0.437*height) - 48.3;
}

int main()
{
	system("color 0F");
	cout<<"\t\t\t\tWelcome to Fitness Calculator\n\n";
	goto login;
	login:
	char username[20];	
	cout<<"\n\n\n\n\n\t\t\tEnter Username: ";
	gets(username);
	if(strcmp(username,"username") == 0)
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
			sleep(2);
			system("cls");
 			//Access approved
 			choose();
		}
		else
		{
			system("cls");
			cout<<"\t\t\t\tWelcome to Fitness Calculator\n\n\t\t\t\t  Access Denied, Try Again\n\n";			
			goto login;
		}
	}
	else 
	{
		system("cls");
		cout<<"\t\t\t\tWelcome to Fitness Calculator\n\n\t\t\t\t  Access Denied, Try Again\n\n";			
		goto login;
	}
	return 0;
}

void choose ()
{
	maleCal m;
	femaleCal f;
	system("color F0");
	here:
	system("cls");
	head();
	cout<<"\n\n 1. Calculator\n 2. More\n 3. Exit \n\n Choose a category: ";
	int x;
	cin>>x;
	switch(x)
	{
		case 1:
			cout<<"\n 1. Male\n 2. Female\n Choose: ";
			int y;
			cin>>y;
			switch (y)
			{
				case 1:
					cout<<"\n 1. Calculator\n 2. Search a Record\n Choose: ";
					int c;
					cin>>c;
					switch(c)
					{
						case 1:
							m.getData();
							m.calculateM();
							m.showData();
							m.showAdvise();
							m.storeData();
							getch();
							goto here;
						case 2:
							system("cls");
							cin.ignore();
							cout<<"\n Enter name: ";
							char name[20];
							gets(name);
							m.searchData(name);
							sleep(7);
							goto here;
						default:
							cout<<"\n Invalid Input";
							sleep(2);
							system("cls");
							choose(); 
					}
					
				case 2:
					cout<<"\n 1. Calculator\n 2. Search a Record\n Choose: ";
					int d;
					cin>>d;
					switch(d)
					{
						case 1:
							f.getData();
							f.calculateF();
							f.showData();
							f.showAdvise();
							f.storeData();
							getch();
							goto here;
						case 2:
							system("cls");
							cin.ignore();
							cout<<"\n Enter name: ";
							char name[20];
							gets(name);
							f.searchData(name);
							sleep(7);
							goto here;
						default:
							cout<<"\n Invalid Input";
							sleep(2);
							system("cls");
							choose();
					}
			}
	
		case 2:
			system("cls");
			head();
			cout<<"\n 1. Calorie Diet Chart\n 2. Health Tips\n 3. Full Eating Plan\n\n Choose: ";
			int a;
			cin>>a;
			switch (a)
			{
				case 1:
					system("start https://goo.gl/6gSEzy");
					goto here;
				case 2:
					system("start https://goo.gl/o8DTAj");
					goto here;
				case 3:
					system("start https://goo.gl/dz6LGF");
					goto here;
				default:
					cout<<"\n Invalid Input";
					sleep(2);
					system("cls");
					choose();
			}			
			
		case 3:
			exit();
			
		default:
			cout<<"\n Invalid Input";
			sleep(2);
			system("cls");
			choose();
	}
}

void head()
{ cout<<"\t\t\t\tWelcome to Fitness Calculator\n"; }

void exit()
{
	system("cls");
	system("color 0F");
	cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\tExiting....";
	for(int i=0; i<pow(10,9); i++);
	exit(0);	
}
