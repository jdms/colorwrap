#!/bin/bash

swig -c++ -python colorwrap.i
python setup.py build_ext --inplace
