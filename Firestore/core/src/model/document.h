/*
 * Copyright 2021 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FIRESTORE_CORE_SRC_MODEL_DOCUMENT_H_
#define FIRESTORE_CORE_SRC_MODEL_DOCUMENT_H_

#include <memory>

#include "Firestore/core/src/model/mutable_document.h"

namespace firebase {
namespace firestore {
namespace model {

/**
 * Represents a non-mutable document in Firestore with a key, version, data and
 * whether it has local mutations applied to it.
 */
class Document {
 public:
  explicit Document(MutableDocument&& document)
      : document_(std::move(document)) {
  }
  Document() = default;
  const MutableDocument& get() const {
    return document_;
  }

  const MutableDocument* operator->() const {
    return &document_;
  }
  size_t Hash() const {
    return document_.Hash();
  }
  std::string ToString() const {
    return document_.ToString();
  }

 private:
  MutableDocument document_;
};

bool operator==(const Document& lhs, const Document& rhs) {
  return lhs.get() == rhs.get();
}

inline bool operator!=(const Document& lhs, const Document& rhs) {
  return !(lhs == rhs);
}

}  // namespace model
}  // namespace firestore
}  // namespace firebase

#endif  // FIRESTORE_CORE_SRC_MODEL_DOCUMENT_H_
