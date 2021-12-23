// FIXME: your file license if you have one

#pragma once

#include <epam/virt/1.0/IVirt.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>

namespace epam::virt::implementation {

using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

struct Virt : public V1_0::IVirt {
    // Methods from ::epam::virt::V1_0::IVirt follow.
    Return<void> init() override;

    // Methods from ::android::hidl::base::V1_0::IBase follow.

};

// FIXME: most likely delete, this is only for passthrough implementations
// extern "C" IVirt* HIDL_FETCH_IVirt(const char* name);

}  // namespace epam::virt::implementation
