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
	cout << name<<" = " <<m<< endl << endl;

}
int main() {
	Mat m1(2, 6, CV_8UC1, Scalar(100));
	Mat m2(3, 3, CV_32S);
	Range r1(0, 2);
	Mat m3 = m1(r1, r1);
	print_matInfo("m1", m1);
	print_matInfo("m3", m3);

	m2.release();
	m3.release();
	print_matInfo("m1", m1);
	print_matInfo("m2", m2);
	print_matInfo("m3", m3);
	m1.release();
	print_matInfo("m1", m1);
	waitKey(0);
	return 0;
}