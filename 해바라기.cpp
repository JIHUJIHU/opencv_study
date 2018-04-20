#include <opencv2\opencv.hpp>
#include <math.h>
using namespace std;
using namespace cv;
int main() {
	int yrr[] = { 290,308,350,392,410,392,350,308 };
	int ct = 0;
	//int angle[] = { 0,45,90,135,180,225,270,315 };
	int x, y,a,b;
	Mat image(700, 700, CV_8UC3, Scalar(255, 255, 255));
	Scalar orange(0, 165, 255);
	Scalar yellow(0, 255, 255);
	Point center(350, 350);// , pt(350, 350);
	circle(image, center, 60, yellow, -1);
	for (int i = 0; i <=315; i+=45) {
		if (i <= 180) {
			Point pt(yrr[ct], x = -sqrt(pow(60, 2) - pow(yrr[ct] - 350, 2)) + 350);
			ellipse(image, pt, Size(30, 15), i, 0, 360, orange, -1);
		}
		else {
			Point pt(yrr[ct], x = sqrt(pow(60, 2) - pow(yrr[ct] - 350, 2)) + 350);
			ellipse(image, pt, Size(30, 15), i, 0, 360, orange, -1);
		}
		cout << "x=" << x << "y=" << yrr[ct] << endl;
		cout << endl;
		ct++;

	}
	
	imshow("Å¸¿ø ", image);
	waitKey(0);
	return 0;
}