cmake_minimum_required(VERSION 3.21)
project(RSA)

set(CMAKE_CXX_STANDARD 14)

add_executable(RSA main.cpp RSA.cpp RSA.h bigint/BigInteger.cc bigint/BigIntegerAlgorithms.cc bigint/BigIntegerUtils.cc bigint/BigUnsigned.cc bigint/BigUnsignedInABase.cc)
