#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<dos.h>
#include<math.h>
#include<stdlib.h>

//Function Prototypes

    void Train();

    void Flight();

    void Buses();

    void Msignup();

    void Msentry();

    void Mtrentry();

    void modifybyt();

    void check();

    void tcheck();

    void Mlogin();

    void Manager();

    void login();

    void signup();

    void User();

    void ttcheck();

    void ticketbooking();

    void ticketchecking();

    void cancel();

    void modifyticket();

    void fMsignup();

    void fMsentry();

    void fMtrentry();

    void fmodifybyt();

    void fcheck();

    void ffcheck();

    void fMlogin();

    void fManager();

    void flogin();

    void fsignup();

    void fUser();

    void fffcheck();

    void fticketbooking();

    void fticketchecking();

    void fcancel();

    void fmodifyticket();

    void bMsignup();

    void bMsentry();

    void bMtrentry();

    void bmodifybyt();

    void bcheck();

    void bbcheck();

    void bMlogin();

    void bManager();

    void blogin();

    void bsignup();

    void bUser();

    void bbbcheck();

    void bticketbooking();

    void bticketchecking();

    void bcancel();

    void bmodifyticket();

    void load();



//Classes

class Train_reservation
{
  char mno[10],Mmno[10],Trainno[10];
  char name[20],Mname[25];
  char email[20],Memail[25];
  char password[10],Mpassword[10],adhar[10],Madhar[10];
  char aplace[25],dplace[25],Trainname[30];
  float cost;
  char pname[30],page[20],pgender[5];
  int firstac,secondac,fct,sct,ttno,pnr,tage,coach,coachno,seatno;
  float firstct,secondct,firsttct,secondtct,tcost,ttcost;
  char tname[20],tgender[10],j;

