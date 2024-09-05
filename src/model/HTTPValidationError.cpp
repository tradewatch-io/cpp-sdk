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



#include "Tradewatch/model/HTTPValidationError.h"

namespace io {
namespace tradewatch {
namespace client {
namespace model {



HTTPValidationError::HTTPValidationError()
{
    m_DetailIsSet = false;
}

HTTPValidationError::~HTTPValidationError()
{
}

void HTTPValidationError::validate()
{
    // TODO: implement validation
}

web::json::value HTTPValidationError::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DetailIsSet)
    {
        val[utility::conversions::to_string_t(U("detail"))] = ModelBase::toJson(m_Detail);
    }

    return val;
}

bool HTTPValidationError::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("detail"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("detail")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ValidationError>> refVal_setDetail;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDetail);
            setDetail(refVal_setDetail);
        }
    }
    return ok;
}

void HTTPValidationError::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_DetailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("detail")), m_Detail));
    }
}

bool HTTPValidationError::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("detail"))))
    {
        std::vector<std::shared_ptr<ValidationError>> refVal_setDetail;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("detail"))), refVal_setDetail );
        setDetail(refVal_setDetail);
    }
    return ok;
}

std::vector<std::shared_ptr<ValidationError>>& HTTPValidationError::getDetail()
{
    return m_Detail;
}

void HTTPValidationError::setDetail(const std::vector<std::shared_ptr<ValidationError>>& value)
{
    m_Detail = value;
    m_DetailIsSet = true;
}

bool HTTPValidationError::detailIsSet() const
{
    return m_DetailIsSet;
}

void HTTPValidationError::unsetDetail()
{
    m_DetailIsSet = false;
}
}
}
}
}

