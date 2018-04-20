#include <opencv2\opencv.hpp>
#include <math.h>
using namespace std;
using namespace cv;
string title = "이벤트 그리기";
Mat image;
Scalar red(0, 0, 255);
void onMouse(int event, int x, int y, int flag, void* param) {
	Point pt(x, y);
	if (event == EVENT_MOUSEMOVE) {
		if (flag &EVENT_FLAG_CTRLKEY) {
			//if (pt.x < 0)pt = Point(x, y);
			line(image, pt, Point(x, y), red,2);
			//circle(image, Point(x, y), 10, red, -1);
			
			//pt = Point(-1, -1);
		}
	}
	imshow(title, image);
}
int main() {
	image = Mat(300, 500, CV_8UC1, Scalar(255));
	rectangle(image, Point(50,50), Point(430,230), Scalar(0, 0, 0), 2);
	imshow(title, image);
	setMouseCallback(title, onMouse, 0);
	waitKey();

}