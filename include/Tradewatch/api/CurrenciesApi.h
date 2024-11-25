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
 * CurrenciesApi.h
 *
 * 
 */

#ifndef IO_TRADEWATCH_CLIENT_API_CurrenciesApi_H_
#define IO_TRADEWATCH_CLIENT_API_CurrenciesApi_H_



#include "Tradewatch/ApiClient.h"

#include "Tradewatch/model/Conversion.h"
#include "Tradewatch/model/CursorPage__T_Customized_SymbolsOutFull_.h"
#include "Tradewatch/model/HTTPValidationError.h"
#include "Tradewatch/model/LastQuote.h"
#include "Tradewatch/model/SymbolsListMode.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace io {
namespace tradewatch {
namespace client {
namespace api {

using namespace io::tradewatch::client::model;



class  CurrenciesApi 
{
public:

    explicit CurrenciesApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~CurrenciesApi();

    /// <summary>
    /// Conversion
    /// </summary>
    /// <remarks>
    /// Convert one symbol to another
    /// </remarks>
    /// <param name="from"></param>
    /// <param name="to"></param>
    pplx::task<std::shared_ptr<Conversion>> convert(
        utility::string_t from,
        utility::string_t to
    ) const;
    /// <summary>
    /// Last Quote
    /// </summary>
    /// <remarks>
    /// Get the last quote tick for the provided symbol.
    /// </remarks>
    /// <param name="symbol"></param>
    /// <param name="precision"> (optional, default to 0)</param>
    pplx::task<std::shared_ptr<LastQuote>> getQuote(
        utility::string_t symbol,
        boost::optional<int32_t> precision
    ) const;
    /// <summary>
    /// Available Symbols
    /// </summary>
    /// <remarks>
    /// Get list of available symbols
    /// </remarks>
    /// <param name="mode">Listing mode</param>
    /// <param name="size">Page offset (optional, default to 0)</param>
    /// <param name="page">Page number (optional, default to 0)</param>
    /// <param name="cursor">Cursor for the next page (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<CursorPage__T_Customized_SymbolsOutFull_>> getSymbols(
        std::shared_ptr<SymbolsListMode> mode,
        boost::optional<int32_t> size,
        boost::optional<int32_t> page,
        boost::optional<utility::string_t> cursor
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* IO_TRADEWATCH_CLIENT_API_CurrenciesApi_H_ */

