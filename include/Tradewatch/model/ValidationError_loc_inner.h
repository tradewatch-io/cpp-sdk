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

/*
 * ValidationError_loc_inner.h
 *
 * 
 */

#ifndef IO_TRADEWATCH_CLIENT_MODEL_ValidationError_loc_inner_H_
#define IO_TRADEWATCH_CLIENT_MODEL_ValidationError_loc_inner_H_


#include "Tradewatch/ModelBase.h"


namespace io {
namespace tradewatch {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  ValidationError_loc_inner
    : public ModelBase
{
public:
    ValidationError_loc_inner();
    virtual ~ValidationError_loc_inner();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ValidationError_loc_inner members


protected:
};


}
}
}
}

#endif /* IO_TRADEWATCH_CLIENT_MODEL_ValidationError_loc_inner_H_ */
