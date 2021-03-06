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
/*
 * SnssaiInfo.h
 *
 * 
 */

#ifndef SnssaiInfo_H_
#define SnssaiInfo_H_


#include <vector>
#include "DnnInfo.h"
#include <nlohmann/json.hpp>

namespace oai {
namespace udm {
namespace model {

/// <summary>
/// 
/// </summary>
class  SnssaiInfo
{
public:
    SnssaiInfo();
    virtual ~SnssaiInfo();

    void validate();

    /////////////////////////////////////////////
    /// SnssaiInfo members

    /// <summary>
    /// 
    /// </summary>
    std::vector<DnnInfo>& getDnnInfos();
    
    friend void to_json(nlohmann::json& j, const SnssaiInfo& o);
    friend void from_json(const nlohmann::json& j, SnssaiInfo& o);
protected:
    std::vector<DnnInfo> m_DnnInfos;

};

}
}
}

#endif /* SnssaiInfo_H_ */
