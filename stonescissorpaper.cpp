#include<iostream>
#include<ctime>
#include<cstdlib>
#include<unistd.h>

using namespace std ; 
void loading(){

for (int i=1 ; i<=100 ; i++)
{
cout<<" LOADING "<<i<<" % ";
usleep(1000);
system("cls");
}
cout<<"STONE , PAPER , SCISSOR GAME LOADED SUCCESSFULLY \n PRESS ENTER TO CONTINUE \n";
cin.get();
}

int main()
{    loading();
    int rounds , player_score=0 ,computer_score=0 ;
    string player_name ;
   cout<<" ENTER PLAYER NAME : "<<player_name;
   cin >> player_name;

   system("cls");

   cout<<" NO OF ATTEMPTS YOU WANT TO PLAY : "<<endl;
   cin>>rounds ;
  
   for(int i =1;i<=rounds;i++)
   {     
         system("cls");
         int player_choice,computer_choice ;  
         
          cout<<" ROUND  "<<i<<" / "<< rounds ;
          cout<<" PLAYER'S SCORE :   "<<player_score <<endl;
          cout<<" COMPUTER'S SCORE :   "<<computer_score <<endl;
          cout<<" 1. STONE \n 2. PAPER \n 3. SCISSOR \n";
          do 
          {
          cout<<" ENTER YOUR CHOICE : \n";
          cin>>player_choice;
          } while(player_choice != 1 && player_choice != 2 && player_choice != 3 );

          srand(time(0));
          computer_choice=(rand() % 3)+1;
   
          if (player_choice == 1 && computer_choice ==3)
          {  
                  cout<<" PLAYER WINS  "<<endl ;
                  player_score++;

          }      
         else if (player_choice == 2 && computer_choice ==1)
          {  
                  cout<<" PLAYER WINS  "<<endl ;
                  player_score++;

          }      
           else if (player_choice == 3 && computer_choice ==2)
          {  
                  cout<<" PLAYER WINS  "<<endl ;
                  player_score++;

          }      
         else if (player_choice == computer_choice )
          {  
                  cout<<" DRAW  "<<endl ;
                
          }      
         else
          {  
                  cout<<" COMPUTER WINS  "<<endl ;
                  computer_score++;

          }      
       
  cout<<"PRESS ENTER TO CONTINUE \n";
  cin.get();


   }

system("cls");
if (player_score > computer_score )
{   cout<<"PLAYER'S SCORE : "<<player_score<<endl;

   cout<<"COMPUTER'S SCORE : "<<computer_score<<endl;

    cout<<player_name<<"  WINS  ";
}
else if (player_score < computer_score )
{
    cout<<player_name<<" LOOSE  ";
}

else 
{
    cout<<" GAME DRAW  ";
}
  return 0 ;
}

