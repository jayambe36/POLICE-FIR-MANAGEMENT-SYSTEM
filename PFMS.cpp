//SMITPATEL9898
/*CentOS 7 IN VMWARE*/
//POLICE FIR MANGEMENT SYSTEM
#include<iostream>	//input-output
#include<fstream>	//file i/o
#include<stdlib.h>	//system("clear");
#include<string>	//string functions
using namespace std;

class FIR	//class FIR
{		
	string crime,address;
	string name,gen,hair_color,eye_color,relation,fir_no;
	int age,court_no,act_no,date;
	float weight,height,emer_con;
	public:	
		void add() //add() to add record in data base
		{		
			cout << endl << "|--------------- POLICE FIR MANGEMENT SYSTEM ---------------|";
			cout << endl << "|---------------------- Add FIR Record ---------------------|" << endl;
			label1:cout << endl << "\t\tEnter CONVICT First Name           : ";
			cin >> name;
			geng:cout << "\t\tEnter Gender of CONVICT            : ";
			cin >> gen;
			cout<<"  \t\tEnter Age of CONVICT               : ";
			cin >> age;
			cout << "\t\tEnter Weight of  CONVICT           : ";
			cin >> weight;
			cout << "\t\tEnter Height of CONVICT (in feets) : ";
			cin >> height;
			cout << "\t\tEnter Hair Color of CONVICT        : ";
			cin >> hair_color;
			cout << "\t\tEnter Eyecolor of CONVICT          : ";
			cin >> eye_color;
    	    cout << "\t\tEnter Type Crime by CONVICT        : ";
			cin >> crime;
			cout << "\t\tEnter Court No of CONVICT          : ";
			cin >> court_no;
			cout << "\t\tEnter Act No of CONVICT            : ";
    	    cin >> act_no;
    	    cout << "\t\tEnter City of crime by CONVICT     : ";
			cin >> address;
			cout << "\t\tEnter FIR number of the CONVICT    : " ;
			cin >> fir_no;
			cout << "\t\tEnter Contact number of CONVICT    : ";
			cin >> emer_con;
			cout << "\t\tEnter Relation contact of CONVICT  : ";
			cin >> relation;
			cout << "\t\tEnter Date (format:YYYYMMDD)       : " ;
			cin >> date;
			const char *c = fir_no.c_str();		//string fir_no converted into const char *c to give 		
			ofstream f;				//it as filename in file handling
	   	   	f.open(c,ios::binary); 
	    	{		//input to a file					
				f << "\t\t| Name*                      : *" << name << " |" << endl;
				f << "\t\t| Gender*                    : *"<< gen << " |" << endl;
				f << "\t\t| Age*                       : *" << age << " |" << endl;
			    f << "\t\t| Weight*                    : *" << weight << " |" << endl;
		    	f << "\t\t| Height*                    : *" << height << " |" << endl;
    			f << "\t\t| Hair*color*                : *" << hair_color << " |" << endl;
	    		f << "\t\t| Eye*color*                 : *" << eye_color << " |" << endl;
			    f << "\t\t| Crime*                     : *" << crime << " |" << endl;				
		    	f << "\t\t| Court*                     : *" << court_no << " |" << endl;
	    		f << "\t\t| Act*                       : *" << act_no << " |" << endl;
    			f << "\t\t| Address*of*police*station* : *" << address << " |" << endl;
			    f << "\t\t| Fir*Number*                : *" << fir_no << " |" << endl;
			    f << "\t\t| Contact*number*            : *" << emer_con << " |" << endl;
	    		f << "\t\t| Relation*with*convict*     : *" << relation << " |" << endl;
    			f << "\t\t| Fir*Date*                  : *" << date << " |" << endl << endl;
			    cout << endl <<"\tYour record has been added Successfully... " << endl;
			}
			f.close();
			ofstream f1;
			f1.open("index.txt",ios::binary|ios::app);		//creating an index file
			f1 << " FIR*NO : " << fir_no << "| Name:" << name << "||" << endl;
			f1.close();
			label2:cout << endl << "\tDo you want to enter another record?(y/n) : ";
			char another;
			cin >> another;
			if(another == 'y')
			{
				goto label1;
			}
			else if(another == 'n'){}
			else
			{
				cout << "\t\tEntered wrong input... Please enter again..."; 
				goto label2;
			}
			cout << endl << "\t\tPress any Key to continue.......";
			char any;
			cin >> any;
		}
		void search() //search() to search any record
		{				
			char c;
			cout << endl << "|--------------- POLICE FIR MANGEMENT SYSTEM ----------------|" ;
			cout << endl << "|---------------------- Search Record -----------------------|" << endl;
			moreg:cout << endl <<"\tEnter FIR no to search the convict details : ";
			cin >> fir_no;
			const char *ch = fir_no.c_str();
			ifstream f;
			f.open(ch,ios::binary);
			if(!f) 
			{		//checks if file exists or not			
				cout << endl << "\t\tSorry,file not found.";
			}
			while(f>>c)
			{
				if(c == '*')
				{
					cout << " ";
				}
				else if(c == '|') 
				{			//output from the file
					cout << "\t\t\n";
				}
				else
				{
					cout << c;
				}
			}
			again:cout << endl << "\t\tDo you want to see more? (y/n) : ";
			char more;
			cin >> more;
			if(more == 'y')
			{
				goto moreg;
			}
			else if(more == 'n'){}
			else
			{
				cout << endl << "\t\tWrong input entered... Please enter again...";
				goto again;
			}
			cout << endl << "\t\tPress any key to continue.......";
			char any;
			cin >> any;
		}
		void modify() //modify() to modify CONVICT details
		{					
			cout << endl << "|--------------- POLICE FIR MANGEMENT SYSTEM ---------------|" ;
			cout << endl << "|---------------------- Modify Record ----------------------|" << endl;
			cout << endl <<"\tEnter Fir no to Modify its content : ";
			cin >> fir_no;
			label1:cout << endl << "\t\tEnter correct First Name OF CONVICT          : ";
			cin >> name;
			cout << "\t\tEnter correct Gender of CONVICT            : ";
			cin >> gen;
			cout << "\t\tEnter correct Age of CONVICT               : ";
			cin >> age;
			cout << "\t\tEnter correct Weight of CONVICT            : ";
			cin >> weight;
			cout << "\t\tEnter correct Height of CONVICT (in feets) : ";
			cin >> height;
			cout << "\t\tEnter correct Hair Color of CONVICT        : ";
			cin >> hair_color;
			cout << "\t\tEnter correct Eyecolor of CONVICT          : ";
			cin >> eye_color;
			cout << "\t\tEnter correct Type Crime by CONVICT        : ";
			cin >> crime;
			cout << "\t\tEnter correct Court No of CONVICT          : ";
			cin >> court_no;
			cout << "\t\tEnter correct Act No of CONVICT            : ";
			cin >> act_no;
			cout << "\t\tEnter correct city of crime by CONVICT     : ";
			cin >> address;
			cout << "\t\tEnter correct Contact number of CONVICT    : ";
			cin >> emer_con;
			cout << "\t\tEnter correct Relation contact of CONVICT  : ";
			cin >> relation;
			cout << "\t\tEnter Date (YYYYMMDD)                      : ";
			cin >> date;
			const char *c = fir_no.c_str();
			ofstream f;
			f.open(c,ios::binary); //file input
			{
				f << "\t\t| Name*                      : *" << name << " |" << endl;
				f << "\t\t| Gender*                    : *" << gen << " |" << endl;
				f << "\t\t| Age*                       : *" << age << " |" << endl;
				f << "\t\t| Weight*                    : *" << weight << " |" << endl;
				f << "\t\t| Height*                    : *" << height << " |" << endl;
				f << "\t\t| Hair*color*                : *" << hair_color << " |" << endl;
				f << "\t\t| Eye*color*                 : *" << eye_color << " |" << endl;				
				f << "\t\t| Crime*                     : *" << crime << " |" << endl;
				f << "\t\t| Court*                     : *" << court_no << " |" << endl;
				f << "\t\t| Act*                       : *" << act_no << " |" << endl;
				f << "\t\t| Address*of*police*station* : *" << address << " |" << endl;
				f << "\t\t| Fir*Number*                : *" << fir_no << " |" << endl;
				f << "\t\t| Contact*number*            : *" << emer_con<<" |" << endl;
				f << "\t\t| Relation*with*convict*     : *" << relation<<" |" << endl;
				f << "\t\t| Fir*Date*                  : *"<<date<<" |" << endl << endl;
				cout << endl << "\tYour Record has been modified Successfully...";
			}
			f.close();
			cout << endl << "\tPress any key to continue...";
			char any;
			cin >> any;
		}
		void list() //list() to see all the fir registered
		{					
			char c;
			cout << endl << "|--------------- POLICE FIR MANGEMENT SYSTEM ---------------|" ;
			cout << endl << "|---------------------- List Record ------------------------|" << endl;
			ifstream f;
			f.open("index.txt",ios::binary);
			if(!f)  //checks if index.txt exists or not
			{						
		          cout << endl << "\t\tSorry,file not found";	
	        }
			while(f>>c)
			{
				if(c == '*')
				{
					cout << " ";
				}
				else if(c == '|') //file output
				{				
					cout << endl << "\n";
				}
				else
				{
					cout << c;
				}	
			}
			cout << endl << "\t\tPress any key to continue...";
			char any;
			cin >> any;
		}
};
int main()
{	
	string u_name, pass;
	int a = 0, st_ch = 0;
	start:system("clear");
	if(a == 4)		//if wrong username of password entered 4 time then this will appear
	{
		cout << endl << "System is locked contact to your State branch.";	
		goto exit;
	}
	cout << endl << "|----------------POLICE FIR MANGEMENT SYSTEM----------------|" << endl << endl;
	cout << endl << endl << "\t\t Enter Username : ";
	cin >> u_name;
	cout << "\t\t Enter Password : ";
	cin >> pass;
	if(u_name == "QWERTY") //checking username
	{					
		if(pass == "FIR007") //checking password
		{				
			st_ch = 10;
		}
		else
		{
			cout << endl << "\t\tWrong password.";
			a = a + 1;
			cout << endl << "\t\tPress any key to continue...";
			char c;
			cin >> c;
			goto start;
		}
	}
	else
	{
		cout << endl << "\t\tWrong username.";
		a = a + 1;
		cout << endl << "\t\tPress any key to continue.......";
		char c;
		cin >> c;
		goto start;
	}
	if(st_ch == 10)
	{
		FIR ob;
		int choice;
		choose:system("clear");
		cout << endl << "|----------------POLICE FIR MANGEMENT SYSTEM----------------|" << endl << endl ;
		cout << endl << "\t\t1. Add FIR Record\n\t\t2. Search Record\n\t\t3. Modify Record\n\t\t4. List Record\n\t\t5. Exit\n\n\t\tEnter Your Choice : ";
		cin >> choice;
		if(choice == 1)  
		{
			system("clear");
			ob.add();	//add() to add record			
			goto choose;
		}
		else if(choice == 2) 
		{
			system("clear");	
			ob.search();	//search() to search a record			
			goto choose;
		}
		else if(choice == 3) 
		{				
			system("clear");
			ob.modify();	//modify() to modify a record			
			goto choose;
		}
		else if(choice == 4) 
		{
			system("clear");
			ob.list();	//list() to see the list of all fir registered			
			goto choose;
		}
		else if(choice == 5)
		{
			system("clear");
			cout << endl << "\t\tPress any key to exit.......";
			char c;
			cin >> c;
		}
		else
		{
			cout <<  endl << "\t\tSorry,Wrong Input Entered. Please Enter again.";
		}
	}
	exit:cout << endl << "\t\t <-------- JAY HIND -------->" << endl ;	// Last (Thank you) message
	return 0;
}
