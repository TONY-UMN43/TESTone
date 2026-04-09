# Installing the Google Test Library

You can download and build google test with the following commands:

```bash
# Change to the lib directory
cd lib

# Clone googletest
git clone https://github.com/google/googletest.git
cd googletest

# Create a build directory
mkdir build
cd build

# Configure cmake
cmake ..

# Build googletest
make
```