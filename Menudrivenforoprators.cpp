#include<iomanip>
#include<iostream>

using namespace std;

int main()
{
    int choice,x,y,choice1,choice2;
    do{
    cout<<"1 for arithmatic opration"<<endl;
    cout<<"2 for relational opration"<<endl;
    cout<<"0 for exit"<<endl;
    cout<<"Enter Your Choice = ";
    cin>>choice;
    
    switch(choice)
    {
        case 1:
        {
            
            do{
           

            cout<<"1.Addition "<<endl;
            cout<<"2.Subtraction"<<endl;
            cout<<"3.Multipication"<<endl;
            cout<<"4.Division"<<endl;
            cout<<"5.Modulus"<<endl;
            cout<<"0 for exit"<<endl;
            cout<<"Enter Your Choice = "<<endl;
            cin>>choice1;
            cout<<"enter X and Y = ";
            cin>>x >>y;
            
            switch(choice1)
            {
                case 1 :
                cout<<"Addtion Of X & Y = "<<(x+y)<<endl;
                break;
                case 2 :
                cout<<"Subtraction Of X & Y = "<<(x+y)<<endl;
                break;
                case 3:
                cout<<"Multipication Of X & Y = "<<(x*y)<<endl;
                break;
                case 4:
                cout<<"Division Of X & Y = "<<(x/y)<<endl;
                break;
                case 5:
                cout<<"Modulus Of X & Y = "<<(x%y)<<endl;
                break;
                
                
            }
           
        }while(choice1 != 0);
        }
        break;
        case 2:
        {
            do{
            cout<<"enter X and Y = ";
            cin>>x >>y;

            cout<<"1.Less Than "<<endl;
            cout<<"2.Greater Than"<<endl;
            cout<<"3.Less Than or Equal"<<endl;
            cout<<"4.Greater Than Equal"<<endl;
            cout<<"5.Comparision"<<endl;
             cout<<"0 for exit"<<endl;
            cout<<"Enter Your Choice = "<<endl;
            cin>>choice2;
            cout<<"enter X and Y = ";
            cin>>x >>y;
            
            
            switch(choice2)
            {
                case 1:
                {
                    cout<<" X < Y = " << (x<y)<<endl;
                }
                break;
                case 2:
                {
                    cout<<"X > Y = "<< (x>y)<<endl;
                }
                case 3:
                {
                    cout<<" X <= Y = " << (x<=y)<<endl;
                }
                break;
                case 4:
                {
                    cout<<" X >= Y = " << (x>=y)<<endl;
                }
                break;
                case 5:
                {
                    cout<<" X == Y = " << (x==y)<<endl;
                }
                break;
                cout<<"1=true 0=false";
            }
            
            
            }while(choice2 != 0);
            
            
            
        }
        
        
    }
      }while(choice!=0);
    
    
    return 0;
}
