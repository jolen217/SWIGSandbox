#!/usr/bin/env python

"""
setup.py file for SWIG example
"""

from distutils.core import setup, Extension


imgprc_module = Extension(
    '_imgprc',
    sources=['imgprc_wrap.cxx', 'src/sum.cpp', 'src/bbox.cpp'],
    include_dirs=['include'],
    extra_compile_args=['-fPIC'],
    )

setup (
    name = 'imgprc',
    version = '1.0',
    author      = "SWIG Docs",
    description = """Simple swig example from docs""",
    ext_modules = [imgprc_module],
    py_modules = ["imgprc"],
    )
