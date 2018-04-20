#include <opencv2\opencv.hpp>
#include <math.h>
#include <cstdlib>
#include <time.h>
using namespace std;
using namespace cv;
void print_matinfo(string name, Mat m) {
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
	cout << "m = " << endl << endl;

}
int main() {
	/*Mat m1, m2, m3, m4(2, 6, CV_8UC1);
	Mat add1(2, 3, CV_8UC1, Scalar(100));
	Mat add2 = (Mat)Mat::eye(4, 3, CV_8UC1);

	m1.push_back(100), m1.push_back(200);
	m2.push_back(100.5), m2.push_back(200.6);

	m3.push_back(add1);	//3열 행렬이 만들어짐
	cout << "m3 = " << m3 << endl;
	m3.push_back(add2);
	cout << "m3 = " << m3 << endl;

	//m4.push_back(add1);	//열의 개수 불일치 오류
	m4.push_back(add1.reshape(1, 1));
	cout << "m4 = " << m4 << endl;
	m4.push_back(add2.reshape(1, 2));
	cout << "m4 = " << m4 << endl;

	m1.pop_back(1);
	m2.pop_back(2);
	m3.pop_back(3);

	cout << "m1 = " << m1 << endl;
	cout << "m2 = " << m2 << endl;
	cout << "m3 = " << m3 << endl;*/
	Mat mat(2, 3, CV_8UC1, Scalar(20));
	unsigned char data[] = { 1,2,3,4,5,6 };
	Mat add(1, 6, CV_8UC1, data);
	mat=mat.reshape(1, 1);
	mat.push_back(add);
	mat = mat.reshape(2, 3);
	cout << "mat = " << mat << endl;
	waitKey(0);
	return 0;
}