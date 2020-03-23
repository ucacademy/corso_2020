mkdir -p ./pkg
wget -O ./pkg/gcc-arm-9.2-2019.12-mingw-w64-i686-arm-none-eabi.tar.xz https://developer.arm.com/-/media/Files/downloads/gnu-a/9.2-2019.12/binrel/gcc-arm-9.2-2019.12-mingw-w64-i686-arm-none-eabi.tar.xz?revision=11ead78b-0442-489c-bd97-f18db1866f30&la=en&hash=5BCB8EE533636CF34FF99AB46CCB60CE11E4F1E1
mkdir -p ./toolchain/windows
tar xf ./pkg/gcc-arm-9.2-2019.12-mingw-w64-i686-arm-none-eabi.tar.xz -C toolchain/windows