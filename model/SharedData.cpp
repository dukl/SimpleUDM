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


#include "SharedData.h"

namespace oai {
namespace udm {
namespace model {

SharedData::SharedData()
{
    m_SharedDataId = "";
    m_SharedAmDataIsSet = false;
    m_SharedSmsSubsDataIsSet = false;
    m_SharedSmsMngSubsDataIsSet = false;
    m_SharedDnnConfigurationsIsSet = false;
    m_SharedTraceDataIsSet = false;
    m_SharedSnssaiInfosIsSet = false;
    
}

SharedData::~SharedData()
{
}

void SharedData::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const SharedData& o)
{
    j = nlohmann::json();
    j["sharedDataId"] = o.m_SharedDataId;
    if(o.sharedAmDataIsSet())
        j["sharedAmData"] = o.m_SharedAmData;
    if(o.sharedSmsSubsDataIsSet())
        j["sharedSmsSubsData"] = o.m_SharedSmsSubsData;
    if(o.sharedSmsMngSubsDataIsSet())
        j["sharedSmsMngSubsData"] = o.m_SharedSmsMngSubsData;
    if(o.sharedDnnConfigurationsIsSet())
        j["sharedDnnConfigurations"] = o.m_SharedDnnConfigurations;
    if(o.sharedTraceDataIsSet())
        j["sharedTraceData"] = o.m_SharedTraceData;
    if(o.sharedSnssaiInfosIsSet())
        j["sharedSnssaiInfos"] = o.m_SharedSnssaiInfos;
}

void from_json(const nlohmann::json& j, SharedData& o)
{
    j.at("sharedDataId").get_to(o.m_SharedDataId);
    if(j.find("sharedAmData") != j.end())
    {
        j.at("sharedAmData").get_to(o.m_SharedAmData);
        o.m_SharedAmDataIsSet = true;
    } 
    if(j.find("sharedSmsSubsData") != j.end())
    {
        j.at("sharedSmsSubsData").get_to(o.m_SharedSmsSubsData);
        o.m_SharedSmsSubsDataIsSet = true;
    } 
    if(j.find("sharedSmsMngSubsData") != j.end())
    {
        j.at("sharedSmsMngSubsData").get_to(o.m_SharedSmsMngSubsData);
        o.m_SharedSmsMngSubsDataIsSet = true;
    } 
    if(j.find("sharedDnnConfigurations") != j.end())
    {
        j.at("sharedDnnConfigurations").get_to(o.m_SharedDnnConfigurations);
        o.m_SharedDnnConfigurationsIsSet = true;
    } 
    if(j.find("sharedTraceData") != j.end())
    {
        j.at("sharedTraceData").get_to(o.m_SharedTraceData);
        o.m_SharedTraceDataIsSet = true;
    } 
    if(j.find("sharedSnssaiInfos") != j.end())
    {
        j.at("sharedSnssaiInfos").get_to(o.m_SharedSnssaiInfos);
        o.m_SharedSnssaiInfosIsSet = true;
    } 
}

std::string SharedData::getSharedDataId() const
{
    return m_SharedDataId;
}
void SharedData::setSharedDataId(std::string const& value)
{
    m_SharedDataId = value;
    
}
AccessAndMobilitySubscriptionData SharedData::getSharedAmData() const
{
    return m_SharedAmData;
}
void SharedData::setSharedAmData(AccessAndMobilitySubscriptionData const& value)
{
    m_SharedAmData = value;
    m_SharedAmDataIsSet = true;
}
bool SharedData::sharedAmDataIsSet() const
{
    return m_SharedAmDataIsSet;
}
void SharedData::unsetSharedAmData()
{
    m_SharedAmDataIsSet = false;
}
SmsSubscriptionData SharedData::getSharedSmsSubsData() const
{
    return m_SharedSmsSubsData;
}
void SharedData::setSharedSmsSubsData(SmsSubscriptionData const& value)
{
    m_SharedSmsSubsData = value;
    m_SharedSmsSubsDataIsSet = true;
}
bool SharedData::sharedSmsSubsDataIsSet() const
{
    return m_SharedSmsSubsDataIsSet;
}
void SharedData::unsetSharedSmsSubsData()
{
    m_SharedSmsSubsDataIsSet = false;
}
SmsManagementSubscriptionData SharedData::getSharedSmsMngSubsData() const
{
    return m_SharedSmsMngSubsData;
}
void SharedData::setSharedSmsMngSubsData(SmsManagementSubscriptionData const& value)
{
    m_SharedSmsMngSubsData = value;
    m_SharedSmsMngSubsDataIsSet = true;
}
bool SharedData::sharedSmsMngSubsDataIsSet() const
{
    return m_SharedSmsMngSubsDataIsSet;
}
void SharedData::unsetSharedSmsMngSubsData()
{
    m_SharedSmsMngSubsDataIsSet = false;
}
std::map<std::string, DnnConfiguration>& SharedData::getSharedDnnConfigurations()
{
    return m_SharedDnnConfigurations;
}
bool SharedData::sharedDnnConfigurationsIsSet() const
{
    return m_SharedDnnConfigurationsIsSet;
}
void SharedData::unsetSharedDnnConfigurations()
{
    m_SharedDnnConfigurationsIsSet = false;
}
TraceData SharedData::getSharedTraceData() const
{
    return m_SharedTraceData;
}
void SharedData::setSharedTraceData(TraceData const& value)
{
    m_SharedTraceData = value;
    m_SharedTraceDataIsSet = true;
}
bool SharedData::sharedTraceDataIsSet() const
{
    return m_SharedTraceDataIsSet;
}
void SharedData::unsetSharedTraceData()
{
    m_SharedTraceDataIsSet = false;
}
std::map<std::string, SnssaiInfo>& SharedData::getSharedSnssaiInfos()
{
    return m_SharedSnssaiInfos;
}
bool SharedData::sharedSnssaiInfosIsSet() const
{
    return m_SharedSnssaiInfosIsSet;
}
void SharedData::unsetSharedSnssaiInfos()
{
    m_SharedSnssaiInfosIsSet = false;
}

}
}
}

