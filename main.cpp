#include <iostream>
#include<fstream>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/opencv.hpp>
//#include<opencv2/imgproc.hpp>
//#include<opencv2/imgproc/imgproc.hpp>


int main() {

    /*
    cv::Mat image;
    image = cv::imread("../ubuntu.png", -1);

    if (image.data == nullptr)
    {
        std::cerr << "" << std::endl;
        return 0;
    }
    cv::namedWindow("image", cv::WINDOW_AUTOSIZE);
    imshow("image", image);
    cv::waitKey(0);
    std::cout<< "image.rows: " << image.rows << std::endl;
    std::cout << "" << image.cols << std::endl;
    std::cout << "" << image.dims << std::endl;
    std::cout << "" << image.channels() << std::endl;
    std::cout << "" << image.type() << std::endl;
    std::cout << "" << image.depth() << std::endl;
    std::cout << "" << image.elemSize() << std::endl;
    std::cout << "" << image.elemSize1() << std::endl;

    cv::Mat gray_image;
    cv::cvtColor(image, gray_image, cv::COLOR_BGR2GRAY);
    imshow("gray_image", gray_image);
    cv::waitKey(0);

    std::cout << "gray-image.rows: " << gray_image.rows << std::endl;
    std::cout << "gray-image.cols" << gray_image.cols << std::endl;
    std::cout << "gray-image.dims" << gray_image.dims << std::endl;
    std::cout << "gray-image.channels()" << gray_image.channels() << std::endl;
    std::cout << "gray-image.type()" << gray_image.type() << std::endl;
    std::cout << "gray-image.depth()" << gray_image.depth() << std::endl;
    std::cout << "gray-image.elemSize()" << gray_image.elemSize() << std::endl;
    std::cout << "gray-image.elemSize1()" << gray_image.elemSize1() << std::endl;

    // Create a single channel image
    cv::Mat image_gray(9, 9, CV_8UC1, cv::Scalar(99));
    for (int i = 0; i < image_gray.rows; i++)
    {
        uchar* data = image_gray.ptr<uchar>(i);
        for(int j = 0; j < image_gray.cols * image_gray.channels(); j++)
        {
            std::cout << float(data[j]) << " ";
        }
        std::cout << std::endl;
    }

    std::cout<< "height:" << image_gray.rows << std::endl;
    std::cout << "wi" << gray_image.cols << std::endl;
    std::cout << "gray-image.dims" << gray_image.dims << std::endl;
    std::cout << "gray-image.channels()" << gray_image.channels() << std::endl;
    std::cout << "gray-image.type()" << gray_image.type() << std::endl;
    std::cout << "gray-image.depth()" << gray_image.depth() << std::endl;
    std::cout << "" << image_gray.elemSize() << std::endl;
    std::cout << "" << image_gray.elemSize1() << std::endl;
    std::cout<< "" << image_gray.step << std::endl;

    cv::namedWindow("image_gray", cv::WINDOW_NORMAL);
    imshow("image_gray", image_gray);
    cv::waitKey(0);

    cv::Mat image_randu_gray = cv::Mat(9, 9, CV_8UC1);
    randu(image_randu_gray, cv::Scalar::all(0), cv::Scalar::all(255));
    std::cout<< "Change all pixels By randu in the matrics" << image_randu_gray << std::endl << std::endl;
    cv::namedWindow("image_randu_gray", cv::WINDOW_NORMAL);
    imshow("image_randu_gray", image_randu_gray);
    cv::waitKey(0);
     */

    /*
    // Create a colorful image
    cv::Mat q_image(674, 1200, CV_8UC3, cv::Scalar(0, 88, 0));
    cv::namedWindow("q_image", cv::WINDOW_AUTOSIZE);
    //imshow("q_image", q_image);
    cv::waitKey(0);

    std::cout<< " the number of bits " << q_image.depth() << std::endl;
    std::cout<< " height " << q_image.rows << std::endl;
    std::cout<< " width " << q_image.cols << std::endl;
    std::cout<< " dimension " << q_image.dims << std::endl;
    std::cout<< " channels " << q_image.channels() << std::endl;
    std::cout<< " type " << q_image.type() << std::endl;
    std::cout<< " depth " << q_image.depth() << std::endl;
    std::cout<< " elemSize() " << q_image.elemSize() << std::endl;
    std::cout<< " elemSize1() " << q_image.elemSize1() << std::endl;
    std::cout<< " step " << q_image.step << std::endl;
    */

    /*************************************************************
     * create a Mat image with alpha channel
     *************************************************************/
     /*
    cv::Mat mat(480, 640, CV_8UC4);
     for (int i = 0; i < mat.rows; ++i)
     {
         for (int j = 0; j < mat.cols; ++j)
         {
             auto &rgba = mat.at<cv::Vec4b>(i, j);
             rgba[0] = UCHAR_MAX;
             rgba[1] = cv::saturate_cast<uchar>((float (mat.cols - j)) / ((float)mat.cols) *UCHAR_MAX);
             rgba[2] = cv::saturate_cast<uchar>((float (mat.rows - j)) / ((float)mat.rows) *UCHAR_MAX);
             rgba[3] = cv::saturate_cast<uchar>(0.5 * (rgba[1] + rgba[2]));
         }
     }
     cv::namedWindow("Alpha image", cv::WINDOW_AUTOSIZE);
     imshow("alpha image", mat);
     cv::waitKey(0);
      */

    // read the elements in a single channel Mat matrix by the means of " at"
    std::cout<< "Read the elements in a single channel Mat matrix by the means of \" at\" :" << std::endl;
     cv::Mat M4 = (cv::Mat_<double>(3, 3) << 0, -1, 0, -1, 0, 0, 0, 0, 1);
     std::cout << "M4 = " << std::endl << M4 << std::endl;
     double value = M4.at<double>(0, 1);
     std::cout << "value = " << value << std::endl;
    std::cout << "********************************************************************" << std::endl;


    //Create a image matrix, with the following parameters: 3rows, 4cols, 0 depth(8U), 3 channels and the value of every channel is (0, 0, 255)
    std::cout << "Create a image matrix, with the following parameters: 3rows, 4cols, 0 depth(8U), 3 channels and the value of every channel is (0, 0, 255)" << std::endl;
    cv::Mat M5(3, 4, CV_8UC3, cv::Scalar(0,0,255));
     for (int i = 0; i < M5.rows; ++i)
     {
         for (int j = 0; j < M5.cols; ++j)
         {
             std::cout << "M5.at<cv::Vec3b>(" << i << "," << j << ")[0]" << int(M5.at<cv::Vec3b>(i, j)[0]) << std::endl;
             std::cout << "M5.at<cv::Vec3b>(" << i << "," << j << ")[1]" << int(M5.at<cv::Vec3b>(i, j)[1]) << std::endl;
             std::cout << "M5.at<cv::Vec3b>(" << i << "," << j << ")[2]" << int(M5.at<cv::Vec3b>(i, j)[2]) << std::endl;
         }
     }
    std::cout << "********************************************************************" << std::endl;


     //Read the elements in a single channel Mat matrix by the means of pointer "ptr" :
    std::cout << "Read the elements in a single channel Mat matrix by the means of pointer \"ptr\" :" << std::endl;
     cv::Mat M6(3, 4, CV_8UC3, cv::Scalar(0, 0, 1));
     for (int i = 0; i < M6.rows; ++i)
     {
         uchar* row_ptr = M6.ptr(i);
         for (int j = 0; j < M6.cols* M6.channels(); ++j)
         {
             std::cout << "row_ptr[" << j << "]: " << (int)row_ptr[j] << std::endl;

         }
     }
    std::cout << "********************************************************************" << std::endl;


    // Read the elements in a single channel Mat matrix by the means of iterator :
    std::cout << "Read the elements in a single channel Mat matrix by the means of iterator :" << std::endl;
     cv::Mat M7(3, 4, CV_8UC3, cv::Scalar(0, 1, 2));
     cv::MatIterator_<uchar> it = M7.begin<uchar>();
     cv::MatIterator_<uchar> it_end = M7.end<uchar>();

     for (int i = 0; it != it_end; it ++)
     {
         std::cout<< (int)(*it) << " ";
         if ((++i% M7.cols) ==0)
         {
             std::cout << std::endl;
         }
     }
    std::cout << "********************************************************************" << std::endl;

     cv::destroyAllWindows();

    return 0;
}
