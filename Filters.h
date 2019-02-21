#ifndef _filters_20140604
#define _filters_20140604

extern "C"{
	/**
	   函数调用方需要为dest分配好空间。
	*/
	bool __declspec(dllimport) InitFilter();
	void __declspec(dllimport) ReleaseFilter();
	bool __declspec(dllimport) DenoiseImage(unsigned short * source, int * dest, unsigned int width, unsigned int height, int denoise_level);
	bool __declspec(dllimport) EnhanceImage(unsigned short * source, int * dest, unsigned int width, unsigned int height, int enhance_level);
	bool __declspec(dllimport) FilterImage(unsigned short * source, unsigned short * dest, unsigned int width, unsigned int height, int denoise_level, int enhance_level);
}

#endif