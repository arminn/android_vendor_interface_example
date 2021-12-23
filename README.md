This is Android HIDL interface example with default c++ implementation.

Tested on Android 12 with TARGET_PRODUCT=sdk_car_x86_64

To test :

1) Clone project into some directory like ```vendor/xen/epam```
2) Add to your device descriptor make file (in my case it will be ```device/generic/car/emulator/aosp_car_emulator.mk```) :
   ```PRODUCT_PACKAGES += epam.virt@1.0-service``` and ```BOARD_VENDOR_SEPOLICY_DIRS += vendor/xen/epam/interfaces/virt/1.0/default/sepolicy/vendor```

3) Continue build.