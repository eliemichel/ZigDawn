#include <webgpu/webgpu.h>
#include <dawn/native/DawnNative.h>
#include <dawn/dawn_proc.h>

#include <GLFW/glfw3.h>

#include <iostream>

int main(int, char**) {
	std::cout << "ZigDawn" << std::endl;

	dawnProcSetProcs(&dawn::native::GetProcs());

	std::cout << "wgpuCreateInstance = " << wgpuCreateInstance << std::endl;

	WGPUInstanceDescriptor desc;
	WGPUInstance instance = wgpuCreateInstance(&desc);

	std::cout << "instance = " << instance << std::endl;

	return 0;
}
