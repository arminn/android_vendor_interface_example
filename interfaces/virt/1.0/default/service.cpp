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

#define LOG_TAG "epam.virt@1.0-service"

#include <epam/virt/1.0/IVirt.h>
#include <hidl/HidlTransportSupport.h>
#include <binder/ProcessState.h>

#include "Virt.h"

using android::hardware::configureRpcThreadpool;
using android::hardware::joinRpcThreadpool;
using epam::virt::implementation::Virt;
using epam::virt::V1_0::IVirt;
using android::sp;
using android::status_t;
using android::OK;

int main() {
    android::ProcessState::initWithDriver("/dev/vndbinder");
    android::ProcessState::self()->setThreadPoolMaxThreadCount(4);
    android::ProcessState::self()->startThreadPool();
    android::hardware::configureRpcThreadpool(4, true /* will join */);
    sp<IVirt> v = new Virt;
    status_t status = v->registerAsService();
    LOG_ALWAYS_FATAL_IF(status != OK, "Could not register IVirt .....");
    ALOGI("IVirt registered !");
    joinRpcThreadpool();
    return 0;
}
