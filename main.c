#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <windows.h>
#define BATTERY_LOW_THRESHOLD 20
#define BATTERY_SAVER_MODE_THRESHOLD 30
#define BATTERY_FULLY_CHARGED_THRESHOLD 100

typedef struct
{
int current_percentage;

}battery;
int main(int argc,char const*argv[])
{
int current_percentage;
time_t mytime1;
char openapps[10];
		mytime1 = time(NULL);
		printf(ctime(&mytime1));


    int battery_saver_mode = 0;

    printf("Welcome to the Battery Saver System!\n");
    printf("The current battery percentage is;");
    scanf("%d",&current_percentage);
    printf("................................................\n");


        if(current_percentage <= BATTERY_LOW_THRESHOLD && !battery_saver_mode)
        {
            printf("Battery level is critically low! Enabling battery saver mode...\n");
             {printf("Which of the following apps  is currently open(google,tiktok,youtube,instagram);");
        scanf("%s",&openapps);
        printf("................................................\n");
            printf("Apps that are in use are;%s\n",openapps);
            printf("................................................\n");}

if((strcmp(openapps, "google") == 0) || (strcmp(openapps, "tiktok") == 0) || (strcmp(openapps, "youtube") == 0) || (strcmp(openapps, "instagram") == 0)) {
    printf("You are being advised to close the apps, since they are leading to fast battery drainage.\n");
}
        }

       else if(current_percentage >= BATTERY_FULLY_CHARGED_THRESHOLD && !battery_saver_mode)
        {
            printf("Battery is fully charged! Disabling battery saver mode...\n");
            battery_saver_mode = 1;
        }

        else if(current_percentage>= BATTERY_SAVER_MODE_THRESHOLD && battery_saver_mode)
        {
            printf("Battery level is high enough. Disabling battery saver mode...\n");
            battery_saver_mode = 1;
        }

        // simulate battery drain
        current_percentage -= rand() % 5 + 1;

        if(!battery_saver_mode)
        {
            printf("Battery saver mode is on. Saving energy...\n");
            // simulate energy-saving activities
            // (e.g. dimming the screen, turning off non-essential features)
        }

        printf("\n");
        printf("................................................\n");
printf("......................................\n");
printf(".................................\n");
printf("...........................\n");
printf("......................\n");
printf("THANK YOU FOR USING THE SYSTEM!!");

        // wait for a few seconds before checking the battery level again

return 0;
    }




