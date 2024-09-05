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

/*
 * SymbolsListMode.h
 *
 * 
 */

#ifndef IO_TRADEWATCH_CLIENT_MODEL_SymbolsListMode_H_
#define IO_TRADEWATCH_CLIENT_MODEL_SymbolsListMode_H_


#include "Tradewatch/ModelBase.h"


namespace io {
namespace tradewatch {
namespace client {
namespace model {


class  SymbolsListMode
    : public ModelBase
{
public:
    SymbolsListMode();
    virtual ~SymbolsListMode();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eSymbolsListMode
    {
        SymbolsListMode_FULL,
        SymbolsListMode_BASE,
    };

    eSymbolsListMode getValue() const;
    void setValue(eSymbolsListMode const value);

    protected:
        eSymbolsListMode m_value;
};

}
}
}
}

#endif /* IO_TRADEWATCH_CLIENT_MODEL_SymbolsListMode_H_ */
