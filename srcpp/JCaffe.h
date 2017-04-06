/*
 * Caffe.h
 *
 *  Created on: Apr 6, 2017
 *      Author: harold
 */

#ifndef JCAFFE_H_
#define JCAFFE_H_

#include <jni.h>
#include <iostream>
#include <caffe/caffe.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <memory>

#include <algorithm>
#include <iosfwd>
#include <string>
#include <utility>
#include <vector>

using namespace caffe;
class JCaffe {
	//General class variable
	Blob<float>* input_layer;
	Blob<float>* output_layer;

	vector<int> in_shape;
	vector<int> out_shape;

	shared_ptr<caffe::Net<float> > net_;
	cv::Size input_geometry_;
	int num_channels_;
	cv::Mat mean_;
	std::vector<std::string> labels_;

private:
	JCaffe();
public:
	virtual ~JCaffe();

#ifdef __cplusplus
 extern "C" {
#endif
JNIEXPORT void JNICALL Java_edu_fiu_cate_jcaffe_JCaffe_setMode(JNIEnv * env, jobject object, jint mode);

#ifdef __cplusplus
}
#endif

};

#endif /* JCAFFE_H_ */
