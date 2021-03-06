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
* RetrievalOfSharedDataApiImpl.h
*
* 
*/

#ifndef RETRIEVAL_OF_SHARED_DATA_API_IMPL_H_
#define RETRIEVAL_OF_SHARED_DATA_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <RetrievalOfSharedDataApi.h>

#include <pistache/optional.h>

#include "ProblemDetails.h"
#include "SharedData.h"
#include <string>

namespace oai {
namespace udm {
namespace api {

using namespace oai::udm::model;

class RetrievalOfSharedDataApiImpl : public oai::udm::api::RetrievalOfSharedDataApi {
public:
    RetrievalOfSharedDataApiImpl(std::shared_ptr<Pistache::Rest::Router>);
    ~RetrievalOfSharedDataApiImpl() {}

    void get_shared_data(const Pistache::Optional<std::vector<std::string>> &sharedDataIds, const Pistache::Optional<std::string> &supportedFeatures, const Pistache::Optional<Pistache::Http::Header::Raw> &ifNoneMatch, const Pistache::Optional<Pistache::Http::Header::Raw> &ifModifiedSince, Pistache::Http::ResponseWriter &response);

};

}
}
}



#endif