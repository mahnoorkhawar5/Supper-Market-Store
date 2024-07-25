#include<iostream>
#include<conio.h>
using namespace std;
int main()
{  
int lux=40;
int lays=20;
	cout<<"**********************"<<endl;
	cout<<"**********************"<<endl;
	cout<<"**********************"<<endl;
	cout<<"@@@@@@@@@@            @              @              @@@@@@@@@@  "<<endl;
	cout<<"@                     @  @         @ @              @           "<<endl;
	cout<<"@                     @    @     @   @              @           "<<endl;
	cout<<"@                     @       @      @              @           "<<endl;
	cout<<"@@@@@@@@@@            @              @              @@@@@@@@@@  "<<endl;
	cout<<"         @            @              @                       @  "<<endl;
	cout<<"         @            @              @                       @  "<<endl;
	cout<<"         @            @              @                       @  "<<endl;
	cout<<"@@@@@@@@@@            @              @              @@@@@@@@@@  "<<endl;
	cout<<"**********************"<<endl;
	cout<<"**********************"<<endl;
	cout<<"**********************"<<endl;
	string firstname;
	string lastname;
	string userName;
    string userPassword;
int loginAttempt = 0;

    {
       
        cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\tDo you already have an account?"<<endl;
        cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\tIf YES then press 0 If No then press 1";
      int num; 
	  cin>>num;
        
        if (num==0)
        {
        cout <<"\n\n\n\n\n\n\n\n\n\t\t\t\t\tPlease enter your first name: ";
        cin >> firstname;
        cout <<"\n\n\n\n\n\n\n\n\n\t\t\t\t\tPlease enter your last  name: ";
        cin>>lastname;
        userName=firstname+lastname;
        cout << "\n\t\t\t\t\t\t\tPlease enter your user password: ";
        cin >> userPassword;

        if (firstname == "Mahnoor" )
        {
        	 if(lastname=="Khawar")
        	{
        		 if(userPassword=="7890")
			
			cout <<"\n\n\n\n\n\n\t\t\t\t\t\tWelcome aieman basit!\n";}
            
        }
       
      
        else
        {
            cout << "\n\t\t\t\t\t\t\tInvalid login attempt. Please try again.\n" << '\n';
        }
    }
    if (loginAttempt == 6)
    {
            cout << "Too many login attempts!.";
            return 0;
    }
     if(num==1)
    {
            string un;
            cout<<"\n\n\t\t\t\t\t\t\tPLease enter your username: ";
            cin>>un;
            cout<<"\n\t\t\t\t\t\t\tPlease enter your password : ";
            int pas;
            cin>>pas;
            cout<<"\n\t\t\t\t\t\t\tPlease enter your phone number: ";
            int pn;
            cin>>pn;
            cout<<"\n\t\t\t\t\t\t\tPLease enter your email: ";
            string mail;
            cin>>mail;
            cout<<"\n\t\t\t\t\t\t\tAccount created succsesfully!";
        }
    } 
	string p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,name,pd;
	int pr1,pr2,pr3,pr4,pr5,pr6,pr7,pr8,pr9,pr10,more1,more2,more3,more4,more5,more6,more7,more8,more9,more10,more11;
	int q[10];
	cout<<"Enter Your First Product:";
	cin>>p1;
	cout<<"product to be deleted:";
	cin>>pd;
	cout<<"Enter Quantity";
	cin>>q[0];
	cout<<"Enter First Product Price:";
	cin>>pr1;
	cout<<"fir You want to add more Product yes=1 No=0:::";
	cin>>more1;
	switch(more1)
	{
		case 1:
			cout<<"Enter Your Second Product:";
			cin>>p2;
	        cout<<"Enter Quantity";
	        cin>>q[1];
			cout<<"Enter Second Product Price:";
			cin>>pr2;
			cout<<"if You Buy More Product for Yes=1 No=0:::";
			cin>>more2;
			
			switch(more2)
			{
			case 1:
			cout<<"Enter Your Third Product:";
			cin>>p3;
			cout<<"Enter Quantity";
	        cin>>q[2];
			cout<<"Enter price of third product:";
			cin>>pr3;
			cout<<"if You want to add More Product for Yes=1 and No=0:::";
			cin>>more3;
			switch(more3)
			{
				case 1:
				cout<<"Enter your fourth Product:";
				cin>>p4;
				cout<<"Enter Quantity";
	            cin>>q[3];
				cout<<"Enter Price of fourth product:";
				cin>>pr4;
				cout<<"if you want to add more project then press 1=yes and 0=No:::";
				cin>>more4;
				switch(more4)
				{
					case 1:
					cout<<"Enter Your Fifth Product Product:";
					cin>>p5;
					cout<<"Enter Quantity";
	                cin>>q[4];
					cout<<"Enter The Price:";
					cin>>pr5;
					cout<<"if you want to add more project then press 1=yes and 0=No:::";
					cin>>more5;
					switch(more5)
					{
					case 1:
					cout<<"Enter Your Sixth Product Product:";
					cin>>p6;
					cout<<"Enter Quantity";
	                cin>>q[5];
					cout<<"Enter The Price:";
					cin>>pr6;
					cout<<"if you want to add more project then press 1=yes and 0=No:::";
					cin>>more6;
					switch(more6)
					{
						case 1:
					cout<<"Enter Your Seventh Product Product:";
					cin>>p7;
					cout<<"Enter Quantity";
	                cin>>q[6];
					cout<<"Enter The Price:";
					cin>>pr7;
					cout<<"if you want to add more project then press 1=yes and 0=No:::";
					cin>>more7;
					switch(more7)
					{
						case 1:
					cout<<"Enter Your Eigth Product Product:";
					cin>>p8;
					cout<<"Enter Quantity";
	                cin>>q[6];
					cout<<"Enter The Price:";
					cin>>pr8;
					cout<<"if you want to add more project then press 1=yes and 0=No:::";
					cin>>more8;
					switch(more8)
					{
						case 1:
					cout<<"Enter Your Ninth Product Product:";
					cin>>p9;
					cout<<"Enter Quantity";
	                cin>>q[7];
					cout<<"Enter The Price:";
					cin>>pr9;
					cout<<"if you want to add more project then press 1=yes and 0=No:::";
					cin>>more9;
					switch(more9)
					{
						case 1:
							cout<<"Enter Your Ninth Product Product:";
					cin>>p9;
					cout<<"Enter Quantity";
	                cin>>q[8];
					cout<<"Enter The Price:";
					cin>>pr9;
					cout<<"if you want to add more project then press 1=yes and 0=No:::";
					cin>>more10;
					switch(more10)
					{
						case 1:
					cout<<"Enter Your Tenth Product Product:";
					cin>>p10;
					cout<<"Enter Quantity";
	                cin>>q[9];
					cout<<"Enter The Price:";
					cin>>pr10;
					cout<<"if you want to add more project then press 1=yes and 0=No:::";
					cin>>more11;
							switch(more11)
							{
								case 1:
									break;
									
										case 0:
						cout<<"Enter Your Name:";
						cin>>name;
						cout<<endl;
						cout<<name<<":You Pirchased products and their bill\n"<<p1<<":"<<pr1<<p2<<":"<<pr2<<p3<<":"<<pr3<<p4<<":"<<pr4<<p5<<":"<<pr5<<p6<<":"<<pr6<<p7<<":"<<pr7<<p8<<":"<<pr8<<p9<<":"<<pr9<<p10<<":"<<pr10<<"your total Bill is="<<pr1+pr2+pr3+pr4+pr5+pr6+pr7+pr8+pr9+pr10;
						if(pr1+pr2+pr3+pr4+pr5+pr6+pr8+pr9+pr10>6000)
						{
							cout<<"After 100 Rupees off :"<<pr1+pr2+pr3+pr4+pr5+pr6+pr7+pr8+pr9+pr10-100;
						}
										break;
							}
							break;
						case 0:
						cout<<"Enter Your Name:";
						cin>>name;
						cout<<endl;
						cout<<name<<":You Pirchased products and their bill\n"<<p1<<":"<<pr1<<p2<<":"<<pr2<<p3<<":"<<pr3<<p4<<":"<<pr4<<p5<<":"<<pr5<<p6<<":"<<pr6<<p7<<":"<<pr7<<p8<<":"<<pr8<<p9<<":"<<pr9<<p10<<":"<<pr10<<"your total Bill is="<<pr1+pr2+pr3+pr4+pr5+pr6+pr7+pr8+pr9+pr10;
						if(pr1+pr2+pr3+pr4+pr5+pr6+pr8+pr9+pr10>6000)
						{
							cout<<"After 100 Rupees off :"<<pr1+pr2+pr3+pr4+pr5+pr6+pr7+pr8+pr9+pr10-100;
						}	
						break;
					}
							break;
						case 0:
						cout<<"Enter Your Name:";
						cin>>name;
						cout<<endl;
						cout<<name<<":You Pirchased products and their bill\n"<<p1<<":"<<pr1<<p2<<":"<<pr2<<p3<<":"<<pr3<<p4<<":"<<pr4<<p5<<":"<<pr5<<p6<<":"<<pr6<<p7<<":"<<pr7<<p8<<":"<<pr8<<p9<<":"<<pr9<<"your total Bill is="<<"\n"<<pr1*q[0]+pr2*q[1]+pr3*q[2]+pr4*q[3]+pr5*q[4]+pr6*q[5]+pr7*q[6]+pr8*q[7]+pr9*q[8];
						if(pr1*q[0]+pr2*q[1]+pr3*q[2]+pr4*q[3]+pr5*q[4]+pr6*q[5]+pr7*q[6]+pr8*q[7]+pr9*q[8]>6000)
						{
							cout<<"After 100 Rupees off :"<<pr1*q[0]+pr2*q[1]+pr3*q[2]+pr4*q[3]+pr5*q[4]+pr6*q[5]+pr7*q[6]+pr8*q[7]+pr9*q[8]-100;
						}		
							break;
					}
							break;
							case 0:
						cout<<"Enter Your Name:";
						cin>>name;
						cout<<endl;
						cout<<name<<":You Pirchased products and their bill\n"<<p1<<":"<<pr1<<p2<<":"<<pr2<<p3<<":"<<pr3<<p4<<":"<<pr4<<p5<<":"<<pr5<<p6<<":"<<pr6<<p7<<":"<<pr7<<p8<<":"<<pr8<<"your total Bill is="<<"\n"<<pr1*q[0]+pr2*q[1]+pr3*q[2]+pr4*q[3]+pr5*q[4]+pr6*q[5]+pr7*q[6]+pr8*q[7];
						if(pr1*q[0]+pr2*q[1]+pr3*q[2]+pr4*q[3]+pr5*q[4]+pr6*q[5]+pr7*q[6]+pr8*q[7]>6000)
						{
							cout<<"After 100 Rupees off :"<<pr1*q[0]+pr2*q[1]+pr3*q[2]+pr4*q[3]+pr5*q[4]+pr6*q[5]+pr7*q[6]+pr8*q[7]-100;
						}
								break;
					}
							break;
							case 0:								
						cout<<"Enter Your Name:";
						cin>>name;
						cout<<endl;
							cout<<name<<":You Pirchased products and their bill\n"<<p1<<":"<<pr1<<p2<<":"<<pr2<<p3<<":"<<pr3<<p4<<":"<<pr4<<p5<<":"<<pr5<<p6<<":"<<pr6<<p7<<":"<<pr7<<"your total Bill is="<<"\n"<<pr1*q[0]+pr2*q[1]+pr3*q[2]+pr4*q[3]+pr5*q[4]+pr6*q[5]+pr7*q[6];
						if(pr1*q[0]+pr2*q[1]+pr3*q[2]+pr4*q[3]+pr5*q[4]+pr6*q[5]+pr7*q[6]>6000)
						{
							cout<<"After 100 Rupees off :"<<pr1*q[0]+pr2*q[1]+pr3*q[2]+pr4*q[3]+pr5*q[4]+pr6*q[5]+pr7*q[6]-100;
						}
							break;	
					}
							break;
						case 0:
						cout<<"Enter Your Name:";
						cin>>name;
						cout<<endl;
							cout<<name<<":You Pirchased products and their bill\n"<<p1<<":"<<pr1<<p2<<":"<<pr2<<p3<<":"<<pr3<<p4<<":"<<pr4<<p5<<":"<<pr5<<p6<<":"<<pr6<<"your total Bill is="<<"\n"<<pr1*q[0]+pr2*q[1]+pr3*q[2]+pr4*q[3]+pr5*q[4]+pr6*q[5];
						if(pr1*q[0]+pr2*q[1]+pr3*q[2]+pr4*q[3]+pr5*q[4]+pr6*q[5]>6000)
						{
							cout<<"After 100 Rupees off :"<<pr1*q[0]+pr2*q[1]+pr3*q[2]+pr4*q[3]+pr5*q[4]+pr6*q[5]-100;
						}
						break;	
					}
							break;
						case 0:
						cout<<"Enter Your Name:";
						cin>>name;
						cout<<endl;
					cout<<name<<":You Pirchased products and their bill\n"<<p1<<":"<<pr1<<p2<<":"<<pr2<<p3<<":"<<pr3<<p4<<":"<<pr4<<p5<<":"<<pr5<<"your total Bill is="<<"\n"<<pr1*q[0]+pr2*q[1]+pr3*q[2]+pr4*q[3]+pr5*q[4];
						if(pr1*q[0]+pr2*q[1]+pr3*q[2]+pr4*q[3]+pr5*q[4]>5000)
						{
							cout<<"After 100 Rupees off :"<<pr1*q[0]+pr2*q[1]+pr3*q[2]+pr4*q[3]+pr5*q[4]-100;
						}
						break;	
					}
					break;
					case 0:
						cout<<"Enter Your Name:";
						cin>>name;
						cout<<endl;
					cout<<name<<":You Pirchased products and their bill\n"<<p1<<":"<<pr1<<p2<<":"<<pr2<<p3<<":"<<pr3<<p4<<":"<<pr4<<"your total Bill is="<<"\n"<<pr1*q[0]+pr2*q[1]+pr3*q[2]+pr4*q[3];
					if(pr1*q[0]+pr2*q[1]+pr3*q[2]+pr4*q[3]>=3000)
					{
						cout<<"after 300 Rupees off"<<pr1*q[0]+pr2*q[1]+pr3*q[2]+pr4*q[3]-300;
					}
					
					
				}
				break;
				case 0:
				cout<<"Enter Your name:";
				cin>>name;
					cout<<endl;
				cout<<name<<endl<<"you Purchased Products and Bill\n"<<p1<<":"<<pr1<<":"<<p2<<":"<<pr2<<p3<<":"<<pr3<<"Total="<<pr1*q[0]+pr2*q[1]+pr3*q[2];
				if(pr1*q[0]+pr2*q[1]+pr3*q[2]>2500)
				{
				cout<<"After 250 Rupees off your Bill is"<<p1<<":"<<pr1<<":"<<p2<<":"<<pr2<<p3<<":"<<pr3<<"Total="<<pr1*q[0]+pr2*q[1]+pr3*q[2]-250;	
				}	
			}
			break;
			case 0:
				cout<<"Enter Your Name:";
				cin>>name;
				cout<<endl;
			cout<<name<<": You Purchased Products and Bill:\n"<<p1<<":"<<pr1 <<p2<<":"<<pr2<<"Total"<<"="<<pr1*q[0]+pr2*q[1];
			if(pr1*q[0]+pr2*q[1]>2000)
			{
				cout<<"After 200 Rupees off Your Bill is="<<pr1+pr2-200;
			}
			
		    else
		    {
		    	//cout<<"You Buy"<<p1<<"+"<<p2<<pr1+pr2;
			}
			
			}
			break;
			
		case 0:
		cout<<"Enter Your name:";
		cin>>name;
		cout<<name   <<"Your Purchased product and Bill is\n"<<p1<<":"<<pr1<<"="<<pr1*q[0]<<endl;
		if(pr1>1000)
		{
			cout<<"After 100 Rupees off:" <<pr1*q[0]-100;
		}	
        else
		{
//			cout<<"Enter Your Name";
//			cin>>name;
			cout<<name<<"Your Prducts/n"<<p1<<"+"<<pr1<<"="<<pr1;
		}     	
	}

}
