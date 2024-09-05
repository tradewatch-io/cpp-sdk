/**
 * tradewatch.io
 * Financial market data for Developers
 *
 * The version of the OpenAPI document: 3.1.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.9.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Tradewatch/model/SymbolsListMode.h"

namespace io {
namespace tradewatch {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = utility::string_t;

SymbolsListMode::eSymbolsListMode toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("full")))
        return SymbolsListMode::eSymbolsListMode::SymbolsListMode_FULL;
    if (val == utility::conversions::to_string_t(U("base")))
        return SymbolsListMode::eSymbolsListMode::SymbolsListMode_BASE;
    return {};
}

EnumUnderlyingType fromEnum(SymbolsListMode::eSymbolsListMode e)
{
    switch (e)
    {
    case SymbolsListMode::eSymbolsListMode::SymbolsListMode_FULL:
        return U("full");
    case SymbolsListMode::eSymbolsListMode::SymbolsListMode_BASE:
        return U("base");
    default:
        break;
    }
    return {};
}
}

SymbolsListMode::SymbolsListMode()
{
}

SymbolsListMode::~SymbolsListMode()
{
}

void SymbolsListMode::validate()
{
    // TODO: implement validation
}

web::json::value SymbolsListMode::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool SymbolsListMode::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void SymbolsListMode::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool SymbolsListMode::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }
    {
        EnumUnderlyingType e;
        ok = ModelBase::fromHttpContent(multipart->getContent(namePrefix), e);
        if (ok)
        {
            auto v = toEnum(e);
            setValue(v);
        }
    }
    return ok;
}

SymbolsListMode::eSymbolsListMode SymbolsListMode::getValue() const
{
   return m_value;
}

void SymbolsListMode::setValue(SymbolsListMode::eSymbolsListMode const value)
{
   m_value = value;
}


}
}
}
}


