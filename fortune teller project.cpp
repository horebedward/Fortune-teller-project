#include <iostream>
using namespace std;
class a{
	private:
		int i;
		public:
			void aries()
			{
				cout <<" If your horoscope is aries Please pick a digit from the list below to continue\n";
		cout <<" ---------------------\n";
		cout <<"|          |          |\n";
		cout <<"|    7     |     2    |\n";
		cout <<"|          |          |\n";
		cout <<"|__________|__________|\n";
		cout <<"|          |          |\n";
        cout <<"|     1    |     8    |\n";
		cout <<"|          |          |\n";
		cout <<" ---------------------\n";
	cin>>i;
	if(i!=7&&i!=2&&i!=1&&i!=8)
	{
		cout<<"You entered an invalid number"<<endl;
	}
	else
	{
	
	switch(i)
        {
        	case 1:  cout<<"You will be homeless\n";break;
        	case 7:  cout<<"You will be the CEO of a company\n";break;
        	case 2:  cout<<"You will live in prison\n";break;
            case 8:  cout<<"You will move to America\n";break;
			   }}
		}
};
class b:public a{
	private:
	int i;
	public:
		void taurus()
		{
				cout <<"If your horoscope is taurus Please pick a digit from the list below to continue\n";
		cout <<" ---------------------\n";
		cout <<"|          |          |\n";
		cout <<"| 	 9 |     3    |\n";
		cout <<"|          |          |\n";
		cout <<"|__________|__________|\n";
		cout <<"|          |          |\n";
        cout <<"|     5    |     0    |\n";
		cout <<"|          |          |\n";
		cout <<" ---------------------\n";
	cin>>i;
	if(i!=9&&i!=3&&i!=5&&i!=0)
	{
		cout<<"You entered an invalid number"<<endl;
	}
	else{
	switch(i)
        {
        	case 0:  cout<<"You will be jobless\n";break;
        	case 9:  cout<<"You will cause end of the world\n";break;
        	case 3:  cout<<"A great surprise is in store for you \n";break;
            case 5:  cout<<"You will move to canada\n";break;
        }
    }}
	};
class c:public b
{
	private:
	int i;
	public:
		void gemini()
		{
				cout <<"If your horoscope is gemini Please pick a digit from the list below to continue\n";
		cout <<" ---------------------\n";
		cout <<"|          |          |\n";
		cout <<"|     14   |     12   |\n";
		cout <<"|          |          |\n";
		cout <<"|__________|__________|\n";
		cout <<"|          |          |\n";
        cout <<"|     11   |     6    |\n";
		cout <<"|          |          |\n";
		cout <<" ---------------------\n";
	cin>>i;
	if(i!=14&&i!=12&&i!=11&&i!=6)
	{
		cout<<"You entered an invalid number"<<endl;
	}
	else{
	switch(i)
        {
        	case 14:  cout<<"You will be a great football player\n";break;
        	case 12:  cout<<"You will be a businessman\n";break;
        	case 11:  cout<<"You will travel by bus \n";break;
            case 6:   cout<<"You will visit africa\n";break;
        }
    }}
	};
class d:public c{
		private:
	int i;
	public:
		void cancer()
		{
				cout <<" If your horoscope is cancer Please pick a digit from the list below to continue\n";
		cout <<" ---------------------\n";
		cout <<"|          |          |\n";
		cout <<"|     67   |     99   |\n";
		cout <<"|          |          |\n";
		cout <<"|__________|__________|\n";
		cout <<"|          |          |\n";
        cout <<"|     15   |     68   |\n";
		cout <<"|          |          |\n";
		cout <<" ---------------------\n";
	cin>>i;
	if(i!=67&&i!=99&&i!=15&&i!=68)
	{
		cout<<"You entered an invalid number"<<endl;
	}
	else{
	switch(i)
        {
        	case 67:  cout<<"You talents will be recognized and rewarded\n";break;
        	case 99:  cout<<"You will get good marks in exams\n";break;
        	case 15:  cout<<"Today will be a lucky day \n";break;
            case 68:  cout<<"You will be  invited to an exciting event\n";break;
        }
    }}
	};
