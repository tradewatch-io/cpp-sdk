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
 * ErrorResponseBody.h
 *
 * 
 */

#ifndef IO_TRADEWATCH_CLIENT_MODEL_ErrorResponseBody_H_
#define IO_TRADEWATCH_CLIENT_MODEL_ErrorResponseBody_H_


#include "Tradewatch/ModelBase.h"

#include "Tradewatch/model/ErrorDetails.h"

namespace io {
namespace tradewatch {
namespace client {
namespace model {

class ErrorDetails;


/// <summary>
/// 
/// </summary>
class  ErrorResponseBody
    : public ModelBase
{
public:
    ErrorResponseBody();
    virtual ~ErrorResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ErrorResponseBody members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ErrorDetails> getError() const;
    bool errorIsSet() const;
    void unsetError();

    void setError(const std::shared_ptr<ErrorDetails>& value);


protected:
    std::shared_ptr<ErrorDetails> m_Error;
    bool m_ErrorIsSet;
};


}
}
}
}

#endif /* IO_TRADEWATCH_CLIENT_MODEL_ErrorResponseBody_H_ */
