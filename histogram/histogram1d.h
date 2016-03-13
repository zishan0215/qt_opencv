#ifndef HISTOGRAM1D_H
#define HISTOGRAM1D_H

#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include <opencv2/highgui/highgui.hpp>

class Histogram1D {
private:
    int histSize[1];    // number of bins
    float hranges[2];   // min and max pixel value
    const float *ranges[1];
    int channels[1];    // only 1 channel used here

public:
    Histogram1D();
    cv::MatND getHistogram(const cv::Mat&);
    cv::Mat makeGray(const cv::Mat&);
    cv::Mat getHistogramImage(const cv::Mat&);
};

#endif // HISTOGRAM1D_H
