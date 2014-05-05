## Copyright (c) 2011 The WebM project authors. All Rights Reserved.
## 
## Use of this source code is governed by a BSD-style license
## that can be found in the LICENSE file in the root of the source
## tree. An additional intellectual property rights grant can be found
## in the file PATENTS.  All contributing project authors may
## be found in the AUTHORS file in the root of the source tree.
# This file automatically generated by configure. Do not edit!
TOOLCHAIN := x86-win32-vs10
ALL_TARGETS += libs
ALL_TARGETS += examples
ALL_TARGETS += docs
ALL_TARGETS += solution

PREFIX=/mingw
ifeq ($(MAKECMDGOALS),dist)
DIST_DIR?=vpx-vp8-vp9dx-nodocs-x86-win32mt-vs10-v1.3.0
else
DIST_DIR?=$(DESTDIR)/mingw
endif
LIBSUBDIR=lib

VERSION_STRING=v1.3.0

VERSION_MAJOR=1
VERSION_MINOR=3
VERSION_PATCH=0

CONFIGURE_ARGS=--prefix=/mingw --target=x86-win32-vs10 --enable-static-msvcrt --disable-unit-tests --disable-vp9-encoder --disable-install-docs --disable-unit-tests
CONFIGURE_ARGS?=--prefix=/mingw --target=x86-win32-vs10 --enable-static-msvcrt --disable-unit-tests --disable-vp9-encoder --disable-install-docs --disable-unit-tests
