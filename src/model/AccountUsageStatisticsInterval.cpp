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



#include "Tradewatch/model/AccountUsageStatisticsInterval.h"

namespace io {
namespace tradewatch {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = utility::string_t;

AccountUsageStatisticsInterval::eAccountUsageStatisticsInterval toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("1h")))
        return AccountUsageStatisticsInterval::eAccountUsageStatisticsInterval::AccountUsageStatisticsInterval__1H;
    if (val == utility::conversions::to_string_t(U("1d")))
        return AccountUsageStatisticsInterval::eAccountUsageStatisticsInterval::AccountUsageStatisticsInterval__1D;
    return {};
}

EnumUnderlyingType fromEnum(AccountUsageStatisticsInterval::eAccountUsageStatisticsInterval e)
{
    switch (e)
    {
    case AccountUsageStatisticsInterval::eAccountUsageStatisticsInterval::AccountUsageStatisticsInterval__1H:
        return U("1h");
    case AccountUsageStatisticsInterval::eAccountUsageStatisticsInterval::AccountUsageStatisticsInterval__1D:
        return U("1d");
    default:
        break;
    }
    return {};
}
}

AccountUsageStatisticsInterval::AccountUsageStatisticsInterval()
{
}

AccountUsageStatisticsInterval::~AccountUsageStatisticsInterval()
{
}

void AccountUsageStatisticsInterval::validate()
{
    // TODO: implement validation
}

web::json::value AccountUsageStatisticsInterval::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool AccountUsageStatisticsInterval::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void AccountUsageStatisticsInterval::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool AccountUsageStatisticsInterval::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

AccountUsageStatisticsInterval::eAccountUsageStatisticsInterval AccountUsageStatisticsInterval::getValue() const
{
   return m_value;
}

void AccountUsageStatisticsInterval::setValue(AccountUsageStatisticsInterval::eAccountUsageStatisticsInterval const value)
{
   m_value = value;
}


}
}
}
}


