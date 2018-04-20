#include <opencv2\opencv.hpp>
#include <math.h>
#include <cstdlib>
#include <time.h>
using namespace std;
using namespace cv;

int main() {
	Mat mat(1000, 1000, CV_8UC3, Scalar(255, 255, 255));
	int i,j;
	
	srand((unsigned int)time(NULL));
	namedWindow("rand", WINDOW_AUTOSIZE);
	
	
	for(i=0;i<1000;i+=100){
		Range r1(i, i + 100);
		for (j = 0; j < 1000; j += 100) {
			Range r2(j, j + 100);
			Mat mat2 = mat(r1, r2);
			mat2 = Scalar(rand() % 255, rand() % 255, rand() % 255);
		}

	}



	
	imshow("±×¸²",mat);
	waitKey(0);
	return 0;
}