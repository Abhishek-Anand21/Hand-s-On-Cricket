#include <bits/stdc++.h>

using namespace std;

#define random 1+(rand() % 6)

void won(int n)
{
    int score,i=0,sum=0,out=0;
    cout<<"A valid Run is 0-1-2-3-4-5-6"<<endl;
    cout<<"Enter Run on Every Ball"<<endl;
    while(i<n*6 && out<10)
    {
        i++;
        cout<<i<<" Ball: ";
        cin>>score;
        srand(time(0));
        if(random!=score)
         sum = sum + score;
        else
        {
            cout<<"OUT!"<<endl;
            out++;
        }
    }
    cout<<"\t\t\t\tYour Team's Total Score is: "<<sum<<"-"<<out<<endl;
    cout<<"\t\t\t\tNow Giga Cores will BAT! And it's Your Turn to Bowl"<<endl;
    cout<<"\t\t\t\tGiga Cores need "<<sum+1<<" Runs to Win the Match"<<endl;
    cout<<"A Valid value is 0-1-2-3-4-5-6"<<endl;
    i = 0;
    int val,chase,add=0,out1=0;
    while(i<n*6 && out1<10)
    {
        i++;
        cout<<"Ball: "<<i<<" Pick Your Value: ";
        cin>>val;
        srand(time(0));
        chase = random;
        if(chase!=val)
         add = add + chase;
        else
        {
            cout<<"OUT!"<<endl;
            out1++;
        }
        
        if(sum<add)
        {
            cout<<"\t\t\t\tGIGA CORES WON THE MATCH BY "<<10-out1<<" WICKETS!!!!!";
            cout<<"\t\t\t\tTotal Runs Scored by Giga Cores is: "<<add<<"-"<<out1<<endl;
            cout<<"Thanks for playing! Hope you LIKE it!";
            return;
        }
    }
    cout<<"\t\t\t\tCongrats! YOU WON THE MATCH BY "<<10-out<<" WICKETS!!!!!"<<endl;
    cout<<"\t\t\t\tYour Team's Total Score is: "<<sum<<"-"<<out<<endl;
    cout<<"\t\t\t\tTotal Runs Scored by Giga Cores is: "<<add<<"-"<<out1<<endl;
    cout<<"Thanks for playing! Hope you LIKE it!";
}

void comp(int n)
{
    cout<<"A Valid value is 0-1-2-3-4-5-6"<<endl;
    int i=0,val,chase,add=0,out1=0;
    while(i<n*6 && out1<10)
    {
        i++;
        cout<<"Ball: "<<i<<" Pick Your Value: ";
        cin>>val;
        srand(time(0));
        chase = random;
        if(chase!=val)
         add = add + chase;
        else
        {
            cout<<"OUT!"<<endl;
            out1++;
        }
    }
    cout<<"\t\t\t\tTotal Runs Scored by Giga Cores is: "<<add<<"-"<<out1<<endl;
    cout<<"\t\t\t\tNow You will BAT! And it's Giga Cores Turn to Bowl"<<endl;
    cout<<"\t\t\t\tYour Team needs "<<add+1<<" Runs to Win the Match"<<endl;
    int score,sum=0,out=0;
    cout<<"A valid Run is 0-1-2-3-4-5-6"<<endl;
    cout<<"Enter Run on Every Ball"<<endl;
    i = 0;
    while(i<n*6 && out<10)
    {
        i++;
        cout<<i<<" Ball: ";
        cin>>score;
        srand(time(0));
        if(random!=score)
         sum = sum + score;
        else
        {
            cout<<"OUT!"<<endl;
            out++;
        }
        
        if(sum>add)
        {
            cout<<"\t\t\t\tCongrats! YOU WON THE MATCH BY "<<10-out<<" WCKETS!!!!!"<<endl;
            cout<<"\t\t\t\tTotal Runs Scored by Your Team is: "<<sum<<"-"<<out<<endl;
            cout<<"\t\t\t\tTotal Runs Scored by Giga Cores is: "<<add<<"-"<<out1<<endl;
            cout<<"Thanks for playing! Hope you LIKE it!";
            return;
        }
    }
    cout<<"\t\t\t\tGIGA CORES WON THE MATCH BY "<<10-out1<<" WICKETS!!!!!";
    cout<<"\t\t\t\tTotal Runs Scored by Giga Cores is: "<<add<<"-"<<out1<<endl;
    cout<<"\t\t\t\tTotal Runs Scored by Your Team is: "<<sum<<"-"<<out<<endl;
    cout<<"Thanks for playing! Hope you LIKE it!";
}

void over(int n)
{
    cout<<"\t\t\t\tToss Time!"<<endl;
    int val;
    cout<<"Select any Number from 1 to 10: "<<endl;
    cin>>val;
    cout<<"Odd or Even , press 'O' or 'o' for Odd and 'E' or 'e' for Even: "<<endl;
    char ch;
    cin>>ch;
    if(ch=='O' || ch=='o')
    {
        if(val%2!=0)
        {
            cout<<"You won have won the Toss! And will Bat First"<<endl;
            won(n);
        }
        else
        {
            cout<<"Giga Cores have won the Toss! And will Bat First!"<<endl;
            comp(n);
        }
    }
    else if(ch=='E' || ch=='e')
    {
        if(val%2==0)
        {
            cout<<"You won have won the Toss! And will Bat First"<<endl;
            won(n);
        }
        else
        {
            cout<<"Giga Cores have won the Toss! And will Bat First!"<<endl;
            comp(n);
        }
    }
}

int main()
{
    string name;
    cout<<"\t\t\t\tWelcome to Hands-On-Cricket"<<endl;
    cout<<"\t\t\tThis is a Cricket match between you and the Computer"<<endl;
    cout<<"Enter Your Team Name: ";
    getline(cin,name);
    cout<<"Sounds GREAT!!!"<<endl;
    cout<<"\t\t\t\tIt's "<<name<<" v/s Giga Cores"<<endl;
    cout<<"Select the Match Format: "<<endl;
    cout<<"\t1. 1 Over."<<endl;
    cout<<"\t2. 2 Overs."<<endl;
    cout<<"\t3. 5 Overs."<<endl;
    cout<<"\t4. Test."<<endl;
    int format;
    cout<<"Your Choice: ";
    cin>>format;
    switch(format)
    {
        case 1:
            cout<<"Let's Begin a 1 Over Match."<<endl;
            over(1);
            break;
        case 2:
            cout<<"Let's Begin a 2 Over Match."<<endl;
            over(2);
            break;
        case 3:
            cout<<"Let's Begin a 5 Over Match."<<endl;
            over(5);
            break;
        case 4:
            cout<<"Let's Begin a Test Match."<<endl;
            over(50);
            break;
        default : cout<<"Invalid Choice!"<<endl;
    }
}