   public:
	char*retemail() { return(email); }
	char*Mretemail() { return(Memail); }
	char*retUpass() { return(password); }
	char*retMpass() { return(Mpassword); }
	char*retadhar() { return(adhar); }
	char*retMadhar() { return(Madhar); }
	char*rettrainno() { return(Trainno);  }
	char*rettrainname() { return(Trainname);  }
	int retpnr() { return pnr; }
	void Input();
	void MInput();
	void tdata();
	void Traindetail();
	void outTraindetail();
	void tbooktin();
	void tbookcheck();
	}t;

	void Train_reservation::Input()
	{
		cout<<"Enter The Name  :";
		gets(name);
		cout<<"Enter The Mobile Number :";
		cin>>mno;
		cout<<"Enter The Aadhar Number :";
		cin>>adhar;
		cout<<"Create An Email :";
		gets(email);
		cout<<"Create An Six Digit Password :";
		cin>>password;
	}

	void Train_reservation::MInput()
	{
		cout<<"Enter The Manager Name ";
		gets(Mname);
		cout<<"Enter The Mobile Number :";
		cin>>Mmno;
		cout<<"Enter The Aadhar Number :";
		cin>>Madhar;
		cout<<"Create An Email Id ";
		gets(Memail);
		cout<<"Create An Six Digit Password :";
		cin>>Mpassword;
	}

	void Train_reservation::Traindetail()
	{

		cout<<"\nEnter the Name of TRAIN ";
		gets(Trainname);
		cout<<"\nEnter the Train Number :";
		cin>>Trainno;
		cout<<"\nEnter the Name of Arrival Platform ";
		gets(aplace);
		cout<<"\nEnter the Name of Destination Platform: ";
		gets(dplace);
		cout<<"\nEnter the No of seats in first AC : ";
		cin>>firstac;
		cout<<"\nEnter the Cost of First class ticket: ";
		cin>>firstct;
		cout<<"\nEnter the No of seats in second AC : ";
		cin>>secondac;
		cout<<"\nEnter the cost of second class ticket: ";
		cin>>secondct;

	    }

	void Train_reservation::outTraindetail()
	{
		cout<<"\nName of TRAIN : ";
		cout<<Trainname;
		cout<<"\nTrain Number : ";
		cout<<Trainno;
		cout<<"\nArrival Platform Name  ";
		cout<<aplace;
		cout<<"\nDestination Platform Name  ";
		cout<<dplace;
		cout<<"\nNo of seats in first AC :";
		cout<<firstac;
		cout<<"\nCost of first class ticket :";
		cout<<firstct;
		cout<<"\nNo of seats in second AC :";
		cout<<secondac;
		cout<<"\nCost of second class ticket :";
		cout<<secondct;
	     }

	void Train_reservation::tdata()
	{
		tname;
		tage;
		tgender;
		ttno;
		fct;
		sct;
		tcost;
	}

	void Train_reservation::tbooktin()
	{
	       char ch;
	       cout<<"\nEnter the detail ";
	       cout<<"\nEnter the no of seats for Booking :";
	       cin>>ttno;
	       for(int i=0;i<ttno;i++)
	       {
		cout<<"\nEnter The Name  :";
		gets(tname);
		cout<<"\nEnter The Age of Passanger :";
		cin>>tage;
		cout<<"\nEnter The Gender :";
		gets(tgender);
		}
		cout<<"\nEnter the No of First class tickets require ";
		cin>>fct;
		cout<<"\nEnter the No of Second class ticket require :";
		cin>>sct;
		cout<<"\nDo You want Drinks And Meal ";
		cin>>ch;
		if(ch=='y')
		{ ttcost=(500*ttno)+ttcost; }
		firstac=firstac-fct;
		secondac=secondac-sct;

		firsttct=firstct*fct;
		secondtct=secondct*sct;

		tcost=firsttct+secondtct+ttcost;
		cout<<"\nTotal cost for the journey ";
		cout<<tcost;
		pnr=pow(tage,4);

		cout<<"\n\tYour ticket is cofirm and booked ";
		cout<<"\nPNR number : "<<pnr;
		cout<<"\nSeats available in first class \t"<<firstac;
		coachno=random(5);
		coach=65+random(26);
		seatno=pnr+tage;
		j=coach;
		cout<<j;
		cout<<"\nCoach no \t"<<coach<<coachno;
		cout<<"\nSeat no \t"<<seatno;
		cout<<"\nSeats available in second class \t"<<secondac;
		}

	void Train_reservation::tbookcheck()
	{
		cout<<"\tTicket detail ";
		cout<<"\nName of TRAIN  ";
		cout<<Trainname;
		cout<<"\nTRAIN Number : ";
		cout<<Trainno;
		cout<<"\nPNR number : "<<pnr;
		for(int i=0;i<ttno;i++)
		{
		cout<<"\nName of passenger :";
		cout<<tname;
		cout<<"\nAge of Passanger :";
		cout<<tage;
		cout<<"\nGender :";
		cout<<tgender;
			 }
		cout<<"\nTotal no of seats for Booking :"<<ttno;
		cout<<"\nNo of First class ticket    "<<fct;
		cout<<"\nNo of Second class ticket    "<<sct;
		cout<<"\nTotal cost for the journey    ";
		cout<<tcost;
		cout<<"\n\n\tTicket is booked and cofirm";
	}

 class Flight_reservation
 {
  char fmno[10],fMmno[10],fflightno[10];
  char fname[20],fMname[25];
  char femail[20],fMemail[25];
  char fpassword[10],fMpassword[10],fadhar[10],fMadhar[10];
  char faplace[25],fdplace[25],fflightname[30];
  float fcost;
  char fpname[30],fpage[20],fpgender[5];
  int ffirstac,fsecondac,ffct,fsct,fttno,fftno,ftage;
  float ffirstct,fsecondct,ffirsttct,fsecondtct,ftcost,fdcost;
  char ftname[20],ftgender[10];

  public:
	char*fretemail() { return(femail); }
	char*fMretemail() { return(fMemail); }
	char*fretUpass() { return(fpassword); }
	char*fretMpass() { return(fMpassword); }
	char*fretflightno() { return(fflightno);  }
	char*fretflightname() { return(fflightname);  }
	int fretfftno() { return fftno; }
	void fInput();
	void fMInput();
	void fdata();
	void flightdetail();
	void foutflightdetail();
	void ftbooktin() ;
	void ftbookcheck() ;

	}f;

	void Flight_reservation::fdata()
	{
		fpname;
		fpage;
		fpgender;
		fftno;
		ffct;
		fsct;
		fcost;
	}

	void Flight_reservation::fInput()
	{
		cout<<"Enter The Name  :";
		gets(fname);
		cout<<"Enter The Mobile Number :";
		cin>>fmno;
		cout<<"Enter The Aadhar Number :";
		cin>>fadhar;
		cout<<"Create An Email :";
		gets(femail);
		cout<<"Create An Five Digit Password :";
		cin>>fpassword;
	}

	void Flight_reservation::fMInput()
	{
		cout<<"Enter The Manager Name ";
		gets(fMname);
		cout<<"Enter The Mobile Number :";
		cin>>fMmno;
		cout<<"Enter The Aadhar Number :";
		cin>>fMadhar;
		cout<<"Create An Email Id ";
		gets(fMemail);
		cout<<"Create An Five Digit Password :";
		cin>>fMpassword;
	}

	void Flight_reservation::flightdetail()
	{
		cout<<"\nEnter the Name of Airline ";
		gets(fflightname);
		cout<<"\nEnter the Flight Number :";
		cin>>fflightno;
		cout<<"\nEnter the Name of Arrival Airpot ";
		gets(faplace);
		cout<<"\nEnter the Name of Destination Airpot ";
		gets(fdplace);
		cout<<"\nEnter the No of seats in Economy class :";
		cin>>ffirstac;
		cout<<"\nEnter the Cost of Economy class ticket :";
		cin>>ffirstct;
		cout<<"\nEnter the No of seats in Buisness Class:";
		cin>>fsecondac;
		cout<<"\nEnter the cost of Buisness class ticket :";
		cin>>fsecondct;
	}

	void Flight_reservation::foutflightdetail()
	{
		cout<<"\nName of Airline  ";
		cout<<fflightname;
		cout<<"\nFlight Number : ";
		cout<<fflightno;
		cout<<"\nArrival Airpot  Name  ";
		cout<<faplace;
		cout<<"\nDestination Airpot Name  ";
		cout<<fdplace;
		cout<<"\nNo of seats in Economy Class :";
		cout<<ffirstac;
		cout<<"\nCost of Economy class ticket :";
		cout<<ffirstct;
		cout<<"\nNo of seats in Buisness Class :";
		cout<<fsecondac;
		cout<<"\nCost of Buisness class ticket :";
		cout<<fsecondct;
	}

	void Flight_reservation::ftbooktin()
	{
		char ch;
		cout<<"\nEnter the detail ";
		cout<<"\nEnter the no of seats for Booking :";
		cin>>fttno;
		for(int i=0;i<fttno;i++)
		{
		cout<<"\nEnter The Name of Passenger :";
		gets(ftname);
		cout<<"\nEnter The Age of Passanger :";
		cin>>ftage;
		cout<<"\nEnter The Gender :";
		gets(ftgender);
		}
		cout<<"\nEnter the No of Econoy class tickets require ";
		cin>>ffct;
		cout<<"\nEnter the No of Buisness class ticket require :";
		cin>>fsct;
		cout<<"\nDo You want Drinks And Meal ";
		cin>>ch;
		if(ch=='y')
		{
			    fdcost=(500*fttno)+fdcost;
			}
		ffirstac=ffirstac-ffct;
		fsecondac=fsecondac-fsct;

		ffirsttct=ffirstct*ffct;
		fsecondtct=fsecondct*fsct;

		ftcost=ffirsttct+fsecondtct+fdcost;
		cout<<"\nTotal cost for the journey ";
		cout<<ftcost;
		fftno=ffct+fsct+ftage;

		cout<<"\n\tYour ticket is booked ";
		cout<<"\nTicket Booking number : "<<fftno;
		cout<<"\nSeats available in Economy class \t"<<ffirstac;
		cout<<"\nSeats available in Buisness class \t"<<fsecondac;
	}

	void Flight_reservation::ftbookcheck()
	{
		cout<<"\n\n\tTicket detail ";
		cout<<"\nName of AIRLINE  "<<fflightname;
		cout<<"\nFLIGHT Number : ";
		cout<<fflightno;
		cout<<"\nTicket Booking Number : "<<fftno;
		for(int i=0;i<fttno;i++)
		{
		cout<<"\nName of passenger :";
		cout<<ftname;
		cout<<"\nAge of Passanger :";
		cout<<ftage;
		cout<<"\nGender :";
		cout<<ftgender;
		}
		cout<<"\nTotal no of seats for Booking :"<<fttno;
		cout<<"\nNo of Economy class ticket    "<<ffct;
		cout<<"\nNo of Buisness class ticket    "<<fsct;
		cout<<"\nTotal cost for the journey    ";
		cout<<ftcost;
		cout<<"\n\n\tTicket is booked ";
	}

 class BUS_reservation
 {
  char bmno[10],bMmno[10],busno[10];
  char bname[20],bMname[25];
  char bemail[20],bMemail[25];
  char bpassword[10],bMpassword[10],badhar[10],bMadhar[10];
  char baplace[25],bdplace[25],busname[30];
  float bcost;
  char bpname[30],bpage[20],bpgender[5];
  int bfirstac,bsecondac,bbct,bsct,bttno,bbtno,btage;
  float bfirstct,bsecondct,bfirsttct,bsecondtct,btcost,dcost;
  char btname[20],btgender[10];

   public:
	char*bretemail() { return(bemail); }
	char*bMretemail() { return(bMemail); }
	char*bretUpass() { return(bpassword); }
	char*bretMpass() { return(bMpassword); }
	char*bretbusno() { return(busno);  }
	char*bretbusname() { return(busname);  }
	int bretfftno() { return bbtno; }
	void bInput();
	void bMInput();
	void bdata();
	void busdetail();
	void boutbusdetail();
	void btbooktin() ;
	void btbookcheck() ;

	    }b;

	void BUS_reservation::bdata()
	{
	bpname;
		bpage;
		bpgender;
		bbtno;
		bbct;
		bsct;
		bcost;
	}

	void BUS_reservation::bInput()
	{
		cout<<"Enter The Name  :";
		gets(bname);
		cout<<"Enter The Mobile Number :";
		cin>>bmno;
		cout<<"Enter The Aadhar Number :";
		cin>>badhar;
		cout<<"Create An Email :";
		gets(bemail);
		cout<<"Create An Five Digit Password :";
		cin>>bpassword;
	}

	void BUS_reservation::bMInput()
	{
		cout<<"Enter The Manager Name ";
		gets(bMname);
		cout<<"Enter The Mobile Number :";
		cin>>bMmno;
		cout<<"Enter The Aadhar Number :";
		cin>>bMadhar;
		cout<<"Create An Email Id ";
		gets(bMemail);
		cout<<"Create An Five Digit Password :";
		cin>>bMpassword;
	}

	void BUS_reservation::busdetail()
	{
		cout<<"\nEnter the Name of BUS ";
		gets(busname);
		cout<<"\nEnter the BUS Number :";
		cin>>busno;
		cout<<"\nEnter the Name of Arrival DEPO ";
		gets(baplace);
		cout<<"\nEnter the Name of Destination DEPO ";
		gets(bdplace);
		cout<<"\nEnter the No of seats in Sleeper Coach :";
		cin>>bfirstac;
		cout<<"\nEnter the Cost of Sleeper Coach ticket :";
		cin>>bfirstct;
		cout<<"\nEnter the No of seats in AC Coach :";
		cin>>bsecondac;
		cout<<"\nEnter the cost of AC Coach ticket :";
		cin>>bsecondct;
	}

	void BUS_reservation::boutbusdetail()
	{
		cout<<"\nName of BUS  ";
		cout<<busname;
		cout<<"\nBUS Number : ";
		cout<<busno;
		cout<<"\nArrival DEPO Name  ";
		cout<<baplace;
		cout<<"\nDestination DEPO Name  ";
		cout<<bdplace;
		cout<<"\nNo of seats in Sleeper Coach :";
		cout<<bfirstac;
			cout<<"\nCost of Sleeper Coach ticket :";
		cout<<bfirstct;
		cout<<"\nNo of seats in AC Coach :";
		cout<<bsecondac;
		cout<<"\nCost of AC Coach ticket :";
		cout<<bsecondct;
       }

       void BUS_reservation::btbooktin()
       {
		char ch;
		cout<<"\nEnter the detail ";
		cout<<"\nEnter the no of seats for Booking :";
		cin>>bttno;
		for(int i=0;i<bttno;i++)
		{
		cout<<"\nEnter The Name of Passenger :";
		gets(btname);
		cout<<"\nEnter The Age of Passanger :";
		cin>>btage;
		cout<<"\nEnter The Gender :";
		gets(btgender);
		}
		cout<<"\nEnter the No of Sleeper Coach  tickets require ";
		cin>>bbct;
		cout<<"\nEnter the No of AC coach ticket require :";
		cin>>bsct;
		cout<<"\nDo You want Drinks And Meal ";
		cin>>ch;
		if(ch=='y')
		{
			  dcost=(500*bttno)+dcost;
			 }
		bfirstac=bfirstac-bbct;
		bsecondac=bsecondac-bsct;

			bfirsttct=bfirstct*bbct;
		bsecondtct=bsecondct*bsct;

		btcost=bfirsttct+bsecondtct+dcost;
		cout<<"\nTotal cost for the journey ";
		cout<<btcost;
		bbtno=bbct+bsct+btage;
		cout<<"\n\tYour ticket is booked ";
		cout<<"\nTicket Booking number : "<<bbtno;
		cout<<"\nSeats available in Sleeper Coach \t"<<bfirstac;
		cout<<"\nSeats available in AC Coach \t"<<bsecondac;
	      }

		void BUS_reservation::btbookcheck()
	  {
		       cout<<"\n\n\tTicket detail ";
		cout<<"\nName of BUS  ";
		cout<<busname;
		cout<<"\nBUS Number : ";
		cout<<busno;
		cout<<"\nTicket Booking Number : "<<bbtno;
		for(int i=0;i<bttno;i++)
		{
			cout<<"\nName of passenger :";
		cout<<btname;
			cout<<"\nAge of Passanger :";
		cout<<btage;
			cout<<"\nGender :";
		cout<<btgender;                    }
		cout<<"\nTotal no of seats for Booking :"<<bttno;
		cout<<"\nNo of Sleeper Coach ticket    "<<bbct;
		cout<<"\nNo of AC Coach ticket    "<<bsct;
		cout<<"\nTotal cost for the journey    ";
		cout<<btcost;
			cout<<"\n\n\tTicket is booked ";

}
//Main Function

