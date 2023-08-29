#include<iostream>
#include<ctime>
char comptchoice(char player);
void prtchoice(char ch);
void prtchoice(char *ch);
char getchoice();
void checkwin(char c1,char c2);
bool Continue();
int main()
{
    std::cout<<"HELLO IM YASH\nTHIS IS ROCK-PAPER-SCISSORS GAME IN C++\n";
    label:
    char player=getchoice();
    prtchoice(player);
    char comp=comptchoice(player);
    prtchoice(&comp);
    checkwin(player,comp);
    if(Continue()) goto label;
    std::cout<<"THANKS FOR TRYING MY CODE";
    return 0;
}
char getchoice()
{
    char player;
    std::cout<<"ENTER\n<P> FOR PAPER\n<R> FOR ROCK\n<S> FOR SCISSOR\n";
    do{
    std::cout<<"=> ";
    std::cin>>player;
    }while(player!='S'&&player!='P'&&player!='R');
    return player;
}
void prtchoice(char ch)
{
    switch(ch)
    {
        case 'R':
        std::cout<<"\nYOUR CHOICE IS ROCK  🪨\n";
        break;
        
        case 'P': 
        std::cout<<"\nYOUR CHOICE IS PAPER 🗞️\n";
        break;
        
        case 'S':
        std::cout<<"\nYOUR CHOICE IS SCISSOR ✂️\n";
        break;
    }
}
void prtchoice(char *ch)
{
    switch(*ch)
    {
        case 'R':
        std::cout<<"\nCOMPUTER CHOICE IS ROCK  🪨\n";
        break;
        
        case 'P': 
        std::cout<<"\nCOMPUTER CHOICE IS PAPER 🗞️\n";
        break;
        
        case 'S':
        std::cout<<"\nCOMPUTER CHOICE IS SCISSOR ✂️\n";
        break;
    }
}
char comptchoice(char player)
{
   char ch;
   srand(time(0));
   int n=rand()%3+1;
   switch(n)
   {
       case 1:
       ch='P';
       break;
       
       case 2:
       ch='R';
       break;
       
       case 3:
       ch='S';
       break;
   }
   return ch;
}
void checkwin(char c1,char c2)
{
    //c1 is for player and c2 is for computer 
    switch(c1)
    {
        case 'R':
        c2=='P'?std::cout<<"\nCOMPUTER WINS 🤧":c2=='R'?std::cout<<"\nIT'S A TIE🫠":std::cout<<"\nYOU WIN 🎉";
        break;
        
        case 'P':
        c2=='S'?std::cout<<"\nCOMPUTER WINS 🤧":c2=='P'?std::cout<<"\nIT'S A TIE🫠":std::cout<<"\nYOU WIN 🎉";
        break;
        
        case 'S':
        c2=='R'?std::cout<<"\nCOMPUTER WINS 🤧":c2=='S'?std::cout<<"\nIT'S A TIE🫠":std::cout<<"\nYOU WIN 🎉";
        break;
    }
}
bool Continue()
{
    char ch;
    std::cout<<"\nCONTINUE ? :\n(YES:Y\tNO:N)\n=>";
    std::cin>>ch;
    if(ch=='Y') return true;
    return false;   
}