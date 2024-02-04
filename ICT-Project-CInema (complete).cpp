//ICT project CINEMA        Azfar , Gohar , Arsalan , Fizza , Mahrukh , Moez
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{                  //make payment features for each movie ticket of respective movie purchase. put validation check for movie input character choice sigh
	string time,movie,hall,day;
	char m,age,y,ans;
	int mov_change,mov_payment,seats=41,silver=350,gold=500,platinum=750,booking_code=1,id,bc,tickets, price;
	    cout<<"\t1\tCinema Manager\n\t2\tFood Manager\n\t3\tCustomer\n\t0\tExit\nSelect your Identity (1,2,3)  ";
	    cin>>id;
  while (!(id == 1 || id == 2 || id == 3 || id==0))
  {
   cout<<"Please Re-input Valid Identity number: ";
   cin>>id;
  }
    if (id == 1)   //cinema manager
       {
         cout<<"\nGreetings, CINEMA MANAGER"<<endl;
         jump:
         cout<<"(a) Check Halls for misconduct "<<endl;
		 cout<<"(b) Check new movies available this month"<<endl;
		 cout<<"(c) Analyze Monthly and Weekly sales"<<endl;
		 cout<<"(d) Employee Attendance Check"<<endl;
		 cin>>y;
		  while (!(y=='a' || y=='A' || y=='b' || y=='B' || y=='c' || y=='C' || y=='d' || y=='D'))
          {
            cout<<"Please re-enter valid input : "<<endl;
            cin>>y;
          }
          if(y=='a' || y=='A')
          {
			 cout<<"Hall Gold     : Free from misconduct \nHall Silver   : Slight misconduct amongst customers\nHall Platinum : Clear from Misconduct"<<endl;
             cout<<"\nContinue ? (y/n)";
             cin>>ans;
           while (!(ans =='n' || ans=='N' || ans=='y' || ans=='Y'))
           {
            cout<<"Please input y/n.Continue?"<<endl;
            cin>>ans;
           }
            if (ans== 'y' || ans == 'Y')
            goto jump;
            else
                cout<<"\nGoodbye";
          }
	      else if(y=='b' || y=='B')
	       {
	    	cout<<"The New movies available are :-\n\tAvengers\n\tDeath note\n\tBatman"<<endl;
	    	 cout<<"\nContinue ? (y/n)";
             cin>>ans;
           while (!(ans =='n' || ans=='N' || ans=='y' || ans=='Y'))
           {
            cout<<"Please input y/n.Continue?"<<endl;
            cin>>ans;
           }
            if (ans== 'y' || ans == 'Y')
            goto jump;
            else
                cout<<"\nGoodbye";
		   }
	      else if(y=='c' || y=='C')
	        {
			 cout<<"The Monthly sales are PKR 23,0654. Lesser then Last month due to Covid "<<endl;
		     cout<<"The Weekly sales are PKR 7,6884 ";
		      cout<<"\nContinue ? (y/n)";
             cin>>ans;
           while (!(ans =='n' || ans=='N' || ans=='y' || ans=='Y'))
           {
            cout<<"Please input y/n.Continue?"<<endl;
            cin>>ans;
           }
            if (ans== 'y' || ans == 'Y')
            goto jump;
            else
                cout<<"\nGoodbye";
			}
          else if (y=='d' || y=='D')
           {
            cout<<"Employ Attendance Rate has gone down by 30% due to some contracting Corona virus"<<endl;
             cout<<"\nContinue ? (y/n)";
             cin>>ans;
           while (!(ans =='n' || ans=='N' || ans=='y' || ans=='Y'))
           {
            cout<<"Please input y/n.Continue?"<<endl;
            cin>>ans;
           }
            if (ans== 'y' || ans == 'Y')
            goto jump;
            else
                cout<<"\nGoodbye";
           }
        }
     else if (id == 2)  //food manager
     {
        cout<<"\nGreetings, FOOD MANAGER"<<endl;
        jump1:
        cout<<"(a) Check Foods stock of each item / Restock low in stock "<<endl;
		cout<<"(b) Check time taken of each food to prepare"<<endl;
		cout<<"(c) Check Best selling/ Lowest selling Items"<<endl;
		cout<<"(d) Food Employee Attendance Check"<<endl;
		cout<<"(e) Analyze Monthly and Weekly sales"<<endl;
        cin>>y;
         while (!(y=='a' || y=='A' || y=='b' || y=='B' || y=='c' || y=='C' || y=='d' || y=='D' ||y=='e' || y=='E'))
          {
            cout<<"Please re-enter valid input : ";
            cin>>y;
          }
          if(y=='a' || y=='A')
          {
            cout<<"\nITEM STOCK INVENTORY:\n******************************************"<<endl;
			cout<<"\tDrink:\n\t\tSoft Drinks\t34\n\t\tShakes\t13"<<endl;
			cout<<"\tBurgers:\n\t\tChicken Burger\t09\n\t\tBeef Burger\t23\n\t\tZinger Burger\t28"<<endl;
			cout<<"\tDesserts:\n\t\tCake\t\t02\n\t\tIce Cream\t40"<<endl;
			cout<<"\tFries:\n\t\tStock\t\t57\n\tPopcorn:\n\t\tStock\t\t02"<<endl;
			cout<<"\tHotDogs:\n\t\tClassic\t\t40\n\t\tSpecial\t\t25"<<endl;
			cout<<"\tBiryani:\n\t\tStock\t\t37\n\tShawarma\n\t\tStock\t\t35"<<endl;
			cout<<"******************************************"<<endl;
			cout<<"\nCake is low in stock\nPopcorn is low in stock\nBeef Burger is low in stock"<<endl;
		    cout<<"\nRestock low Items? (y/n) ";
		    cin>>ans;
		     while (!(ans =='n' || ans=='N' || ans=='y' || ans=='Y'))
             {
              cout<<"Please input y/n. Would you like to Restock?  ";
              cin>>ans;
             }
             if (ans== 'y' || ans == 'Y')
             {
              cout<<"\n\t\t\t*ITEMS RESTOCKED*\n"<<endl;
              cout<<"\n******************************************"<<endl;
              cout<<"\tDrink:\n\t\tSoft Drinks\t34\n\t\tShakes\t13"<<endl;
			  cout<<"\tBurgers:\n\t\tChicken Burger\t29\n\t\tBeef Burger\t23\n\t\tZinger Burger\t28"<<endl;
			  cout<<"\tDesserts:\n\t\tCake\t\t22\n\t\tIce Cream\t40"<<endl;
			  cout<<"\tFries:\n\t\tStock\t\t57\n\tPopcorn:\n\t\tStock\t\t22"<<endl;
			  cout<<"\tHotDogs:\n\t\tClassic\t\t40\n\t\tSpecial\t\t25"<<endl;
			  cout<<"\tBiryani:\n\t\tStock\t\t37\n\tShawarma\n\t\tStock\t\t35"<<endl;
			  cout<<"******************************************"<<endl;
              cout<<"\nContinue ? (y/n)  ";
              cin>>ans;
           while (!(ans =='n' || ans=='N' || ans=='y' || ans=='Y'))
           {
            cout<<"Please input y/n.Continue? ";
            cin>>ans;
           }
            if (ans== 'y' || ans == 'Y')
            goto jump1;
            else
                cout<<"\nGoodbye";
            }
             else //ans no
             {
              cout<<"\nOkay,\n ITEMS NOT RESTOCKED. Do restock soon"<<endl;
               cout<<"\nContinue ? (y/n)";
             cin>>ans;
           while (!(ans =='n' || ans=='N' || ans=='y' || ans=='Y'))
           {
            cout<<"Please input y/n .Continue?\t";
            cin>>ans;
           }
            if (ans== 'y' || ans == 'Y')
            goto jump1;
            else
                cout<<"\nGoodbye";
             }
		  }
	      else if(y=='b' || y=='B')
          {
            cout<<"TIME TAKEN TO PREPARE EACH MENU ITEM\n"<<endl;
            cout<<"\tDrink:\n\t\tSoft Drinks\t 20 seconds\n\t\tShakes\t\t 60 seconds"<<endl;
			cout<<"\tBurgers:\n\t\tChicken Burger\t180 seconds\n\t\tBeef Burger\t200 seconds\n\t\tZinger Burger\t280 seconds"<<endl;
			cout<<"\tDesserts:\n\t\tCake\t\t310 seconds\n\t\tIce Cream\t200 seconds"<<endl;
			cout<<"\tFries:\t\t\t150 seconds\n\tPopcorn:\t\t 50 seconds"<<endl;
			cout<<"\tHotDogs:\n\t\tClassic\t\t350 seconds\n\t\tSpecial\t\t370 seconds"<<endl;
			cout<<"\tBiryani:\t\t500 seconds\n\tShawarma:\t\t420 seconds"<<endl;
            cout<<"\nContinue ? (y/n)";
            cin>>ans;
           while (!(ans =='n' || ans=='N' || ans=='y' || ans=='Y'))
           {
            cout<<"Please input y/n .Continue?\t";
            cin>>ans;
           }
            if (ans== 'y' || ans == 'Y')
            goto jump1;
            else
                cout<<"\nGoodbye";
		 }
         else if(y=='c' || y=='C')
         {
			cout<<"\nBEST SELLING ITEM :\tBIRYANI (sold out on first 3 hours of opening,100% Profit gained)\n\nLOWEST SELLING ITEM :\tCLASSIC HOTDOGS  (no profit gained, loss by 20%)"<<endl;
             cout<<"\nContinue ? (y/n)\t";
             cin>>ans;
           while (!(ans =='n' || ans=='N' || ans=='y' || ans=='Y'))
           {
            cout<<"Please input y/n .Continue?\t";
            cin>>ans;
           }
            if (ans== 'y' || ans == 'Y')
            goto jump1;
            else
                cout<<"\nGoodbye";
         }
         else if (y=='d' || y=='D')
         {
            cout<<"Employ Attendance Rate has gone down by 30% due to some contracting Corona virus"<<endl;
             cout<<"\nContinue ? (y/n)";
             cin>>ans;
           while (!(ans =='n' || ans=='N' || ans=='y' || ans=='Y'))
           {
            cout<<"Please input y/n .Continue?\t";
            cin>>ans;
           }
            if (ans== 'y' || ans == 'Y')
            goto jump1;
            else
                cout<<"\nGoodbye";
         }
         else if(y=='e' || y=='E')
         {
			cout<<"The Monthly sales are PKR 19,0654. Lesser then Last month due to Covid "<<endl;
		    cout<<"The Weekly sales are PKR 4,980 ";
		     cout<<"\nContinue ? (y/n)\t";
             cin>>ans;
           while (!(ans =='n' || ans=='N' || ans=='y' || ans=='Y'))
           {
            cout<<"Please input y/n .Continue?\t";
            cin>>ans;
           }
            if (ans== 'y' || ans == 'Y')
            goto jump1;
            else
                cout<<"\nGoodbye";
         }
        }
    else if (id==3) // customer id
        {
         repeat:
         cout<<"\n\tA for HOBBS AND SHAW \n\tB for FIFTY SHADES OF GREY \n\tC for FIFTY SHADES DARKER \n\tD for LALA LAND \n\tE for AVENGERS \n\tF for DEATH NOTE \n\tG for BATMAN\n";
	     cout<<"\nPlease Select the movie: ";
	     cin>>m;
	    while (!(m=='a'||m=='A' || m=='b'|| m=='B' || m=='c'|| m=='C' || m=='d'|| m=='D' || m=='e'|| m=='E' || m=='f'|| m=='F' || m=='g'|| m=='G'))
        {
            cout<<"Incorrect movie input (A,B,C,D,E,F,G). Re-input: ";
            cin>>m;
        }
      if(m=='a'||m=='A')
	   {
	    movie = "HOBBS AND SHAW";
		time="09:00 am";
		cout<<"\n\n\t\tHobbs And Shaw\n___________________________________________________________________________"<<endl;
		cout<<setw(16)<<left<<"Booking Code"<<setw(10)<<left<<"Day"<<setw(10)<<"Hall Type"<<setw(16)<<"   Max Seats"<<setw(10)<<"\t  Time"<<setw(10)<<"   Price"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Monday"<<setw(16)<<"Gold"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"500rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Tuesday"<<setw(16)<<"Silver"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"350rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Wednesday"<<setw(16)<<"Gold"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"500rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Thursday"<<setw(16)<<"Platinum"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"750rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Friday"<<setw(16)<<"Silver"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"350rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Saturday"<<setw(16)<<"Platinum"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"750rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Sunday"<<setw(16)<<"Platinum"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"750rs"<<endl;
		cout<<"\n\nPlease enter booking code: ";
		cin>>bc;
          while (!(bc== 1 || bc==2 || bc==3 || bc==4 || bc==5 || bc==6 || bc==7))
		    {
		 	  cout<<"You have entered an Invalid booking code.Please Re-enter : ";
			  cin>>bc;
            }
		cout<<"Please enter the number of tickets you want:\n(Bonus on more then 5 ticket purchase ,Free Drink Per ticket) : ";
		cin>>tickets;
		  while (tickets<=0 || tickets>=42)
		    {
			  cout<<"You have entered Invalid number of tickets.Please Re-enter : ";
			  cin>>tickets;
		    }
		if (bc==1)  //
		{
		    day= "Monday";
		    hall = "Gold";
		    price= gold*tickets;
			cout<<"Price: PKR "<<price<<"\t\tPayment:  ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
              if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
	else if (bc==2)
		{
		    day= "Tuesday";
		    hall="Silver";
		    price= silver*tickets;
			cout<<"Price: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
	else if (bc==3)
		{
		    day= "Wednesday";
		    hall="Gold";
			price= gold*tickets;
			cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		else if (bc==4)
		{
		    day= "Thursday";
		    hall = "Platinum";
		    price = platinum*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }

		}
		else if (bc==5)
		{
		    day= "Friday";
		    hall = "Silver";
			price= silver*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		else if (bc==6)
		{
		    day= "Saturday";
		    hall= "Platinum";
		    price = platinum*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		else if (bc==7)
		{
		    day= "Sunday";
		    hall= "Platinum";
		    price = platinum*tickets;
		    cout<<"\n Price: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		if(tickets>5)    //bonus deal
		{
			cout<<"You will get a free drink of your choice for every person. Enjoy!"<<endl;
		}
	}
		if(m=='b'|| m=='B')
	{
		time="12:00 pm";
		cout<<"\t\tFifty Shades Of Grey"<<endl;
		cout<<"This movie is not suitable for people under 18. \nAre you 18+? (y/n) : ";
		cin>>age;
		while (!(age=='n' || age== 'N' || age== 'y' || age=='Y'))//age validation check
         {
             cout<<"Invalid age input (y/n) .Please Re-Input: ";
             cin>>age;
         }
		if (age=='y'||age=='Y')
		{
		    movie = "Fifty Shades of Grey";
		cout<<"\t\tFifty Shades of Grey"<<endl;
		cout<<setw(16)<<left<<"Booking Code"<<setw(10)<<left<<"Day"<<setw(10)<<"Hall Type"<<setw(16)<<"Seats Available"<<setw(10)<<"Time"<<setw(10)<<"Price"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Monday"<<setw(10)<<"Gold"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"500rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Tuesday"<<setw(10)<<"Silver"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"350rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Wednesday"<<setw(10)<<"Gold"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"500rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Thursday"<<setw(10)<<"Platinum"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"750rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Friday"<<setw(10)<<"Silver"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"350rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Saturday"<<setw(10)<<"Platinum"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"750rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Sunday"<<setw(10)<<"Platinum"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"750rs"<<endl;
		}
		 else
		 {
			cout<<"You are underage. Please select another movie"<<endl;
			goto repeat;
		  }
		 cout<<"\n\nPlease enter booking code: "<<endl;
		 cin>>bc;
		  while(!(bc== 1 || bc==2 || bc==3 || bc==4 || bc==5 || bc==6 || bc==7))
            {
		 	  cout<<"Invalid booking code.Please Re-enter : ";
			  cin>>bc;
            }
		cout<<"Please enter the number of tickets you want:  (Bonus on more then 5 ticket purchase ,Free Drink Per ticket)\t";
		cin>>tickets;
         while (tickets<=0 || tickets>=42)
		    {
              cout<<"You have entered Invalid number of tickets.Please Re-enter : ";
              cin>>tickets;
		    }
		if (bc==1)
		{
		    day= "Monday";
		    hall = "Gold";
		    price= gold*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
        }
	else if (bc==2)
		{
		    day= "Tuesday";
		    hall = "Silver";
		    price= silver*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
	else if (bc==3)
		{
		    day= "Wednesday";
		    hall = "Gold";
		    price= gold*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		else if (bc==4)
		{
		    day= "Thursday";
		    hall= "Platinum";
		    price = platinum*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		else if (bc==5)
		{
		    day= "Friday";
		    hall = "Silver";
		    price= silver*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		else if (bc==6)
		{
		    day= "Saturday";
		    hall= "Platinum";
		    price = platinum*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		else if (bc==7)
		{
		    day= "Sunday";
		    hall= "Platinum";
		    price = platinum*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		if(tickets>5)
		{
			cout<<"You will get a free drink of your choice for every person. Enjoy!"<<endl;
		}

	}
    if(m=='c'||m=='C')
	 {
		time="03:00 pm";
		cout<<"\t\tFifty Shades Darker"<<endl;
		cout<<"This movie is not suitable for people under 18. \nAre you 18+? (y/n) : ";
		cin>>age;
		while (!(age=='n' || age== 'N' || age== 'y' || age=='Y'))//age validation check
         {
             cout<<"Invalid age input (y/n) .Please Re-Input: ";
             cin>>age;
         }
		if(age=='y'||age=='Y')
		{
		    movie = "Fifty Shades Darker";
		cout<<"\t\tFifty Shades Darker"<<endl;
		cout<<setw(16)<<left<<"Booking Code"<<setw(10)<<left<<"Day"<<setw(10)<<"Hall Type"<<setw(16)<<"Seats Available"<<setw(10)<<"Time"<<setw(10)<<"Price"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Monday"<<setw(10)<<"Gold"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"500rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Tuesday"<<setw(10)<<"Silver"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"350rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Wednesday"<<setw(10)<<"Gold"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"500rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Thursday"<<setw(10)<<"Platinum"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"750rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Friday"<<setw(10)<<"Silver"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"350rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Saturday"<<setw(10)<<"Platinum"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"750rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Sunday"<<setw(10)<<"Platinum"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"750rs"<<endl;
		}
		else
		{
			cout<<"You are underage .Please select another movie"<<endl;
			goto repeat;
		}
		cout<<"\n\nPlease enter booking code: ";
		cin>>bc;
		 while (!(bc== 1 || bc==2 || bc==3 || bc==4 || bc==5 || bc==6 || bc==7))
            {
		 	  cout<<"Invalid booking code.Please Re-enter :";
			  cin>>bc;
            }
		cout<<"Please enter the number of tickets you want:\n(Bonus on more then 5 ticket purchase ,Free Drink Per ticket) : ";
		cin>>tickets;
		 while (tickets<=0 || tickets>=42)
		   {
			 cout<<"You have entered Invalid number of tickets.Please Re-enter : ";
			 cin>>tickets;
		   }
		if (bc==1)
		{
		    day= "Monday";
		    hall = "Gold";
		    price= gold*tickets;
            cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
 		}
	else if (bc==2)
		{
		    day= "Tuesday";
		    hall = "Silver";
		    price= silver*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
	else if (bc==3)
		{
		    day= "Wednesday";
		    hall = "Gold";
		    price= gold*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		else if (bc==4)
		{
		    day= "Thursday";
		    hall= "Platinum";
		    price = platinum*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		else if (bc==5)
		{
		    day= "Friday";
		    hall = "Silver";
		    price= silver*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		else if (bc==6)
		{
		    day= "Saturday";
		    hall= "Platinum";
		    price = platinum*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		else if (bc==7)
		{
		    day= "Sunday";
		    hall= "Platinum";
		    price = platinum*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		if(tickets>5)
		{
			cout<<"You will get a free drink of your choice for every person. Enjoy!"<<endl;
		}
	}
		if(m=='d'||m=='D')
	{
	    movie = "La La Land";
		time="05:00 pm";
		cout<<"\t\tLaLa Land"<<endl;
		cout<<setw(16)<<left<<"Booking Code"<<setw(10)<<left<<"Day"<<setw(10)<<"Hall Type"<<setw(16)<<"Seats Available"<<setw(10)<<"Time"<<setw(10)<<"Price"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Monday"<<setw(10)<<"Gold"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"500rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Tuesday"<<setw(10)<<"Silver"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"350rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Wednesday"<<setw(10)<<"Gold"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"500rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Thursday"<<setw(10)<<"Platinum"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"750rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Friday"<<setw(10)<<"Silver"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"350rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Saturday"<<setw(10)<<"Platinum"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"750rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Sunday"<<setw(10)<<"Platinum"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"750rs"<<endl;
		cout<<"\n\nPlease enter booking code: ";
		cin>>bc;
		 while (!(bc== 1 || bc==2 || bc==3 || bc==4 || bc==5 || bc==6 || bc==7))
            {
		 	  cout<<"Invalid booking code.Please Re-enter : ";
			  cin>>bc;
            }
		cout<<"Please enter the number of tickets you want:\n(Bonus on more then 5 ticket purchase ,Free Drink Per ticket) : ";
		cin>>tickets;
		 while (tickets<=0 || tickets>=42)
           {
			 cout<<"You have entered Invalid number of tickets.Please Re-enter : ";
			 cin>>tickets;
		   }
		if (bc==1)
		{
		    day= "Monday";
		    hall = "Gold";
		    price= gold*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
	else if (bc==2)
		{
		    day= "Tuesday";
		    hall = "Silver";
		    price= silver*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
	else if (bc==3)
		{
		    day= "Wednesday";
		    hall = "Gold";
		    price= gold*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		else if (bc==4)
		{
		    day= "Thursday";
		    hall= "Platinum";
		    price = platinum*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		else if (bc==5)
		{
		    day= "Friday";
		    hall = "Silver";
		    price= silver*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		else if (bc==6)
		{
		    day= "Saturday";
		    hall= "Platinum";
		    price = platinum*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		else if (bc==7)
		{
		    day= "Sunday";
		    hall= "Platinum";
		    price = platinum*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		if(tickets>5)
		{
			cout<<"You will get a free drink of your choice for every person. Enjoy!"<<endl;
		}
	}
		if(m=='e'||m=='E')
	{
	    movie = "Avengers";
		time="09:00 pm";
		cout<<"\t\tAvengers"<<endl;
		cout<<setw(16)<<left<<"Booking Code"<<setw(10)<<left<<"Day"<<setw(10)<<"Hall Type"<<setw(16)<<"Seats Available"<<setw(10)<<"Time"<<setw(10)<<"Price"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Monday"<<setw(10)<<"Gold"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"500rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Tuesday"<<setw(10)<<"Silver"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"350rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Wednesday"<<setw(10)<<"Gold"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"500rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Thursday"<<setw(10)<<"Platinum"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"750rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Friday"<<setw(10)<<"Silver"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"350rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Saturday"<<setw(10)<<"Platinum"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"750rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Sunday"<<setw(10)<<"Platinum"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"750rs"<<endl;
		cout<<"\n\nPlease enter booking code: ";
		cin>>bc;
		 while (!(bc== 1 || bc==2 || bc==3 || bc==4 || bc==5 || bc==6 || bc==7))
            {
		 	  cout<<"Invalid booking code.Please Re-enter : ";
			  cin>>bc;
            }
		cout<<"Please enter the number of tickets you want:\n(Bonus on more then 5 ticket purchase ,Free Drink Per ticket) : ";
		cin>>tickets;
         while (tickets<=0 || tickets>=42)
		   {
			 cout<<"You have entered Invalid number of tickets.Please Re-enter : ";
			 cin>>tickets;
		   }
		if (bc==1)
		{
		    day= "Monday";
		    hall = "Gold";
		    price= gold*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
	else if (bc==2)
		{
		    day= "Tuesday";
		    hall = "Silver";
			price= silver*tickets;
			cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
	else if (bc==3)
		{
		    day= "Wednesday";
		    hall = "Gold";
		    price= gold*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		else if (bc==4)
		{
		    day= "Thursday";
		    hall= "Platinum";
		    price = platinum*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		else if (bc==5)
		{
		    day= "Friday";
		    hall = "Silver";
		    price= silver*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		else if (bc==6)
		{
		    day= "Saturday";
		    hall= "Platinum";
		    price = platinum*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		else if (bc==7)
		{
		    day= "Sunday";
		    hall= "Platinum";
		    price = platinum*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		if(tickets>5)
		{
			cout<<"You will get a free drink of your choice for every person. Enjoy!"<<endl;
		}
	}
		if(m=='F'||m=='f')
	{
	    movie = "Death Note";
		time="12:00 am";
		cout<<"\t\tDeath Note"<<endl;
		cout<<setw(16)<<left<<"Booking Code"<<setw(10)<<left<<"Day"<<setw(10)<<"Hall Type"<<setw(16)<<"Seats Available"<<setw(10)<<"Time"<<setw(10)<<"Price"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Monday"<<setw(10)<<"Gold"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"500rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Tuesday"<<setw(10)<<"Silver"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"350rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Wednesday"<<setw(10)<<"Gold"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"500rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Thursday"<<setw(10)<<"Platinum"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"750rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Friday"<<setw(10)<<"Silver"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"350rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Saturday"<<setw(10)<<"Platinum"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"750rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Sunday"<<setw(10)<<"Platinum"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"750rs"<<endl;
		cout<<"\n\nPlease enter booking code: ";
		cin>>bc;
		 while (!(bc== 1 || bc==2 || bc==3 || bc==4 || bc==5 || bc==6 || bc==7))
            {
		 	  cout<<"Invalid booking code.Please Re-enter : ";
			  cin>>bc;
            }
        cout<<"Please enter the number of tickets you want:\n(Bonus on more then 5 ticket purchase ,Free Drink Per ticket) : ";
		cin>>tickets;
		 while (tickets<=0 || tickets>=42)
		   {
			 cout<<"You have entered Invalid number of tickets.Please Re-enter : ";
			 cin>>tickets;
		   }
		if (bc==1)
		{
		    day= "Monday";
		    hall = "Gold";
		    price= gold*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
	else if (bc==2)
		{
		    day= "Tuesday";
		    hall = "Silver";
		    price= silver*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
	else if (bc==3)
		{
		    day= "Wednesday";
		    hall = "Gold";
		    price= gold*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		else if (bc==4)
		{
		    day= "Thursday";
		    hall= "Platinum";
		    price = platinum*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		else if (bc==5)
		{
		    day= "Friday";
		    hall = "Silver";
		    price= silver*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		else if (bc==6)
		{
		    day= "Saturday";
		    hall= "Platinum";
		    price = platinum*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		else if (bc==7)
		{
		    day= "Sunday";
		    hall= "Platinum";
		    price = platinum*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		}
		if(tickets>5)
		{
			cout<<"You will get a free drink of your choice for every person. Enjoy!"<<endl;
		}
	}
		if(m=='g'||m=='G')
	{
	    movie = "Batman";
		time="02:00 am";
		cout<<"\t\tBatman\n"<<endl;
		cout<<setw(16)<<left<<"Booking Code"<<setw(10)<<left<<"Day"<<setw(10)<<"Hall Type"<<setw(16)<<"Seats Available"<<setw(10)<<"Time"<<setw(10)<<"Price"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Monday"<<setw(10)<<"Gold"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"500rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Tuesday"<<setw(10)<<"Silver"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"350rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Wednesday"<<setw(10)<<"Gold"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"500rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Thursday"<<setw(10)<<"Platinum"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"750rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Friday"<<setw(10)<<"Silver"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"350rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Saturday"<<setw(10)<<"Platinum"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"750rs"<<endl;
		cout<<setw(16)<<booking_code++<<setw(10)<<left<<"Sunday"<<setw(10)<<"Platinum"<<setw(16)<<seats<<setw(10)<<time<<setw(10)<<"750rs"<<endl;
		cout<<"\n\nPlease enter booking code: ";
		cin>>bc;
		 while (!(bc== 1 || bc==2 || bc==3 || bc==4 || bc==5 || bc==6 || bc==7))
            {
		 	  cout<<"Invalid booking code.Please Re-enter : ";
			  cin>>bc;
            }
        cout<<"Please enter the number of tickets you want:\n(Bonus on more then 5 ticket purchase ,Free Drink Per ticket) : ";
		cin>>tickets;
		 while (tickets<=0 || tickets>=42)
		   {
			 cout<<"You have entered Invalid number of tickets.Please Re-enter : ";
			 cin>>tickets;
		   }
		if (bc==1)
		 {
		    day= "Monday";
		    hall = "Gold";
		    price= gold*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		 }
	   else if (bc==2)
		 {
		    day= "Tuesday";
		    hall = "Silver";
		    price= silver*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		 }
	   else if (bc==3)
		 {
		    day= "Wednesday";
		    hall = "Gold";
		    price= gold*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		 }
		else if (bc==4)
		 {
		    day= "Thursday";
		    hall= "Platinum";
		    price = platinum*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		 }
		else if (bc==5)
		 {
		    day= "Friday";
		    hall = "Silver";
		    price= silver*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		 }
		else if (bc==6)
		 {
	 	    day= "Saturday";
		    hall= "Platinum";
			price = platinum*tickets;
			cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		 }
		else if (bc==7)
		 {
		    day= "Sunday";
		    hall= "Platinum";
		    price = platinum*tickets;
		    cout<<"\nPrice: PKR "<<price<<"\t\tPayment: ";
			cin>>mov_payment;
			while (mov_payment<price)
            {
                cout<<"Insufficient Payment .Please pay Sufficient Amount: ";
                cin>>mov_payment;
            }
            if (mov_payment > price)
                 {
                  mov_change = mov_payment - price;
                  cout<<"Here is your change: "<<mov_change<<"\n\n";
                 }
		 }
		if(tickets>5)
		 {
			cout<<"\nYou will get a free drink of your choice for every person. Enjoy!"<<endl;
		 }
	  }
	     char tick;
        cout<<"Would you like a ticket receipt? (y/n) : ";
        cin>>tick;
        while (!(tick =='n' || tick=='N' || tick=='y' || tick=='Y'))
        {
            cout<<"Please input y/n. Would you like a ticket receipt? ";
            cin>>tick;
        }
        if (tick== 'y' || tick == 'Y')
        {
          cout<<"Here is your Ticket receipt: "<<endl;   //movie ticket receipt
          cout<<"\n* * * * * * * * * * * * * * * * * * * * * * * \n ";
          cout<<"\t    C I N E M A X "<<endl; //supposed cinema name
	      cout<<"\n----------------------------------------------"<<endl;
	      cout<<"\n Movie Name   :  "<<movie<<"\n\n No. of Seats :  " <<tickets;
	      cout<<"\t Hall :  " <<hall<<"\n\n\t\t***PAID***"<<endl;
	      cout<<"\n----------------------------------------------"<<endl;
	      cout<<"\n Day  : "<<day<<"\t   Date :  05/08/2020 ";
	      cout<<"\n\n Time : "<<time<<endl;
	      cout<<"\n* * * * * * * * * * * * * * * * * * * * * * *  ";
        }
        else{ //ticket receipt no want
            cout<<"\nHave a Good Day";
        }
       cout<<"\n\nWould you like to Purchase food items? (y/n) : ";    //food option
       cin>>ans;
       while (!(ans == 'y' || ans== 'Y' || ans== 'n' || ans== 'N'))
	     {
	       cout<<"Please input y/n. Would you like to purchase food?  ";
	       cin>>ans;
	     }
	      if (ans == 'y' || ans =='Y')
         {
          cout << "\t\tCINEMA FOOD MENU\n";
          cout << "\nBURGERS\t\t\t\tDESERTS\n";
          cout << "\n\t\t\t\tCake      - Rs 100\n";
          cout << "Chicken Burger - Rs 200\t\tIce Cream - Rs 100\n";
          cout << "Beef Burger    - Rs 200\n";
          cout << "Zinger         - Rs 300\n";
          cout << "\nFRIES\t\t\t\tPOPCORN\n";
          cout << "\nFamily -  Rs 100\t\tFamily  - Rs 100\n";
          cout << "Regular - Rs 50\t\t\tRegular - Rs 50\n";
          cout << "\nHOT DOGS\t\t\tBEVERAGES\n";
          cout << "\nClassic - Rs 100\t\tSoft Drink - Rs 60\n";
          cout << "Special - Rs 150\t\tShake      - Rs 100\n";
          cout << "\nSPECIALS\t\t\tDEALS\n";
          cout << "\nBiryani        - Rs 150\t\tDeal 1 (Zinger+Fries+Drink)            - Rs 400\n";
          cout << "Shawarma       - Rs 200\t\tDeal 2 (Hot Dog Classic+Popcorn+Drink) - Rs 200\n";
           cout << "Cinema Special - Rs 500\t\tDeal 3 (Shawarma+Ice Cream+Drink)      - Rs 300\n";
    int order,food_cost=0,change,money,amount;
    string food_item;
    cout<<"\n\nHi I'm Ahmed ,what would you like to have?\n\n";
    cout<<"\n(1)Burgers\n(2)Fries\n(3)Desert\n(4)Hot Dogs\n(5)Popcorn\n(6)Beverages\n(7)Specials\n(8)Deals\n(9)Exit\nInput Digit to chose: "<<endl;
    cin>>order;
       while (!(order > 0 && order < 9))
       {
         cout << "Please select a number from provided range (1-8) : ";
         cin >> order;
       }
       if (order == 1)
       {
        char burger;
        cout << "Please select one of the available burgers." << endl;
        cout << "Chicken Burger (a) - Beef Burger (b) - Zinger (z) :";
        cin >> burger;
          while (!(burger == 'a' || burger == 'b' || burger == 'z'))
          {
            cout << "Please select one of the given options : ";
            cin >> burger;
          }
        if (burger == 'a')
         {
            food_item = "Chicken Burger";
            cout<<"\nAmount? ";
            cin>>amount;
             while (!(amount >=1 && amount<=41))
              {
                cout<<"\nYou've ordered too many, Re-input: ";
                cin>>amount;
              }
            food_cost += 200 * amount;
            cout<<"\nCost: "<<food_cost;
            cout<<"\nPayment : ";
            cin>>money;
            while (money < food_cost)
            {
                cout<<"Insufficient amount Please Re-input Payment: ";
                cin>>money;
            }
            change = money - food_cost;
            cout<<"\nHeres your change PKR "<<change;
            cout << "\nTHANK YOU FOR VISITING !";
        }
       else if (burger == 'b')
        {
            food_item = "Beef Burger";
            cout<<"\nAmount? ";
            cin>>amount;
             while (amount <1 || amount>41)
              {
                cout<<"\nYou've ordered too many, Re-input: ";
                cin>>amount;
              }
            food_cost += 200 * amount;
            cout<<"\nCost: "<<food_cost;
            cout<<"\nPayment : ";
            cin>>money;
            while (money < food_cost)
            {
                cout<<"Insufficient amount Please Re-input Payment: ";
                cin>>money;
            }
            change = money - food_cost;
            cout<<"\nHeres your change PKR "<<change;
            cout << "\nTHANK YOU FOR VISITING !";
        }
       else if (burger == 'z')
        {
           food_item = "Zinger Burger";
             cout<<"\nAmount? ";
            cin>>amount;
             while (amount <1 || amount>41)
              {
                cout<<"\nYou've ordered too many, Re-input: ";
                cin>>amount;
              }
            food_cost += 300 * amount;
            cout<<"\nCost: "<<food_cost;
            cout<<"\nPayment : ";
            cin>>money;
            while (money < food_cost)
            {
                cout<<"Insufficient amount Please Re-input Payment: ";
                cin>>money;
            }
            change = money - food_cost;
            cout<<"\nHeres your change PKR "<<change;
            cout << "\nTHANK YOU FOR VISITING !";
        }
    }
    else if (order == 2) {
        char fries;
        cout << "Please select one of the available options." << endl;
        cout << "Press (1) for family fries or (2) for regular fries : " ;
        cin >> fries;
        while (!(fries == '1' || fries == '2')) {
            cout << "Please select one of the given options : ";
            cin >> fries;
        }
        if (fries == '1') {
            food_item = "Family Fries";
             cout<<"\nAmount? ";
            cin>>amount;
             while (amount <1 || amount>41)
              {
                cout<<"\nYou've ordered too many, Re-input: ";
                cin>>amount;
              }
            food_cost += 100 * amount;
            cout<<"\nCost    : "<<food_cost;
            cout<<"\nPayment : ";
            cin>>money;
            while (money < food_cost)
            {
                cout<<"Insufficient amount Please Re-input Payment: ";
                cin>>money;
            }
            change = money - food_cost;
            cout<<"\nHeres your change PKR "<<change;
            cout << "\nTHANK YOU FOR VISITING !"<<endl;
             }
       else if (fries == '2') {
            food_item = "Regular Fries";
            cout<<"\nAmount? ";
            cin>>amount;
             while (amount <1 || amount>41)
              {
                cout<<"\nYou've ordered too many, Re-input: ";
                cin>>amount;
              }
            food_cost += 50 * amount;
            cout<<"\nCost    : "<<food_cost;
            cout<<"\nPayment : ";
            cin>>money;
            while (money < food_cost)
            {
                cout<<"Insufficient amount Please Re-input Payment: ";
                cin>>money;
            }
            change = money - food_cost;
            cout<<"\nHeres your change PKR "<<change;
            cout << "\nTHANK YOU FOR VISITING !"<<endl;
         }
      }
    else if (order == 3) {
        char desert;
        cout << "Please select one of the available options." << endl;
        cout << "Press (1) for Cake or (2) for Ice Cream : ";
        cin >> desert;
        while (!(desert == '1' || desert == '2')) {
            cout << "Please select one of the given options : ";
            cin >> desert;
        }
        if (desert == '1') {
            food_item = "Cake";
            cout<<"\nAmount? ";
            cin>>amount;
             while (amount <1 || amount>41)
              {
                cout<<"\nYou've ordered too many, Re-input: ";
                cin>>amount;
              }
            food_cost += 100 * amount;
            cout<<"\nCost    : "<<food_cost;
            cout<<"\nPayment : ";
            cin>>money;
            while (money < food_cost)
            {
                cout<<"Insufficient amount Please Re-input Payment: ";
                cin>>money;
            }
            change = money - food_cost;
            cout<<"\nHeres your change PKR "<<change;
            cout << "\nTHANK YOU FOR VISITING !"<<endl;
        }
        else if (desert == '2') {
          food_item = "Ice Cream";
            cout << "\nYour Order : Ice Cream\tCost : Rs 100"<<endl;
            cout<<"\nAmount? ";
            cin>>amount;
             while (amount <1 || amount>41)
              {
                cout<<"\nYou've ordered too many, Re-input: ";
                cin>>amount;
              }
            food_cost += 100 * amount;
            cout<<"\nCost    : "<<food_cost;
            cout<<"\nPayment : ";
            cin>>money;
             while (money < food_cost)
              {
                cout<<"Insufficient amount Please Re-input Payment: ";
                cin>>money;
              }
            change = money - food_cost;
            cout<<"\nHeres your change PKR "<<change;
            cout << "\nTHANK YOU FOR VISITING !"<<endl;
        }
    }
    else if (order == 4) {
        char dogs;
        cout << "Please select one of the available options." << endl;
        cout << "Press (1) for Classic Hot Dog or (2) for Special Hot Dog : ";
        cin >> dogs;
        while (!(dogs == '1' || dogs == '2')) {
            cout << "Please select one of the given options : ";
            cin >> dogs;
        }
        if (dogs == '1') {
            food_item = "Classic HotDog";
            cout<<"\nAmount? ";
            cin>>amount;
             while (amount <1 || amount>41)
              {
                cout<<"\nYou've ordered too many, Re-input: ";
                cin>>amount;
              }
            food_cost += 100 * amount;
            cout<<"\nCost    : "<<food_cost;
            cout<<"\nPayment : ";
            cin>>money;
             while (money < food_cost)
              {
                cout<<"Insufficient amount Please Re-input Payment: ";
                cin>>money;
              }
            change = money - food_cost;
            cout<<"\nHeres your change PKR "<<change;
            cout << "\nTHANK YOU FOR VISITING !"<<endl;
        }
        else if (dogs == '2') {
           food_item = "Special Hot dog";
            cout<<"\nAmount? ";
            cin>>amount;
             while (amount <1 || amount>41)
              {
                cout<<"\nYou've ordered too many, Re-input: ";
                cin>>amount;
              }
            food_cost += 150 * amount;
            cout<<"\nCost    : "<<food_cost;
            cout<<"\nPayment : ";
            cin>>money;
             while (money < food_cost)
              {
                cout<<"Insufficient amount Please Re-input Payment: ";
                cin>>money;
              }
            change = money - food_cost;
            cout<<"\nHeres your change PKR "<<change;
            cout << "\nTHANK YOU FOR VISITING !"<<endl;
        }
    }
    else if (order == 5) {
        char bev;
        cout << "Please select one of the available options." << endl;
        cout << "Press (1) for Family-Popcorn or (2) for Regular-Popcorn : ";
        cin >> bev;
        while (!(bev == '1' || bev == '2')) {
            cout << "Please select one of the given options : ";
            cin >> bev;
        }
        if (bev == '1') {
            food_item = "Family Popcorn";
            cout<<"\nAmount? ";
            cin>>amount;
             while (amount <1 || amount>41)
              {
                cout<<"\nYou've ordered too many, Re-input: ";
                cin>>amount;
              }
            food_cost += 100 * amount;
            cout<<"\nCost    : "<<food_cost;
            cout<<"\nPayment : ";
            cin>>money;
             while (money < food_cost)
              {
                cout<<"Insufficient amount Please Re-input Payment: ";
                cin>>money;
              }
            change = money - food_cost;
            cout<<"\nHeres your change PKR "<<change;
            cout << "\nTHANK YOU FOR VISITING !"<<endl;
        }
        else if (bev == '2') {
            food_item= "Regular Popcorn";
            cout<<"\nAmount? ";
            cin>>amount;
             while (amount <1 || amount>41)
              {
                cout<<"\nYou've ordered too many, Re-input: ";
                cin>>amount;
              }
            food_cost += 50 * amount;
            cout<<"\nCost    : "<<food_cost;
            cout<<"\nPayment : ";
            cin>>money;
             while (money < food_cost)
              {
                cout<<"Insufficient amount Please Re-input Payment: ";
                cin>>money;
              }
            change = money - food_cost;
            cout<<"\nHeres your change PKR "<<change;
            cout << "\nTHANK YOU FOR VISITING !"<<endl;
        }
    }
     else if (order == 6) {
        char bev;
        cout << "Please select one of the available options." << endl;
        cout << "Press (1) for Soft Drink or (2) for Shake : ";
        cin >> bev;
        while (!(bev == '1' || bev == '2')) {
            cout << "Please select one of the given options : ";
            cin >> bev;
        }
        if (bev == '1') {
            food_item= "Soft Drink";
            cout<<"\nAmount? ";
            cin>>amount;
             while (amount <1 || amount>41)
              {
                cout<<"\nYou've ordered too many, Re-input: ";
                cin>>amount;
              }
            food_cost += 60 * amount;
            cout<<"\nCost    : "<<food_cost;
            cout<<"\nPayment : ";
            cin>>money;
             while (money < food_cost)
              {
                cout<<"Insufficient amount Please Re-input Payment: ";
                cin>>money;
              }
            change = money - food_cost;
            cout<<"\nHeres your change PKR "<<change;
            cout << "\nTHANK YOU FOR VISITING !"<<endl;
        }
        else if (bev == '2') {
            food_item = "Shake";
            cout<<"\nAmount? ";
            cin>>amount;
             while (amount <1 || amount>41)
              {
                cout<<"\nYou've ordered too many, Re-input: ";
                cin>>amount;
              }
            food_cost += 100 * amount;
            cout<<"\nCost    : "<<food_cost;
            cout<<"\nPayment : ";
            cin>>money;
             while (money < food_cost)
              {
                cout<<"Insufficient amount Please Re-input Payment: ";
                cin>>money;
              }
            change = money - food_cost;
            cout<<"\nHeres your change PKR "<<change;
            cout << "\nTHANK YOU FOR VISITING !"<<endl;
        }
    }
     else if (order == 7) {
     char special;
     cout << "Please select one of the available options." << endl;
     cout << "Press (1) for Biryani or (2) for Shawarma or (3) for Cinema Special : ";
     cin >> special;
     while (!(special == '1' || special == '2' || special == '3')) {
         cout << "Please select one of the given options : ";
         cin >> special;
     }
     if (special == '1') {
         food_item= "Biryani";
          cout<<"\nAmount? ";
          cin>>amount;
             while (amount <1 || amount>41)
              {
                cout<<"\nYou've ordered too many, Re-input: ";
                cin>>amount;
              }
            food_cost += 150 * amount;
            cout<<"\nCost    : "<<food_cost;
            cout<<"\nPayment : ";
            cin>>money;
             while (money < food_cost)
              {
                cout<<"Insufficient amount Please Re-input Payment: ";
                cin>>money;
              }
            change = money - food_cost;
            cout<<"\nHeres your change PKR "<<change;
            cout << "\nTHANK YOU FOR VISITING !"<<endl;
     }
     else if (special == '2') {
         food_item= "Shawarma";
            cout<<"\nAmount? ";
            cin>>amount;
             while (amount <1 || amount>41)
              {
                cout<<"\nYou've ordered too many, Re-input: ";
                cin>>amount;
              }
            food_cost += 200 * amount;
            cout<<"\nCost    : "<<food_cost;
            cout<<"\nPayment : ";
            cin>>money;
             while (money < food_cost)
              {
                cout<<"Insufficient amount Please Re-input Payment: ";
                cin>>money;
              }
            change = money - food_cost;
            cout<<"\nHeres your change PKR "<<change;
            cout << "\nTHANK YOU FOR VISITING !"<<endl;
     }
     else if (special == '3') {
         food_item= "Cinema Special";
          cout<<"\nAmount? ";
          cin>>amount;
             while (amount <1 || amount>41)
              {
                cout<<"\nYou've ordered too many, Re-input: ";
                cin>>amount;
              }
            food_cost += 500 * amount;
            cout<<"\nCost    : "<<food_cost;
            cout<<"\nPayment : ";
            cin>>money;
             while (money < food_cost)
              {
                cout<<"Insufficient amount Please Re-input Payment: ";
                cin>>money;
              }
            change = money - food_cost;
            cout<<"\nHeres your change PKR "<<change;
            cout << "\nTHANK YOU FOR VISITING !"<<endl;
     }
    }
     else if (order == 8)
     {
      char deal;
      cout << "\nPlease select one of the deals." << endl;
      cout << "\nPress (1) for Deal-1 or (2) for Deal-2 or (3) for Deal-3 : ";
      cin >> deal;
      while (!(deal == '1' || deal == '2' || deal == '3'))
       {
         cout << "Please select one of the given options : ";
         cin >> deal;
       }
       if (deal == '1')
        {
         food_item= "Deal 1";
            cout<<"\nAmount? ";
            cin>>amount;
             while (amount <1 || amount>41)
              {
                cout<<"\nYou've ordered too many, Re-input: ";
                cin>>amount;
              }
            food_cost += 400 * amount;
            cout<<"\nCost    : "<<food_cost;
            cout<<"\nPayment : ";
            cin>>money;
             while (money < food_cost)
              {
                cout<<"Insufficient amount Please Re-input Payment: ";
                cin>>money;
              }
            change = money - food_cost;
            cout<<"\nHeres your change PKR "<<change;
            cout << "\nTHANK YOU FOR VISITING !"<<endl;
      }
       else if (deal == '2') {
         food_item = "Deal 2";
            cout<<"\nAmount? ";
            cin>>amount;
             while (amount <1 || amount>41)
              {
                cout<<"\nYou've ordered too many, Re-input: ";
                cin>>amount;
              }
            food_cost += 200 * amount;
            cout<<"\nCost    : "<<food_cost;
            cout<<"\nPayment : ";
            cin>>money;
             while (money < food_cost)
              {
                cout<<"Insufficient amount Please Re-input Payment: ";
                cin>>money;
              }
            change = money - food_cost;
            cout<<"\nHeres your change PKR "<<change;
            cout << "\nTHANK YOU FOR VISITING !"<<endl;;
      }
       else if (deal == '3') {
         food_item= "Deal 3";
            cout<<"\nAmount? ";
            cin>>amount;
             while (amount <1 || amount>41)
              {
                cout<<"\nYou've ordered too many, Re-input: ";
                cin>>amount;
              }
            food_cost += 300 * amount;
            cout<<"\nCost    : "<<food_cost;
            cout<<"\nPayment : ";
            cin>>money;
             while (money < food_cost)
              {
                cout<<"Insufficient amount Please Re-input Payment: ";
                cin>>money;
              }
            change = money - food_cost;
            cout<<"\nHeres your change PKR "<<change;
            cout << "\nTHANK YOU FOR VISITING !"<<endl;
       }
     }
       else if (order == 9) { //exit
        cout << "\nTHANK YOU FOR VISITING !" << endl;
        cout << "\n  COME BACK AGAIN :)\n"<<endl;
       }
       //food receipt bit
       if (order != 9)
       {
          cout<<"\nWould you like a Food Receipt? (y/n) : ";
          cin>>ans;
         while (!(ans =='n' || ans=='N' || ans=='y' || ans=='Y'))
          {
            cout<<"Please input y/n. Would you like a Food Receipt?  ";
            cin>>ans;
          }
       if (ans== 'y' || ans == 'Y')  //food receipt
        {
          cout<<"\n\t          C I N E M A X \n"<<endl;
	      cout<<"\n- - - - - - - - - - - - - - - - - - - - - - - - - - -  - ";
	      cout<<"\n\t          FOOD RECIEPT ";
          cout<<"\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - \n";
	      cout<<"\n Time : "<<time<<"      Employee : "<<"Ahmed\t order # "<<" 805"<<endl;
	      cout<<"\n_______________________________________________________\n";
	      cout<<"\tQty"<<"    Description\t"<<"   Price(PKR)";
	      cout<<"\n_______________________________________________________\n";
	      cout<<"\t"<<amount<<"\t"<<food_item<<"\t\t"<<food_cost;
	      cout<<"\n-------------------------------------------------------";
	      cout<<"\nTotal     :\t\t"<<food_cost;
	      cout<<"\nPayment   :\t\t"<<money;
          cout<<"\nChange    :\t\t"<<change;
          cout<<"\n-------------------------------------------------------";
	      cout<<"\n\t       *****Thank You*****\n \t        Please come again ";
        }
       }
         else //no food receipt,chose 9 for exiting
          {
           cout<<"\nOkay have a good Day!"<<endl;
          }
      }
      else //no food item purchase
       cout<<"\nHave a good day!";
    }
   else  //exit
    cout<<"\nGoodbye!";
  return 0;
}
