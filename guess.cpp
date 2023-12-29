//_________________________________number guessing game______________________________________________
#include<iostream>
#include<windows.h>
#include<conio.h>
#include<cstdlib>
#include<time.h>
using namespace std;
void display();
void rules();
int main()
{
	srand(time(0));
	bool flag=0;
    int score=0;
display();
string name;	
int amount;
char input;
cout<<"ENTER YOUR NAME :   ";
getline(cin,name);
cout<<endl;
cout<<endl;
rules();
 int ball=rand()%100+1;
while(flag==0){
	int number;
	label:
	cout<<"GUESS ANY NUMBER BETWEEN 1-100  :      ";
	cin>>number;
	if(number>100||number<1){
		cout<<"ENTER A VALID NUMBER\n";
		goto label;
	}
	cout<<endl;
	if(number==ball)
	{
		flag=1;
	}

if(flag==0)
{
	      cout<<"\n\t\t\033[1;33m*******************************************\n\033[0m";
	cout<<endl<<"\n\t\t   OOPS!! WRONG GUESS\n";
	bool x=false;
	char hint;
	label1:
	cout<<"\n\n\t\t   DO YOU WANT TO TAKE HINT? ENTER Y/N: ";
	cin>>hint;
	if(hint=='Y'||hint=='y'){
	if(number>ball)
	cout<<"\n\n\t\t   \033[1;35mHINT:GUESS IS TOO HIGH\n\033[0m";
	else
	cout<<"\n\n\t\t   \033[1;35mHINT:GUESS IS TOO LOW\n\033[0m";
	}
	else if(hint!='N'&&hint!='n'){
		cout<<"\n\t\t   ENTER A VALID CHOICE!!\n";
		goto label1;
	}

	cout<<"\n\n\t\tGUESS AGAIN\n\n";
	cout<<"\n\t\t\033[1;33m*******************************************\n\n\033[0m";
}

score++;

}
float x=(float)100/(float)score;
cout<<"\n\t\t\033[1;33m*******************************************\n\n\033[0m";
	cout<<"\t\t   CONGRATULATIONS "<<name<<" !\n\t\t   YOU GUESS THE RIGHT NUMBER\n\t\t   YOU GUESS THE NUMBER AT "<<score<<" TURN\n\t\t   YOUR ACCURACY IS:"<<x<<"%"<<endl;
	cout<<"\n\t\t\033[1;33m*******************************************\n\n\033[0m";
}
void display()
{ 
	 system("cls");
	 system("color 2");
string var="\t\t\t\033[1;36m\n===========================================================================================\033[0m"
 "\t\t\t\033[1;35m\n__          __  ______   _         _____    ____    __  __   ______    _______    ____  \033[0m" 
 "\t\t\t\033[1;35m\n\\ \\        / / |  ____| | |       / ____|  / __ \\  |  \\/  | |  ____|  |__   __|  / __ \\ \033[0m" 
 "\t\t\t\033[1;35m\n \\ \\  /\\  / /  | |__    | |      | |      | |  | | | \\  / | | |__        | |    | |  | |\033[0m" 
 "\t\t\t\033[1;35m\n  \\ \\/  \\/ /   |  __|   | |      | |      | |  | | | |\\/| | |  __|       | |    | |  | |\033[0m" 
 "\t\t\t\033[1;35m\n   \\  /\\  /    | |____  | |____  | |____  | |__| | | |  | | | |____      | |    | |__| |\033[0m" 
 "\t\t\t\033[1;35m\n   _\\/ _\\/ _   |______| |______|_ \\_____|__\\____/__|_|  |_| |______|     |_|     \\____/\033[0m"  
 "\t\t\t\033[1;35m\n  | \\ | | | |  | | |  \\/  | |  _ \\  |  ____| |  __ \\                                  \033[0m"   
 "\t\t\t\033[1;35m\n  |  \\| | | |  | | | \\  / | | |_) | | |__    | |__) |                                 \033[0m"   
 "\t\t\t\033[1;35m\n  | . ` | | |  | | | |\\/| | |  _ <  |  __|   |  _  /                                  \033[0m"   
 "\t\t\t\033[1;35m\n  | |\\  | | |__| | | |  | | | |_) | | |____  | | \\ \\                                  \033[0m"   
 "\t\t\t\033[1;35m\n  |_|_\\_|  \\____/__|_| _|_|_|____/ _|______| |_|__\\_\\    _____          __  __ ______ \033[0m"   
 "\t\t\t\033[1;35m\n / ____| |  | |  ____|/ ____/ ____|_   _| \\ | |/ ____|  / ____|   /\\   |  \\/  |  ____|\033[0m"   
 "\t\t\t\033[1;35m\n| |  __| |  | | |__  | (___| (___   | | |  \\| | |  __  | |  __   /  \\  | \\  / | |__   \033[0m"   
 "\t\t\t\033[1;35m\n| | |_ | |  | |  __|  \\___  \\___ \\  | | | . ` | | |_ | | | |_ | / /\\ \\ | |\\/| |  __|  \033[0m"   
 "\t\t\t\033[1;35m\n| |__| | |__| | |____ ____) |___) |_| |_| |\\  | |__| | | |__| |/ ____ \\| |  | | |____ \033[0m"   
 "\t\t\t\033[1;35m\n \\_____|\\____/|______|_____/_____/|_____|_| \\_|\\_____|  \\_____/_/    \\_\\_|  |_|______|\033[0m"
            "\t\t\t\033[1;36m\n===========================================================================================\n\033[0m";  

 for(int i=0;i<var.size();i++)
 {
 	Sleep(1);
 	cout<<var[i];
 }
 
}
void rules()
{
	
	   cout << "\n\n";
      cout<<"\n\n========================================================================================\n\n";
    cout << "\t\t\033[1;33mRULES OF THE GAME\033[0m\n";
       cout<<"\n\n========================================================================================\n\n";
    cout << "\t\033[1;34m1. CHOSE ANY NUMBER BETWEEN 1-100\033[0m\n";
    cout << "\t\033[1;34m2. YOU YOU GUESS THE RIGHT NUMBER YOU WIN, GAME WILL END\033[0m\n";
    cout << "\t\033[1;34m3. IF YOUR GUESS IS WORNG YOU NEED TO PLAY AGAIN UNTILL YOU GUESS IT RIGHT\033[0m";
   cout<<"\n\n========================================================================================\n\n";
}