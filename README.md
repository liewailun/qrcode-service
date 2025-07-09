# qrcode-service
C++ server that provides a REST api to generate QR codes

## Dependencies

- https://github.com/nayuki/QR-Code-generator.git
- https://github.com/yhirose/cpp-httplib.git
- https://github.com/google/googletest.git
- CMake >= 3.12

## Build

```
mkdir build
cd build
cmake ..
make
```

## Usage

```
./qrcode-service
```