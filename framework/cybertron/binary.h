/******************************************************************************
 * Copyright 2018 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#ifndef CYBERTRON_BINARY_H_
#define CYBERTRON_BINARY_H_

#include <string>

namespace apollo {
namespace cybertron {
class Binary {
 public:
  static std::string GetName() { return GetNameRef(); }
  static void SetName(const std::string& name) { GetNameRef() = name; }
  static std::string& GetNameRef() {
    static std::string binary_name;
    return binary_name;
  }
};
}  // namespace cybertron
}  // namespace apollo

#endif