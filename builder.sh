set -ex

LOC=`pwd`
if true
then
cd  sst-core-7.1.0  
./autogen.sh
cd $LOC/sst-macro-7.1.0
./bootstrap.sh
cd $LOC
fi

INSTALL_LOC="<path/to/you/install/loc>"
mkdir -p $INSTALL_LOC


if true
then
wget --no-check-certificate https://sourceforge.net/projects/boost/files/boost/1.59.0/boost_1_59_0.tar.gz/download -O boost_1_59_0.tar.gz
tar zxvf boost_1_59_0.tar.gz
fi

cd $LOC/sst-core-7.1.0
export SST_CORE_HOME=$INSTALL_LOC/sst-core-7.1.0
./configure --prefix=$SST_CORE_HOME
make all -j `nproc`
make install
export PATH=$SST_CORE_HOME/bin:$PATH


###### Enable for Boost
if true; then
cd $LOC/boost_1_59_0
./bootstrap.sh --prefix=$INSTALL_LOC/boost_1_59_0-install/ --with-libraries="program_options,serialization,filesystem" --with-toolset=gcc
./b2 -j `nproc` --layout=tagged
fi

###### Enable for SST/macro
if true; then
cd $LOC/sst-macro-7.1.0
rm -rf build
mkdir  build
cd build
../configure --prefix=$INSTALL_LOC/sst-macro-7.1.0 --with-sst-core=$SST_CORE_HOME CC=mpicc CXX=mpicxx
#../configure --prefix=$HOME/local/packages CC=mpicc CXX=mpicxx
make -j `nproc` check
make install
make -j `nproc` installcheck

export PATH=$INSTALL_LOC/sst-macro-7.1.0/bin/:$PATH


export LD_LIBRARY_PATH=$INSTALL_LOC/sst-macro-7.1.0/lib:$LD_LIBRARY_PATH
export DYLD_LIBRARY_PATH=$INSTALL_LOC/sst-macro-7.1.0/lib:$DYLD_LIBRARY_PATH
export PYTHONPATH=$INSTALL_LOC/sst-macro-7.1.0/include/python:$PYTHONPATH

sst++ --help
export SSTMAC_VERBOSE=1
fi
