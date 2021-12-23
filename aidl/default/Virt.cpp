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

#define LOG_TAG "epam.virt-service"



#include <log/log.h>
#include <android-base/logging.h>
#include <android/log.h>

#include "Virt.h"

using namespace android;

namespace aidl {
namespace epam {
namespace virt {

::ndk::ScopedAStatus Virt::init() {
    ALOGI("AIDL Virt::init() ");
    return ::ndk::ScopedAStatus::ok();
}

} // namespace virt
} // namespace epam
} // aidl


