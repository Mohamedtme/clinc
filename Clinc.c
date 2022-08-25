#include <stdio.h>
void main()  
{
    int age=19 ;
    int pass,x,adchoose,ID,resnum,uschoose ;
    char name="mohamed";
    char gender="male" ;
    char cancel ;
    int index;
    int arrsize;
    int IDarr[arrsize] ;
    char namearr[arrsize];
    int agearr[arrsize]; 
    char genderarr[arrsize];
    int user =7777 ;

    printf("enter 1 for admin\n");
    printf("entet 2 for user \n");
    scanf("%d",&x);

    if (x!=1||x!=2)
    {
        for(;;)
        {
            if (x==1||x==2)
                { 
                    break ;
                }
            printf("try again: ") ;
            scanf("%d",& x);
        }
    }

    if(x==1)
    { 
        printf("enter password: ");
        scanf("%d",&pass);

        if(pass!=1234)
        {
            for(int i=1;i<=2;i++)
                {
                    printf("try again : ");
                    scanf("%d",&pass);
                    if(pass==1234)
                {
                    break ;
                }
                    if(i==2)
                {
                    printf("wrong password");
                    break ;
                }
                }
        }

        printf("1-for adding new patient\n");
        printf("2-for editing patient record\n");
        printf("3-for reserve a slot with the doctor\n");
        printf("4-for cancel reservation\n");
        scanf("%d",&adchoose);

        if(adchoose==1)
        { /*open if condition for the options of admin will choose  */
            printf("enter the new ID : ");
            scanf("%d",&ID);

            if(ID==IDarr[arrsize]||ID==user)
                { /*open if condition for checking the the id */
                    for(;;)
                { /*open infinity for loop */
                    printf("this ID is exist , try again : ");
                    scanf("%d",&ID);

                    if(ID!=IDarr[index])
                    { /*open if condition for cheking the new id and quit programme*/
                        break ;
                    } /* end of if condition */
                }
                }
            else 
                {
                    ID=IDarr[index];
                }

            printf("enter name of patient: ");
            scanf("%c",&namearr[index]);

            printf("enter age of patient: ");
            scanf("%d",&agearr[index]);

            printf("enter gender of patient: ");
            scanf("%c",&genderarr[index]);

        }  /*close the if condition of admin choose 1*/

        else if(adchoose==2)
        { /* open if condition of admin choose 2 */

            printf("enter your id : ");
            scanf("%d",&ID);

            if (ID!=IDarr[arrsize]||ID!=user)
                { /*open if for check the id */
                    printf("incorrect id "); 
                } /*close if condition for check id */
            if (ID==IDarr[index]){
                    printf("enter the new name : ");
                    scanf("%c",&namearr[index]);

                    printf("enter the new age : ");
                    scanf("%d",&agearr[index]);

                    printf("enter the new gender : ");
                    scanf("%c",&genderarr[index]);
                }

        } /*close if of admin choose 2 */

        else if (adchoose==3)
        { /*open if of admin choose 3 */ 

            printf("enter number 1 for reservation from 2pm to 2:30pm");

            printf("enter number 2 for reservation from 2:30pm to 3pm\n");

            printf("enter number 3 for reservation from 3pm to 3:30pm\n");

            printf("enter number 4 for reservation from 4pm  to 4:30pm\n");

            printf("enter number 5 for reservation from 4:30pm to 5pm\n");
            scanf("%d",&resnum);

            if(resnum!=1||resnum!=2||resnum!=3||resnum!=4||resnum!=5)
                { /*open if for resnum!=any numer  */
                    for(;;)
                { /* open infinit loop */
                    printf("wrong , try again : ");
                    scanf("%d",&resnum);

                    if(resnum==1||resnum==2||resnum==3||resnum==4||resnum==5)
                    { /* open if for breake the loop */ 
                        break ;
                    } /* close if breake the loop */
                } /* close infinite loop */
                } /* close if for resnum!=any numer  */

            if(resnum==1)
                {
                    printf("the reservation from 2 to 2:30 is taken");
                }
            if(resnum==2)
                {
                    printf("the reservation from 2:30 to 3 is taken");
                }
            if(resnum==3)
                {
                    printf("the reservation from 3 to 3:30 is taken");
                }
            if(resnum==4)
                {
                    printf("the reservation from 4 to 4:30 is taken");
                }
            if(resnum==5)
                {
                    printf("the reservation from 4:30 to 5 is taken");
                }
        } /*close else if for admin choose 3  */
        else 
        { /* open else for last admin choose */
            printf("enter cancel to cancel the reservation for this patient : ");
            scanf("%c",&cancel);
        } /*close else for last admin choose */ 

    } /* close if x==1 */

    else 
    { /* open user choose and options for user */
        printf("enter id : ");
        scanf("%d",&ID);

        if(ID!=IDarr[arrsize]||ID!=user)
        { /* open if condition */
            for (;;)
                { /* open infinite loop */
                    printf("wrong id , try again : ");
                    scanf("%d",&ID);
                    if(ID==IDarr[index]||ID==user)
                { /* open if for break the loop */
                    break ;
                }/* close if */
                }/* close for */ 
        }/* close if condition */ 

        printf("enter 1 for view patient record \n");
        printf("enter 2 for view today reservation \n");
        scanf("%d",&uschoose);  

        if (uschoose!=1||uschoose!=2)
                {
                                        for(;;)
                { 
                    printf("try again :");
                    scanf("%d",& uschoose);
                    if(uschoose==1||uschoose==2)
                {
                    break ;
                } /* close if */
                } /* close for */
                }

        else if(uschoose==1&&ID==user)

        {
            printf("the name is : %c" , name);
            printf("the gender is :%c " , gender);
            printf("the age is : %d ", age);
        }

        else if(uschoose==1&&ID!=user)
                {
                    printf("the name is : %c" , namearr[index]);
                    printf("the gender is :%c " , genderarr[index]);
                    printf("the age is : %d ", agearr[index]);

                }
        else
                {
                    printf("the reservation with doctor is : ");
                }



    }/* close else for x==1 user mode */

} /* close main fubction */