void main()
  {
  clrscr();
  for(int i=0;i<=79;i++)
  cout<<"*";

  cout<<"\n\n\n\t\t     M A K E     M Y     E A S Y      T R I P \n\n\n";

  for( i=0;i<=79;i++)
  cout<<"*";

  char h;
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFOR FLIGHT,RAILWAY,BUS TICKET BOOKING :-";
  getch();

  do
  {
  clrscr();
  for(int i=0;i<=79;i++)
  cout<<"*";
  cout<<"\n\n\t\t    Wecome To The Ticket Reservation System\n\n";
  for( i=0;i<=79;i++)
  cout<<"*";

  int ch;
  cout<<"\n\n\n\n\tEnter Your Choice :";
  cout<<"\n\n\n\t1:TRAIN RESERVATION \n\n\t2:AIRLINE RESERVATION \n\n\t3:BUS RESERVATION\n\n\t4:EXIT\n";
  cin>>ch;
  switch(ch)
   {

     case 1: Train();
     break;
     case 2: Flight();
     break;
     case 3: Buses();
     break;
     case 4: exit(0);

   }

  }while(1);

 }

 void Train()
 {
   int ch;

   do
   {
    clrscr();
    for(int i=0;i<=79;i++)
    cout<<"*";
    cout<<"\n\n\t\t   Wecome To The Railway Reservation System \n";
    for( i=0;i<=79;i++)
    cout<<"*";
    cout<<"\n\n\n\n\tEnter Your Choice :";
    cout<<"\n\n\n\t1:MANAGER \n\n\t2:USER \n\n\t3:BACK\n";
    cin>>ch;
    switch(ch)
    {
      case 1: Manager();
      break;
      case 2: User();
      break;
      case 3:break;
    }
  }while(ch!=3);
 }

 void Flight()
 {
   int ch;
   do
   {

    clrscr();
    for(int i=0;i<=79;i++)
    cout<<"*";
    cout<<"\n\n\t\t     Wecome To The Airline Reservation System\n";
    for( i=0;i<=79;i++)
    cout<<"*";
    cout<<"\n\n\n\n\tEnter Your Choice :";
    cout<<"\n\n\n\t1:MANAGER \n\n\t2:USER \n\n\t3:BACK\n";
    cin>>ch;
    switch(ch)
    {

     case 1: fManager();
     break;
     case 2: fUser();
     break;
     case 3:break;

    }

   }while(ch!=3);

  }

 void Buses()
 {
   int ch;
   do
   {
    clrscr();
    for(int i=0;i<=79;i++)
    cout<<"*";
    cout<<"\n\n\t\t     Wecome To The Bus Reservation System\n";
    for( i=0;i<=79;i++)
    cout<<"*";
    cout<<"\n\n\n\n\tEnter Your Choice :";
    cout<<"\n\n\n\t1:MANAGER \n\n\t2:USER \n\n\t3:BACK\n";
    cin>>ch;
    switch(ch)
    {
     case 1: bManager();
     break;
     case 2: bUser();
     break;
     case 3:break;
    }
   }while(ch!=3);
  }

 void load()
 {
 clrscr();
 cout<<"\n\n\n\n\n\n\t\t\t\tLoading"<<endl;
 cout<<"\t\t\t";
 for(int i=0;i<=22;i++)
 {
  cout<<char(219);
  delay(100);
 }
 }

  //Train Ticket booking :-


 void Msignup()
 {
   clrscr();
   for(int i=0;i<=79;i++)
   cout<<"*";
   cout<<"\n\t\t\tI N D I A N    R A I L W A Y S\n\n";
   for( i=0;i<=79;i++)
   cout<<"*";
   cout<<"\n\t\t\tEnter The Detail Of Manager\n\n";
   char y='y';
   ofstream fin;
   fin.open("TRAINSS.DAT" ,ios::binary|ios::app);
   while(y=='y'||y=='Y')
   {
      t.MInput();
      fin.write((char*)&t,sizeof(t));
      cout<<"\nDo you want to Create More Account : ";
      cin>>y;
    }
    fin.close();
  }


 void Mtrentry()
 {
   clrscr();
   for(int i=0;i<=79;i++)
   cout<<"*";
   cout<<"\n\t\t\tI N D I A N    R A I L W A Y S\n\n";
   for( i=0;i<=79;i++)
   cout<<"*";

    char y='y';
    ofstream fin;
    fin.open("TRAINSS.DAT" ,ios::binary|ios::app);
    while(y=='y'||y=='Y')
    {
      t.Traindetail();
      fin.write((char*)&t,sizeof(t));
      cout<<"\nDo you want to Enter More TRAINS And STATION : ";
      cin>>y;
    }
    fin.close();
  }


 void modifybyt()
 {
    clrscr();
    for(int i=0;i<=79;i++)
    cout<<"*";
    cout<<"\n\t\t\tI N D I A N    R A I L W A Y S\n\n";
    for( i=0;i<=79;i++)
    cout<<"*";

     fstream fon;
     fon.open("TRAINSS.DAT",ios::binary|ios::in|ios::out);
     int L,flag=0;
     char ch[50],dc[20];
     cout<<"Enter the TRAIN Name ";
     gets(ch);
     cout<<"Enter the TRAIN Number ";
     gets(dc);

    while(!fon.eof())
    {
      L=fon.tellg();
      fon.read((char*)&t,sizeof(t));
      if(strcmp(t.rettrainname(),ch)==0)
      {
      if(strcmp(t.rettrainno(),dc)==0)
      {
	load();
	clrscr();
	for(int i=0;i<=79;i++)
	cout<<"*";
	cout<<"\n\t\t\tI N D I A N    R A I L W A Y S\n\n";
	for( i=0;i<=79;i++)
	cout<<"*";
	cout<<" OLD DATA \n";
	t.outTraindetail();
	cout<<endl;
	t.Traindetail();
	fon.seekg(L);
	fon.write((char*)&t,sizeof(t));
	  flag=1;
	  break;
	}
	}
      }
       if(flag==0)
       {
       cout<<"\nNo record is found"; }
       else
       {
       cout<<"\n\n New Record Update \n";
       fon.seekg(1);
       t.outTraindetail();
       getch();
     }
      fon.close();
   }


 void check()
 {
    clrscr();
    for(int i=0;i<=79;i++)
    cout<<"*";
    cout<<"\n\t\t\tI N D I A N    R A I L W A Y S\n\n";
    for( i=0;i<=79;i++)
    cout<<"*";
    ifstream fon;
    fon.open("TRAINSS.DAT",ios::binary);
    int ch;
    clrscr();

    while(fon.read((char*)&t,sizeof(t)))
    {
       t.tbookcheck();
       getch();
       clrscr();
    }
      fon.close();
  }


 void tcheck()
 {
	  clrscr();
	  for(int i=0;i<=79;i=i+1)
	  cout<<"*";
	  cout<<"\n\t\t\tI N D I A N    R A I L W A Y S\n\n";
	  for( i=0;i<=79;i=i+1)
	  cout<<"*";
	  ifstream fon;
	  fon.open("TRAINSS.DAT",ios::binary);
	  int ch;
	  clrscr();
	  while(fon.read((char*)&t,sizeof(t)))
	  {
	  clrscr();
	   t.outTraindetail();
	   getch();
	   clrscr();
	   }
	fon.close();
  }


 void Mlogin()
	  {
	  int cc;
	  clrscr();
	  for(int i=0;i<=79;i++)
	  cout<<"*";
	  cout<<"\n\t\t\tI N D I A N    R A I L W A Y S\n\n";
	  for( i=0;i<=79;i++)
	  cout<<"*";
	  ifstream fon;
	  fon.open("TRAINSS.DAT",ios::binary);
	  char ch[20];
	  char pass[10];
	  cout<<"Enter the Manager Email Id :";
	  gets(ch);
	  cout<<"Enter the Password :";
	  gets(pass);
	  fon.read((char*)&t,sizeof(t));
	  if(strcmp(t.Mretemail(),ch)==0)
	  {
	  if(strcmp(t.retMpass(),pass)==0)
	  {

	   load();
	   do
	  {

	  clrscr();
	  for(int i=0;i<=79;i++)
	  cout<<"*";
	  cout<<"\n\t\t\tI N D I A N    R A I L W A Y S\n\n";
	  for( i=0;i<=79;i++)
	  cout<<"*";
	  cout<<"\n\n\n\n\tEnter Your Choice :";
	  cout<<"\n\n\t1:MAKING ENTRIES OF TRAINS And STATION \n\n\t2:MODIFY THE NAME OF TRAIN AND STATION \n\n\t3:To check all ticket booked \n\n\t4:To check TRAIN DETAIL \n\n\t5:BACK\n";
	  cin>>cc;
	  switch(cc)
	  {
	   case 1:Mtrentry();
	   break;
	   case 2:modifybyt();
	   break;
	   case 3:check();
	   break;
	   case 4:tcheck();
	   break;
	   case 5:break;
	  }
	}while(cc!=5);
       }
     }
    fon.close();
    }


 void Manager()
 {
    int ch;
    do
    {
    clrscr();
    for(int i=0;i<=79;i++)
    cout<<"*";
    cout<<"\n\t\t\tI N D I A N    R A I L W A Y S\n\n";
    for( i=0;i<=79;i++)
    cout<<"*";
    cout<<"\n\n\n\n\tEnter Your Choice :";
    cout<<"\n\n\n\t1:SIGNUP MANAGER ACCOUNT \n\n\t2:LOGIN THE MANAGER ACCOUNT  \n\n\t3:BACK\n";
    cin>>ch;
    switch(ch)
    {
     case 1:Msignup();
     break;
     case 2:Mlogin();
     break;
     case 3:break;
    }
   }while(ch!=3);
  }


 void signup()
  {
	 clrscr();
	 for(int i=0;i<=79;i++)
	 cout<<"*";
	 cout<<"\n\t\t\tI N D I A N    R A I L W A Y S\n\n";
	 for( i=0;i<=79;i++)
	 cout<<"*";
	 cout<<"\n\t\t\tEnter The Detail Of User\n\n";
	 char y='y';
	 ofstream fin;
	 fin.open("TRAINSS.DAT" ,ios::binary|ios::app);
	 while(y=='y'||y=='Y')
	 {
	  t.Input();
	  fin.write((char*)&t,sizeof(t));
	  cout<<"\nDo you want to Create More Account : ";
	  cin>>y;
	 }
       fin.close();
    }


  void ttcheck()
  {
  clrscr();
  for(int i=0;i<=79;i++)
  cout<<"*";
  cout<<"\n\t\t\tI N D I A N    R A I L W A Y S\n\n";
  for( i=0;i<=79;i++)
  cout<<"*";
  ifstream fon;
  fon.open("TRAINSS.DAT",ios::binary);
  int ch;
  clrscr();
  while(fon.read((char*)&t,sizeof(t)))
  {
  clrscr();
  t.outTraindetail();
  getch();
  }
  getch();
  fon.close();
 }

 void ticketbooking()
 {
  clrscr();
  for(int i=0;i<=79;i++)
  cout<<"*";
  cout<<"\n\t\t\tI N D I A N    R A I L W A Y S\n\n";
  for( i=0;i<=79;i++)
  cout<<"*";

  fstream fon;
  fon.open("TRAINSS.DAT",ios::binary|ios::in|ios::out|ios::app);
  char ch[50],tc[29];
  cout<<"Enter the TRAIN Name ";
  gets(ch);
  cout<<"Enter the TRAIN Number ";
  gets(tc);
  char y='y';

  while(fon.read((char*)&t,sizeof(t)))
   {
   if(strcmp(t.rettrainname(),ch)==0)
   {
   if(strcmp(t.rettrainno(),tc)==0)
   {
      while(y=='y'||y=='Y')
     {
       clrscr();
       cout<<endl;
       t.tbooktin();
       fon.write((char*)&t,sizeof(t));
       cout<<"\nDo you want to Book more tickets : ";
      cin>>y;
      }
     }
    }
   }
     fon.close();
  }

  void ticketchecking()
	  {
	  clrscr();
	  for(int i=0;i<=79;i++)
	  cout<<"*";
	  cout<<"\n\t\t\tI N D I A N    R A I L W A Y S\n\n";
	  for( i=0;i<=79;i++)
	  cout<<"*";
	  ifstream fon;
	  fon.open("TRAINSS.DAT",ios::binary);
	  int ch;
	  cout<<"\nEnter your PNR number :";
	  cin>>ch;
	  while(fon.read((char*)&t,sizeof(t)))
	  {
	  if(t.retpnr()==ch)
	  {
	  clrscr();
	  t.tbookcheck();
	  }
	 }
	getch();
	fon.close();
   }


  void cancel()
 {
 clrscr();
 for(int i=0;i<=79;i++)
 cout<<"*";
 cout<<"\n\t\t\tI N D I A N    R A I L W A Y S\n\n";
 for( i=0;i<=79;i++)
 cout<<"*";
 ifstream fin;
 ofstream fout;

 fin.open("TRAINSS.DAT",ios::binary);
 fout.open("Temp.DAT",ios::binary);
 int ch ;
 cout<<"\nEnter the Ticket booking numbeer to cancel ticket :";
 cin>>ch;
 char flag='y';
 while(fin.read((char*)&t,sizeof(t)))
 {
 if(t.retpnr()!=ch)
 {
  t.tdata();
 fout.write((char*)&t,sizeof(t));
 cout<<"\nYour ticket is cancelled ";
 }
 else
 flag='y';
 }
 if(flag=='n')
 cout<<"\nRecord not found ";
 fin.close();
 fout.close();
 remove("TRAINSS.DAT");
 rename("Temp.DAT","TRAINSS.DAT");
 }


 void modifybyticket()
  {
	  clrscr();
	  for(int i=0;i<=79;i++)
	    cout<<"*";
	  cout<<"\n\t\t\tI N D I A N    R A I L W A Y S\n\n";
	 for( i=0;i<=79;i++)
	  cout<<"*";

	  fstream fon;
	  fon.open("TRAINSS.DAT",ios::binary|ios::in|ios::out);
	  int L,flag=0;
	  int ch;
	  cout<<"Enter the PNR Number ";
	  cin>>ch;
	  while(!fon.eof())
	  {
	  L=fon.tellg();
	  fon.read((char*)&t,sizeof(t));
	  if(t.retpnr()==ch)
	  {
	  cout<<" OLD DATA \n";
	  t.tbookcheck();
	  cout<<endl;
	  t.tbooktin();
	  fon.seekg(L);
	  fon.write((char*)&t,sizeof(t));
	  flag=1;
	  break;
	  }
	  }
	  if(flag==0)
	  {
	  cout<<"\nNo record is found";
	  }
	  else
	  {
	  cout<<"\n\n New Record Update \n";
	  fon.seekg(1);
	  t.tbookcheck();
	  getch();
	  }
	  fon.close();
	 }

  void login()
	  {
	  clrscr();
	  for(int i=0;i<=79;i++)
	  cout<<"*";
	  cout<<"\n\t\t\tI N D I A N    R A I L W A Y S\n\n";
	  for( i=0;i<=79;i++)
	  cout<<"*";
	  ifstream fon;
	  fon.open("TRAINSS.DAT",ios::binary);
	  char ch[20];
	  char pass[10];
	  cout<<"\n\n\t\t\tLogin For Railway Reservation ";
	  cout<<"\n\n\tEnter the Valid Id  ";
	  gets(ch);
	  cout<<"\tEnter the Password ";
	  gets(pass);
	  while(fon.read((char*)&t,sizeof(t)))
	  {
		if(strcmp(t.retemail(),ch)==0)
		{
		if(strcmp(t.retUpass(),pass)==0)
		{

		load();

	int cc;

	 do
	{
	 clrscr();
	  for(int i=0;i<=79;i++)
	    cout<<"*";
	     cout<<"\n\t\t\tI N D I A N    R A I L W A Y S\n\n";
	     for( i=0;i<=79;i++)
	     cout<<"*";
	     cout<<"\n\n\n\n\tEnter Your Choice :";
	     cout<<"\n\n\t1:To Check Trains and Seats\n\n\t2:BOOKING The Tickets \n\n\t3:Cancelling the Ticket \n\n\t4:Changes In Ticket \n\n\t5:Checking Ticket By PNR Number \n\n\t6:BACK\n";
	     cin>>cc;
	     switch(cc)
	     {
	      case 1:ttcheck();
	      break;
	      case 2:ticketbooking();
	      break;
	      case 3:cancel();
	      break;
	      case 4:modifybyticket();
	      break;
	      case 5:ticketchecking();
	      break;
	      case 6:break;
	  }
	 }while(cc!=6);
	}
       }
      }
     fon.close();
    }


