# zephyrlua
attempts to run Lua on ZephyrOS

### used with:

* zephyr-sdk-0.11.2
* zephyr v2.2

### build:
```
cd build/
cmake -GNinja -DBOARD=qemu_cortex_a53 ..
ninja
ninja run
```
    
### Known issues:

only runs till the end on qemu_cortex_a53 und qemu_cortex_r5 (however not perfectly)
does not run till the end on qemu_cortex_m0, qemu_cortex_m3, qemu_x86 and same70_xplained (physical and simulated with renode.io)
