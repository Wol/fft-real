SHELL := /bin/bash

default:
	g++ -o fft_benchmark -I./ fft_benchmark.cpp; time ./fft_benchmark
