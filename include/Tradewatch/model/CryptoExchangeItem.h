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
 * CryptoExchangeItem.h
 *
 * A cryptocurrency exchange
 */

#ifndef IO_TRADEWATCH_CLIENT_MODEL_CryptoExchangeItem_H_
#define IO_TRADEWATCH_CLIENT_MODEL_CryptoExchangeItem_H_


#include "Tradewatch/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace tradewatch {
namespace client {
namespace model {



/// <summary>
/// A cryptocurrency exchange
/// </summary>
class  CryptoExchangeItem
    : public ModelBase
{
public:
    CryptoExchangeItem();
    virtual ~CryptoExchangeItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CryptoExchangeItem members

    /// <summary>
    /// Exchange identifier
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// Exchange name
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// Exchange established year
    /// </summary>
    int32_t getYearEstablished() const;
    bool yearEstablishedIsSet() const;
    void unsetYear_established();

    void setYearEstablished(int32_t value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    int32_t m_Year_established;
    bool m_Year_establishedIsSet;
};


}
}
}
}

#endif /* IO_TRADEWATCH_CLIENT_MODEL_CryptoExchangeItem_H_ */