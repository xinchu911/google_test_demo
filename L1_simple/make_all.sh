rm -rf build

GTEST=googletest-release-1.8.1
if [ -e ${GTEST} ]; then
    echo "${GTEST} has already been unzipped, skip."
else
    echo "Begin to unzip ${GTEST}.zip"
    unzip ${GTEST}.zip
    echo "Unzip google test finish"
fi

mkdir build
cd build

# Make Google Test in './build/gtest/' folder
mkdir gtest
cd gtest
cmake ../../${GTEST}
make

cd ..
cmake ../
make

# Run Test
./unit_test
