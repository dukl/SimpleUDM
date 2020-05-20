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


#include "ModificationNotification.h"

namespace oai {
namespace udm {
namespace model {

ModificationNotification::ModificationNotification()
{
    
}

ModificationNotification::~ModificationNotification()
{
}

void ModificationNotification::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ModificationNotification& o)
{
    j = nlohmann::json();
    j["notifyItems"] = o.m_NotifyItems;
}

void from_json(const nlohmann::json& j, ModificationNotification& o)
{
    j.at("notifyItems").get_to(o.m_NotifyItems);
}

std::vector<NotifyItem>& ModificationNotification::getNotifyItems()
{
    return m_NotifyItems;
}

}
}
}
