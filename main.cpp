#include <webgpu/webgpu.h>
#include <dawn/native/DawnNative.h> // for GetProcs
#include <dawn/dawn_proc.h> // for dawnProcSetProcs

#include <iostream>

int main(int, char**) {
	std::cout << "ZigDawn" << std::endl;

	dawnProcSetProcs(&dawn::native::GetProcs());

	WGPUInstanceDescriptor desc;
	WGPUInstance instance = wgpuCreateInstance(&desc);

	std::cout << "instance = " << instance << std::endl;

	return 0;
}
