#include <opencv2\opencv.hpp>
#include <math.h>
#include <cstdlib>
#include <time.h>
using namespace std;
using namespace cv;
void print_matInfo(string name, Mat m) {
	string mat_type;
	if (m.depth() == CV_8U)mat_type = "CV_8U";
	else if (m.depth() == CV_8S)mat_type = "CV_8S";
	else if (m.depth() == CV_16U)mat_type = "CV_16U";
	else if (m.depth() == CV_16S)mat_type = "CV_16S";
	else if (m.depth() == CV_32S)mat_type = "CV_32S";
	else if (m.depth() == CV_32F)mat_type = "CV_32F";
	else if (m.depth() == CV_64F)mat_type = "CV_64F";

	cout << name << "크기 " << m.size() << endl;
	cout << "자료형 = " << mat_type << "C" << m.channels() << endl;

}
int main() {
	/*float data[] = {
		1,4,7,
		2,5,8,
		3,6,9

	};
	Mat m1(3, 3, CV_32F, data);
	//연립방정식의 계수의 집합
	Mat m2(Matx13f(97, 119, 141));
	Mat m2_t = m2.t();
	Mat m1_inv = m1.inv(DECOMP_LU);
	Mat x = m1_inv * m2_t;
	cout << "해 x1,x2,x3=" << x.t() << endl;*/
	/*Matx<uchar, 2, 2> m1;
	Matx<uchar, 2, 2> m2;
	Mat m1(2, 2, CV_8U, Scalar(255));
	cout << "m1 = " << m1 << endl;

	m1(0, 0) = -50;	//오류발생위험
	m1(0, 1) = 300;
	m1(1, 0) = saturate_cast<uchar>(-50);
	m1(1, 1) = saturate_cast<uchar>(300);
	cout << "m1 = " << m1 << endl << endl;*/
	/*string msg1 = "a is one";
	string msg2 = "a is two";
	string msg3 = "a is three";
	int a;
	while (1) {
		cout << "input a :";
		cin >> a;
		try {
			if (a == 0)
				CV_Error(Error::StsDivByZero, "a is zero");
			if (a == 1)
				CV_Error(Error::StsBadSize, msg1);
			if (a == 2)
				CV_Error_(Error::StsOutOfRange, ("%s : %d"), msg2.c_str(),a);
			if (a == 3)
				CV_Error(Error::StsBadArg,("%s : %d"), msg3.c_str(),a);
			CV_Assert(a != 4);
		}
		catch (cv::Exception &e) {
			cout << "Exception code = " << e.code << e.what();
			cout << endl;
			if (e.code == Error::StsAssert)break;
		}
	}*/
	/*string filename = "./image/IMG_0606.jpg";
	Mat gray2gray = imread(filename, IMREAD_GRAYSCALE);

	Mat gray2color = imread(filename, IMREAD_COLOR);
	CV_Assert(gray2gray.data&&gray2color.data);
	Rect roi(100, 100, 1, 1);
	cout << "행렬좌표(100,100)의 화소값" << endl;
	cout << "gray2gray" << gray2gray(roi) << endl;
	cout << "gray2color" << gray2color(roi) << endl;
	print_matInfo("gray2gray", gray2gray);
	print_matInfo("gray2color", gray2color);

	imshow("gray2gray", gray2gray);
	imshow("gray2color", gray2color);*/
	string filename = "./image/IMG_0606.jpg";
	
	Mat img8 = imread(filename, IMREAD_COLOR);
	CV_Assert(img8.data);
	vector<int> params_jpg, params_png;
	params_jpg.push_back(IMWRITE_JPEG_QUALITY);
	params_jpg.push_back(50);
	params_png.push_back(IMWRITE_PNG_COMPRESSION);
	params_png.push_back(9);
	int rows = img8.rows;
	int cols = img8.cols;
	Rect roi(0, 0, rows / 2, cols / 2);

	imwrite("./save_image/IMG_0606.jpg", img8);
	imwrite("./save_image/IMG_0606.jpg", img8,params_jpg);
	imwrite("./save_image/IMG_0606.png", img8, params_png);
	imwrite("./save_image/IMG_0606.bmp", img8);
	waitKey(0);
	return 0;
}