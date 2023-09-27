#include <iostream>

// I want to make this calculator so that i can perform with previous result using Linked List
using namespace std;

struct calculator{
    int num1;
    struct calculator *next;
};
struct calculator *start = NULL;

struct calculator *createnode (int num)
{
    struct calculator *p = new struct calculator;
    if(p==NULL)
    {
        cout<<"Memory Not Allocated"<<endl;
    }

    p->num1 = num;
    p->next = NULL;
    return p;

}
void display()
{   struct calculator *temp=start;
    while(temp!=NULL)
    {
        cout<<temp->num1<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertnode(int item)
{
    struct calculator *temp = createnode(item);
    if(start == NULL)
    {
        start=temp;
    }
    else if(start->next == NULL)
    {
        start->next = temp;
    }


}
void numberCheck()
{
    if(start == NULL)
    {int item3;
        cout<<"Enter The Number First"<<endl;
        cin>>item3;
        insertnode(item3);
        //continue;
    }
    if(start->next == NULL)
    {int item4;
    cout<<"Enter The Second Number"<<endl;
    cin>>item4;
    insertnode(item4);
        // continue;
    }
}

void addWithPreviousTerm(calculator *temp1, calculator *temp2)
{
    struct calculator *temp3 = start;

    temp3->num1 = temp1->num1+temp2->num1;
    temp2->num1 = temp3->num1;
    start = temp2;
    temp2->next = NULL;
    cout<<"Result :"<<temp2->num1<<endl;
    free(temp3);
}
void subWithPreviousTerm(calculator *temp1, calculator *temp2)
{
    struct calculator *temp3 = start;

    temp3->num1 = temp1->num1-temp2->num1;
    temp2->num1 = temp3->num1;
    start = temp2;
    temp2->next = NULL;
    cout<<"Result :"<<temp2->num1<<endl;
    free(temp3);
}
void multiplyWithPreviousTerm(calculator *temp1, calculator *temp2)
{
    struct calculator *temp3 = start;

    temp3->num1 = (temp1->num1) * (temp2->num1);
    temp2->num1 = temp3->num1;
    start = temp2;
    temp2->next = NULL;
    cout<<"Result :"<<temp2->num1<<endl;
    free(temp3);
}
void divideWithPreviousTerm(calculator *temp1, calculator *temp2)
{
    struct calculator *temp3 = start;

    temp3->num1 = temp1->num1/temp2->num1;
    temp2->num1 = temp3->num1;
    start = temp2;
    temp2->next = NULL;
    cout<<"Result :"<<temp2->num1<<endl;
    free(temp3);
}
void newcalculation()
{   
    start = NULL;
    
}
int main()
{
    int operationchoices;

    while(1){
        cout<<"1: Add\n2: Subtract\n3: Multiply\n4: Division\n5: Display The Numbers\n6: New Calculation"<<endl;
        cout<<"Enter Your Choice: ";
        cin>>operationchoices;
        switch(operationchoices)
        {
            case 1:
                numberCheck();
                addWithPreviousTerm(start,start->next);
                break;
            case 2:
                numberCheck();
                subWithPreviousTerm(start,start->next);
                break;
            case 3:
                numberCheck();
                multiplyWithPreviousTerm(start,start->next);
                break;
            case 4:
                numberCheck();
                divideWithPreviousTerm(start,start->next);
                break;
            case 5:
                display();
                break;
            case 6:
                newcalculation();
                break;
            default :
                cout<<"Please Enter The valid Number :"<<endl;
        }
    }
    return 0;
}
