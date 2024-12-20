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



#include "Tradewatch/model/CursorPage__T_Customized_SymbolsOutFull_.h"

namespace io {
namespace tradewatch {
namespace client {
namespace model {



CursorPage__T_Customized_SymbolsOutFull_::CursorPage__T_Customized_SymbolsOutFull_()
{
    m_ItemsIsSet = false;
    m_Total = 0;
    m_TotalIsSet = false;
    m_Current_page = utility::conversions::to_string_t("");
    m_Current_pageIsSet = false;
    m_Current_page_backwards = utility::conversions::to_string_t("");
    m_Current_page_backwardsIsSet = false;
    m_Previous_page = utility::conversions::to_string_t("");
    m_Previous_pageIsSet = false;
    m_Next_page = utility::conversions::to_string_t("");
    m_Next_pageIsSet = false;
}

CursorPage__T_Customized_SymbolsOutFull_::~CursorPage__T_Customized_SymbolsOutFull_()
{
}

void CursorPage__T_Customized_SymbolsOutFull_::validate()
{
    // TODO: implement validation
}

web::json::value CursorPage__T_Customized_SymbolsOutFull_::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ItemsIsSet)
    {
        val[utility::conversions::to_string_t(U("items"))] = ModelBase::toJson(m_Items);
    }
    if(m_TotalIsSet)
    {
        val[utility::conversions::to_string_t(U("total"))] = ModelBase::toJson(m_Total);
    }
    if(m_Current_pageIsSet)
    {
        val[utility::conversions::to_string_t(U("current_page"))] = ModelBase::toJson(m_Current_page);
    }
    if(m_Current_page_backwardsIsSet)
    {
        val[utility::conversions::to_string_t(U("current_page_backwards"))] = ModelBase::toJson(m_Current_page_backwards);
    }
    if(m_Previous_pageIsSet)
    {
        val[utility::conversions::to_string_t(U("previous_page"))] = ModelBase::toJson(m_Previous_page);
    }
    if(m_Next_pageIsSet)
    {
        val[utility::conversions::to_string_t(U("next_page"))] = ModelBase::toJson(m_Next_page);
    }

    return val;
}

bool CursorPage__T_Customized_SymbolsOutFull_::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("items"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("items")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<SymbolsOutFull>> refVal_setItems;
            ok &= ModelBase::fromJson(fieldValue, refVal_setItems);
            setItems(refVal_setItems);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("total"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("total")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setTotal;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTotal);
            setTotal(refVal_setTotal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("current_page"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("current_page")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCurrentPage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCurrentPage);
            setCurrentPage(refVal_setCurrentPage);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("current_page_backwards"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("current_page_backwards")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCurrentPageBackwards;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCurrentPageBackwards);
            setCurrentPageBackwards(refVal_setCurrentPageBackwards);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("previous_page"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("previous_page")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPreviousPage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPreviousPage);
            setPreviousPage(refVal_setPreviousPage);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("next_page"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("next_page")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setNextPage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNextPage);
            setNextPage(refVal_setNextPage);
        }
    }
    return ok;
}

void CursorPage__T_Customized_SymbolsOutFull_::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ItemsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("items")), m_Items));
    }
    if(m_TotalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("total")), m_Total));
    }
    if(m_Current_pageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("current_page")), m_Current_page));
    }
    if(m_Current_page_backwardsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("current_page_backwards")), m_Current_page_backwards));
    }
    if(m_Previous_pageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("previous_page")), m_Previous_page));
    }
    if(m_Next_pageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("next_page")), m_Next_page));
    }
}

bool CursorPage__T_Customized_SymbolsOutFull_::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("items"))))
    {
        std::vector<std::shared_ptr<SymbolsOutFull>> refVal_setItems;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("items"))), refVal_setItems );
        setItems(refVal_setItems);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("total"))))
    {
        int32_t refVal_setTotal;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("total"))), refVal_setTotal );
        setTotal(refVal_setTotal);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("current_page"))))
    {
        utility::string_t refVal_setCurrentPage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("current_page"))), refVal_setCurrentPage );
        setCurrentPage(refVal_setCurrentPage);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("current_page_backwards"))))
    {
        utility::string_t refVal_setCurrentPageBackwards;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("current_page_backwards"))), refVal_setCurrentPageBackwards );
        setCurrentPageBackwards(refVal_setCurrentPageBackwards);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("previous_page"))))
    {
        utility::string_t refVal_setPreviousPage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("previous_page"))), refVal_setPreviousPage );
        setPreviousPage(refVal_setPreviousPage);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("next_page"))))
    {
        utility::string_t refVal_setNextPage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("next_page"))), refVal_setNextPage );
        setNextPage(refVal_setNextPage);
    }
    return ok;
}

