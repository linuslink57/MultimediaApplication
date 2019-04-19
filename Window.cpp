#include "Window.h"

using namespace std;
using namespace cv;

Window:Window() {
	namedWindow(windowName, WINDOW_AUTOSIZE);

}

   Window:~Window() {
	   destroyWindow(windowName);
}

void Window::Show(Mat matname){
	imshow(windowName, matname);

}

void Window::createTeackBar(String trackBarName, int initialValue, int maxValue) {
	int tb = createTrackbar(trackBarName, windowName, &initialValue, maxValue, 0, 0);
}

void Window::resizeCallback(void initialValue, void* userdata) {
	getResized(srcimg, initialValue);
}

void Window::lightenCallback(void initialValue, void* userdata) {
	getLightened(srcimg, initialValue);
}
void Window::resizeCallback(void initialValue, void* userdata) {
	getDarkened(srcimg, initialValue);
}