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
 * ValidationError.h
 *
 * 
 */

#ifndef IO_TRADEWATCH_CLIENT_MODEL_ValidationError_H_
#define IO_TRADEWATCH_CLIENT_MODEL_ValidationError_H_


#include "Tradewatch/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>
#include "Tradewatch/model/ValidationError_loc_inner.h"

namespace io {
namespace tradewatch {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  ValidationError
    : public ModelBase
{
public:
    ValidationError();
    virtual ~ValidationError();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ValidationError members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ValidationError_loc_inner>>& getLoc();
    bool locIsSet() const;
    void unsetLoc();

    void setLoc(const std::vector<std::shared_ptr<ValidationError_loc_inner>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMsg() const;
    bool msgIsSet() const;
    void unsetMsg();

    void setMsg(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(const utility::string_t& value);


protected:
    std::vector<std::shared_ptr<ValidationError_loc_inner>> m_Loc;
    bool m_LocIsSet;
    utility::string_t m_Msg;
    bool m_MsgIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
};


}
}
}
}

#endif /* IO_TRADEWATCH_CLIENT_MODEL_ValidationError_H_ */
