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
 * GroupIdentifiersApi.h
 *
 * 
 */

#ifndef GroupIdentifiersApi_H_
#define GroupIdentifiersApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>


#include "GroupIdentifiers.h"
#include "ProblemDetails.h"
#include <string>

namespace oai {
namespace udm {
namespace api {

using namespace oai::udm::model;

class  GroupIdentifiersApi {
public:
    GroupIdentifiersApi(std::shared_ptr<Pistache::Rest::Router>);
    virtual ~GroupIdentifiersApi() {}
    void init();

    const std::string base = "/nudm-sdm/v2";

private:
    void setupRoutes();

    void get_group_identifiers_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void group_identifiers_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    std::shared_ptr<Pistache::Rest::Router> router;

    /// <summary>
    /// Mapping of Group Identifiers
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="extGroupId">External Group Identifier (optional, default to &quot;&quot;)</param>
    /// <param name="intGroupId">Internal Group Identifier (optional, default to &quot;&quot;)</param>
    /// <param name="supportedFeatures">Supported Features (optional, default to &quot;&quot;)</param>
    /// <param name="ifNoneMatch">Validator for conditional requests, as described in RFC 7232, 3.2 (optional, default to &quot;&quot;)</param>
    /// <param name="ifModifiedSince">Validator for conditional requests, as described in RFC 7232, 3.3 (optional, default to &quot;&quot;)</param>
    virtual void get_group_identifiers(const Pistache::Optional<std::string> &extGroupId, const Pistache::Optional<std::string> &intGroupId, const Pistache::Optional<std::string> &supportedFeatures, const Pistache::Optional<Pistache::Http::Header::Raw> &ifNoneMatch, const Pistache::Optional<Pistache::Http::Header::Raw> &ifModifiedSince, Pistache::Http::ResponseWriter &response) = 0;

};

}
}
}

#endif /* GroupIdentifiersApi_H_ */

