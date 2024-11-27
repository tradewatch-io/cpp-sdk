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
 * CryptoExchangesList.h
 *
 * A list of cryptocurrency exchanges
 */

#ifndef IO_TRADEWATCH_CLIENT_MODEL_CryptoExchangesList_H_
#define IO_TRADEWATCH_CLIENT_MODEL_CryptoExchangesList_H_


#include "Tradewatch/ModelBase.h"

#include "Tradewatch/model/CryptoExchangeItem.h"
#include <vector>

namespace io {
namespace tradewatch {
namespace client {
namespace model {

class CryptoExchangeItem;


/// <summary>
/// A list of cryptocurrency exchanges
/// </summary>
class  CryptoExchangesList
    : public ModelBase
{
public:
    CryptoExchangesList();
    virtual ~CryptoExchangesList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CryptoExchangesList members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<CryptoExchangeItem>>& getItems();
    bool itemsIsSet() const;
    void unsetItems();

    void setItems(const std::vector<std::shared_ptr<CryptoExchangeItem>>& value);


protected:
    std::vector<std::shared_ptr<CryptoExchangeItem>> m_Items;
    bool m_ItemsIsSet;
};


}
}
}
}

#endif /* IO_TRADEWATCH_CLIENT_MODEL_CryptoExchangesList_H_ */
