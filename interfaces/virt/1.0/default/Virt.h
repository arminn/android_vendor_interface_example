/*
 * Copyright (C) 2021 The Android Open Source Project
 * Copyright (C) 2021 EPAM Systems Inc.
 *
 * Licensed under the Apache License, Version 2.1 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.1
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

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

};

}  // namespace epam::virt::implementation
