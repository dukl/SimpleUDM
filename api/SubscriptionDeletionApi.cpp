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

#include "SubscriptionDeletionApi.h"
#include "Helpers.h"

namespace oai {
namespace udm {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace oai::udm::model;

SubscriptionDeletionApi::SubscriptionDeletionApi(std::shared_ptr<Pistache::Rest::Router> rtr) { 
    router = rtr;
}

void SubscriptionDeletionApi::init() {
    setupRoutes();
}

void SubscriptionDeletionApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Delete(*router, base + "/:supi/sdm-subscriptions/:subscriptionId", Routes::bind(&SubscriptionDeletionApi::unsubscribe_handler, this));

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&SubscriptionDeletionApi::subscription_deletion_api_default_handler, this));
}

void SubscriptionDeletionApi::unsubscribe_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto supi = request.param(":supi").as<std::string>();
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    try {
      this->unsubscribe(supi, subscriptionId, response);
    } catch (nlohmann::detail::exception &e) {
        //send a 400 error
        response.send(Pistache::Http::Code::Bad_Request, e.what());
        return;
    } catch (std::exception &e) {
        //send a 500 error
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
        return;
    }

}

void SubscriptionDeletionApi::subscription_deletion_api_default_handler(const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}
}
}

