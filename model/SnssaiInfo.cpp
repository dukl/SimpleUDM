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


#include "SnssaiInfo.h"

namespace oai {
namespace udm {
namespace model {

SnssaiInfo::SnssaiInfo()
{
    
}

SnssaiInfo::~SnssaiInfo()
{
}

void SnssaiInfo::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const SnssaiInfo& o)
{
    j = nlohmann::json();
    j["dnnInfos"] = o.m_DnnInfos;
}

void from_json(const nlohmann::json& j, SnssaiInfo& o)
{
    j.at("dnnInfos").get_to(o.m_DnnInfos);
}

std::vector<DnnInfo>& SnssaiInfo::getDnnInfos()
{
    return m_DnnInfos;
}

}
}
}
