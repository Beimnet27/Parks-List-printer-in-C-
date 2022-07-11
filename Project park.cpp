
//this program is used to organize the Park systems
//recordes the Awash National Park's Data

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class park
{
	
    public:
    string name;
    string location;
    
    park()
	{
		
		name="Awash National Park\n";
        location="Awash";
        
}
   virtual void out()
   {
   	
		cout<<name;
		cout<<location;
		
    }
};
class animals
{
	
    public:
    string Aname[4];
    int numofspecies;
    
    animals()
	{
		
        Aname[0]="Red Fox";
		Aname[1]="Niala";
		Aname[2]="Lion";
		Aname[3]="Tigar";
        numofspecies=234;
        
    }
    void out()
	{
        cout<<Aname[1]<<endl;
        cout<<numofspecies;
    }
};
class employees : public park, public animals
{
	
    public:
    int numemp=1347;
    fstream myfile;
    void handle()
    {
	
	fstream myfile;
			myfile.open("park.txt",ios::out);
			if(myfile.is_open())
			{
				myfile<<"National Park Data"<<endl;
				myfile<<"Name	: "<<name<<endl;
				myfile<<"Location	: "<<location<<endl;
				myfile<<"Number of Specieses in this Park"<<endl;
				myfile<<numofspecies<<endl;
				myfile<<"Sample Animals"<<endl;
				myfile<<Aname[0]<<endl;
				myfile<<Aname[1]<<endl;
				myfile<<Aname[2]<<endl;
				myfile<<Aname[3]<<endl;
				myfile<<"Employers number in this park"<<endl;
				myfile<<numemp<<endl;
				
				myfile.close();
			}
			
		}
void viewer()
{
	ifstream infile;
	infile.open("park.txt",ios::in);
	string str;
	while(!infile.eof())
	{
		getline(infile,str);
		cout<<str<<endl;
	}
	
	infile.close();
	}
	
};
int main()
{
	cout<<"%--%------%------%------%-----%------%------%------%-------%\n\n";
	
	cout<<"This Program records the Awash National Park's Data\n\n";
	
	cout<<"%--%------%------%------%-----%------%------%------%-------%\n\n";
		
   employees emp;
   
   emp.handle();
   
   emp.viewer();
   
   
return 0;
}
