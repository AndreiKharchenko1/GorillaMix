#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <iostream>
#include <cstring>
#include <string>
#include <stdexcept>
#include <sstream>
#include <math.h>
#include <graphics.h>
 using namespace std;

//Gorilla Admixture Written in C++ by Andrei kharchenko in 2023
//I allow whoever wants to modify my code to do it, just give me some sort of credit (and subscribe to my youtube channel)
float findLargestFloat(const float* arr, int size) {
    if (size == 0) {
        // Return an appropriate value if the array is empty.
        // You can choose to return a special value or raise an error.
        std::cerr << "Error: Empty array!\n";
        return 0.0;
    }

    float largest = arr[0]; // Assume the first element is the largest

    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update largest if a larger value is found
        }
    }

    return largest;
}
void admix3();
void admix4();
void admix5();
 int main(){
     int admixSelect;
     cout << "\n Enter 3 For 3 way admixture, Enter 4 for 4 way admixture, Enter 5 for 5 way admixture: ";
     cin >> admixSelect;
     switch(admixSelect){
      case 3: admix3(); break;
      case 4: admix4(); break;
      case 5: admix5(); break;
      default: cout << "Invalid. ";
     }

 }
 void admix5(){
    string File;
    int Target, source1, source2, source3, source4, source5;
cout << "Enter File Name: ";
cin >> File;
cout << "\n Enter Population to be modeled (integer, column number) : ";
cin >> Target;
cout << "\n Enter Source 1 (integer, column number) : ";
cin >> source1;
cout << "\n Enter Source 2 (integer, column number) : ";
cin >> source2;
cout << "\n Enter Source 3 (integer, column number) : ";
cin >> source3;
cout << "\n Enter Source 4 (integer, column number) : ";
cin >> source4;
cout << "\n Enter Source 5 (integer, column number) : ";
cin >> source5;
    ifstream file(File.c_str());
    if (!file) {
        cout << "Unable to open file" << endl;

        main();
    }
float S1dist = 0; float S2dist = 0; float S3dist = 0; float S4dist =0; float S5dist = 0; float S1S2 = 0; float S1S3 = 0; float S1S4 =0; float S1S5 = 0; float S2S3 = 0; float S2S4 = 0; float S2S5 = 0; float S3S4 = 0; float S3S5 = 0; float S4S5 = 0;
    string line;
    while (getline(file, line)) {
       std::stringstream ss(line);
        float target; float value;
        int columnCount = 0;
        float S1, S2, S3, S4, S5;

        while (ss >> value) {

            columnCount++;
            if (columnCount == Target){
                target = value;} else
            if (columnCount == source1){
                S1 = value;
            } else
            if (columnCount == source2){
                S2 = value;
            } else
            if (columnCount == source3){
                S3 = value;
            } else
            if (columnCount == source4){
                S4 = value;
            } else
            if (columnCount == source5){
                S5 = value;
            }
        }

        S1dist = S1dist + (target-S1)*(target-S1);
        S2dist = S2dist + (target-S2)*(target-S2);
        S3dist = S3dist + (target-S3)*(target-S3);
        S4dist = S4dist + (target-S4)*(target-S4);
        S5dist = S5dist + (target-S5)*(target-S5);
        S1S2 = S1S2 + (S1-S2)*(S1-S2);
        S1S3 = S1S3 + (S1-S3)*(S1-S3);
        S1S4 = S1S4 + (S1-S4)*(S1-S4);
        S1S5 = S1S5 + (S1-S5)*(S1-S5);
        S2S3 = S2S3 + (S2-S3)*(S2-S3);
        S2S4 = S2S4 + (S2-S4)*(S2-S4);
        S2S5 = S2S5 + (S2-S5)*(S2-S5);
        S3S4 = S3S4 + (S3-S4)*(S3-S4);
        S3S5 = S3S5 + (S3-S5)*(S3-S5);
        S4S5 = S4S5 + (S4-S5)*(S4-S5);
    }
    cout << "\n S1dist = " << S1dist;
    cout << "\n S2dist = " << S2dist;
    cout << "\n S3dist = " << S3dist;
    cout << "\n S4dist = " << S4dist;
    cout << "\n S5dist = " << S5dist;
    cout << "\n VahaduoCoords: ";
    cout << "\n Source1," << 0 << "," << S1S2 << "," << S1S3 << "," << S1S4 << "," << S1S5;
    cout << "\n Source2," << S1S2 << ","<< 0 << ","<< S2S3 << "," << S2S4 << "," << S2S5;
    cout << "\n Source3," << S1S3 << "," << S2S3 << "," << 0 << "," << S3S4 << "," << S3S5;
    cout << "\n Source4," << S1S4 << "," << S2S4 << "," << S3S4 << "," << 0 << "," << S4S5;
    cout << "\n Source5," << S1S5 << "," << S2S5 << "," << S3S5 << "," << S4S5 << "," << 0;
    cout << "\n Target," << S1dist << "," << S2dist << "," << S3dist << "," << S4dist << "," << S5dist;

   float distarrays[15] = {S1dist, S2dist,S3dist, S4dist, S5dist, S1S2, S1S3, S1S4, S1S5, S2S3, S2S4, S2S5, S3S4, S3S5, S4S5};
   float biggest = findLargestFloat(distarrays, 15);
   float scale = biggest/255;

 initwindow(700,800, "Admix5");
 setfillstyle(SOLID_FILL, RGB(255, 0, 0));
 circle(50,100,50);
 floodfill(50,100, getcolor());
 outtextxy(50,100, "Target");
  setfillstyle(SOLID_FILL, RGB(255-S1dist/scale, 0+S1dist/scale, 0));
  circle(150,100,50);
  floodfill(150,100, getcolor());
outtextxy(150, 100, "Target-S1");
    setfillstyle(SOLID_FILL, RGB(255-S2dist/scale, 0+S2dist/scale, 0));
  circle(250,100,50);
  floodfill(250,100, getcolor());
outtextxy(250, 100, "Target-S2");
    setfillstyle(SOLID_FILL, RGB(255-S3dist/scale, 0+S3dist/scale, 0));
  circle(350,100,50);
  floodfill(350,100, getcolor());
outtextxy(350, 100, "Target-S3");
   setfillstyle(SOLID_FILL, RGB(255-S4dist/scale, 0+S4dist/scale, 0));
  circle(450,100,50);
  floodfill(450,100, getcolor());
outtextxy(450, 100, "Target-S4");
  setfillstyle(SOLID_FILL, RGB(255-S5dist/scale, 0+S5dist/scale, 0));
  circle(550,100,50);
  floodfill(550,100, getcolor());
  outtextxy(550, 100, "Target-S5");

 setfillstyle(SOLID_FILL, RGB(255-S1dist/scale, 0+S1dist/scale, 0));
  circle(50,200,50);
 floodfill(50,200, getcolor());
 outtextxy(50,200, "Target-S1");
  setfillstyle(SOLID_FILL, RGB(255, 0, 0));
  circle(150,200,50);
  floodfill(150,200, getcolor());
outtextxy(150, 200, "S1");
    setfillstyle(SOLID_FILL, RGB(255-S1S2/scale, 0+S1S2/scale, 0));
  circle(250,200,50);
  floodfill(250,200, getcolor());
outtextxy(250, 200, "S1-S2");
    setfillstyle(SOLID_FILL, RGB(255-S1S3/scale, 0+S1S3/scale, 0));
  circle(350,200,50);
  floodfill(350,200, getcolor());
outtextxy(350, 200, "S1-S3");
   setfillstyle(SOLID_FILL, RGB(255-S1S4/scale, 0+S1S4/scale, 0));
  circle(450,200,50);
  floodfill(450,200, getcolor());
outtextxy(450, 200, "S1-S4");
  setfillstyle(SOLID_FILL, RGB(255-S1S5/scale, 0+S1S5/scale, 0));
  circle(550,200,50);
  floodfill(550,200, getcolor());
  outtextxy(550, 200, "S1-S5");

  setfillstyle(SOLID_FILL, RGB(255-S2dist/scale, 0+S2dist/scale, 0));
  circle(50,300,50);
 floodfill(50,300, getcolor());
 outtextxy(50,300, "Target-S2");
  setfillstyle(SOLID_FILL, RGB(255-S1S2/scale, 0+S1S2/scale, 0));
  circle(150,300,50);
  floodfill(150,300, getcolor());
outtextxy(150, 300, "S2-S1");
    setfillstyle(SOLID_FILL, RGB(255, 0, 0));
  circle(250,300,50);
  floodfill(250,300, getcolor());
outtextxy(250, 300, "S2");
    setfillstyle(SOLID_FILL, RGB(255-S2S3/scale, 0+S2S3/scale, 0));
  circle(350,300,50);
  floodfill(350,300, getcolor());
outtextxy(350, 300, "S2-S3");
   setfillstyle(SOLID_FILL, RGB(255-S2S4/scale, 0+S2S4/scale, 0));
  circle(450,300,50);
  floodfill(450,300, getcolor());
outtextxy(450, 300, "S2-S4");
  setfillstyle(SOLID_FILL, RGB(255-S2S5/scale, 0+S2S5/scale, 0));
  circle(550,300,50);
  floodfill(550,300, getcolor());
  outtextxy(550, 300, "S2-S5");

 setfillstyle(SOLID_FILL, RGB(255-S3dist/scale, 0+S3dist/scale, 0));
  circle(50,400,50);
 floodfill(50,400, getcolor());
 outtextxy(50,400, "Target-S3");
  setfillstyle(SOLID_FILL, RGB(255-S1S3/scale, 0+S1S3/scale, 0));
  circle(150,400,50);
  floodfill(150,400, getcolor());
outtextxy(150, 400, "S3-S1");
    setfillstyle(SOLID_FILL, RGB(255-S2S3/scale, 0+S2S3/scale, 0));
  circle(250,400,50);
  floodfill(250,400, getcolor());
outtextxy(250, 400, "S3-S2");
    setfillstyle(SOLID_FILL, RGB(255, 0, 0));
  circle(350,400,50);
  floodfill(350,400, getcolor());
outtextxy(350, 400, "S3");
   setfillstyle(SOLID_FILL, RGB(255-S3S4/scale, 0+S3S4/scale, 0));
  circle(450,400,50);
  floodfill(450,400, getcolor());
outtextxy(450, 400, "S3-S4");
  setfillstyle(SOLID_FILL, RGB(255-S3S5/scale, 0+S3S5/scale, 0));
  circle(550,400,50);
  floodfill(550,400, getcolor());
  outtextxy(550, 400, "S3-S5");

  setfillstyle(SOLID_FILL, RGB(255-S4dist/scale, 0+S4dist/scale, 0));
  circle(50,500,50);
 floodfill(50,500, getcolor());
 outtextxy(50,500, "Target-S4");
  setfillstyle(SOLID_FILL, RGB(255-S1S4/scale, 0+S1S4/scale, 0));
  circle(150,500,50);
  floodfill(150,500, getcolor());
outtextxy(150, 500, "S4-S1");
    setfillstyle(SOLID_FILL, RGB(255-S2S4/scale, 0+S2S4/scale, 0));
  circle(250,500,50);
  floodfill(250,500, getcolor());
outtextxy(250, 500, "S4-S2");
    setfillstyle(SOLID_FILL, RGB(255-S3S4/scale, 0+S3S4/scale, 0));
  circle(350,500,50);
  floodfill(350,500, getcolor());
outtextxy(350, 500, "S4-S3");
   setfillstyle(SOLID_FILL, RGB(255, 0, 0));
  circle(450,500,50);
  floodfill(450,500, getcolor());
outtextxy(450, 500, "S4");
  setfillstyle(SOLID_FILL, RGB(255-S4S5/scale, 0+S4S5/scale, 0));
  circle(550,500,50);
  floodfill(550,500, getcolor());
  outtextxy(550, 500, "S4-S5");


setfillstyle(SOLID_FILL, RGB(255-S5dist/scale, 0+S5dist/scale, 0));
  circle(50,600,50);
 floodfill(50,600, getcolor());
 outtextxy(50,600, "Target-S5");
  setfillstyle(SOLID_FILL, RGB(255-S1S5/scale, 0+S1S5/scale, 0));
  circle(150,600,50);
  floodfill(150,600, getcolor());
outtextxy(150, 600, "S5-S1");
    setfillstyle(SOLID_FILL, RGB(255-S2S5/scale, 0+S2S5/scale, 0));
  circle(250,600,50);
  floodfill(250,600, getcolor());
outtextxy(250, 600, "S5-S2");
    setfillstyle(SOLID_FILL, RGB(255-S3S5/scale, 0+S3S5/scale, 0));
  circle(350,600,50);
  floodfill(350,600, getcolor());
outtextxy(350, 600, "S5-S3");
   setfillstyle(SOLID_FILL, RGB(255-S4S5/scale, 0+S4S5/scale, 0));
  circle(450,600,50);
  floodfill(450,600, getcolor());
outtextxy(450, 600, "S5-S4");
  setfillstyle(SOLID_FILL, RGB(255, 0, 0));
  circle(550,600,50);
  floodfill(550,600, getcolor());
  outtextxy(550, 600, "S5");



main();
}
void admix4(){
    string File;
    int Target, source1, source2, source3, source4;
cout << "Enter File Name: ";
cin >> File;
cout << "\n Enter Population to be modeled (integer, column number) : ";
cin >> Target;
cout << "\n Enter Source 1 (integer, column number) : ";
cin >> source1;
cout << "\n Enter Source 2 (integer, column number) : ";
cin >> source2;
cout << "\n Enter Source 3 (integer, column number) : ";
cin >> source3;
cout << "\n Enter Source 4 (integer, column number) : ";
cin >> source4;
    ifstream file(File.c_str());
    if (!file) {
        cout << "Unable to open file" << endl;

        main();
    }
float S1dist = 0; float S2dist = 0; float S3dist = 0; float S4dist =0; float S1S2 = 0; float S1S3 = 0; float S1S4 =0; float S2S3 = 0; float S2S4 = 0; float S3S4 = 0;
    string line;
    while (getline(file, line)) {
       std::stringstream ss(line);
        float target; float value;
        int columnCount = 0;
        float S1, S2, S3, S4;

        while (ss >> value) {

            columnCount++;
            if (columnCount == Target){
                target = value;} else
            if (columnCount == source1){
                S1 = value;
            } else
            if (columnCount == source2){
                S2 = value;
            } else
            if (columnCount == source3){
                S3 = value;
            } else
            if (columnCount == source4){
                S4 = value;
            }
        }

        S1dist = S1dist + (target-S1)*(target-S1);
        S2dist = S2dist + (target-S2)*(target-S2);
        S3dist = S3dist + (target-S3)*(target-S3);
        S4dist = S4dist + (target-S4)*(target-S4);
        S1S2 = S1S2 + (S1-S2)*(S1-S2);
        S1S3 = S1S3 + (S1-S3)*(S1-S3);
        S1S4 = S1S4 + (S1-S4)*(S1-S4);
        S2S3 = S2S3 + (S2-S3)*(S2-S3);
        S2S4 = S2S4 + (S2-S4)*(S2-S4);
        S3S4 = S3S4 + (S3-S4)*(S3-S4);
    }
    cout << "\n S1dist = " << S1dist;
    cout << "\n S2dist = " << S2dist;
    cout << "\n S3dist = " << S3dist;
    cout << "\n S4dist = " << S4dist;

    cout << "\n VahaduoCoords: ";
    cout << "\n Source1," << 0 << "," << S1S2 << "," << S1S3 << "," << S1S4;
    cout << "\n Source2," << S1S2 << ","<< 0 << ","<< S2S3 << "," << S2S4;
    cout << "\n Source3," << S1S3 << "," << S2S3 << "," << 0 << "," << S3S4;
    cout << "\n Source4," << S1S4 << "," << S2S4 << "," << S3S4 << "," << 0;
    cout << "\n Target," << S1dist << "," << S2dist << "," << S3dist << "," << S4dist;
main();
}
void admix3(){
    string File;
    int Target, source1, source2, source3;
cout << "Enter File Name: ";
cin >> File;
cout << "\n Enter Population to be modeled (integer, column number) : ";
cin >> Target;
cout << "\n Enter Source 1 (integer, column number) : ";
cin >> source1;
cout << "\n Enter Source 2 (integer, column number) : ";
cin >> source2;
cout << "\n Enter Source 3 (integer, column number) : ";
cin >> source3;

    ifstream file(File.c_str());
    if (!file) {
        cout << "Unable to open file" << endl;

        main();
    }
float S1dist = 0; float S2dist = 0; float S3dist = 0; float S1S2 = 0; float S1S3 = 0; float S2S3 = 0;
    string line;
    while (getline(file, line)) {
       std::stringstream ss(line);
        float target; float value;
        int columnCount = 0;
        float S1, S2, S3;

        while (ss >> value) {

            columnCount++;
            if (columnCount == Target){
                target = value;} else
            if (columnCount == source1){
                S1 = value;
            } else
            if (columnCount == source2){
                S2 = value;
            } else
            if (columnCount == source3){
                S3 = value;
            }
        }

        S1dist = S1dist + (target-S1)*(target-S1);
        S2dist = S2dist + (target-S2)*(target-S2);
        S3dist = S3dist + (target-S3)*(target-S3);
        S1S2 = S1S2 + (S1-S2)*(S1-S2);
        S1S3 = S1S3 + (S1-S3)*(S1-S3);
        S2S3 = S2S3 + (S2-S3)*(S2-S3);
    }
    cout << " \nS1dist = " << S1dist;
    cout << " \nS2dist = " << S2dist;
    cout << "\n S3dist = " << S3dist;
    cout << "\n S1S2 = " << S1S2;
    cout << " \nS1S3 = " << S1S3;
    cout << " \nS2S3 = " << S2S3;
    cout << "\n VahaduoCoords: ";
    cout << "\n Source1," << 0 << "," << S1S2 << "," << S1S3 ;
    cout << "\n Source2," << S1S2 << ","<< 0 << ","<< S2S3;
    cout << "\n Source3," << S1S3 << "," << S2S3 << "," << 0;
    cout << "\n Target," << S1dist << "," << S2dist << "," << S3dist;
main();
}
