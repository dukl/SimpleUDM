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
 * NiddInformation.h
 *
 * 
 */

#ifndef NiddInformation_H_
#define NiddInformation_H_


#include <string>
#include <nlohmann/json.hpp>

namespace oai {
namespace udm {
namespace model {

/// <summary>
/// 
/// </summary>
class  NiddInformation
{
public:
    NiddInformation();
    virtual ~NiddInformation();

    void validate();

    /////////////////////////////////////////////
    /// NiddInformation members

    /// <summary>
    /// 
    /// </summary>
    std::string getAfInstanceId() const;
    void setAfInstanceId(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    std::string getGpsi() const;
    void setGpsi(std::string const& value);
    bool gpsiIsSet() const;
    void unsetGpsi();

    friend void to_json(nlohmann::json& j, const NiddInformation& o);
    friend void from_json(const nlohmann::json& j, NiddInformation& o);
protected:
    std::string m_AfInstanceId;

    std::string m_Gpsi;
    bool m_GpsiIsSet;
};

}
}
}

#endif /* NiddInformation_H_ */