void User()
{
	 int ch;
	 do
	 {
	clrscr();
	for(int i=0;i<=79;i++)
	cout<<"*";
	cout<<"\n\t\t\tI N D I A N    R A I L W A Y S\n\n";
	for( i=0;i<=79;i++)
	cout<<"*";
	cout<<"\n\n\n\n\tEnter Your Choice :";
	cout<<"\n\n\n\t1:SIGNUP USER ACCOUNT \n\n\t2:LOGIN THE USER ACCOUNT  \n\n\t3:BACK\n";
	cin>>ch;

	switch(ch)
	{
	 case 1:signup();
	 break;
	 case 2:login();
	 break;
	 case 3:break;
	}
       }while(ch!=3);
      }


	  //Flight Booking system :-


	void fMsignup()
       {
	clrscr();
	for(int i=0;i<=79;i++)
	cout<<"*";
	cout<<"\n\t\t\tI N D I A N    A I R L I N E S \n\n";
	for( i=0;i<=79;i++)
	cout<<"*";
	cout<<"\n\t\t\tEnter The Detail Of Manager\n\n";
	char y='y';
	ofstream fin;
	fin.open("AIRLINE.DAT" ,ios::binary|ios::app);
	while(y=='y'||y=='Y')
       {
	f.fMInput();
	fin.write((char*)&f,sizeof(f));
	cout<<"\nDo you want to Create More Account : ";
	cin>>y;
       }
	 fin.close();
      }

 void fMtrentry()
	  {
	  clrscr();
	  for(int i=0;i<=79;i++)
	  cout<<"*";
	  cout<<"\n\t\t\tI N D I A N    A I R L I N E S \n\n";
	  for( i=0;i<=79;i++)
	  cout<<"*";
	  char y='y';
	  ofstream fin;
	  fin.open("AIRLINE.DAT" ,ios::binary|ios::app);
	  while(y=='y'||y=='Y')
	  {

	  f.flightdetail();
	  fin.write((char*)&f,sizeof(f));
	  cout<<"\nDo you want to Enter More AIRLINE And AIRPOTS : ";
	  cin>>y;
	  }
	  fin.close();
      }


 void fmodifybyt()
	  {
	  clrscr();
	  for(int i=0;i<=79;i++)
	  cout<<"*";
	  cout<<"\n\t\t\tI N D I A N    A I R L I N E S \n\n";
	  for( i=0;i<=79;i++)
	  cout<<"*";
	  fstream fon;
	  fon.open("AIRLINE.DAT",ios::binary|ios::in|ios::out);
	  int L,flag=0;
	  char ch[50],dc[20];
	  cout<<"Enter the AIRLINE Name ";
	  gets(ch);
	  cout<<"Enter the Flight number ";
	  gets(dc);
	  while(!fon.eof())
	  {
	   L=fon.tellg();
	   fon.read((char*)&f,sizeof(f));
	   if(strcmp(f.fretflightname(),ch)==0)
	   {
	   if(strcmp(f.fretflightno(),dc)==0)
	   {
	   load();
	   clrscr();
	   for(int i=0;i<=79;i++)
	   cout<<"*";
	   cout<<"\n\t\t\tI N D I A N    A I R L I N E S\n\n";
	   for( i=0;i<=79;i++)
	   cout<<"*";

	   cout<<" OLD DATA \n";
	   f.foutflightdetail();
	   cout<<endl;
	   f.flightdetail();
	   fon.seekg(L);
	   fon.write((char*)&f,sizeof(f));
	   flag=1;
	   break;
	 }
	}
       }
	   if(flag==0)
	   {
	   cout<<"\nNo record is found";
	   }
	   else
	   {
	   cout<<"\n\n New Record Update \n";
	   fon.seekg(1);
	   f.foutflightdetail();
	   getch();
      }
     fon.close();
   }



