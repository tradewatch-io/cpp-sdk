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
 * LastQuote.h
 *
 * 
 */

#ifndef IO_TRADEWATCH_CLIENT_MODEL_LastQuote_H_
#define IO_TRADEWATCH_CLIENT_MODEL_LastQuote_H_


#include "Tradewatch/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace tradewatch {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  LastQuote
    : public ModelBase
{
public:
    LastQuote();
    virtual ~LastQuote();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// LastQuote members

    /// <summary>
    /// Symbol name
    /// </summary>
    utility::string_t getSymbol() const;
    bool symbolIsSet() const;
    void unsetSymbol();

    void setSymbol(const utility::string_t& value);

    /// <summary>
    /// The ask price.
    /// </summary>
    double getAsk() const;
    bool askIsSet() const;
    void unsetAsk();

    void setAsk(double value);

    /// <summary>
    /// The bid price.
    /// </summary>
    double getBid() const;
    bool bidIsSet() const;
    void unsetBid();

    void setBid(double value);

    /// <summary>
    /// The mid price.
    /// </summary>
    double getMid() const;
    bool midIsSet() const;
    void unsetMid();

    void setMid(double value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getTimestamp() const;
    bool timestampIsSet() const;
    void unsetTimestamp();

    void setTimestamp(int32_t value);


protected:
    utility::string_t m_Symbol;
    bool m_SymbolIsSet;
    double m_Ask;
    bool m_AskIsSet;
    double m_Bid;
    bool m_BidIsSet;
    double m_Mid;
    bool m_MidIsSet;
    int32_t m_Timestamp;
    bool m_TimestampIsSet;
};


}
}
}
}

#endif /* IO_TRADEWATCH_CLIENT_MODEL_LastQuote_H_ */
