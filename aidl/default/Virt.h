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

#include <aidl/epam/virt/BnVirt.h>

namespace aidl {
namespace epam {
namespace virt {

struct Virt : public BnVirt{
    Virt() = default;

    ::ndk::ScopedAStatus init() override;

};

} // namespace virt
} // namespace epam
} // aidl