void fcheck()
{
	 clrscr();
	  for(int i=0;i<=79;i++)
	    cout<<"*";
	  cout<<"\n\t\t\tI N D I A N    A I R L I N E S\n\n";
	 for( i=0;i<=79;i++)
	  cout<<"*";
	ifstream fon;
	fon.open("AIRLINE.DAT",ios::binary);
	int ch;
	clrscr();
	while(fon.read((char*)&f,sizeof(f)))
	{
	f.ftbookcheck();
	 getch();
	 clrscr();
	}
	fon.close();
	}


void ffcheck()
{
	    clrscr();
	  for(int i=0;i<=79;i++)
	    cout<<"*";
	  cout<<"\n\t\t\tI N D I A N    A I R L I N E S\n\n";
	 for( i=0;i<=79;i++)
	  cout<<"*";
	ifstream fon;
	fon.open("AIRLINE.DAT",ios::binary);
	int ch;
	clrscr();
	while(fon.read((char*)&f,sizeof(f)))
	{
	clrscr();
	 f.foutflightdetail();
	 getch();
	 clrscr();
	}
	fon.close();
	}


void fMlogin()
	  {
	  clrscr();
	  for(int i=0;i<=79;i++)
	   cout<<"*";
	  cout<<"\n\t\t\tI N D I A N    A I R L I N E S\n\n";
	 for( i=0;i<=79;i++)
	  cout<<"*";

	  ifstream fon;
	  fon.open("AIRLINE.DAT",ios::binary);
	  char ch[20];
	  char pass[10];
	  cout<<"Enter the Manager Email Id :";
	  gets(ch);
	  cout<<"Enter the Password :";
	  gets(pass);
	  fon.read((char*)&f,sizeof(f));
	  if(strcmp(f.fMretemail(),ch)==0)
	  {
	  if(strcmp(f.fretMpass(),pass)==0)
	  {

	   load();

	  int cc;
	  do
	  {
	    clrscr();
	  for(int i=0;i<=79;i++)
	  cout<<"*";
	  cout<<"\n\t\t\tI N D I A N    A I R L I N E S\n\n";
	 for( i=0;i<=79;i++)
	 cout<<"*";
	   cout<<"\n\n\n\n\tEnter Your Choice :";
	   cout<<"\n\n\t1:MAKING ENTRIES OF AIRLINES And Airpot \n\n\t2:MODIFY THE NAME OF AIRLINE AND AIRPOTS \n\n\t3:To check all booked ticket \n\n\t4:To check all FLIGHT Detail\n\n\t:5 BACK\n";
	   cin>>cc;
	   switch(cc)
	  {
	  case 1:fMtrentry();
	  break;
	  case 2:fmodifybyt();
	  break;
	  case 3:fcheck();
	  break;
	  case 4:ffcheck();
	  break;
	  case 5:break;
	  }

	  }while(cc!=5);
	  }

	  }
	  fon.close();
	  }


