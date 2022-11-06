ZigDawn
=======

This is a test of integration of https://github.com/hexops/mach-gpu-dawn in a simple C++ project.

**Highly WIP** Just doing some tests for now.

Building
--------

```bash
# Get down.lib, which is too heavy to upload on GitHub
wget https://github.com/hexops/mach-gpu-dawn/releases/download/release-dd770e7/dawn_x86_64-windows-gnu_release-fast.lib.gz
gzip -d dawn_x86_64-windows-gnu_release-fast.lib.gz
mv dawn_x86_64-windows-gnu_release-fast.lib WebGPU/dawn.lib

# Standard cmake build
mkdir build
cd build
cmake ..
cmake --build .
```
