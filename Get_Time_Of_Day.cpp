   //#include <time.h>
   //#include <stdlib.h>
   #include <iostream>
   //#include <iomanip>
   //#include <stdio.h>
   #include <sys/time.h>
   using namespace std;

    int main(){
        //creating variables within the timeval called current_time and end_time
        struct timeval current_time, end_time;
        //////stores the current_time data where the variable is located
        gettimeofday(&current_time, NULL);
        //displaying the seconds and microseconds then using placeholders
        //--------------inserted code (will be changeable)
        int n = 1000000;//change the value to 10000, 100000, 100000000 (500,000 for fragment 3)
        int sum = 0;
        for (int i=0; i < n; i+=2){
        sum++;
        }

        ///////displays time from the start
        //cout << "seconds: " << current_time.tv_sec << 
        cout<< "microseconds: " << current_time.tv_usec << endl;
        //////stores the end_time data where the variable is located
        gettimeofday(&end_time, NULL);
        //////displays time from the end
        //cout << "seconds: " << end_time.tv_sec << 
        cout << "microseconds: " << end_time.tv_usec << endl;
        /////calculating elasped time secs and microsecs
        double elasped_usec;
        //elasped_sec = (end_time.tv_sec - current_time.tv_sec);
        elasped_usec = (end_time.tv_usec - current_time.tv_usec);
        ///display the elaseped time
        cout<< "the sum: " << sum << endl;
        //cout << "Seconds it took: " << elasped_sec << endl;
        cout << "microseconds it took: " << elasped_usec << endl;

        ///create a separate executable file to input the 5 values of the elasped times then add and divde it
        // y is the axis in microseconds average and x is n

        return 0;
    
   }
    