void fManager()
 {
	 int ch;
	 do
	 {
	  clrscr();
	for(int i=0;i<=79;i++)
	 cout<<"*";
	cout<<"\n\t\t\tI N D I A N    A I R L I N E S\n\n";
	 for( i=0;i<=79;i++)
	 cout<<"*";

	  cout<<"\n\n\n\n\tEnter Your Choice :";
	  cout<<"\n\n\n\t1:SIGNUP MANAGER ACCOUNT \n\n\t2:LOGIN THE MANAGER ACCOUNT  \n\n\t3:BACK\n";
	  cin>>ch;
	  switch(ch)

	  {
	  case 1:fMsignup();
	  break;
	  case 2:fMlogin();
	  break;
	  case 3:break;
	  }
	  }while(ch!=3);
	  }


void fsignup()
	  {
	  clrscr();
	  for(int i=0;i<=79;i++)
	   cout<<"*";
	  cout<<"\n\t\t\tI N D I A N    A I R L I N E S\n\n";
	 for( i=0;i<=79;i++)
	 cout<<"*";
	  cout<<"\n\t\t\tEnter The Detail Of User\n\n";
	  char y='y';
	  ofstream fin;
	  fin.open("AIRLINE.DAT" ,ios::binary|ios::app);
	  while(y=='y'||y=='Y')
	  {
	  f.fInput();
	  fin.write((char*)&f,sizeof(f));
	  cout<<"\nDo you want to Create More Account : ";
	  cin>>y;
				   }
	  fin.close();
	  }


void fffcheck()
	  {
	  clrscr();
	  for(int i=0;i<=79;i++)
	    cout<<"*";
	  cout<<"\n\t\t\tI N D I A N    A I R L I N E S\n\n";
	 for( i=0;i<=79;i++)
	  cout<<"*";
	ifstream fon;
	fon.open("AIRLINE.DAT",ios::binary);
	int ch;
	clrscr();
	while(fon.read((char*)&f,sizeof(f)))
	{
	 f.foutflightdetail();
	 getch();
	 clrscr();
	}
	fon.close();
	}


void fticketbooking()
 {
	  clrscr();
	  for(int i=0;i<=79;i++)
	   cout<<"*";
	  cout<<"\n\t\t\tI N D I A N    A I R L I N E S\n\n";
	 for( i=0;i<=79;i++)
	 cout<<"*";

	  fstream fon;
	  fon.open("AIRLINE.DAT",ios::binary|ios::in|ios::out|ios::app);
	  char ch[50],tc[29];
	  cout<<"Enter the AIRLINE Name ";
	  gets(ch);
	   cout<<"Enter the FLIGHT Number ";
	  gets(tc);
	   char y='y';

	  while(fon.read((char*)&f,sizeof(f)))
	  {
	  if(strcmp(f.fretflightname(),ch)==0)
	  {
	   if(strcmp(f.fretflightno(),tc)==0)
	  {
	  while(y=='y'||y=='Y')
	  {

	 clrscr();
	  cout<<endl;
	  f.ftbooktin();
	  fon.write((char*)&f,sizeof(f));
	  cout<<"\nDo you want to Book more tickets : ";
	  cin>>y;
	   }
	   }
	   }
	   }
	  fon.close();
	  }


  void fticketchecking()
	  {
	  clrscr();
	  for(int i=0;i<=79;i++)
	   cout<<"*";
	  cout<<"\n\t\t\tI N D I A N    A I R L I N E S\n\n";
	 for( i=0;i<=79;i++)
	  cout<<"*";
	ifstream fon;
	fon.open("AIRLINE.DAT",ios::binary);
	int ch;
	cout<<"\nEnter your Ticket booking  number :";
	cin>>ch;
	while(fon.read((char*)&f,sizeof(f)))
	{
	if(f.fretfftno()==ch)
       {        clrscr();
	f.ftbookcheck();
	}
	}
	getch();
	fon.close();
	}


 void fcancel()
 {
 clrscr();
	  for(int i=0;i<=79;i++)
	    cout<<"*";
	  cout<<"\n\t\t\tI N D I A N    R A I L W A Y S\n\n";
	 for( i=0;i<=79;i++)
	  cout<<"*";
 ifstream fin;
 ofstream fout;

 fin.open("AIRLINE.DAT",ios::binary);
 fout.open("TEMPI.DAT",ios::binary);
 int ch ;
 cout<<"\nEnter the Ticket booking numbeer to cancel ticket :";
 cin>>ch;
 char flag='y';
 while(fin.read((char*)&f,sizeof(f)))
 {
 if(f.fretfftno()!=ch)
 {
  f. fdata();
 fout.write((char*)&f,sizeof(f));
 cout<<"\nYour ticket is cancelled ";
 }
 else
 flag='y';
 }
 if(flag=='n')
 cout<<"\nRecord not found ";
 fin.close();
 fout.close();
 remove("AIRLINE.DAT");
 rename("TEMPI.DAT","AIRLINE.DAT");
 }


void fmodifybyticket()
	  {
	  clrscr();
	  for(int i=0;i<=79;i++)
	   cout<<"*";
	  cout<<"\n\t\t\tI N D I A N    A I R L I N E S\n\n";
	 for( i=0;i<=79;i++)
	 cout<<"*";

	  fstream fon;
	  fon.open("AIRLINE.DAT",ios::binary|ios::in|ios::out);
	  int L,flag=0;
	  int ch;
	  cout<<"Enter the Ticket booking Number ";
	  cin>>ch;
	  while(!fon.eof())
	  {  L=fon.tellg();
	  fon.read((char*)&f,sizeof(f));
	  if(f.fretfftno()==ch)
	  {
	  cout<<" OLD DATA \n";
	  f.ftbookcheck();
	  cout<<endl;
	  f.ftbooktin();
	  fon.seekg(L);
	  fon.write((char*)&f,sizeof(f));
	  flag=1;
	  break;
	  }
	  }
	  if(flag==0)
	  {cout<<"\nNo record is found"; }
	  else
	  {cout<<"\n\n New Record Update \n";
	  fon.seekg(1);
	  f.ftbookcheck();
	  getch();
	  }
	  fon.close();
	  }


