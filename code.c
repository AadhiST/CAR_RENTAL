#include <stdio.h>


void renault()
{
        printf ("      MODEL (Year)               Seat Type               No.of SEATER               Vehicle Type               Mileage               Rent(per day)\n\n");

        printf ("       1.KWID(2018)                  Normal                    5                         PETROL                 85 km/ltr                  3500\n\n");

        printf ("       2.KWID(2018)(Ev)              Normal                    5                        ELECTRIC                95 km/ltr                  3500\n\n");

        printf ("       3.TRIBER(2023)(EV)            Premium                   7                        ELECTRIC                100 km/ltr                 5000\n\n");

        printf ("       4.TRIBER(2023)                Premium                   7                         PETROL                 90 km/ltr                  4500\n\n");

		int choice;
		char car_for_rent;

		printf("\nEnter your choice:");
		scanf("%d",&choice);

    struct User
{
    char Name[30] , Gender;

    int age;

    long int Aadhar_No , License_No , Mob_No,num;

};

    printf ("\n");

    struct User U ;

    printf ("Enter the Name of the peson who drives the car : ");

    scanf ("%s",&U.Name);

    printf ("Age : ");

    scanf ("%d",&U.age);

    printf ("Mobile number : ");

    scanf ("%ld",&U.Mob_No);

    printf ("Aadhar number : ");

    scanf ("%ld",&U.Aadhar_No);

    printf ("License number : ");

    scanf ("%ld",&U.License_No);

    printf("Enter no of days you need for rent:");

    scanf("%ld",&U.num);

    printf("\n\n");

    printf("BILL FOR BOOKED YOUR VECHILE\n\n");


    printf ("\nName :%s\n",U.Name);

    printf ("Age :%d\n",U.age);

    printf ("Mob.No :%ld\n",U.Mob_No);

    printf ("Aadhar_No :%ld\n",U.Aadhar_No);

    printf ("License_No :%ld\n",U.License_No);

    printf("No of days:%d\n",U.num);

    printf("************************\n");


		if(choice==1)
	{
		int struct_user();
			printf(" selceted choice is KWID");
		printf("\n no of seat is 5\n vechile type is 'petrol'\n mileage is 85km per litre\n rent is Rs.3500");
	}
		else if(choice==2)
		{
		printf(" selceted choice is kWID");
		printf("\n no of seat is 5\n vechile type is 'EV'\n mileage is 95km per litre\n rent is Rs.4000");
	}
		else if(choice==3)
		{
		printf(" selceted choice is TRIPER");
		printf("\n no of seat is 7\n vechile type is 'EV'\n mileage is 100km per litre\n rent is Rs.5000");
}
		else if(choice==4)
		{

		printf(" selceted choice is CRETA");
		printf("\n no of seat is 7\n vechile type is 'petrol'\n mileage is 100km per litre\n rent is Rs.4500");
}
		else
		printf("Invalid choice");

}


int hyundai()
{
       printf ("      MODEL (Year)               Seat Type               No.of SEATER               Vehicle Type               Mileage               Rent(per day)\n\n");

        printf ("      1.i20(2018)                  Normal                    5                         PETROL                  80 km/ltr                  4000\n\n");

        printf ("      2.i10(2018)                  Normal                    5                        ELECTRIC                 100 km/ltr                 4500\n\n");

        printf ("      3.CRETA(2022)                Premium                   7                        ELECTRIC                 125 km/ltr                 5500\n\n");

        printf ("      4.CRETA(2023)                Premium                   7                         PETROL                  100 km/ltr                 5000\n\n");

		int choice;
		char car_for_rent;

		printf("\nEnter your choice:");
		scanf("%d",&choice);

				struct User
{
    char Name[30] , Gender;

    int age;

    long int Aadhar_No , License_No , Mob_No,num;

};

	printf("\n");

		   struct User U ;

    printf ("Enter the Name of the peson who drives the car : ");

    scanf ("%s",&U.Name);

    printf ("Age : ");

    scanf ("%d",&U.age);

    printf ("Mobile number : ");

    scanf ("%ld",&U.Mob_No);

    printf ("Aadhar number : ");

    scanf ("%ld",&U.Aadhar_No);

    printf ("License number : ");

    scanf ("%ld",&U.License_No);

    printf("Enter no of days you need for rent:");

    scanf("%ld",&U.num);

    printf("\n\n");


    printf("BILL FOR BOOKED YOUR VECHILE\n\n");

    printf ("\nName :%s\n",U.Name);

    printf ("Age :%d\n",U.age);

    printf ("Mob.No :%ld\n",U.Mob_No);

    printf ("Aadhar_No :%ld\n",U.Aadhar_No);

    printf ("License_No :%ld\n",U.License_No);

	 printf("No of days:%d\n",U.num);


	    printf("************************\n");



		if(choice==1)
	{
		int struct_user();
			printf(" selceted choice is i20");
		printf("\n no of seat is 5\n vechile type is 'petrol'\n mileage is 80km per litre\n rent is Rs.4000");
	}
		else if(choice==2)
		{
		printf(" selceted choice is i20");
		printf("\n no of seat is 5\n vechile type is 'EV'\n mileage is 100km per litre\n rent is Rs.4500");
	}
		else if(choice==3)
		{
		printf(" selceted choice is CRETA");
		printf("\n no of seat is 7\n vechile type is 'EV'\n mileage is 125km per litre\n rent is Rs.5500");
}
		else if(choice==4)
		{

		printf(" selceted choice is CRETA");
		printf("\n no of seat is 7\n vechile type is 'petrol'\n mileage is 100km per litre\n rent is Rs.5000");
}
		else
		printf("Invalid choice");

}



int main ()

{

    	int password,age,mobile_number,aadhar_number,license_number,choice;
	char user_id,name[100],gender;
	printf("******************************************************RENTIO*************************************************************");
	printf("\n\n\t\t\tSign in your account");

	printf("\n Enter user id:");
	scanf("%s",&user_id);

	printf("\nEnter your password:");
	scanf("%d",&password);

	printf("\n\nCAR DETAILS");
	printf("\n\n car models available for rending!");

    while(1)
	{
		printf("\n1.RENAULT");
		printf("\n2.HYUNDAI");
		printf("\n\nEnter your choice:");
		scanf("%d",&choice);
		if (choice == 0){
			break;
		}
		else
		{
		switch (choice)
		 {
            case 1:
					renault();
			        break;
            case 2:
					hyundai();
	                break;
	     }
       	}break;
    }




}
