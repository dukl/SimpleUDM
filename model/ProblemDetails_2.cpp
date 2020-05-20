/**
* Nudm_SDM
* Nudm Subscriber Data Management Service. � 2019, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
*
* The version of the OpenAPI document: 2.1.0.alpha-1
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "ProblemDetails_2.h"

namespace oai {
namespace udm {
namespace model {

ProblemDetails_2::ProblemDetails_2()
{
    m_Type = "";
    m_TypeIsSet = false;
    m_Title = "";
    m_TitleIsSet = false;
    m_Status = 0;
    m_StatusIsSet = false;
    m_Detail = "";
    m_DetailIsSet = false;
    m_Instance = "";
    m_InstanceIsSet = false;
    m_Cause = "";
    m_CauseIsSet = false;
    m_InvalidParamsIsSet = false;
    m_SupportedFeatures = "";
    m_SupportedFeaturesIsSet = false;
    
}

ProblemDetails_2::~ProblemDetails_2()
{
}

void ProblemDetails_2::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ProblemDetails_2& o)
{
    j = nlohmann::json();
    if(o.typeIsSet())
        j["type"] = o.m_Type;
    if(o.titleIsSet())
        j["title"] = o.m_Title;
    if(o.statusIsSet())
        j["status"] = o.m_Status;
    if(o.detailIsSet())
        j["detail"] = o.m_Detail;
    if(o.instanceIsSet())
        j["instance"] = o.m_Instance;
    if(o.causeIsSet())
        j["cause"] = o.m_Cause;
    if(o.invalidParamsIsSet())
        j["invalidParams"] = o.m_InvalidParams;
    if(o.supportedFeaturesIsSet())
        j["supportedFeatures"] = o.m_SupportedFeatures;
}

void from_json(const nlohmann::json& j, ProblemDetails_2& o)
{
    if(j.find("type") != j.end())
    {
        j.at("type").get_to(o.m_Type);
        o.m_TypeIsSet = true;
    } 
    if(j.find("title") != j.end())
    {
        j.at("title").get_to(o.m_Title);
        o.m_TitleIsSet = true;
    } 
    if(j.find("status") != j.end())
    {
        j.at("status").get_to(o.m_Status);
        o.m_StatusIsSet = true;
    } 
    if(j.find("detail") != j.end())
    {
        j.at("detail").get_to(o.m_Detail);
        o.m_DetailIsSet = true;
    } 
    if(j.find("instance") != j.end())
    {
        j.at("instance").get_to(o.m_Instance);
        o.m_InstanceIsSet = true;
    } 
    if(j.find("cause") != j.end())
    {
        j.at("cause").get_to(o.m_Cause);
        o.m_CauseIsSet = true;
    } 
    if(j.find("invalidParams") != j.end())
    {
        j.at("invalidParams").get_to(o.m_InvalidParams);
        o.m_InvalidParamsIsSet = true;
    } 
    if(j.find("supportedFeatures") != j.end())
    {
        j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
        o.m_SupportedFeaturesIsSet = true;
    } 
}

std::string ProblemDetails_2::getType() const
{
    return m_Type;
}
void ProblemDetails_2::setType(std::string const& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool ProblemDetails_2::typeIsSet() const
{
    return m_TypeIsSet;
}
void ProblemDetails_2::unsetType()
{
    m_TypeIsSet = false;
}
std::string ProblemDetails_2::getTitle() const
{
    return m_Title;
}
void ProblemDetails_2::setTitle(std::string const& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool ProblemDetails_2::titleIsSet() const
{
    return m_TitleIsSet;
}
void ProblemDetails_2::unsetTitle()
{
    m_TitleIsSet = false;
}
int32_t ProblemDetails_2::getStatus() const
{
    return m_Status;
}
void ProblemDetails_2::setStatus(int32_t const value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool ProblemDetails_2::statusIsSet() const
{
    return m_StatusIsSet;
}
void ProblemDetails_2::unsetStatus()
{
    m_StatusIsSet = false;
}
std::string ProblemDetails_2::getDetail() const
{
    return m_Detail;
}
void ProblemDetails_2::setDetail(std::string const& value)
{
    m_Detail = value;
    m_DetailIsSet = true;
}
bool ProblemDetails_2::detailIsSet() const
{
    return m_DetailIsSet;
}
void ProblemDetails_2::unsetDetail()
{
    m_DetailIsSet = false;
}
std::string ProblemDetails_2::getInstance() const
{
    return m_Instance;
}
void ProblemDetails_2::setInstance(std::string const& value)
{
    m_Instance = value;
    m_InstanceIsSet = true;
}
bool ProblemDetails_2::instanceIsSet() const
{
    return m_InstanceIsSet;
}
void ProblemDetails_2::unsetInstance()
{
    m_InstanceIsSet = false;
}
std::string ProblemDetails_2::getCause() const
{
    return m_Cause;
}
void ProblemDetails_2::setCause(std::string const& value)
{
    m_Cause = value;
    m_CauseIsSet = true;
}
bool ProblemDetails_2::causeIsSet() const
{
    return m_CauseIsSet;
}
void ProblemDetails_2::unsetCause()
{
    m_CauseIsSet = false;
}
std::vector<InvalidParam_2>& ProblemDetails_2::getInvalidParams()
{
    return m_InvalidParams;
}
bool ProblemDetails_2::invalidParamsIsSet() const
{
    return m_InvalidParamsIsSet;
}
void ProblemDetails_2::unsetInvalidParams()
{
    m_InvalidParamsIsSet = false;
}
std::string ProblemDetails_2::getSupportedFeatures() const
{
    return m_SupportedFeatures;
}
void ProblemDetails_2::setSupportedFeatures(std::string const& value)
{
    m_SupportedFeatures = value;
    m_SupportedFeaturesIsSet = true;
}
bool ProblemDetails_2::supportedFeaturesIsSet() const
{
    return m_SupportedFeaturesIsSet;
}
void ProblemDetails_2::unsetSupportedFeatures()
{
    m_SupportedFeaturesIsSet = false;
}

}
}
}

