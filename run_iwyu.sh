# bin/sh
mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=IWYU -DCMAKE_EXPORT_COMPILE_COMMANDS=1
make 2&> /dev/null
cd ..
python iwyu_tool.py -p build/