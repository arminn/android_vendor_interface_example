This is Android HIDL interface example with default c++ implementation.

Tested on Android 12 with TARGET_PRODUCT=sdk_car_x86_64

To test :

1) Clone project into some directory like ```vendor/xen/epam```
2) Add to your device descriptor make file (in my case it will be ```device/generic/car/emulator/aosp_car_emulator.mk```) :
   ```PRODUCT_PACKAGES += epam.virt@1.0-service``` and ```BOARD_VENDOR_SEPOLICY_DIRS += vendor/xen/epam/interfaces/virt/1.0/default/sepolicy/vendor```

3) Continue to build.
   
On success you will get something like:
```
12-23 23:18:16.803     0     0 I init    : Parsing file /vendor/etc/init/epam.virt@1.0-service.rc...
12-23 23:18:25.841     0     0 I init    : starting service 'epam.virt-1-0'...
12-23 23:18:25.946   420   420 I HidlServiceManagement: Registered epam.virt@1.0::IVirt/default
12-23 23:18:25.946   420   420 I HidlServiceManagement: Removing namespace from process name epam.virt@1.0-service to virt@1.0-service.
12-23 23:18:25.946   420   420 I epam.virt@1.0-service: IVirt registered !
```

Note: HIDL HAL/service deprecated since Android 12, use AIDL.