/* Copyright 2020 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef TENSORFLOW_CORE_PROFILER_UTILS_FORMAT_UTILS_H_
#define TENSORFLOW_CORE_PROFILER_UTILS_FORMAT_UTILS_H_

#include <string>

#include "absl/strings/str_format.h"

namespace tensorflow {
namespace profiler {

// Formats d with one digit after the decimal point.
inline std::string OneDigit(double d) { return absl::StrFormat("%.1f", d); }

// Formats d with maximum precision to allow parsing the result back to the same
// number.
inline std::string MaxPrecision(double d) {
  return absl::StrFormat("%.17g", d);
}

}  // namespace profiler
}  // namespace tensorflow

#endif  // TENSORFLOW_CORE_PROFILER_UTILS_FORMAT_UTILS_H_
