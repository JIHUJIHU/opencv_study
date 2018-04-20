/*#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(int, char**)
{
	Mat m1(4, 3, CV_32FC3, Scalar(1, 2, 3));

	cout << "m1= " << m1 << endl;
	cout << "������= " << m1.dims << endl;
	cout << "���� ����= " << m1.rows << endl;
	cout << "���� ����= " << m1.cols << endl;
	cout << "����� �� ���� �����ϴ� ����Ʈ ��= " << m1.step << endl;
	cout << "����� ä�μ�= " << m1.channels() << endl;
	cout << "����� ����= " << m1.depth() << endl;
	cout << "����� �� ������ ����Ʈ ũ��= " << m1.elemSize() << endl;
	cout << "����� �� ������ �� ä���� ����Ʈ ũ��= " << m1.elemSize1() << endl;
	cout << "����� ũ��(size)= " << m1.size() << endl;
	cout << "����� ���� ����= " << m1.total() << endl;

	//getchar();
	return 0;
}*/
/*#include <opencv2\opencv.hpp>

using namespace cv;
using namespace std;

int main() {
	Mat m1(2, 3, CV_8U, 2);
	Mat m2(2, 3, CV_8U, Scalar(10));
	Mat m3 = m1 + m2;
	Mat m4 = m2 - 6;
	Mat m5 = m1;
	cout << "m1" << m1 << endl;
	cout << "m2" << m2 << endl;
	cout << "m3" << m3 << endl;
	cout << "m4" << m4 << endl;
	cout << "m5" << m5 << endl;


	m5 = 100;
	cout << "m1" << m1 << endl;
	cout << "m5" << m5 << endl;
	return 0;
}*/
/*#include <opencv2\opencv.hpp>

using namespace cv;
using namespace std;

int main() {
	Mat m =  (Mat_<uchar>(2,4) << 1,2,3,4,5,6,7,8); 
	cout << "m=" << m << endl;
	m.resize(1);
	cout << "m.resize(1) = " << m << endl;
	m.resize(3);
	cout << "m.resize(3) = " << m << endl;
	
	return 0;
}*/
//reshape ����
/*#include <opencv2\opencv.hpp>

using namespace cv;
using namespace std;
int main() {
	Mat m1(2, 6, CV_8U, Scalar(3));
	Mat m2 = m1.reshape(2);

	Mat m3 = m1.reshape(3, 4);
	
}*/

/*#include <opencv2\opencv.hpp>
#include <iostream>
#include <stdio.h>
using namespace cv;
using namespace std;

int main() {
	Mat image1(300, 400, CV_8UC3, Scalar(255,255,0));
	Mat image2(300, 400, CV_8UC3, Scalar(255,255,255));
	Mat image3(300, 400, CV_8UC3, Scalar(100,166,163));
	Mat image4(300, 400, CV_8UC3, Scalar(133,39,122));

	string title1 = "1 â";
	string title2 = "2 â";
	string title3 = "3 â";
	string title4 = "4 â";
	
	namedWindow(title1, WINDOW_NORMAL);
	namedWindow(title2, WINDOW_NORMAL);
	namedWindow(title3, WINDOW_AUTOSIZE);
	namedWindow(title4, WINDOW_AUTOSIZE);

	moveWindow(title1, 0, 0);
	moveWindow(title2, 400, 0);
	moveWindow(title3, 0, 300);
	moveWindow(title4, 400, 300);

	resizeWindow(title1, 50, 50);
	resizeWindow(title2, 1000, 1000);

	imshow(title1, image1);
	imshow(title2, image2);
	imshow(title3, image3);
	imshow(title4, image4);

	waitKey();
	destroyAllWindows();


	return 0;
}*/

/*#include <opencv2\opencv.hpp>
#include <iostream>
#include <stdio.h>
using namespace cv;
using namespace std;

int main() {
	Mat image1(300, 400, CV_8UC3, Scalar(255, 0, 0));
	string title1 = "white â";
	namedWindow(title1, WINDOW_AUTOSIZE);
	imshow(title1, image1);
	
	while (1) {
		int key = waitKey(100);
		if (key == 27)break;
		switch (key) {
		case 'b': cout << "bŰ �Է�" << endl; image1 = Scalar(255, 0, 0); imshow(title1, image1); break;
		case 'g': cout << "gŰ �Է�" << endl; image1 = Scalar(0, 255, 0); imshow(title1, image1); break;
		case 'r': cout << "rŰ �Է�" << endl; image1 = Scalar(0, 0, 255); imshow(title1, image1); break;
		
		}
	}

}*/

/*#include <opencv2\opencv.hpp>
#include <iostream>
#include <stdio.h>
using namespace cv;
using namespace std;
void onMouse(int event, int x, int y, int flag, void* param);
int main() {
	Mat image(200, 300, CV_8U);
	image.setTo(255);
	string title = "���콺 �̺�Ʈ 1";
	string title1 = "���콺 �̺�Ʈ 2";
	imshow(title, image);
	imshow(title1, image);
	setMouseCallback(title, onMouse, 0);
	waitKey(0);
	return 0;

}
void onMouse(int event, int x, int y, int flag, void* param) {

	switch (event) {
	case EVENT_LBUTTONDOWN : 
		cout << "���콺 ���� ������" << endl;
		cout << (x, y) << endl;
		break;
	case EVENT_RBUTTONDOWN :
		cout << "���콺 ������" << endl;
		cout << (x, y) << endl;
		break;
	case EVENT_MOUSEWHEEL:
		cout << "���콺 ��" << endl;
		cout << (x, y) << endl;
		break;
	case EVENT_LBUTTONUP:
		cout << "���콺 ���� ��" << endl;
		cout << (x, y) << endl;
		break;

	}
	cout << (x, y) << endl;
}*/


/*#include <opencv2\opencv.hpp>
#include <iostream>
#include <stdio.h>
using namespace cv;
using namespace std;

string title = "Ʈ���� �̺�Ʈ";
Mat image;

void onChange(int value, void* userdata) {
	int add_value = value - 130;
	cout << "�߰� ȭ�Ұ�" << add_value << endl;
	Mat tmp = image + add_value;
	imshow(title, tmp);
}
int main() {
	int value = 138;
	image = Mat(300, 400, CV_8UC1, Scalar(120));
	namedWindow(title, WINDOW_AUTOSIZE);
	createTrackbar("my track bar", title, &value, 255, onChange);
	imshow(title, image);

	waitKey();

}*/
#include <opencv2\opencv.hpp>
#include <math.h>
using namespace std;
using namespace cv;

int main() {
	Scalar blue(255, 0, 0), red(0, 0, 255), green(0, 255, 0);
	Scalar white = Scalar(255, 255, 255);
	Scalar yellow(0, 255, 255);

	Mat image(400, 600, CV_8UC3, white);
	Point pt1(50, 130), pt2(200, 300), pt3(300, 150), pt4(400, 50);

	line(image, pt1, pt2, red);
	line(image, pt3, pt4, green, 2, LINE_8);
	line(image, pt3, pt4, green, 3, LINE_8,1);

	imshow("paint", image);
	waitKey();

}





















