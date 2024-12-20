/**
 * tradewatch.io
 * Financial market data for Developers
 *
 * The version of the OpenAPI document: 3.1.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.11.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Tradewatch/AnyType.h"

namespace io {
namespace tradewatch {
namespace client {
namespace model {

AnyType::AnyType() { m_value = web::json::value::null(); }

AnyType::~AnyType() {}

void AnyType::validate() {}

web::json::value AnyType::toJson() const { return m_value; }

bool AnyType::fromJson(const web::json::value &val) {
  m_value = val;
  m_IsSet = true;
  return isSet();
}

void AnyType::toMultipart(std::shared_ptr<MultipartFormData> multipart,
                          const utility::string_t &prefix) const {
  if (m_value.is_object()) {
    return Object::toMultipart(multipart, prefix);
  }
  throw std::runtime_error("AnyType::toMultipart: unsupported type");
}

bool AnyType::fromMultiPart(std::shared_ptr<MultipartFormData> multipart,
                            const utility::string_t &prefix) {
  if (m_value.is_object()) {
    return Object::fromMultiPart(multipart, prefix);
  }
  return false;
}

}
}
}
}
