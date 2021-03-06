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
 * AmbrRm.h
 *
 * 
 */

#ifndef AmbrRm_H_
#define AmbrRm_H_


#include <string>
#include <nlohmann/json.hpp>

namespace oai {
namespace udm {
namespace model {

/// <summary>
/// 
/// </summary>
class  AmbrRm
{
public:
    AmbrRm();
    virtual ~AmbrRm();

    void validate();

    /////////////////////////////////////////////
    /// AmbrRm members

    /// <summary>
    /// 
    /// </summary>
    std::string getUplink() const;
    void setUplink(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    std::string getDownlink() const;
    void setDownlink(std::string const& value);
    
    friend void to_json(nlohmann::json& j, const AmbrRm& o);
    friend void from_json(const nlohmann::json& j, AmbrRm& o);
protected:
    std::string m_Uplink;

    std::string m_Downlink;

};

}
}
}

#endif /* AmbrRm_H_ */