void flogin()
	  {
	  clrscr();
	  for(int i=0;i<=79;i++)
	    cout<<"*";
	  cout<<"\n\t\t\tI N D I A N    A I R L I N E S\n\n";
	 for( i=0;i<=79;i++)
	 cout<<"*";
	  ifstream fon;
	  fon.open("AIRLINE.DAT",ios::binary);
	  char ch[20];
	  char pass[10];
	  cout<<"\n\n\t\t\tLogin For AIRLINE Reservation ";
	  cout<<"\n\n\tEnter the Valid Id  ";
	  gets(ch);
	  cout<<"\tEnter the Password ";
	  gets(pass);
	  while( fon.read((char*)&f,sizeof(f)))
	  {
		if(strcmp(f.fretemail(),ch)==0)
		{
		if(strcmp(f.fretUpass(),pass)==0)
		{

		 load();


		int cc;
		do
		{
		clrscr();
	  for(int i=0;i<=79;i++)
	  cout<<"*";
	  cout<<"\n\t\t\tI N D I A N    A I R L I N E S\n\n";
	 for( i=0;i<=79;i++)
	 cout<<"*";

		cout<<"\n\n\n\n\tEnter Your Choice :";
		cout<<"\n\n\t1:To Check Flights and Seats \n\n\t2:BOOKING The Tickets \n\n\t3:Cancelling the Ticket \n\n\t4:Changes In Ticket \n\n\t5:Checking Ticket By Ticket booking Number \n\n\t6:BACK\n";
		cin>>cc;

		switch(cc)
		{
	  case 1:fffcheck();
	  break;
	  case 2:fticketbooking();
	  break;
	 case 3:fcancel();
	 break;
	  case 4:fmodifybyticket();
	  break;
	  case 5:fticketchecking();
	  break;
	  case 6:break;
	  }
	  }while(cc!=6);
	  }
	  }
	  }
	  fon.close();
	  }


void fUser()
{
	  int ch;
	 do
	 {
       clrscr();
	for(int i=0;i<=79;i++)
	 cout<<"*";
	cout<<"\n\t\t\tI N D I A N    A I R L I N E S\n\n";
	 for( i=0;i<=79;i++)
	 cout<<"*";

	  cout<<"\n\n\n\n\tEnter Your Choice :";
	  cout<<"\n\n\n\t1:SIGNUP USER ACCOUNT \n\n\t2:LOGIN THE USER ACCOUNT  \n\n\t3:BACK\n";
	  cin>>ch;
	  switch(ch)
	  {
	  case 1:fsignup();
	    break;
	  case 2:flogin();
	  break;
	  case 3:break;
	  }
	  }while(ch!=3);
	  }


	  // BUS TICKET BOOKING :-


	  void bMsignup()
	  {
	  clrscr();
	  for(int i=0;i<=79;i++)
	    cout<<"*";
	  cout<<"\n\t\t\t I N D I G O    B U S    S E R V I C E \n\n";
	 for( i=0;i<=79;i++)
	  cout<<"*";

	  cout<<"\n\t\t\tEnter The Detail Of Manager\n\n";
	  char y='y';
	  ofstream fin;
	  fin.open("BUS.DAT" ,ios::binary|ios::app);
	  while(y=='y'||y=='Y')
	  {
	  b.bMInput();
	  fin.write((char*)&b,sizeof(b));
	  cout<<"\nDo you want to Create More Account : ";
	  cin>>y;
	   }
	  fin.close();
	  }

 void bMtrentry()
	  {
	  clrscr();
	  for(int i=0;i<=79;i++)
	    cout<<"*";
	  cout<<"\n\t\t\t I N D I G O   B U S    S E R V I C E \n\n";
	 for( i=0;i<=79;i++)
	  cout<<"*";

	  char y='y';
	  ofstream fin;
	  fin.open("BUS.DAT" ,ios::binary|ios::app);
	  while(y=='y'||y=='Y')
	  {
	  b.busdetail();
	  fin.write((char*)&b,sizeof(b));
	  cout<<"\nDo you want to Enter More BUSES And BUS DEPO : ";
	  cin>>y;
				   }
	  fin.close();
	  }


void bmodifybyt()
	  {
	  clrscr();
	  for(int i=0;i<=79;i++)
	   cout<<"*";
	  cout<<"\n\t\t\t I N D I G O   B U S    S E R V I C E \n\n";
	 for( i=0;i<=79;i++)
	  cout<<"*";

	  fstream fon;
	  fon.open("BUS.DAT",ios::binary|ios::in|ios::out);
	  int L,flag=0;
	  char ch[50],dc[20];
	  cout<<"Enter the BUS Name ";
	  gets(ch);
	   cout<<"Enter the BUS number ";
	  gets(dc);
	  while(!fon.eof())
	  {  L=fon.tellg();
	  fon.read((char*)&b,sizeof(b));
	  if(strcmp(b.bretbusname(),ch)==0)
	  {
	  if(strcmp(b.bretbusno(),dc)==0)
	  {
	  load();
	  clrscr();
	  for(int i=0;i<=79;i++)
	    cout<<"*";
	  cout<<"\n\t\t\t I N D I G O   B U S   S E R V I C E \n\n";
	 for( i=0;i<=79;i++)
	  cout<<"*";

	  cout<<" OLD DATA \n";
	  b.boutbusdetail();
	  cout<<endl;
	  b.busdetail();
	  fon.seekg(L);
	  fon.write((char*)&b,sizeof(b));
	  flag=1;
	  break;
	  }
	  }
	  }
	  if(flag==0)
	  {cout<<"\nNo record is found"; }
	  else
	  {cout<<"\n\n New Record Update \n";
	  fon.seekg(1);
	  b.boutbusdetail();
	  getch();
	  }
	  fon.close();
	  }



void bcheck()
	  {
	  clrscr();
	  for(int i=0;i<=79;i++)
	    cout<<"*";
	  cout<<"\n\t\t\t I N D I G O   B U S   S E R V I C E S \n\n";
	 for( i=0;i<=79;i++)
	  cout<<"*";
	ifstream fon;
	fon.open("BUS.DAT",ios::binary);
	int ch;
	clrscr();
	while(fon.read((char*)&b,sizeof(b)))
	{
	b.btbookcheck();
	 getch();
	 clrscr();
	}
	fon.close();
	}


void bbcheck()
	  {
	  clrscr();
	  for(int i=0;i<=79;i++)
	    cout<<"*";
	  cout<<"\n\t\t\t I N D I G O   B U S   S E R V I C E \n\n";
	 for( i=0;i<=79;i++)
	  cout<<"*";
	ifstream fon;
	fon.open("BUS.DAT",ios::binary);
	int ch;
	clrscr();
	while(fon.read((char*)&b,sizeof(b)))
	{
	 b.boutbusdetail();
	 getch();
	 clrscr();
	}
	fon.close();
	}


void bMlogin()
	  {
	  clrscr();
	  for(int i=0;i<=79;i++)
	   cout<<"*";
	  cout<<"\n\t\t\t I N D I G O   B U S   S E R V I C E \n\n";
	 for( i=0;i<=79;i++)
	  cout<<"*";

	  ifstream fon;
	  fon.open("BUS.DAT",ios::binary);
	  char ch[20];
	  char pass[10];
	  cout<<"Enter the Manager Email Id :";
	  gets(ch);
	  cout<<"Enter the Password :";
	  gets(pass);
	  fon.read((char*)&b,sizeof(b));
	  if(strcmp(b.bMretemail(),ch)==0)
	  {
	  if(strcmp(b.bretMpass(),pass)==0)
	  {

	   load();

	  int cc;
	  do
	  {
	    clrscr();
	  for(int i=0;i<=79;i++)
	  cout<<"*";
	  cout<<"\n\t\t\t I N D I G O    B U S    S E R V I C E \n\n";
	 for( i=0;i<=79;i++)
	 cout<<"*";
	   cout<<"\n\n\n\n\tEnter Your Choice :";
	   cout<<"\n\n\t1:MAKING ENTRIES OF BUSES And BUS DIPO \n\n\t2:MODIFY THE NAME OF BUS AND BUS DIPO \n\n\t3:To check all booked ticket \n\n\t4:To check all BUS Detail\n\n\t5:BACK\n";
	   cin>>cc;
	   switch(cc)
	  {
	  case 1:bMtrentry();
	  break;
	  case 2:bmodifybyt();
	  break;
	  case 3:bcheck();
	  break;
	  case 4:bbcheck();
	  break;
	  case 5:break;
	  }

	  }while(cc!=5);
	  }

	  }
	  fon.close();
	  }


void bManager()
 {
	 int ch;
	 do
	 {
	  clrscr();
	for(int i=0;i<=79;i++)
	 cout<<"*";
	cout<<"\n\t\t\t I N D I G O    B U S    S E R V I C E \n\n";
	 for( i=0;i<=79;i++)
	 cout<<"*";

	  cout<<"\n\n\n\n\tEnter Your Choice :";
	  cout<<"\n\n\n\t1:SIGNUP MANAGER ACCOUNT \n\n\t2:LOGIN THE MANAGER ACCOUNT  \n\n\t3:BACK\n";
	  cin>>ch;
	  switch(ch)
	  {
	  case 1:bMsignup();
	  break;
	  case 2:bMlogin();
	  break;
	  case 3:break;
	  }
	  }while(ch!=3);
	  }