class e:public d{
		private:
	int i;
	public:
		void leo()
		{
				cout <<"If your horoscope is leo Please pick a digit from the list below to continue\n";
		cout <<" ---------------------\n";
		cout <<"|          |          |\n";
		cout <<"|     92   |     87   |\n";
		cout <<"|          |          |\n";
		cout <<"|__________|__________|\n";
		cout <<"|          |          |\n";
        cout <<"|     41   |     45   |\n";
		cout <<"|          |          |\n";
		cout <<" ---------------------\n";
	cin>>i;
	if(i!=92&&i!=87&&i!=41&&i!=45)
	{
		cout<<"You entered an invalid number"<<endl;
	}
	else{
	switch(i)
        {
        	case 92:  cout<<"Your will visit many countries\n";break;
        	case 87:  cout<<"You will go with some friends\n";break;
        	case 41:  cout<<"You will write a great book your travels \n";break;
            case 45:  cout<<"One day, you will be a famous film star.\n";break;
        }
    }}
};
class f:public e{
		private:
	int i;
	public:
		void virgo()
		{
				cout <<" If your horoscope is virgo Please pick a digit from the list below to continue\n";
		cout <<" ---------------------\n";
		cout <<"|          |          |\n";
		cout <<"|     55   |     90   |\n";
		cout <<"|          |          |\n";
		cout <<"|__________|__________|\n";
		cout <<"|          |          |\n";
        cout <<"|     10   |     63   |\n";
		cout <<"|          |          |\n";
		cout <<" ---------------------\n";
	cin>>i;
	if(i!=55&&i!=90&&i!=10&&i!=63)
	{
		cout<<"You entered an invalid number"<<endl;
	}
	else{
	switch(i)
        {
        	case 55:  cout<<"Your will go to a party soon\n";break;
        	case 90:  cout<<"Someone will call you today\n";break;
        	case 10:  cout<<"Be carefull on tuesday\n";break;
            case 63:  cout<<"Someone close will leave soon\n";break;
        }
    }}
};
class g:public f{
		private:
	int i;
	public:
		void libra()
		{
				cout <<" If your horoscope is libra Please pick a digit from the list below to continue\n";
		cout <<" ---------------------\n";
		cout <<"|          |          |\n";
		cout <<"|     33   |     34   |\n";
		cout <<"|          |          |\n";
		cout <<"|__________|__________|\n";
		cout <<"|          |          |\n";
        cout <<"|     56   |    26    |\n";
		cout <<"|          |          |\n";
		cout <<" ---------------------\n";
	cin>>i;
	if(i!=33&&i!=34&&i!=56&&i!=26)
	{
		cout<<"You entered an invalid number"<<endl;
	}
	else{
	switch(i)
        {
        	case 33:  cout<<"Your hidden talents will soon be revealed\n";break;
        	case 34:  cout<<"You will go on a holiday\n";break;
        	case 56:  cout<<"You will have many friends \n";break;
            case 26:  cout<<"Bad times are ahead\n";break;
        }
    }}
};
class h:public g{
		private:
	int i;
	public:
		void scorpio()
		{
				cout <<" If your horoscope is scorpio Please pick a digit from the list below to continue\n";
		cout <<" ---------------------\n";
		cout <<"|          |          |\n";
		cout <<"|     101  |     112  |\n";
		cout <<"|          |          |\n";
		cout <<"|__________|__________|\n";
		cout <<"|          |          |\n";
        cout <<"|     786  |     123  |\n";
		cout <<"|          |          |\n";
		cout <<" ---------------------\n";
	cin>>i;
	if(i!=101&&i!=112&&i!=786&&i!=123)
	{
		cout<<"You entered an invalid number"<<endl;
	}
	else{
	switch(i)
        {
        	case 101:  cout<<"Dont be so sad\n";break;
        	case 112:  cout<<"Someone will call you today\n";break;
        	case 786:  cout<<"You are going to go shopping \n";break;
            case 123:  cout<<"Do a good deed today\n";break;
        }
    }}
};
class j:public h{
		private:
	int i;
	public:
		void saggitarius()
		{
				cout <<"If you horoscope is saggitarius Please pick a digit from the list below to continue\n";
		cout <<" ---------------------\n";
		cout <<"|          |          |\n";
		cout <<"|     98   |     87   |\n";
		cout <<"|          |          |\n";
		cout <<"|__________|__________|\n";
		cout <<"|          |          |\n";
        cout <<"|     69   |     61   |\n";
		cout <<"|          |          |\n";
		cout <<" ---------------------\n";
	cin>>i;
if(i!=98&&i!=87&&i!=69&&i!=61)
	{
		cout<<"You entered an invalid number"<<endl;
	}
	else{
	switch(i)
        {
        	case 98:  cout<<"All your hardwork will soon pay off\n";break;
        	case 87:  cout<<"Don't give off\n";break;
        	case 69:  cout<<"Good times are coming your way \n";break;
            case 61:  cout<<"Your life will be happy and peaceful\n";break;
        }
    }}
};
class k:public j{
		private:
	int i;
	public:
		void capricorn()
		{
				cout <<" If your horoscope is capricorn Please pick a digit from the list below to continue\n";
		cout <<" ---------------------\n";
		cout <<"|          |          |\n";
		cout <<"|     20   |     30   |\n";
		cout <<"|          |          |\n";
		cout <<"|__________|__________|\n";
		cout <<"|          |          |\n";
        cout <<"|     40   |     50   |\n";
		cout <<"|          |          |\n";
		cout <<" ---------------------\n";
	cin>>i;
	if(i!=20&&i!=40&&i!=30&&i!=50)
	{
		cout<<"You entered an invalid number"<<endl;
	}
	else{
	switch(i)
        {
        	case 20:  cout<<"Happy news is on its way\n";break;
        	case 30:  cout<<"Trust your intuition\n";break;
        	case 40:  cout<<"Start saving money for a rainy day \n";break;
            case 50:  cout<<"Good fortune will be yours\n";break;
        }
    }}
};
class l:public k{
		private:
	int i;
	public:
		void aquarius()
		{
				cout <<"If your horoscope is aquarius Please pick a digit from the list below to continue\n";
		cout <<" ---------------------\n";
		cout <<"|          |          |\n";
		cout <<"|     59   |     45   |\n";
		cout <<"|          |          |\n";
		cout <<"|__________|__________|\n";
		cout <<"|          |          |\n";
        cout <<"|     33   |     29   |\n";
		cout <<"|          |          |\n";
		cout <<" ---------------------\n";
	cin>>i;
	if(i!=59&&i!=45&&i!=33&&i!=29)
	{
		cout<<"You entered an invalid number"<<endl;
	}
	else{
	switch(i)
        {
        	case 59:  cout<<"Watch what you step in\n";break;
        	case 45:  cout<<"Try to look on the positive side\n";break;
        	case 33:  cout<<"You will go on a long trip\n";break;
            case 29:  cout<<"Someone has a secret crush on you\n";break;
        }
    }}
};
class m:public l{
		private:
	int i;
	public:
		void pisces()
		{
			
				cout <<"If your horoscope is pisces Please pick a digit from the list below to continue\n";
		cout <<" ---------------------\n";
		cout <<"|          |          |\n";
		cout <<"|     81   |     71   |\n";
		cout <<"|          |          |\n";
		cout <<"|__________|__________|\n";
		cout <<"|          |          |\n";
        cout <<"|     94   |     66   |\n";
		cout <<"|          |          |\n";
		cout <<" ---------------------\n";
	cin>>i;
	if(i!=81&&i!=71&&i!=94&&i!=66)
	{
		cout<<"You entered an invalid number"<<endl;
	}
	else{
	switch(i)
        {
        	case 81:  cout<<"You will go into the NBA\n";break;
        	case 71:  cout<<"The more you give ,the more you will have\n";break;
        	case 94:  cout<<"The one you love is closer than you think \n";break;
            case 66:  cout<<"Stay patient and you will be rewarded\n";break;
        }
    }}
};
int main()
{
    int month, day;
    char ans, space;
	m obj1; 
 do
    {
    	cout <<"Welcome to Fortune Teller, where YOU can see your fortune!\n";
    	cout<<"          ************************************"<<endl;
    	cout<<"	  ************************************"<<endl;
        cout << "Please Enter the Month of your Birthday Follow by the Day(ex. 12/01): \n";
        cin >> month >> space >> day ; 

        if((month == 3 && day >= 21)||(month==4 && day <= 19))
           {
              cout << "You Are an Aries! \n";
              obj1.aries();
            
            
              
           }
        else if((month == 4 && day >= 20)||(month==5 && day <= 20))
           {
              cout << "You Are an Taurus! \n";
              obj1.taurus();
              
           }
        else if((month == 5 && day >= 21)||(month==6 && day <= 21))
           {
              cout << "You Are an Gemini! \n";
            obj1.gemini();
              
           }
        else if((month == 6 && day >= 22)||(month==7 && day <= 22))
           {
              cout << "You Are an Cancer! \n";
              obj1.cancer();
           }
        else if((month == 7&& day >= 23)||(month==8 && day <= 22))
           {
              cout << "You Are an Leo! \n";
            obj1.leo();
           }
        else if((month == 8&& day >= 23)||(month==9 && day <= 22))
           {
              cout << "You Are an Virgo! \n";
              obj1.virgo();
           }
        else if((month == 9&& day >= 23)||(month==10 && day <= 22))
           {
              cout << "You Are an Libra! \n";
              obj1.libra();
           }
        else if((month == 10&& day >= 23)||(month==11 && day <= 21))
           {
              cout << "You Are an Scorpio! \n";
              obj1.scorpio();
           }
        else if((month == 11&& day >= 22)||(month==12 && day <= 21))
           {
              cout << "You Are an Saggitarius! \n";
              obj1.saggitarius();
           }
        else if((month == 12&& day >= 22)||(month==1 && day <= 19))
           {
              cout << "You Are an Capricorn! \n";
              obj1.capricorn();
           }
        else if((month == 1&& day >= 20)||(month==2 && day <= 18))
           {
              cout << "You Are an Aquarius! \n";
              obj1.aquarius();
           }
        else if((month == 2&& day >= 19)||(month==3 && day <= 20))
           {
              cout << "You Are an Pisces! \n";
              obj1.pisces();
           }

        cout << "Would You like to Find Another Horoscope? (Please Type y or Y)\n ";
        cin >> ans;

    } while(ans == 'y' || ans == 'Y');

     cout << " Good Bye!\a\n";   
     
}

