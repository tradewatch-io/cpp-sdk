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
 * AccountApi.h
 *
 * 
 */

#ifndef IO_TRADEWATCH_CLIENT_API_AccountApi_H_
#define IO_TRADEWATCH_CLIENT_API_AccountApi_H_



#include "Tradewatch/ApiClient.h"

#include "Tradewatch/model/AccountUsageStatisticsInterval.h"
#include "Tradewatch/model/ErrorResponseBody.h"
#include "Tradewatch/Object.h"
#include <boost/optional.hpp>

namespace io {
namespace tradewatch {
namespace client {
namespace api {

using namespace io::tradewatch::client::model;



class  AccountApi 
{
public:

    explicit AccountApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~AccountApi();

    /// <summary>
    /// Usage statistics
    /// </summary>
    /// <remarks>
    /// Get the usage statistics of your API account
    /// </remarks>
    /// <param name="limit"> (optional, default to 0)</param>
    /// <param name="interval"> (optional, default to new AccountUsageStatisticsInterval())</param>
    pplx::task<std::shared_ptr<Object>> getUsage(
        boost::optional<int32_t> limit,
        boost::optional<std::shared_ptr<AccountUsageStatisticsInterval>> interval
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* IO_TRADEWATCH_CLIENT_API_AccountApi_H_ */

