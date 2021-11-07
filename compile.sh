#make -j16 localmodconfig
make -j16 
make -j16 modules
make -j16 modules_install
make -j16 install
