//AIRLINE MANAGEMENT. Copyright (C) 2015 RAVISHA GUPTA 11408018

/*This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 3 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with this program; if not, write to the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

struct passenger{
	char name[30];
        int age;
        char gender[10];
        char travelclass[10];
        char meal[10];
        char seat[10];
}passenger[20];

void newcustomer();
void oldcustomer();

int main() {
	char ch;
	printf("\n\n\n\n\n\n\n\n\n");
	printf("\n\t\t\t\t---WELCOME---");
	printf("\n\t\t\t---AIRLINE RESERVATION---");
	printf("\n\t\t");
        getchar();
    	az:
   
	printf("\n A:New Customer");
	printf("\n B:Old Customer");
        printf("\n E:Exit\n");
        scanf("%c",&ch);

    
        switch(ch) {
		case 'A':
	 	case 'a': newcustomer();
			  break;
	     	case 'B':
	    	case 'b': oldcustomer();
			  break;
		
        	case 'E':
        	case 'e': printf("\n\n\t\t\t\tTHANK YOU");
			  printf("\n\n\n\n\n\n\tFOR USING THIS SERVICE");
			  system("sleep 2000");
			  exit(0);
			  break;
        	default:  printf("\n Incorrect Input");
			  printf("\n Any key to continue");
			  getchar();
			  goto az;
	}	
	printf("\n\n\n\n\n\t\t\t Thank you for booking with us.\n");
	getchar();
	return 0;
}


void newcustomer() {
	char att;
	char ebaggage[10];
	char baggageoptions[10];
	char name[50];
	char start[5];
	char destination[5];
	char baddress[30];
	char mop[5];
	char pass1[500];
	char pass2[500];
	int i;
	int k;
	int n;
	int time;
	int phonenumber;
	int total = 0;
	int fareb = 1450;
	int farec = 2999;
	int fared = 7832;
	int fareh = 1999;
	int farek = 4560;
	int farem = 3570;
	int ccn;
	float gtotal;
	printf("\n Enter the name under which you would want the booking to be done: ");
	scanf("%s",name);
	printf("\n The available airports are:\nBangalore\nChennai\nDelhi\nHyderabad\nKolkata\nMumbai\n");
	printf("\n Enter the starting point of your journey: ");
	printf("\n Enter B for Bangalore, C for Chennai, D for Delhi, H for Hyderabad, K for Kolkata and M for Mumbai.\n  ");
	scanf("%s",start);
	printf("\n Select your destination among the above mentioned cities.");
	printf("\n Enter B for Bangalore, C for Chennai, D for Delhi, H for Hyderabad, K for Kolkata and M for Mumbai.\n  ");
	scanf("%s",destination);	
	printf("\n How many people will you be booking for? ");
	scanf("%d",&n);
	printf("\n Enter your address: ");
	scanf("%s",baddress);
	fflush(stdin);
	printf("\n Enter your phone number: ");
	scanf("%d",&phonenumber);
	printf("\n Kindly proceed with the booking. ");
	

	if((strcmp(destination,"B")==0)||(strcmp(destination,"b")==0)) {
		printf("\n Your destination is Bangalore.");
		printf("\n Flights are available only on week ends.");
		printf("\n The flights are available at:\n 0700hours\n 1230hours\n 1600hours\n 2330hours\n");
		printf("Please enter your preferred time:");
		scanf("%d",&time);
		if(time==700) {
			printf("\n Your flight number is AFT1235");
			printf("\n The air travel would last 1 hour. ");
		}
		else if(time==1230) {
			printf("\n Your flight number is ZER3698");
			printf("\n The air travel would last 1 hour. ");
		}
		else if(time==1600) {
			printf("\n Your flight number is LUO2367");
			printf("\n The air travel would last 1 hour. ");
		}
		else if(time==2330) {
			printf("\n Your flight number is GTE4561");
			printf("\n The air travel would last 1 hour. ");
		}
		else {
			printf("Sorry!The flight is not available at the time you mentioned.");
		}
		total = fareb*n;
	}

	if((strcmp(destination,"C")==0)||(strcmp(destination,"c")==0)) {
		printf("\n Your destination is Chennai.");
		printf("\n Flights are available daily.");
		printf("\n The flights are available at:\n 0830hours\n 1130hours\n 1630hours\n 2300hours\n");
		printf("Please enter your preferred time:");
		scanf("%d",&time);
		if(time==830) {
			printf("\n Your flight number is AFT1235");
			printf("\n The air travel would last 1 hour 45 minutes. ");
		}
		else if(time==1130) {
			printf("\n Your flight number is ZER3698");
			printf("\n The air travel would last 1 hour 45 minutes. ");
		}
		else if(time==1630) {
			printf("\n Your flight number is LUO2367");
			printf("\n The air travel would last 1 hour 45 minutes. ");
		}
		else if(time==2300) {
			printf("\n Your flight number is GTE4561");
			printf("\n The air travel would last 1 hour 45 minutes. ");
		}
		else {
			printf("Sorry!The flight is not available at the time you mentioned.");
		}
		total = farec*n;
	}

	if((strcmp(destination,"D")==0)||(strcmp(destination,"d")==0)) {
		printf("\n Your destination is Delhi.");
		printf("\n Flights are available daily.");
		printf("\n The flights are available at:\n 0530hours\n 1300hours\n 1730hours\n 2230hours\n");
		printf("Please enter your preferred time:");
		scanf("%d",&time);
		if(time==530) {
			printf("\n Your flight number is AFT1235");
			printf("\n The air travel would last 2 hour 30 minutes. ");
		}
		else if(time==1300) {
			printf("\n Your flight number is ZER3698");
			printf("\n The air travel would last 2 hour 30 minutes. ");
		}
		else if(time==1730) {
			printf("\n Your flight number is LUO2367");
			printf("\n The air travel would last 2 hour 30 minutes. ");
		}
		else if(time==2230) {
			printf("\n Your flight number is GTE4561");
			printf("\n The air travel would last 2 hour 30 minutes. ");
		}
		else {
			printf("Sorry!The flight is not available at the time you mentioned.");
		}
		total = fared*n;
	}

	if((strcmp(destination,"H")==0)||(strcmp(destination,"h")==0)) {
		printf("\n Your destination is Hyderabad.");
		printf("\n Flights are available only on weekends.");
		printf("\n The flights are available at:\n 0630hours\n 1100hours\n 1430hours\n 2130hours\n");
		printf("Please enter your preferred time:");
		scanf("%d",&time);
		if(time==630) {
			printf("\n Your flight number is AFT1235");
			printf("\n The air travel would last 1 hour 30 minutes. ");
		}
		else if(time==1100) {
			printf("\n Your flight number is ZER3698");
			printf("\n The air travel would last 1 hour 30 minutes. ");
		}
		else if(time==1430) {
			printf("\n Your flight number is LUO2367");
			printf("\n The air travel would last 1 hour 30 minutes. ");
		}
		else if(time==2130) {
			printf("\n Your flight number is GTE4561");
			printf("\n The air travel would last 1 hour 30 minutes. ");
		}
		else {
			printf("Sorry!The flight is not available at the time you mentioned.");
		}
		total = fareh*n;
	}

	if((strcmp(destination,"K")==0)||(strcmp(destination,"k")==0)) {
		printf("\n Your destination is Kolkata");
		printf("\n Flights are available only on weekends.");
		printf("\n The flights are available at:\n 0600hours\n 1145hours\n 1420hours\n 2145hours\n");
		printf("Please enter your preferred time:");
		scanf("%d",&time);
		if(time==600) {
			printf("\n Your flight number is AFT1235");
			printf("\n The air travel would last 2 hours.");
		}
		else if(time==1145) {
			printf("\n Your flight number is ZER3698");
			printf("\n The air travel would last 2 hours.");
		}
		else if(time==1420)
		{
			printf("\n Your flight number is LUO2367");
			printf("\n The air travel would last 2 hours.");
		}	
		else if(time==2145) {
			printf("\n Your flight number is GTE4561");
			printf("\n The air travel would last 2 hours.");
		}
		else {
			printf("Sorry!The flight is not available at the time you mentioned.");
		}
		total = farek*n;
	}

	if((strcmp(destination,"M")==0)||(strcmp(destination,"m")==0)) {
		printf("\n Your destination is Mumbai.");
		printf("\n Flights are available daily.");
		printf("\n The flights are available at:\n 0545hours\n 1120hours\n 1430hours\n 2200hours\n");
		printf("Please enter your preferred time:");
		scanf("%d",&time);
		if(time==545) {
			printf("\n Your flight number is AFT1235");
			printf("\n The air travel would last 1 hour 30 minutes. ");
		}
		else if(time==1120) {
			printf("\n Your flight number is ZER3698");
			printf("\n The air travel would last 1 hour 30 minutes. ");
		}
		else if(time==1430) {
			printf("\n Your flight number is LUO2367");
			printf("\n The air travel would last 1 hour 30 minutes. ");
		}
		else if(time==2200) {
			printf("\n Your flight number is GTE4561");
			printf("\n The air travel would last 1 hour 30 minutes. ");
		}
		else {
			printf("Sorry!The flight is not available at the time you mentioned.");
		}
		total = farem*n;
	}
	system("sleep 1200");
	
	printf("\n Enter the passenger details.\n\n");
	for(i = 0; i < n; i++) {
		printf("\n \n Enter Passenger %d's Name: ",i+1);
		scanf("%s",passenger[i].name);
		printf("\n Enter Passenger %d's Age: ",i+1);
		scanf("%d",&passenger[i].age);
		printf("\n Enter F for Female and M for Male: ");
		scanf("%s",passenger[i].gender);
		printf("\n Which class do you prefer? - Economy or Business.  \n\t\t Enter E for Economy and B for Business. \n\t");
		scanf("%s",passenger[i].travelclass);
		printf("\n Which type of meal would you prefer? - On flight, Vegetarian or Non.Vegetarian.");	
		printf("\t\t Enter O for On-flight,V for Vegetarian and N for Non-Vegetarian. \n\t");
		scanf("%s",passenger[i].meal);
		printf("\n Which seat would you prefer? - Aisle, Middle, Window");
		printf("\n\t\t Enter A for Aisle, M for Middle and W for Window. \n\t");
		scanf("%s",passenger[i].seat);
		if(passenger[i].age<=12||passenger[i].age>60) {	
			printf("\n Do you need an attendant to accompany you?: \n\t\t Enter Y for Yes and N for No.\n\t");
			scanf("%c" ,&att);	
		}
		if((strcmp(passenger[i].travelclass,"B")==0)||(strcmp(passenger[i].travelclass,"b")==0)) {
		total = total + 500;
		}
		if((strcmp(passenger[i].meal,"V")==0)||(strcmp(passenger[i].meal,"v")==0)) {
		total = total + 200;
		}
		if((strcmp(passenger[i].meal,"N")==0)||(strcmp(passenger[i].meal,"n")==0)) {
		total = total + 375;
		}
		system("sleep 800");
		
	}
	printf("\n Will you be carrying extra baggage?");
	printf("\n\t\t Enter Y if you are,and N if you won't be carrying extra baggage.\n\t");
	scanf("%s",ebaggage);
	if((strcmp(ebaggage,"Y")==0)||(strcmp(ebaggage,"y")==0)) {
		printf("\n It will cost you Rs.600 for 5 kgs.");
	}		
	printf("\n \n Do you require your baggage to be put on priority or fragile?");
	printf("\n\t\t Enter P for Priority Baggage, F for Fragile Baggage and N for None.\n\t");
	scanf("%s",baggageoptions);
	printf("\n The total fare would be Rs.%d",total);
	printf("\n Would you like to pay by card or cash? \n\t");
	scanf("%s",mop);
	if(strcmp(mop,"card") == 0) {
		gtotal = total + 0.02*total;
		printf("\n Enter your credit card number. ");
		scanf("%d",&ccn);
		ab:
		printf("\n Enter the Password: "); 
		for(k = 0; k< 500; k++) { 
			pass1[k] = getchar();
			if(pass1[k] == 13) { 
				pass1[k] = 0; 
				break; 
			} 
		printf("*"); 
	} 

	printf("\n Enter the password again: "); 
	for(k = 0; k< 500; k++) { 
		pass2[k] = getchar();
		if(pass2[k] == 13) { 
			pass2[k] = 0; 
			break; 
		} 
		printf("*"); 
	} 

	if(!strcmp(pass2,pass1)) {
		printf("\n You have succesfully completed the transaction. "); 
	 }
	else {
		printf("\n Transaction failed.");
	 	goto ab;
	}			
	}
	if(strcmp(mop,"cash")==0) {
		gtotal = total + 0.005*total;
		printf("\n The total amount payable in cash is %f",gtotal);
 	}
	
	printf("\n Here are your flight details:\n\n\n ");
	if(strcmp(start,"B")==0||strcmp(start,"b")==0) {
		printf("Place of Departure: Bangalore");
	}
	if(strcmp(start,"C")==0||strcmp(start,"c")==0) {
		printf("\n Place of Departure: Chennai");
	}
	if(strcmp(start,"D")==0||strcmp(start,"d")==0) {
		printf("\n Place of Departure: Delhi");
	}
	if(strcmp(start,"H")==0||strcmp(start,"h")==0) {
		printf("\n Place of Departure: Hyderabad");
	}
	if(strcmp(start,"K")==0||strcmp(start,"k")==0) {
		printf("\n Place of Departure: Kolkata");
	}
	if(strcmp(start,"M")==0||strcmp(start,"m")==0) {
		printf("\n Place of Departure: Mumbai");
	}
	if(strcmp(destination,"B")==0||strcmp(destination,"b")==0) {
		printf("\n Place of Arrival: Bangalore");
	}
	if(strcmp(destination,"C")==0||strcmp(destination,"c")==0) {
		printf("\n Place of Arrival: Chennai");
	}
	if(strcmp(destination,"D")==0||strcmp(destination,"d")==0) {
		printf("\n Place of Arrival: Delhi");
	}
	if(strcmp(destination,"H")==0||strcmp(destination,"h")==0) {
		printf("\n Place of Arrival: Hyderabad");
	}
	if(strcmp(destination,"K")==0||strcmp(destination,"k")==0) {
		printf("\n Place of Arrival: Kolkata");
	}
	if(strcmp(destination,"M")==0||strcmp(destination,"m")==0) {
		printf("\n Place of Arrival: Bangalore");
	}
	printf("\n Please note that the check-in closes 45 minutes before boarding time.");
	printf("\n Do not forget to carry your identification with you at all times.");
	printf("\n Have a safe journey.");
}

void oldcustomer() {

	char att;
	char ebaggage[10];
	char baggageoptions[10];
	char name[50];
	char start[5];
	char destination[5];
	char baddress[30];
	char input[500]; 
	char inputt[500];
	char mop[5];
	char pass1[500];
	char pass2[500];
	int i;
	int k;
	int m;
	int n;
	int time;
	int phonenumber;
	int membnumber;
	int total = 0;
	int fareb = 1450;
	int farec = 2999;
	int fared = 7832;
	int fareh = 1999;
	int farek = 4560;
	int farem = 3570;
	int ccn;
	float gtotal;
	printf("\n Enter your membership number: ");
	scanf("%d", &membnumber);
			xy:
	printf("\n Enter the Password: "); 
	for(m = 0; m< 500; m++) { 
		input[m] = getchar();
			if(input[m] == 13) { 
				input[m] = 0; 
				break; 
			} 
		printf("*"); 
	} 
	printf("\n Enter the password again: "); 
	for(m = 0; m< 500; m++) { 
		inputt[m] = getchar();
		if(inputt[m] == 13) { 
			inputt[m] = 0; 
			break; 
		} 
		printf("*"); 
	} 
	if(!strcmp(inputt,input)) {
		printf("\n Passwords Match. You may continue."); 
	}	
	else {
		printf("\n Try again.");
		goto xy;
	}
	getchar();

	printf("\n Enter the name under which you would want the booking to be done: ");
	scanf("%s",name);
	printf("\n The available airports are:\nBangalore\nChennai\nDelhi\nHyderabad\nKolkata\nMumbai\n");
	printf("\n Enter the starting point of your journey: ");
	printf("\n Enter B for Bangalore, C for Chennai, D for Delhi, H for Hyderabad, K for Kolkata and M for Mumbai.\n  ");
	scanf("%s",start);
	printf("\n Select your destination among the above mentioned cities.");
	printf("\n Enter B for Bangalore, C for Chennai, D for Delhi, H for Hyderabad, K for Kolkata and M for Mumbai.\n  ");
	scanf("%s",destination);	
	printf("\n How many people will you be booking for? ");
	scanf("%d",&n);
	printf("\n Enter your address: ");
	scanf("%s",baddress);
	fflush(stdin);
	printf("\n Enter your phone number: ");
	scanf("%d",&phonenumber);
	printf("\n Kindly proceed with the booking. ");
	

	if((strcmp(destination,"B")==0)||(strcmp(destination,"b")==0)) {
		printf("\n Your destination is Bangalore.");
		printf("\n Flights are available only on week ends.");
		printf("\n The flights are available at:\n 0700hours\n 1230hours\n 1600hours\n 2330hours\n");
		printf("Please enter your preferred time:");
		scanf("%d",&time);
		if(time==700) {
			printf("\n Your flight number is AFT1235");
			printf("\n The air travel would last 1 hour. ");
		}
		else if(time==1230) {
			printf("\n Your flight number is ZER3698");
			printf("\n The air travel would last 1 hour. ");
		}
		else if(time==1600) {
			printf("\n Your flight number is LUO2367");
			printf("\n The air travel would last 1 hour. ");
		}
		else if(time==2330) {
			printf("\n Your flight number is GTE4561");
			printf("\n The air travel would last 1 hour. ");
		}
		else {
			printf("Sorry!The flight is not available at the time you mentioned.");
		}
		total = fareb*n;
	}

	if((strcmp(destination,"C")==0)||(strcmp(destination,"c")==0)) {
		printf("\n Your destination is Chennai.");
		printf("\n Flights are available daily.");
		printf("\n The flights are available at:\n 0830hours\n 1130hours\n 1630hours\n 2300hours\n");
		printf("Please enter your preferred time:");
		scanf("%d",&time);
		if(time==830) {
			printf("\n Your flight number is AFT1235");
			printf("\n The air travel would last 1 hour 45 minutes. ");
		}
		else if(time==1130) {
			printf("\n Your flight number is ZER3698");
			printf("\n The air travel would last 1 hour 45 minutes. ");
		}
		else if(time==1630) {
			printf("\n Your flight number is LUO2367");
			printf("\n The air travel would last 1 hour 45 minutes. ");
		}
		else if(time==2300) {
			printf("\n Your flight number is GTE4561");
			printf("\n The air travel would last 1 hour 45 minutes. ");
		}
		else {
			printf("Sorry!The flight is not available at the time you mentioned.");
		}
		total = farec*n;
	}

	if((strcmp(destination,"D")==0)||(strcmp(destination,"d")==0)) {
		printf("\n Your destination is Delhi.");
		printf("\n Flights are available daily.");
		printf("\n The flights are available at:\n 0530hours\n 1300hours\n 1730hours\n 2230hours\n");
		printf("Please enter your preferred time:");
		scanf("%d",&time);
		if(time==530)
		{
			printf("\n Your flight number is AFT1235");
			printf("\n The air travel would last 2 hour 30 minutes. ");
		}
		else if(time==1300)
		{
			printf("\n Your flight number is ZER3698");
			printf("\n The air travel would last 2 hour 30 minutes. ");
		}
		else if(time==1730)
		{
			printf("\n Your flight number is LUO2367");
			printf("\n The air travel would last 2 hour 30 minutes. ");
		}
		else if(time==2230)
		{
			printf("\n Your flight number is GTE4561");
			printf("\n The air travel would last 2 hour 30 minutes. ");
		}
		else
		{
			printf("Sorry!The flight is not available at the time you mentioned.");
		}
		total = fared*n;
	}

	if((strcmp(destination,"H")==0)||(strcmp(destination,"h")==0)) {
		printf("\n Your destination is Hyderabad.");
		printf("\n Flights are available only on weekends.");
		printf("\n The flights are available at:\n 0630hours\n 1100hours\n 1430hours\n 2130hours\n");
		printf("Please enter your preferred time:");
		scanf("%d",&time);
		if(time==630)
		{
			printf("\n Your flight number is AFT1235");
			printf("\n The air travel would last 1 hour 30 minutes. ");
		}
		else if(time==1100)
		{
			printf("\n Your flight number is ZER3698");
			printf("\n The air travel would last 1 hour 30 minutes. ");
		}
		else if(time==1430)
		{
			printf("\n Your flight number is LUO2367");
			printf("\n The air travel would last 1 hour 30 minutes. ");
		}
		else if(time==2130)
		{
			printf("\n Your flight number is GTE4561");
			printf("\n The air travel would last 1 hour 30 minutes. ");
		}
		else
		{
			printf("Sorry!The flight is not available at the time you mentioned.");
		}
		total = fareh*n;
	}

	if((strcmp(destination,"K")==0)||(strcmp(destination,"k")==0)) {
		printf("\n Your destination is Kolkata");
		printf("\n Flights are available only on weekends.");
		printf("\n The flights are available at:\n 0600hours\n 1145hours\n 1420hours\n 2145hours\n");
		printf("Please enter your preferred time:");
		scanf("%d",&time);
		if(time==600)
		{
			printf("\n Your flight number is AFT1235");
			printf("\n The air travel would last 2 hours.");
		}
		else if(time==1145)
		{
			printf("\n Your flight number is ZER3698");
			printf("\n The air travel would last 2 hours.");
		}
		else if(time==1420)
		{
			printf("\n Your flight number is LUO2367");
			printf("\n The air travel would last 2 hours.");
		}
		else if(time==2145)
		{
			printf("\n Your flight number is GTE4561");
			printf("\n The air travel would last 2 hours.");
		}
		else
		{
			printf("Sorry!The flight is not available at the time you mentioned.");
		}
		total = farek*n;
	}

	if((strcmp(destination,"M")==0)||(strcmp(destination,"m")==0)) {
		printf("\n Your destination is Mumbai.");
		printf("\n Flights are available daily.");
		printf("\n The flights are available at:\n 0545hours\n 1120hours\n 1430hours\n 2200hours\n");
		printf("Please enter your preferred time:");
		scanf("%d",&time);
		if(time==545)
		{
			printf("\n Your flight number is AFT1235");
			printf("\n The air travel would last 1 hour 30 minutes. ");
		}
		else if(time==1120)
		{
			printf("\n Your flight number is ZER3698");
			printf("\n The air travel would last 1 hour 30 minutes. ");
		}
		else if(time==1430)
		{
			printf("\n Your flight number is LUO2367");
			printf("\n The air travel would last 1 hour 30 minutes. ");
		}
		else if(time==2200)
		{
			printf("\n Your flight number is GTE4561");
			printf("\n The air travel would last 1 hour 30 minutes. ");
		}
		else
		{
			printf("Sorry!The flight is not available at the time you mentioned.");
		}
		total = farem*n;
	}
	system("sleep 1000");
	
	printf("\n Enter the passenger details.\n\n");
	for(i=0;i<n;i++) {
		printf("\n \n Enter Passenger %d's Name: ",i+1);
		scanf("%s",passenger[i].name);
		printf("\n Enter Passenger %d's Age: ",i+1);
		scanf("%d",&passenger[i].age);
		printf("\n Enter F for Female and M for Male: ");
		scanf("%s",passenger[i].gender);
		printf("\n Which class do you prefer? - Economy or Business.  \n\t\t Enter E for Economy and B for Business. \n\t");
		scanf("%s",passenger[i].travelclass);
		printf("\n Which type of meal would you prefer? - On flight, Vegetarian or Non.Vegetarian.");	
		printf("\t\t Enter O for On-flight,V for Vegetarian and N for Non-Vegetarian. \n\t");
		scanf("%s",passenger[i].meal);
		printf("\n Which seat would you prefer? - Aisle, Middle, Window");
		printf("\n\t\t Enter A for Aisle, M for Middle and W for Window. \n\t");
		scanf("%s",passenger[i].seat);
		if(passenger[i].age<=12||passenger[i].age>60) {	
			printf("\n Do you need an attendant to accompany you?: \n\t\t Enter Y for Yes and N for No.\n\t");
			scanf("%c", &att);	
		}
		if((strcmp(passenger[i].travelclass,"B")==0)||(strcmp(passenger[i].travelclass,"b")==0))
		{
			total = total + 500;
		}
		if((strcmp(passenger[i].meal,"V")==0)||(strcmp(passenger[i].meal,"v")==0))
		{
			total = total + 200;
		}
		if((strcmp(passenger[i].meal,"N")==0)||(strcmp(passenger[i].meal,"n")==0))
		{
			total = total + 375;
		}
		system("sleep 800");
	
	}
	printf("\n Will you be carrying extra baggage?");
	printf("\n\t\t Enter Y if you are,and N if you won't be carrying extra baggage.\n\t");
	scanf("%s",ebaggage);
	if((strcmp(ebaggage,"Y")==0)||(strcmp(ebaggage,"y")==0))
	{
		printf("\n It will cost you Rs.600 for 5 kgs.");
	}		
	printf("\n \n Do you require your baggage to be put on priority or fragile?");
	printf("\n\t\t Enter P for Priority Baggage, F for Fragile Baggage and N for None.\n\t");
	scanf("%s",baggageoptions);
	printf("\n The total fare would be %d",total);
	printf("\n Would you like to pay by card or cash? \n\t");
	scanf("%s",mop);
	if(strcmp(mop,"card")==0)
	{
		gtotal = total + 0.02*total;
		printf("\n Enter your credit card number. ");
		scanf("%d",&ccn);
	 	ab:

		printf("\n Enter the Password: "); 
		for(k = 0; k< 500; k++)
		{ 
			pass1[k] = getchar();
			if(pass1[k] == 13)
			{ 
				pass1[k] = 0; 
				break; 
			} 
		printf("*"); 
		} 

		printf("\n Enter the password again: "); 
		for(k = 0; k< 500; k++)
		{ 
			pass2[k] = getchar();
			if(pass2[k] == 13)
			{ 
				pass2[k] = 0; 
				break; 
			} 
		printf("*"); 
		} 

		if(!strcmp(pass2,pass1)) 
		{
			printf("\n You have succesfully completed the transaction. "); 
	 		}
		else 
		{
			printf("\n Transaction failed.");
	 		goto ab;
	 			}
	}

	if(strcmp(mop,"cash")==0)	
	{
		gtotal = total + 0.005*total;
		printf("\n The total amount payable in cash is %f",gtotal);
	}	
	
	printf("\n Here are your flight details:\n\n\n ");
	if(strcmp(start,"B")==0||strcmp(start,"b")==0)
	{
		printf("Place of Departure: Bangalore");
	}
	if(strcmp(start,"C")==0||strcmp(start,"c")==0)
	{
		printf("\n Place of Departure: Chennai");
	}
	if(strcmp(start,"D")==0||strcmp(start,"d")==0)
	{
		printf("Place of Departure: Delhi");
	}
	if(strcmp(start,"H")==0||strcmp(start,"h")==0)
	{
		printf("Place of Departure: Hyderabad");
	}
	if(strcmp(start,"K")==0||strcmp(start,"k")==0)
	{
		printf("Place of Departure: Kolkata");
	}
	if(strcmp(start,"M")==0||strcmp(start,"m")==0)
	{
		printf("Place of Departure: Mumbai");
	}
	if(strcmp(destination,"B")==0||strcmp(destination,"b")==0)
	{
		printf("Place of Arrival: Bangalore");
	}
	if(strcmp(destination,"C")==0||strcmp(destination,"c")==0)
	{
		printf("\n Place of Arrival: Chennai");
	}
	if(strcmp(destination,"D")==0||strcmp(destination,"d")==0)
	{
		printf("Place of Arrival: Delhi");
	}
	if(strcmp(destination,"H")==0||strcmp(destination,"h")==0)
	{
		printf("Place of Arrival: Hyderabad");
	}
	if(strcmp(destination,"K")==0||strcmp(destination,"k")==0)
	{
		printf("Place of Arrival: Kolkata");
	}
	if(strcmp(destination,"M")==0||strcmp(destination,"m")==0)
	{
		printf("Place of Arrival: Bangalore");
	}
	printf("\n Please note that the check-in closes 45 minutes before boarding time.");
	printf("\n Do not forget to carry your identification with you at all times.");
	printf("\n Have a safe journey.");
	}

