#include <cstdlib>
#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

int random(int range)
{
    int r;
    int maxNumber = range,minNumber =0;
    srand(time(0));
    for (int i = 0; i <2 ; i++)
       {
        r = (rand() % (maxNumber - minNumber + 1)) + minNumber;
       }
        return r;

}
void hint1 (int n)
{
    int result =0;
    while(n>0)
    {
        int rem = n%10;
        n=n/10;
        result = result+rem;
    }
    cout<<"The sum of number is "<<result<<endl;
}
void hint2 (int n)
{
    int firstDigit,counter =0;
    while(n>10)
    {
        n=n/10;
        counter++;
    }
    firstDigit = n;
    cout<<"There are "<<counter +1<<" digit"<<endl;
    cout<<"First Digit is " <<firstDigit<<endl;
}
void hint3 (int n)
{
    if(n>9)
    {
        cout<<n-9 << " - "<<n+9<<endl;

    }
    else
    {   if(n>=0)
        cout<<n-2<<" - "<<n+2<<endl;
    }

}

int main()
{
    int range,number,guess,round,score =0;;
    string yesorno;
    cout<<"How Much round you want to play"<<endl;
    scanf("%d",&round);
    while(round--)
    {
        cout<<"Enter The Range You want To play "<<endl;
        cin>>range;
        number = random(range);
        //cout<<number<<endl;
        cout<<"Guess the number"<<endl;
        cin>>guess;

        if(guess != number)
        {
            cout<<"Would You Like Hint (Y/N)"<<endl;
            cin>>yesorno;
            if(yesorno == "Y" || yesorno == "y")
            {
                hint1(number);
                int guess2;
                cout<<"Enter your Second Guess"<<endl;
                cin>>guess2;
                if(guess2 == number)
                {
                    score = score+ 30;
                    cout<<"You Win !!! with score" <<score<<endl;
                    continue;
                }
                else if(guess2!=number)
                {
                    cout<<"Would You Like Hint (Y/N)"<<endl;
                    cin>>yesorno;
                    if(yesorno == "Y" || yesorno == "y")
                    {
                        hint2(number);
                        int guess3;
                        cout<<"Enter Your third guess"<<endl;
                        cin>>guess3;
                            if(guess3==number)
                            {
                                score = score+20;
                                cout<<"You Win !!! with score" <<score<<endl;
                                continue;
                            }
                            else if(guess3!=number)
                            {
                                cout<<"Would You Like Hint (Y/N)"<<endl;
                                cin>>yesorno;
                                if(yesorno == "Y" || yesorno == "y")
                                {
                                    hint3(number);
                                    int guess4;
                                    cout<<"Enter Your last guess with no hint left"<<endl;
                                    cin>>guess4;
                                    if(guess4==number)
                                    {
                                        cout<<"At last you Guessed it right"<<endl;
                                        score=score+10;
                                        cout<<"Your score is :"<<score<<endl;
                                    }
                                    else{
                                        cout<<"You lost this round Better luck nest time"<<endl;
                                        cout<<"Your Score Is : "<<score<<endl;
                                        continue;
                                    }
                                }
                                else
                                {
                                     cout<<"Your Scoreboard Is :"<<score <<endl;
                                     continue;
                                }
                    }

                    else
                    {
                       cout<<"Your Scoreboard Is :"<<score <<endl;
                       continue;
                    }
                }
            }
            else
            {
                cout<<"Your Scoreboard Is :"<<score <<endl;
                continue;
            }
        }
        }
        else
        {
            printf("You WON !!!!!\n");
            score = score +50;
            cout<<"Your score is.........."<<endl;
            Sleep(3000);
            cout<<"Score : "<<score<<endl;
            continue;
        }
    }

}

