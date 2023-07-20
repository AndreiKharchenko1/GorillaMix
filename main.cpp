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
void makesim();
 int main(){
     int admixSelect;
     cout << "\n Enter 1 to make Ghosts with Eurogenes K36, Enter 3 For 3 way admixture, Enter 4 for 4 way admixture, Enter 5 for 5 way admixture: ";
     cin >> admixSelect;
     switch(admixSelect){
         case 1: makesim(); break;
      case 3: admix3(); break;
      case 4: admix4(); break;
      case 5: admix5(); break;
      default: cout << "Invalid. ";
     }

 }
 void makesim(){
     string File; string OutputFile;
     cout << "Enter Source File name: ";
     cin >> File;
     cout << "Enter Output File name: ";
     cin >> OutputFile;
     cin.ignore();
      double K36[36];
    std::cout << "Enter 36 comma-separated doubles with no population name for 1st population: ";
    std::string input;
    std::getline(std::cin, input);

    std::stringstream ss(input);
    std::string token;
    int index = 0;
    while (std::getline(ss, token, ',') && index < 36) {
        std::stringstream(token) >> K36[index];
        index++;
    }

    if (index != 36) {
        std::cout << "Invalid input. Expected 36 comma-separated numbers." << std::endl; main();

    }
     double K362[36];
    std::cout << "Enter 36 comma-separated doubles with no population name for 2nd population: ";
    std::string input2;
    std::getline(std::cin, input2);

    std::stringstream ss2(input2);
    std::string token2;
    int index2 = 0;
    while (std::getline(ss2, token2, ',') && index2 < 36) {
        std::stringstream(token2) >> K362[index2];
        index2++;
    }

    if (index2 != 36) {
        std::cout << "Invalid input. Expected 36 comma-separated numbers." << std::endl; main();
    }
    double K363[36];
    std::cout << "Enter 36 comma-separated doubles with no population name for 3rd population: ";
    std::string input3;
    std::getline(std::cin, input3);

    std::stringstream ss3(input3);
    std::string token3;
    int index3 = 0;
    while (std::getline(ss3, token3, ',') && index3 < 36) {
        std::stringstream(token3) >> K363[index3];
        index3++;
    }

    if (index3 != 36) {
        std::cout << "Invalid input. Expected 36 comma-separated numbers." << std::endl; main();

    }
    double K364[36];
    std::cout << "Enter 36 comma-separated doubles with no population name for 4th population: ";
    std::string input4;
    std::getline(std::cin, input4);

    std::stringstream ss4(input4);
    std::string token4;
    int index4 = 0;
    while (std::getline(ss4, token4, ',') && index4 < 36) {
        std::stringstream(token4) >> K364[index4];
        index4++;
    }

    if (index4 != 36) {
        std::cout << "Invalid input. Expected 36 comma-separated numbers." << std::endl; main();

    }
    double K365[36];
    std::cout << "Enter 36 comma-separated doubles with no population name for 5th population: ";
    std::string input5;
    std::getline(std::cin, input5);

    std::stringstream ss5(input5);
    std::string token5;
    int index5 = 0;
    while (std::getline(ss5, token5, ',') && index5 < 36) {
        std::stringstream(token5) >> K365[index5];
        index5++;
    }

    if (index5 != 36) {
        std::cout << "Invalid input. Expected 36 comma-separated numbers." << std::endl; main();

    }
     double K366[36];
    std::cout << "Enter 36 comma-separated doubles with no population name for 6th population: ";
    std::string input6;
    std::getline(std::cin, input6);

    std::stringstream ss6(input6);
    std::string token6;
    int index6 = 0;
    while (std::getline(ss6, token6, ',') && index6 < 36) {
        std::stringstream(token6) >> K366[index6];
        index6++;
    }

    if (index6 != 36) {
        std::cout << "Invalid input. Expected 36 comma-separated numbers." << std::endl;
        main();

    }
    for(int i = 0; i<36; i++){
     cout << K36[i] << " " << K362[i] << " " << K363[i] << " " << K364[i] << " " << K365[i] << " " << K366[i] << "\n \n";
    }
     ifstream file(File.c_str());
    if (!file) {
        cout << "Unable to open file" << endl;

        main();
    }
      std::ofstream outputFile(OutputFile.c_str()); // Create a file stream for writing

    if (!outputFile) {
        std::cerr << "Error creating file." << std::endl;
        main();
    }
     string line;
    while (getline(file, line)) {
       std::stringstream ss(line); float dataArray[36]; int columnCount = 0;
       while (ss >> dataArray[columnCount] && columnCount < 36) {
            columnCount++;
        }
        outputFile << (K36[0]*dataArray[0]+K36[1]*dataArray[1]+K36[2]*dataArray[2]+K36[3]*dataArray[3]+K36[4]*dataArray[4]+K36[5]*dataArray[5]+K36[6]*dataArray[6]+K36[7]*dataArray[7]+K36[8]*dataArray[8]+K36[9]*dataArray[9]+
        K36[10]*dataArray[10]+K36[11]*dataArray[11]+K36[12]*dataArray[12]+K36[13]*dataArray[13]+K36[14]*dataArray[14]+K36[15]*dataArray[15]+K36[16]*dataArray[16]+K36[17]*dataArray[17]+K36[18]*dataArray[18]+K36[19]*dataArray[19]+K36[20]*dataArray[20]+
        K36[21]*dataArray[21]+K36[22]*dataArray[22]+K36[23]*dataArray[23]+K36[24]*dataArray[24]+K36[25]*dataArray[25]+K36[26]*dataArray[26]+K36[27]*dataArray[27]+K36[28]*dataArray[28]+K36[29]*dataArray[29]+K36[30]*dataArray[30]+K36[31]*dataArray[31]+
        K36[32]*dataArray[32]+K36[33]*dataArray[33]+K36[34]*dataArray[34]+K36[35]*dataArray[35]+K36[36]*dataArray[36])/100 << "  " <<
        (K362[0]*dataArray[0]+K362[1]*dataArray[1]+K362[2]*dataArray[2]+K362[3]*dataArray[3]+K362[4]*dataArray[4]+K362[5]*dataArray[5]+K362[6]*dataArray[6]+K362[7]*dataArray[7]+K362[8]*dataArray[8]+K362[9]*dataArray[9]+
        K362[10]*dataArray[10]+K362[11]*dataArray[11]+K362[12]*dataArray[12]+K362[13]*dataArray[13]+K362[14]*dataArray[14]+K362[15]*dataArray[15]+K362[16]*dataArray[16]+K362[17]*dataArray[17]+K362[18]*dataArray[18]+K362[19]*dataArray[19]+K362[20]*dataArray[20]+
        K362[21]*dataArray[21]+K362[22]*dataArray[22]+K362[23]*dataArray[23]+K362[24]*dataArray[24]+K362[25]*dataArray[25]+K362[26]*dataArray[26]+K362[27]*dataArray[27]+K362[28]*dataArray[28]+K362[29]*dataArray[29]+K362[30]*dataArray[30]+K362[31]*dataArray[31]+
        K362[32]*dataArray[32]+K362[33]*dataArray[33]+K362[34]*dataArray[34]+K362[35]*dataArray[35]+K362[36]*dataArray[36])/100 << "  " <<
        (K363[0]*dataArray[0]+K363[1]*dataArray[1]+K363[2]*dataArray[2]+K363[3]*dataArray[3]+K363[4]*dataArray[4]+K363[5]*dataArray[5]+K363[6]*dataArray[6]+K363[7]*dataArray[7]+K363[8]*dataArray[8]+K363[9]*dataArray[9]+
        K363[10]*dataArray[10]+K363[11]*dataArray[11]+K363[12]*dataArray[12]+K363[13]*dataArray[13]+K363[14]*dataArray[14]+K363[15]*dataArray[15]+K363[16]*dataArray[16]+K363[17]*dataArray[17]+K363[18]*dataArray[18]+K363[19]*dataArray[19]+K363[20]*dataArray[20]+
        K363[21]*dataArray[21]+K363[22]*dataArray[22]+K363[23]*dataArray[23]+K363[24]*dataArray[24]+K363[25]*dataArray[25]+K363[26]*dataArray[26]+K363[27]*dataArray[27]+K363[28]*dataArray[28]+K363[29]*dataArray[29]+K363[30]*dataArray[30]+K363[31]*dataArray[31]+
        K363[32]*dataArray[32]+K363[33]*dataArray[33]+K363[34]*dataArray[34]+K363[35]*dataArray[35]+K363[36]*dataArray[36])/100 << "  " <<
        (K364[0]*dataArray[0]+K364[1]*dataArray[1]+K364[2]*dataArray[2]+K364[3]*dataArray[3]+K364[4]*dataArray[4]+K364[5]*dataArray[5]+K364[6]*dataArray[6]+K364[7]*dataArray[7]+K364[8]*dataArray[8]+K364[9]*dataArray[9]+
        K364[10]*dataArray[10]+K364[11]*dataArray[11]+K364[12]*dataArray[12]+K364[13]*dataArray[13]+K364[14]*dataArray[14]+K364[15]*dataArray[15]+K364[16]*dataArray[16]+K364[17]*dataArray[17]+K364[18]*dataArray[18]+K364[19]*dataArray[19]+K364[20]*dataArray[20]+
        K364[21]*dataArray[21]+K364[22]*dataArray[22]+K364[23]*dataArray[23]+K364[24]*dataArray[24]+K364[25]*dataArray[25]+K364[26]*dataArray[26]+K364[27]*dataArray[27]+K364[28]*dataArray[28]+K364[29]*dataArray[29]+K364[30]*dataArray[30]+K364[31]*dataArray[31]+
        K364[32]*dataArray[32]+K364[33]*dataArray[33]+K364[34]*dataArray[34]+K364[35]*dataArray[35]+K364[36]*dataArray[36])/100 << "  " <<
        (K365[0]*dataArray[0]+K365[1]*dataArray[1]+K365[2]*dataArray[2]+K365[3]*dataArray[3]+K365[4]*dataArray[4]+K365[5]*dataArray[5]+K365[6]*dataArray[6]+K365[7]*dataArray[7]+K365[8]*dataArray[8]+K365[9]*dataArray[9]+
        K365[10]*dataArray[10]+K365[11]*dataArray[11]+K365[12]*dataArray[12]+K365[13]*dataArray[13]+K365[14]*dataArray[14]+K365[15]*dataArray[15]+K365[16]*dataArray[16]+K365[17]*dataArray[17]+K365[18]*dataArray[18]+K365[19]*dataArray[19]+K365[20]*dataArray[20]+
        K365[21]*dataArray[21]+K365[22]*dataArray[22]+K365[23]*dataArray[23]+K365[24]*dataArray[24]+K365[25]*dataArray[25]+K365[26]*dataArray[26]+K365[27]*dataArray[27]+K365[28]*dataArray[28]+K365[29]*dataArray[29]+K365[30]*dataArray[30]+K365[31]*dataArray[31]+
        K365[32]*dataArray[32]+K365[33]*dataArray[33]+K365[34]*dataArray[34]+K365[35]*dataArray[35]+K365[36]*dataArray[36])/100 << "  " <<
        (K366[0]*dataArray[0]+K366[1]*dataArray[1]+K366[2]*dataArray[2]+K366[3]*dataArray[3]+K366[4]*dataArray[4]+K366[5]*dataArray[5]+K366[6]*dataArray[6]+K366[7]*dataArray[7]+K366[8]*dataArray[8]+K366[9]*dataArray[9]+
        K366[10]*dataArray[10]+K366[11]*dataArray[11]+K366[12]*dataArray[12]+K366[13]*dataArray[13]+K366[14]*dataArray[14]+K366[15]*dataArray[15]+K366[16]*dataArray[16]+K366[17]*dataArray[17]+K366[18]*dataArray[18]+K366[19]*dataArray[19]+K366[20]*dataArray[20]+
        K366[21]*dataArray[21]+K366[22]*dataArray[22]+K366[23]*dataArray[23]+K366[24]*dataArray[24]+K366[25]*dataArray[25]+K366[26]*dataArray[26]+K366[27]*dataArray[27]+K366[28]*dataArray[28]+K366[29]*dataArray[29]+K366[30]*dataArray[30]+K366[31]*dataArray[31]+
        K366[32]*dataArray[32]+K366[33]*dataArray[33]+K366[34]*dataArray[34]+K366[35]*dataArray[35]+K366[36]*dataArray[36])/100 << std::endl;
    }

 main();
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
