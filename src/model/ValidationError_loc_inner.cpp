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



#include "Tradewatch/model/ValidationError_loc_inner.h"

namespace io {
namespace tradewatch {
namespace client {
namespace model {



ValidationError_loc_inner::ValidationError_loc_inner()
{
}

ValidationError_loc_inner::~ValidationError_loc_inner()
{
}

void ValidationError_loc_inner::validate()
{
    // TODO: implement validation
}

web::json::value ValidationError_loc_inner::toJson() const
{

    web::json::value val = web::json::value::object();
    

    return val;
}

bool ValidationError_loc_inner::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}

void ValidationError_loc_inner::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
}

bool ValidationError_loc_inner::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    return ok;
}

}
}
}
}

