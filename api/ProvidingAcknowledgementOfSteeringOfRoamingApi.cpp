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

#include "ProvidingAcknowledgementOfSteeringOfRoamingApi.h"
#include "Helpers.h"

namespace oai {
namespace udm {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace oai::udm::model;

ProvidingAcknowledgementOfSteeringOfRoamingApi::ProvidingAcknowledgementOfSteeringOfRoamingApi(std::shared_ptr<Pistache::Rest::Router> rtr) { 
    router = rtr;
}

void ProvidingAcknowledgementOfSteeringOfRoamingApi::init() {
    setupRoutes();
}

void ProvidingAcknowledgementOfSteeringOfRoamingApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Put(*router, base + "/:supi/am-data/sor-ack", Routes::bind(&ProvidingAcknowledgementOfSteeringOfRoamingApi::sor_ack_info_handler, this));

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&ProvidingAcknowledgementOfSteeringOfRoamingApi::providing_acknowledgement_of_steering_of_roaming_api_default_handler, this));
}

void ProvidingAcknowledgementOfSteeringOfRoamingApi::sor_ack_info_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto supi = request.param(":supi").as<std::string>();
    
    // Getting the body param
    
    AcknowledgeInfo acknowledgeInfo;
    
    try {
      nlohmann::json::parse(request.body()).get_to(acknowledgeInfo);
      this->sor_ack_info(supi, acknowledgeInfo, response);
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

void ProvidingAcknowledgementOfSteeringOfRoamingApi::providing_acknowledgement_of_steering_of_roaming_api_default_handler(const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}
}
}

