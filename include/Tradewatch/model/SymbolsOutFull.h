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
 * SymbolsOutFull.h
 *
 * 
 */

#ifndef IO_TRADEWATCH_CLIENT_MODEL_SymbolsOutFull_H_
#define IO_TRADEWATCH_CLIENT_MODEL_SymbolsOutFull_H_


#include "Tradewatch/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace tradewatch {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  SymbolsOutFull
    : public ModelBase
{
public:
    SymbolsOutFull();
    virtual ~SymbolsOutFull();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SymbolsOutFull members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSymbol() const;
    bool symbolIsSet() const;
    void unsetSymbol();

    void setSymbol(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);


protected:
    utility::string_t m_Symbol;
    bool m_SymbolIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
};


}
}
}
}

#endif /* IO_TRADEWATCH_CLIENT_MODEL_SymbolsOutFull_H_ */
