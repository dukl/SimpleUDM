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
* ProvidingAcknowledgementOfUEParametersUpdateApiImpl.h
*
* 
*/

#ifndef PROVIDING_ACKNOWLEDGEMENT_OF_UE_PARAMETERS_UPDATE_API_IMPL_H_
#define PROVIDING_ACKNOWLEDGEMENT_OF_UE_PARAMETERS_UPDATE_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <ProvidingAcknowledgementOfUEParametersUpdateApi.h>

#include <pistache/optional.h>

#include "AcknowledgeInfo.h"
#include "ProblemDetails.h"
#include <string>

namespace oai {
namespace udm {
namespace api {

using namespace oai::udm::model;

class ProvidingAcknowledgementOfUEParametersUpdateApiImpl : public oai::udm::api::ProvidingAcknowledgementOfUEParametersUpdateApi {
public:
    ProvidingAcknowledgementOfUEParametersUpdateApiImpl(std::shared_ptr<Pistache::Rest::Router>);
    ~ProvidingAcknowledgementOfUEParametersUpdateApiImpl() {}

    void upu_ack(const std::string &supi, const AcknowledgeInfo &acknowledgeInfo, Pistache::Http::ResponseWriter &response);

};

}
}
}



#endif