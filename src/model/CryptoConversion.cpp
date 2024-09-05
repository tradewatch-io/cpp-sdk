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



#include "Tradewatch/model/CryptoConversion.h"

namespace io {
namespace tradewatch {
namespace client {
namespace model {



CryptoConversion::CryptoConversion()
{
    m_InfoIsSet = false;
    m_QueryIsSet = false;
    m_Result = 0.0;
    m_ResultIsSet = false;
}

CryptoConversion::~CryptoConversion()
{
}

void CryptoConversion::validate()
{
    // TODO: implement validation
}

web::json::value CryptoConversion::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_InfoIsSet)
    {
        val[utility::conversions::to_string_t(U("info"))] = ModelBase::toJson(m_Info);
    }
    if(m_QueryIsSet)
    {
        val[utility::conversions::to_string_t(U("query"))] = ModelBase::toJson(m_Query);
    }
    if(m_ResultIsSet)
    {
        val[utility::conversions::to_string_t(U("result"))] = ModelBase::toJson(m_Result);
    }

    return val;
}

bool CryptoConversion::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("info"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("info")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ConversionInfo> refVal_setInfo;
            ok &= ModelBase::fromJson(fieldValue, refVal_setInfo);
            setInfo(refVal_setInfo);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("query"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("query")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CryptoConversionQuery> refVal_setQuery;
            ok &= ModelBase::fromJson(fieldValue, refVal_setQuery);
            setQuery(refVal_setQuery);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("result"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("result")));
        if(!fieldValue.is_null())
        {
            double refVal_setResult;
            ok &= ModelBase::fromJson(fieldValue, refVal_setResult);
            setResult(refVal_setResult);
        }
    }
    return ok;
}

void CryptoConversion::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_InfoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("info")), m_Info));
    }
    if(m_QueryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("query")), m_Query));
    }
    if(m_ResultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("result")), m_Result));
    }
}

bool CryptoConversion::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("info"))))
    {
        std::shared_ptr<ConversionInfo> refVal_setInfo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("info"))), refVal_setInfo );
        setInfo(refVal_setInfo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("query"))))
    {
        std::shared_ptr<CryptoConversionQuery> refVal_setQuery;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("query"))), refVal_setQuery );
        setQuery(refVal_setQuery);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("result"))))
    {
        double refVal_setResult;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("result"))), refVal_setResult );
        setResult(refVal_setResult);
    }
    return ok;
}

std::shared_ptr<ConversionInfo> CryptoConversion::getInfo() const
{
    return m_Info;
}

void CryptoConversion::setInfo(const std::shared_ptr<ConversionInfo>& value)
{
    m_Info = value;
    m_InfoIsSet = true;
}

bool CryptoConversion::infoIsSet() const
{
    return m_InfoIsSet;
}

void CryptoConversion::unsetInfo()
{
    m_InfoIsSet = false;
}
std::shared_ptr<CryptoConversionQuery> CryptoConversion::getQuery() const
{
    return m_Query;
}

void CryptoConversion::setQuery(const std::shared_ptr<CryptoConversionQuery>& value)
{
    m_Query = value;
    m_QueryIsSet = true;
}

bool CryptoConversion::queryIsSet() const
{
    return m_QueryIsSet;
}

void CryptoConversion::unsetQuery()
{
    m_QueryIsSet = false;
}
double CryptoConversion::getResult() const
{
    return m_Result;
}

void CryptoConversion::setResult(double value)
{
    m_Result = value;
    m_ResultIsSet = true;
}

bool CryptoConversion::resultIsSet() const
{
    return m_ResultIsSet;
}

void CryptoConversion::unsetResult()
{
    m_ResultIsSet = false;
}
}
}
}
}


