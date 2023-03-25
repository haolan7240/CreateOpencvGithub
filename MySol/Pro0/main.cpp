#define CVPLOT_HEADER_ONLY
#include <CvPlot/cvplot.h>
#include <opencv2/opencv.hpp>
using namespace cv;
int main()
{
	/*
	auto axes =
		CvPlot::plot(std::vector<double> {
		3, 3, 4, 6, 4, 3	}, "-o");
	cv::Mat mat = axes.render(800, 400);
	cv::imshow("mywindow", mat);
	*/

	/*
	auto axes =
		CvPlot::plot(std::vector<double>{
		0, 3, 8, 10, 11, 11, 9, 10, 8, 11, 10,
			10, 9, 7, 10, 11, 10, 8, 8, 7, 5});
	CvPlot::show("mywindow", axes);
	*/

	/*
	CvPlot::showPlot(std::vector<double>{
		0, 3, 8, 10, 11, 9, 10, 8, 11, 10,
			10, 9, 7, 10, 11, 10, 8, 8, 7, 5});
	*/

	/*
	std::vector<double> x(20 * 1000), y1(x.size()), y2(x.size()), y3(x.size());
	for (size_t i = 0; i < x.size(); i++) {
		x[i] = i * CV_2PI / x.size();
		y1[i] = std::sin(x[i]);
		y2[i] = y1[i] * std::sin(x[i] * 50);
		y3[i] = y2[i] * std::sin(x[i] * 500);
	}
	auto axes = CvPlot::makePlotAxes();
	axes.create<CvPlot::Series>(x, y3, "-g");
	axes.create<CvPlot::Series>(x, y2, "-b");
	axes.create<CvPlot::Series>(x, y1, "-r");
	CvPlot::show("mywindow", axes);
	*/

	/*
	auto mat = cv::imread("C:/Users/Hao_Lan/Desktop/Picture/person/James3.png");
	
	auto axes = CvPlot::plotImage(mat);
	
	CvPlot::showImage(mat);
	*/
	/*
	cv::Mat1b image(40, 120, 255);
	cv::putText(image, "CvPlot", { 5,40 }, cv::FONT_HERSHEY_TRIPLEX, 1, cv::Scalar::all(150), 5, cv::LINE_AA);
	
	std::vector<std::vector<cv::Point>> contours;
	cv::findContours(image == 150, contours, cv::RETR_LIST, cv::CHAIN_APPROX_TC89_L1);
	auto axes = CvPlot::plotImage(image);
	axes.enableHorizontalGrid();
	axes.enableVerticalGrid();
	
	for (auto contour : contours)
	{
		contour.push_back(contour.front());
		axes.create<CvPlot::Series>(contour, "o-k");
	}
	CvPlot::show("contours", axes);
	*/

	//µ½Custom Drawables
	
	cv::waitKey();
	return 0;
}