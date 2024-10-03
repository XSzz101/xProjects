THIS_DIR:= $(abspath $(dir $(word $(words $(MAKEFILE_LIST)),$(MAKEFILE_LIST))))
INSTALL_ROOT := $(THIS_DIR)/out

.PHONY: all

all:
	install_root=${INSTALL_ROOT} && \
	cmake -Bbuild \
		-Hcmake\
		-DCMAKE_INSTALL_PREFIX=${INSTALL_ROOT}
	make -C build VERBOSE=1 -j16 install

.PHONY: install

install: all

.PHONY: clean

clean:
	rm -rf build
	rm -rf build-example
