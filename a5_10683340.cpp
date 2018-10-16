#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct Student{
	int id;
	string name;
	int age;
	char gender;
	float score;
};

int main()
{
	ofstream  Stu;
	Student ph[4];
	for( int a = 0; a < 4 ; a++){
		ph[a];
		cout<<"Enter your ID Number here"<<endl;
		cin >> ph[a].id;
		cout<<"Enter your Name in full"<<endl;
		cin >> ph[a].name;
		cout<<"Enter your Age"<<endl;
		cin >> ph[a].age;
		cout<<"Enter your Gender "<<endl;
		cin >> ph[a].gender;
		cout<<"Enter your Score"<<endl;
		cin >> ph[a].score;
	}
       int Grade [5];
 
  for(int i=0; i< 5; i++){
  	if(ph[i].score>=80 && ph[i].score<=100 )
       Grade[i]='A';
	if(ph[i].score=70 && ph[i].score<=79 )
       Grade[i]='B';  	   
	if(ph[i].score>=60 && ph[i].score<=69 )
       Grade[i]='C';
	if(ph[i].score>=50 && ph[i].score<=59 )
       Grade[i]='D';  		   
	if(ph[i].score>=40 && ph[i].score<=49 )
       Grade[i]='E';  	
	if(ph[i].score>=0 && ph[i].score<=39 )
       Grade[i]='F';  		   	     	     	
	  }
  
 int sum, sum1, Ave , AveS;
 Stu.open("Student Data.txt");
 Stu<<"  ID Number        Name      Age        Gender           Score       Grade "<<endl;
 Stu<<" *******************************************************************************"<<endl;
 
 for(int b=1; b<=5; b++){
 	Stu<<b<<". "<<ph[b].id<<"       "<<ph[b].name<<"      "<<ph[b].age<<"       "<<ph[b].gender<<"      "<<ph[b].score<<"            "<<Grade[b]<<endl;
 	
 }
 for (int l=1; l<=5; l++){
 	sum = sum + ph[l].score;
 }
 Ave = sum / 5;
 for( int m = 1 ; m <= 5;m++){
 	sum1 = sum1 + ph[m].age;
 }
 AveS = sum1 / 5;
 
 int MC = 0, FC = 0;
 for( int n = 1 ; n <= 5 ; n++){
 	if(ph[n].gender='m')
 	MC++;
 	
 	if(ph[n].gender = 'f')
 	FC++;
 }
 
 Stu<<"**********************************************************************************"<<endl;
 Stu<<"Average Age : "<< AveS;
 Stu<<"Average Score : "<<Ave;
 Stu<<"Male Count : "<<MC;
 Stu<<"Feamle Count : "<<FC;
 system("pause");
 return 0;
}
 
 