void bsignup()
	  {
	  clrscr();
	  for(int i=0;i<=79;i++)
	   cout<<"*";
	  cout<<"\n\t\t\t I N D I G O    B U S    S E R V I C E \n\n";
	 for( i=0;i<=79;i++)
	 cout<<"*";
	  cout<<"\n\t\t\tEnter The Detail Of User\n\n";
	  char y='y';
	  ofstream fin;
	  fin.open("BUS.DAT" ,ios::binary|ios::app);
	  while(y=='y'||y=='Y')
	  {
	  b.bInput();
	  fin.write((char*)&b,sizeof(b));
	  cout<<"\nDo you want to Create More Account : ";
	  cin>>y;
				   }
	  fin.close();
	  }



void bbbcheck()
	  {
	  clrscr();
	  for(int i=0;i<=79;i++)
	    cout<<"*";
	  cout<<"\n\t\t\t I N D I G O   B U S   S E R V I C E \n\n";
	 for( i=0;i<=79;i++)
	  cout<<"*";
	ifstream fon;
	fon.open("BUS.DAT",ios::binary);
	int ch;
	clrscr();
	while(fon.read((char*)&b,sizeof(b)))
	{
	 b.boutbusdetail();
	}
	getch();
	fon.close();
	}



void bticketbooking()
 {
	  clrscr();
	  for(int i=0;i<=79;i++)
	   cout<<"*";
	  cout<<"\n\t\t\t I N D I G O    B U S    S E R V I C E \n\n";
	 for( i=0;i<=79;i++)
	 cout<<"*";

	  fstream fon;
	  fon.open("BUS.DAT",ios::binary|ios::in|ios::out|ios::app);
	  char ch[50],tc[29];
	  cout<<"Enter the BUS Name ";
	  gets(ch);
	   cout<<"Enter the BUS Number ";
	  gets(tc);
	   char y='y';

	  while(fon.read((char*)&b,sizeof(b)))
	  {
	  if(strcmp(b.bretbusname(),ch)==0)
	  {
	   if(strcmp(b.bretbusno(),tc)==0)
	  {
	  while(y=='y'||y=='Y')
	  {

	 clrscr();
	  b.btbooktin();
	  fon.write((char*)&b,sizeof(b));
	  cout<<"\nDo you want to Book more tickets : ";
	  cin>>y;
	   }
	   }
	   }
	   }
	  fon.close();
	  }


  void bticketchecking()
	  {
	  clrscr();
	  for(int i=0;i<=79;i++)
	   cout<<"*";
	  cout<<"\n\t\t\t I N D I G O   B U S   S E R V I C E \n\n";
	 for( i=0;i<=79;i++)
	  cout<<"*";
	ifstream fon;
	fon.open("BUS.DAT",ios::binary);
	int ch;
	cout<<"\nEnter your BUS Ticket Booking  number :";
	cin>>ch;
	while(fon.read((char*)&b,sizeof(b)))
	{
	if(b.bretfftno()==ch)
       {	clrscr();
	b.btbookcheck();
	}
	}
	getch();
	clrscr();
	fon.close();
	}


 void bcancel()
 {
 clrscr();
	  for(int i=0;i<=79;i++)
	    cout<<"*";
	  cout<<"\n\t\t\t I N D I G O   B U S    S E R V I C E \n\n";
	 for( i=0;i<=79;i++)
	  cout<<"*";
 ifstream fin;
 ofstream fout;

 fin.open("BUS.DAT",ios::binary);
 fout.open("TEMPL.DAT",ios::binary);
 int ch ;
 cout<<"\nEnter the Ticket booking number to cancel ticket :";
 cin>>ch;
 char flag='y';
 while(fin.read((char*)&b,sizeof(b)))
 {
 if(b.bretfftno()!=ch)
 {
  b. bdata();
 fout.write((char*)&b,sizeof(b));
 cout<<"\nYour ticket is cancelled ";
 }
 else
 flag='y';
 }
 if(flag=='n')
 cout<<"\nRecord not found ";
 fin.close();
 fout.close();
 remove("BUS.DAT");
 rename("TEMPL.DAT","BUS.DAT");
 }


void bmodifybyticket()
	  {
	  clrscr();
	  for(int i=0;i<=79;i++)
	   cout<<"*";
	  cout<<"\n\t\t\t I N D I G O     B U S    S E R V I C E \n\n";
	 for( i=0;i<=79;i++)
	 cout<<"*";

	  fstream fon;
	  fon.open("BUS.DAT",ios::binary|ios::in|ios::out);
	  int L,flag=0;
	  int ch;
	  cout<<"Enter the BUS Ticket booking Number ";
	  cin>>ch;
	  while(!fon.eof())
	  {  L=fon.tellg();
	  fon.read((char*)&b,sizeof(b));
	  if(b.bretfftno()==ch)
	  {
	  cout<<" OLD DATA \n";
	  b.btbookcheck();
	  cout<<endl;
	  b.btbooktin();
	  fon.seekg(L);
	  fon.write((char*)&b,sizeof(b));
	  flag=1;
	  break;
	  }
	  }
	  if(flag==0)
	  {cout<<"\nNo record is found"; }
	  else
	  {cout<<"\n\n New Record Update \n";
	  fon.seekg(1);
	  b.btbookcheck();
	  getch();
	  }
	  fon.close();
	  }


void blogin()
	  {
	  clrscr();
	  for(int i=0;i<=79;i++)
	    cout<<"*";
	  cout<<"\n\t\t\t I N D I G O   B U S   S E R V I C E \n\n";
	 for( i=0;i<=79;i++)
	 cout<<"*";
	  ifstream fon;
	  fon.open("BUS.DAT",ios::binary);
	  char ch[20];
	  char pass[10];
	  cout<<"\n\n\t\t\tLogin For BUS TICKET Booking ";
	  cout<<"\n\n\tEnter the Valid Id  ";
	  gets(ch);
	  cout<<"\tEnter the Password ";
	  gets(pass);
	  while( fon.read((char*)&b,sizeof(b)))
	  {
		if(strcmp(b.bretemail(),ch)==0)
		{
		if(strcmp(b.bretUpass(),pass)==0)
		{

		 load();


		int cc;
		do
		{
		clrscr();
	  for(int i=0;i<=79;i++)
	  cout<<"*";
	  cout<<"\n\t\t\t I N D I G O    B U S    S E R V I C E \n\n";
	 for( i=0;i<=79;i++)
	 cout<<"*";

		cout<<"\n\n\n\n\tEnter Your Choice :";
		cout<<"\n\n\t1:To Check Buses and Seats\n\n\t2:BOOKING The Tickets \n\n\t3:Cancelling the Ticket \n\n\t4:Changes In Ticket \n\n\t5:Checking Ticket By Ticket booking Number \n\n\t6:BACK\n";
		cin>>cc;
		switch(cc)
		{
	 case 1:bbbcheck();
	 break;
	  case 2:bticketbooking();
	  break;
	 case 3:bcancel();
	 break;
	  case 4:bmodifybyticket();
	  break;
	  case 5:bticketchecking();
	  break;
	  case 6:break;
	  }
	  }while(cc!=6);
	  }
	  }
	  }
	  fon.close();
	  }


void bUser()
{
	  int ch;
	  do
	 {
            clrscr();
	for(int i=0;i<=79;i++)
	 cout<<"*";
	cout<<"\n\t\t\t I N D I G O    B U S    S E R V I C E\n\n";
	 for( i=0;i<=79;i++)
	 cout<<"*";

	  cout<<"\n\n\n\n\tEnter Your Choice :";
	  cout<<"\n\n\n\t1:SIGNUP USER ACCOUNT \n\n\t2:LOGIN THE USER ACCOUNT  \n\n\t3:BACK\n";
	  cin>>ch;
	  switch(ch)
	   {
                 case 1:bsignup();
	     break;
	     case 2:blogin();
	     break;
	     case 3:break;
	    }
	  }while(ch!=3);
	
 }
