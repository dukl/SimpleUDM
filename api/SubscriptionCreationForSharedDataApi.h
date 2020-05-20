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
 * SubscriptionCreationForSharedDataApi.h
 *
 * 
 */

#ifndef SubscriptionCreationForSharedDataApi_H_
#define SubscriptionCreationForSharedDataApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>


#include "ProblemDetails.h"
#include "SdmSubscription.h"

namespace oai {
namespace udm {
namespace api {

using namespace oai::udm::model;

class  SubscriptionCreationForSharedDataApi {
public:
    SubscriptionCreationForSharedDataApi(std::shared_ptr<Pistache::Rest::Router>);
    virtual ~SubscriptionCreationForSharedDataApi() {}
    void init();

    const std::string base = "/nudm-sdm/v2";

private:
    void setupRoutes();

    void subscribe_to_shared_data_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void subscription_creation_for_shared_data_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    std::shared_ptr<Pistache::Rest::Router> router;

    /// <summary>
    /// subscribe to notifications for shared data
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="sdmSubscription"></param>
    virtual void subscribe_to_shared_data(const SdmSubscription &sdmSubscription, Pistache::Http::ResponseWriter &response) = 0;

};

}
}
}

#endif /* SubscriptionCreationForSharedDataApi_H_ */

