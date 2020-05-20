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
 * TraceDataResponse.h
 *
 * 
 */

#ifndef TraceDataResponse_H_
#define TraceDataResponse_H_


#include <string>
#include "TraceData.h"
#include <nlohmann/json.hpp>

namespace oai {
namespace udm {
namespace model {

/// <summary>
/// 
/// </summary>
class  TraceDataResponse
{
public:
    TraceDataResponse();
    virtual ~TraceDataResponse();

    void validate();

    /////////////////////////////////////////////
    /// TraceDataResponse members

    /// <summary>
    /// 
    /// </summary>
    TraceData getTraceData() const;
    void setTraceData(TraceData const& value);
    bool traceDataIsSet() const;
    void unsetTraceData();
    /// <summary>
    /// 
    /// </summary>
    std::string getSharedTraceDataId() const;
    void setSharedTraceDataId(std::string const& value);
    bool sharedTraceDataIdIsSet() const;
    void unsetSharedTraceDataId();

    friend void to_json(nlohmann::json& j, const TraceDataResponse& o);
    friend void from_json(const nlohmann::json& j, TraceDataResponse& o);
protected:
    TraceData m_TraceData;
    bool m_TraceDataIsSet;
    std::string m_SharedTraceDataId;
    bool m_SharedTraceDataIdIsSet;
};

}
}
}

#endif /* TraceDataResponse_H_ */
