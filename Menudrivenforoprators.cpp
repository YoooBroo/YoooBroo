#include<iomanip>
#include<iostream>

using namespace std;

int main()
{
    int choice,x,y,choice1,choice2,choice3;
    do{
    cout<<"1 for arithmatic opration"<<endl;
    cout<<"2 for relational opration"<<endl;
    cout<<"3 for bitwise opration"<<endl;
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
            if (choice1!=0){
            cout<<"enter X and Y = ";
            cin>> x >>y;
            }
            
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
             cout<<"----------------------------------------------------------------------"<<endl;
           
        }while(choice1 != 0);
        }
        break;
        case 2:
        {
            do{

            cout<<"1.Less Than "<<endl;
            cout<<"2.Greater Than"<<endl;
            cout<<"3.Less Than or Equal"<<endl;
            cout<<"4.Greater Than Equal"<<endl;
            cout<<"5.Comparision"<<endl;
            cout<<"0 for exit"<<endl;
            cout<<"Enter Your Choice = "<<endl;
            cin>>choice2;
            if (choice2!=0){
            cout<<"enter X and Y = ";
            cin>> x >>y;
            }
            
            
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
                
                cout<<"1=true 0=false";
            }
             cout<<"----------------------------------------------------------------------"<<endl;
            
            
            }while(choice2 != 0);
            break;
        }
        case 3:
        {
            do{
                
            cout<<"1.Bitwise AND"<<endl;
            cout<<"2.Bitwise OR"<<endl;
            cout<<"3.Bitwise XOR"<<endl;
            cout<<"4.Bitwise left for X"<<endl;
            cout<<"5.Bitwise left for Y"<<endl;
            cout<<"6.Bitwise Right for X"<<endl;
            cout<<"7.Bitwise Right for Y"<<endl;
            cout<<"8.Bitwise Complement for X"<<endl;
            cout<<"9.Bitwise Complement for Y"<<endl;
            cout<<"0 for exit"<<endl;
            cout<<"Enter Your Choice = "<<endl;
            cin>>choice3;
            if (choice3 == 1 || choice3 == 2 || choice3 == 3 ){
            cout<<"enter X and Y = ";
            cin>> x >>y;
            }
            else if (choice3 == 4 || choice3 == 6 || choice3 == 8)
            {
                cout<<"enter X  = ";
                cin>> x ;
            }
            else 
            {
                cout<<"enter Y = ";
                cin>> y ;
            }
            
            switch(choice3)
            {
                case 1:
                {
                    cout<<" X & Y = " << (x&y) <<endl;
                }
                break;
                case 2:
                {  
                    cout<<"X | Y = "<< (x|y) <<endl;
                }
                break;
                case 3:
                {
                    cout<<" X ^ Y = " << (x^y) <<endl;
                }
                break;
                case 4:
                {
                    cout<<" X << 2 = " << (x<<2) <<endl;
                }
                break;
                case 5:
                {
                    cout<<" Y << 2 = " << (y<<2) <<endl;
                }
                break;
                case 6:
                {
                    cout<<" X >> 2 = " << (x>>2) <<endl;
                }
                break;
                case 7:
                {
                    cout<<" Y >> 2 = " << (y>>2) <<endl;
                }
                break;
                case 8:
                {
                    cout<<" ~X = " << (~x)<<endl;
                }
                break;
                case 9:
                {
                    cout<<" ~Y = " << (~y)<<endl;
                }
                break;
            }
             cout<<"----------------------------------------------------------------------"<<endl;
                
                
            }while(choice3!=0);
            break;
            
           
        }
        case 0:
        
        cout<<setw(45)<<"Thank You"<<endl;
        cout<<"------------------------------------------------------------------------------------------"<<endl;
        
        
        
        
    }
      }while(choice!=0);
    
    
    return 0;
}