std::vector<std::shared_ptr<SymbolsOutFull>>& CursorPage__T_Customized_SymbolsOutFull_::getItems()
{
    return m_Items;
}

void CursorPage__T_Customized_SymbolsOutFull_::setItems(const std::vector<std::shared_ptr<SymbolsOutFull>>& value)
{
    m_Items = value;
    m_ItemsIsSet = true;
}

bool CursorPage__T_Customized_SymbolsOutFull_::itemsIsSet() const
{
    return m_ItemsIsSet;
}

void CursorPage__T_Customized_SymbolsOutFull_::unsetItems()
{
    m_ItemsIsSet = false;
}
int32_t CursorPage__T_Customized_SymbolsOutFull_::getTotal() const
{
    return m_Total;
}

void CursorPage__T_Customized_SymbolsOutFull_::setTotal(int32_t value)
{
    m_Total = value;
    m_TotalIsSet = true;
}

bool CursorPage__T_Customized_SymbolsOutFull_::totalIsSet() const
{
    return m_TotalIsSet;
}

void CursorPage__T_Customized_SymbolsOutFull_::unsetTotal()
{
    m_TotalIsSet = false;
}
utility::string_t CursorPage__T_Customized_SymbolsOutFull_::getCurrentPage() const
{
    return m_Current_page;
}

void CursorPage__T_Customized_SymbolsOutFull_::setCurrentPage(const utility::string_t& value)
{
    m_Current_page = value;
    m_Current_pageIsSet = true;
}

bool CursorPage__T_Customized_SymbolsOutFull_::currentPageIsSet() const
{
    return m_Current_pageIsSet;
}

void CursorPage__T_Customized_SymbolsOutFull_::unsetCurrent_page()
{
    m_Current_pageIsSet = false;
}
utility::string_t CursorPage__T_Customized_SymbolsOutFull_::getCurrentPageBackwards() const
{
    return m_Current_page_backwards;
}

void CursorPage__T_Customized_SymbolsOutFull_::setCurrentPageBackwards(const utility::string_t& value)
{
    m_Current_page_backwards = value;
    m_Current_page_backwardsIsSet = true;
}

bool CursorPage__T_Customized_SymbolsOutFull_::currentPageBackwardsIsSet() const
{
    return m_Current_page_backwardsIsSet;
}

void CursorPage__T_Customized_SymbolsOutFull_::unsetCurrent_page_backwards()
{
    m_Current_page_backwardsIsSet = false;
}
utility::string_t CursorPage__T_Customized_SymbolsOutFull_::getPreviousPage() const
{
    return m_Previous_page;
}

void CursorPage__T_Customized_SymbolsOutFull_::setPreviousPage(const utility::string_t& value)
{
    m_Previous_page = value;
    m_Previous_pageIsSet = true;
}

bool CursorPage__T_Customized_SymbolsOutFull_::previousPageIsSet() const
{
    return m_Previous_pageIsSet;
}

void CursorPage__T_Customized_SymbolsOutFull_::unsetPrevious_page()
{
    m_Previous_pageIsSet = false;
}
utility::string_t CursorPage__T_Customized_SymbolsOutFull_::getNextPage() const
{
    return m_Next_page;
}

void CursorPage__T_Customized_SymbolsOutFull_::setNextPage(const utility::string_t& value)
{
    m_Next_page = value;
    m_Next_pageIsSet = true;
}

bool CursorPage__T_Customized_SymbolsOutFull_::nextPageIsSet() const
{
    return m_Next_pageIsSet;
}

void CursorPage__T_Customized_SymbolsOutFull_::unsetNext_page()
{
    m_Next_pageIsSet = false;
}
}
}
}
}


