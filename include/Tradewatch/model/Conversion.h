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
 * Conversion.h
 *
 * 
 */

#ifndef IO_TRADEWATCH_CLIENT_MODEL_Conversion_H_
#define IO_TRADEWATCH_CLIENT_MODEL_Conversion_H_


#include "Tradewatch/ModelBase.h"

#include "Tradewatch/model/ConversionQuery.h"
#include "Tradewatch/model/ConversionInfo.h"

namespace io {
namespace tradewatch {
namespace client {
namespace model {

class ConversionInfo;
class ConversionQuery;


/// <summary>
/// 
/// </summary>
class  Conversion
    : public ModelBase
{
public:
    Conversion();
    virtual ~Conversion();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Conversion members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConversionInfo> getInfo() const;
    bool infoIsSet() const;
    void unsetInfo();

    void setInfo(const std::shared_ptr<ConversionInfo>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConversionQuery> getQuery() const;
    bool queryIsSet() const;
    void unsetQuery();

    void setQuery(const std::shared_ptr<ConversionQuery>& value);

    /// <summary>
    /// 
    /// </summary>
    double getResult() const;
    bool resultIsSet() const;
    void unsetResult();

    void setResult(double value);


protected:
    std::shared_ptr<ConversionInfo> m_Info;
    bool m_InfoIsSet;
    std::shared_ptr<ConversionQuery> m_Query;
    bool m_QueryIsSet;
    double m_Result;
    bool m_ResultIsSet;
};


}
}
}
}

#endif /* IO_TRADEWATCH_CLIENT_MODEL_Conversion_H_ */