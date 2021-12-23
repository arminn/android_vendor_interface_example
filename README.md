This is Android HIDL and AIDL interface example with default c++ implementation.

Tested on Android 12 with TARGET_PRODUCT=sdk_car_x86_64

To test HIDL:

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
You could also use ```lshal | epam ```

Note: HIDL HAL/service deprecated since Android 12, use AIDL.


To test AIDL:

1) Clone project into some directory like ```vendor/xen/epam```
2) Add to your device descriptor make file (in my case it will be ```device/generic/car/emulator/aosp_car_emulator.mk```) :
   ```PRODUCT_PACKAGES += epam.virt-service``` and ```BOARD_VENDOR_SEPOLICY_DIRS += vendor/xen/epam/aidl/default/sepolicy/vendor```

3) Continue to build.

On sucess you will get something like:
```
12-24 01:32:30.188     0     0 I init    : starting service 'vendor.epam_virt'...
12-24 01:32:30.165   170   170 I servicemanager: Found epam.virt.IVirt/default in device VINTF manifest.
12-24 01:32:30.165   377   377 I epam.virt-service: AIDL Virt service started !
```

To test rpc: ```logcat -c | service call epam.virt.IVirt/default 1 && logcat | grep epam```
on sucess:
```
Result: Parcel(NULL)
12-24 03:24:45.987   384   384 I epam.virt-service: AIDL Virt::init() 
```
NOTE: AIDL was generated using:
1) ```hidl2aidl -o vendor/xen/epam/aidl/ -r epam:vendor/xen/epam/interfaces/ -v epam.virt@1.0 ```
2) ```m epam.virt-freeze-api```
3) ```mkdir vendor/xen/epam/aidl/aidl_api/epam.virt/1```
4) manual insertion of the hash form freeze to ```vendor/xen/epam/aidl/aidl_api/epam.virt/1/.hash```
5) ```m epam.virt-update-api```
