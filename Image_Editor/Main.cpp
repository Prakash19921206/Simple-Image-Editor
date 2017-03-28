#include<iostream>
#include "opencv2/opencv.hpp"
#include<conio.h>

using namespace std;
using namespace cv;

void process_pic(Mat &img);

int main()
{
	cout << "Hello World at GitHub" << endl;
	Mat img = imread("pic/location/here.jpg);
	process_pic(img);
	_getch();
}

void process_pic(Mat &img)
{
	img = cvtColor(img,img,CV_BGR2GRAY);
}
