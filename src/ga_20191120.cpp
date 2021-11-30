// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ga_20191120.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Ga20191120;

Alibabacloud_Ga20191120::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ga"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Ga20191120::Client::getEndpoint(shared_ptr<string> productId,
                                                    shared_ptr<string> regionId,
                                                    shared_ptr<string> endpointRule,
                                                    shared_ptr<string> network,
                                                    shared_ptr<string> suffix,
                                                    shared_ptr<map<string, string>> endpointMap,
                                                    shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

AddEntriesToAclResponse Alibabacloud_Ga20191120::Client::addEntriesToAclWithOptions(shared_ptr<AddEntriesToAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<AddEntriesToAclRequestAclEntries>>("AclEntries", *request->aclEntries));
  query->insert(pair<string, string>("AclId", *request->aclId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddEntriesToAcl"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddEntriesToAclResponse(callApi(params, req, runtime));
}

AddEntriesToAclResponse Alibabacloud_Ga20191120::Client::addEntriesToAcl(shared_ptr<AddEntriesToAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addEntriesToAclWithOptions(request, runtime);
}

AssociateAclsWithListenerResponse Alibabacloud_Ga20191120::Client::associateAclsWithListenerWithOptions(shared_ptr<AssociateAclsWithListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<string>>("AclIds", *request->aclIds));
  query->insert(pair<string, string>("AclType", *request->aclType));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("ListenerId", *request->listenerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociateAclsWithListener"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssociateAclsWithListenerResponse(callApi(params, req, runtime));
}

AssociateAclsWithListenerResponse Alibabacloud_Ga20191120::Client::associateAclsWithListener(shared_ptr<AssociateAclsWithListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateAclsWithListenerWithOptions(request, runtime);
}

AssociateAdditionalCertificatesWithListenerResponse Alibabacloud_Ga20191120::Client::associateAdditionalCertificatesWithListenerWithOptions(shared_ptr<AssociateAdditionalCertificatesWithListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, vector<AssociateAdditionalCertificatesWithListenerRequestCertificates>>("Certificates", *request->certificates));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("ListenerId", *request->listenerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociateAdditionalCertificatesWithListener"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssociateAdditionalCertificatesWithListenerResponse(callApi(params, req, runtime));
}

AssociateAdditionalCertificatesWithListenerResponse Alibabacloud_Ga20191120::Client::associateAdditionalCertificatesWithListener(shared_ptr<AssociateAdditionalCertificatesWithListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateAdditionalCertificatesWithListenerWithOptions(request, runtime);
}

AttachDdosToAcceleratorResponse Alibabacloud_Ga20191120::Client::attachDdosToAcceleratorWithOptions(shared_ptr<AttachDdosToAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("DdosId", *request->ddosId));
  query->insert(pair<string, string>("DdosRegionId", *request->ddosRegionId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachDdosToAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachDdosToAcceleratorResponse(callApi(params, req, runtime));
}

AttachDdosToAcceleratorResponse Alibabacloud_Ga20191120::Client::attachDdosToAccelerator(shared_ptr<AttachDdosToAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachDdosToAcceleratorWithOptions(request, runtime);
}

AttachLogStoreToEndpointGroupResponse Alibabacloud_Ga20191120::Client::attachLogStoreToEndpointGroupWithOptions(shared_ptr<AttachLogStoreToEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, vector<string>>("EndpointGroupIds", *request->endpointGroupIds));
  query->insert(pair<string, string>("ListenerId", *request->listenerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("SlsLogStoreName", *request->slsLogStoreName));
  query->insert(pair<string, string>("SlsProjectName", *request->slsProjectName));
  query->insert(pair<string, string>("SlsRegionId", *request->slsRegionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachLogStoreToEndpointGroup"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachLogStoreToEndpointGroupResponse(callApi(params, req, runtime));
}

AttachLogStoreToEndpointGroupResponse Alibabacloud_Ga20191120::Client::attachLogStoreToEndpointGroup(shared_ptr<AttachLogStoreToEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachLogStoreToEndpointGroupWithOptions(request, runtime);
}

BandwidthPackageAddAcceleratorResponse Alibabacloud_Ga20191120::Client::bandwidthPackageAddAcceleratorWithOptions(shared_ptr<BandwidthPackageAddAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("BandwidthPackageId", *request->bandwidthPackageId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BandwidthPackageAddAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BandwidthPackageAddAcceleratorResponse(callApi(params, req, runtime));
}

BandwidthPackageAddAcceleratorResponse Alibabacloud_Ga20191120::Client::bandwidthPackageAddAccelerator(shared_ptr<BandwidthPackageAddAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bandwidthPackageAddAcceleratorWithOptions(request, runtime);
}

BandwidthPackageRemoveAcceleratorResponse Alibabacloud_Ga20191120::Client::bandwidthPackageRemoveAcceleratorWithOptions(shared_ptr<BandwidthPackageRemoveAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("BandwidthPackageId", *request->bandwidthPackageId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BandwidthPackageRemoveAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BandwidthPackageRemoveAcceleratorResponse(callApi(params, req, runtime));
}

BandwidthPackageRemoveAcceleratorResponse Alibabacloud_Ga20191120::Client::bandwidthPackageRemoveAccelerator(shared_ptr<BandwidthPackageRemoveAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bandwidthPackageRemoveAcceleratorWithOptions(request, runtime);
}

ConfigEndpointProbeResponse Alibabacloud_Ga20191120::Client::configEndpointProbeWithOptions(shared_ptr<ConfigEndpointProbeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Enable", *request->enable));
  query->insert(pair<string, string>("Endpoint", *request->endpoint));
  query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  query->insert(pair<string, string>("EndpointType", *request->endpointType));
  query->insert(pair<string, string>("ProbePort", *request->probePort));
  query->insert(pair<string, string>("ProbeProtocol", *request->probeProtocol));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfigEndpointProbe"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfigEndpointProbeResponse(callApi(params, req, runtime));
}

ConfigEndpointProbeResponse Alibabacloud_Ga20191120::Client::configEndpointProbe(shared_ptr<ConfigEndpointProbeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configEndpointProbeWithOptions(request, runtime);
}

CreateAcceleratorResponse Alibabacloud_Ga20191120::Client::createAcceleratorWithOptions(shared_ptr<CreateAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  query->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  query->insert(pair<string, long>("AutoRenewDuration", *request->autoRenewDuration));
  query->insert(pair<string, string>("AutoUseCoupon", *request->autoUseCoupon));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, long>("Duration", *request->duration));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("Spec", *request->spec));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAcceleratorResponse(callApi(params, req, runtime));
}

CreateAcceleratorResponse Alibabacloud_Ga20191120::Client::createAccelerator(shared_ptr<CreateAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAcceleratorWithOptions(request, runtime);
}

CreateAclResponse Alibabacloud_Ga20191120::Client::createAclWithOptions(shared_ptr<CreateAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<CreateAclRequestAclEntries>>("AclEntries", *request->aclEntries));
  query->insert(pair<string, string>("AclName", *request->aclName));
  query->insert(pair<string, string>("AddressIPVersion", *request->addressIPVersion));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAcl"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAclResponse(callApi(params, req, runtime));
}

CreateAclResponse Alibabacloud_Ga20191120::Client::createAcl(shared_ptr<CreateAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAclWithOptions(request, runtime);
}

CreateBandwidthPackageResponse Alibabacloud_Ga20191120::Client::createBandwidthPackageWithOptions(shared_ptr<CreateBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  query->insert(pair<string, string>("AutoUseCoupon", *request->autoUseCoupon));
  query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  query->insert(pair<string, string>("BandwidthType", *request->bandwidthType));
  query->insert(pair<string, string>("BillingType", *request->billingType));
  query->insert(pair<string, string>("CbnGeographicRegionIdA", *request->cbnGeographicRegionIdA));
  query->insert(pair<string, string>("CbnGeographicRegionIdB", *request->cbnGeographicRegionIdB));
  query->insert(pair<string, string>("ChargeType", *request->chargeType));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Duration", *request->duration));
  query->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
  query->insert(pair<string, long>("Ratio", *request->ratio));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("Type", *request->type));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBandwidthPackage"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBandwidthPackageResponse(callApi(params, req, runtime));
}

CreateBandwidthPackageResponse Alibabacloud_Ga20191120::Client::createBandwidthPackage(shared_ptr<CreateBandwidthPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBandwidthPackageWithOptions(request, runtime);
}

CreateBasicAcceleratorResponse Alibabacloud_Ga20191120::Client::createBasicAcceleratorWithOptions(shared_ptr<CreateBasicAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  query->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  query->insert(pair<string, long>("AutoRenewDuration", *request->autoRenewDuration));
  query->insert(pair<string, string>("AutoUseCoupon", *request->autoUseCoupon));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, long>("Duration", *request->duration));
  query->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBasicAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBasicAcceleratorResponse(callApi(params, req, runtime));
}

CreateBasicAcceleratorResponse Alibabacloud_Ga20191120::Client::createBasicAccelerator(shared_ptr<CreateBasicAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBasicAcceleratorWithOptions(request, runtime);
}

CreateBasicEndpointGroupResponse Alibabacloud_Ga20191120::Client::createBasicEndpointGroupWithOptions(shared_ptr<CreateBasicEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("EndpointAddress", *request->endpointAddress));
  query->insert(pair<string, string>("EndpointGroupRegion", *request->endpointGroupRegion));
  query->insert(pair<string, string>("EndpointType", *request->endpointType));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBasicEndpointGroup"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBasicEndpointGroupResponse(callApi(params, req, runtime));
}

CreateBasicEndpointGroupResponse Alibabacloud_Ga20191120::Client::createBasicEndpointGroup(shared_ptr<CreateBasicEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBasicEndpointGroupWithOptions(request, runtime);
}

CreateBasicIpSetResponse Alibabacloud_Ga20191120::Client::createBasicIpSetWithOptions(shared_ptr<CreateBasicIpSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccelerateRegionId", *request->accelerateRegionId));
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBasicIpSet"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBasicIpSetResponse(callApi(params, req, runtime));
}

CreateBasicIpSetResponse Alibabacloud_Ga20191120::Client::createBasicIpSet(shared_ptr<CreateBasicIpSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBasicIpSetWithOptions(request, runtime);
}

CreateEndpointGroupResponse Alibabacloud_Ga20191120::Client::createEndpointGroupWithOptions(shared_ptr<CreateEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, vector<CreateEndpointGroupRequestEndpointConfigurations>>("EndpointConfigurations", *request->endpointConfigurations));
  query->insert(pair<string, string>("EndpointGroupRegion", *request->endpointGroupRegion));
  query->insert(pair<string, string>("EndpointGroupType", *request->endpointGroupType));
  query->insert(pair<string, string>("EndpointRequestProtocol", *request->endpointRequestProtocol));
  query->insert(pair<string, bool>("HealthCheckEnabled", *request->healthCheckEnabled));
  query->insert(pair<string, long>("HealthCheckIntervalSeconds", *request->healthCheckIntervalSeconds));
  query->insert(pair<string, string>("HealthCheckPath", *request->healthCheckPath));
  query->insert(pair<string, long>("HealthCheckPort", *request->healthCheckPort));
  query->insert(pair<string, string>("HealthCheckProtocol", *request->healthCheckProtocol));
  query->insert(pair<string, string>("ListenerId", *request->listenerId));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, vector<CreateEndpointGroupRequestPortOverrides>>("PortOverrides", *request->portOverrides));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, long>("ThresholdCount", *request->thresholdCount));
  query->insert(pair<string, long>("TrafficPercentage", *request->trafficPercentage));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEndpointGroup"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEndpointGroupResponse(callApi(params, req, runtime));
}

CreateEndpointGroupResponse Alibabacloud_Ga20191120::Client::createEndpointGroup(shared_ptr<CreateEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEndpointGroupWithOptions(request, runtime);
}

CreateEndpointGroupsResponse Alibabacloud_Ga20191120::Client::createEndpointGroupsWithOptions(shared_ptr<CreateEndpointGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, vector<CreateEndpointGroupsRequestEndpointGroupConfigurations>>("EndpointGroupConfigurations", *request->endpointGroupConfigurations));
  query->insert(pair<string, string>("ListenerId", *request->listenerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEndpointGroups"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEndpointGroupsResponse(callApi(params, req, runtime));
}

CreateEndpointGroupsResponse Alibabacloud_Ga20191120::Client::createEndpointGroups(shared_ptr<CreateEndpointGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEndpointGroupsWithOptions(request, runtime);
}

CreateForwardingRulesResponse Alibabacloud_Ga20191120::Client::createForwardingRulesWithOptions(shared_ptr<CreateForwardingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, vector<CreateForwardingRulesRequestForwardingRules>>("ForwardingRules", *request->forwardingRules));
  query->insert(pair<string, string>("ListenerId", *request->listenerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateForwardingRules"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateForwardingRulesResponse(callApi(params, req, runtime));
}

CreateForwardingRulesResponse Alibabacloud_Ga20191120::Client::createForwardingRules(shared_ptr<CreateForwardingRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createForwardingRulesWithOptions(request, runtime);
}

CreateIpSetsResponse Alibabacloud_Ga20191120::Client::createIpSetsWithOptions(shared_ptr<CreateIpSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<CreateIpSetsRequestAccelerateRegion>>("AccelerateRegion", *request->accelerateRegion));
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIpSets"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIpSetsResponse(callApi(params, req, runtime));
}

CreateIpSetsResponse Alibabacloud_Ga20191120::Client::createIpSets(shared_ptr<CreateIpSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createIpSetsWithOptions(request, runtime);
}

CreateListenerResponse Alibabacloud_Ga20191120::Client::createListenerWithOptions(shared_ptr<CreateListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, vector<CreateListenerRequestCertificates>>("Certificates", *request->certificates));
  query->insert(pair<string, string>("ClientAffinity", *request->clientAffinity));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, vector<CreateListenerRequestPortRanges>>("PortRanges", *request->portRanges));
  query->insert(pair<string, string>("Protocol", *request->protocol));
  query->insert(pair<string, bool>("ProxyProtocol", *request->proxyProtocol));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("SecurityPolicyId", *request->securityPolicyId));
  query->insert(pair<string, CreateListenerRequestXForwardedForConfig>("XForwardedForConfig", *request->XForwardedForConfig));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateListener"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateListenerResponse(callApi(params, req, runtime));
}

CreateListenerResponse Alibabacloud_Ga20191120::Client::createListener(shared_ptr<CreateListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createListenerWithOptions(request, runtime);
}

CreateSpareIpsResponse Alibabacloud_Ga20191120::Client::createSpareIpsWithOptions(shared_ptr<CreateSpareIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, vector<string>>("SpareIps", *request->spareIps));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSpareIps"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSpareIpsResponse(callApi(params, req, runtime));
}

CreateSpareIpsResponse Alibabacloud_Ga20191120::Client::createSpareIps(shared_ptr<CreateSpareIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSpareIpsWithOptions(request, runtime);
}

DeleteAcceleratorResponse Alibabacloud_Ga20191120::Client::deleteAcceleratorWithOptions(shared_ptr<DeleteAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAcceleratorResponse(callApi(params, req, runtime));
}

DeleteAcceleratorResponse Alibabacloud_Ga20191120::Client::deleteAccelerator(shared_ptr<DeleteAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAcceleratorWithOptions(request, runtime);
}

DeleteAclResponse Alibabacloud_Ga20191120::Client::deleteAclWithOptions(shared_ptr<DeleteAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AclId", *request->aclId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAcl"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAclResponse(callApi(params, req, runtime));
}

DeleteAclResponse Alibabacloud_Ga20191120::Client::deleteAcl(shared_ptr<DeleteAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAclWithOptions(request, runtime);
}

DeleteBandwidthPackageResponse Alibabacloud_Ga20191120::Client::deleteBandwidthPackageWithOptions(shared_ptr<DeleteBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BandwidthPackageId", *request->bandwidthPackageId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBandwidthPackage"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBandwidthPackageResponse(callApi(params, req, runtime));
}

DeleteBandwidthPackageResponse Alibabacloud_Ga20191120::Client::deleteBandwidthPackage(shared_ptr<DeleteBandwidthPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBandwidthPackageWithOptions(request, runtime);
}

DeleteBasicAcceleratorResponse Alibabacloud_Ga20191120::Client::deleteBasicAcceleratorWithOptions(shared_ptr<DeleteBasicAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBasicAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBasicAcceleratorResponse(callApi(params, req, runtime));
}

DeleteBasicAcceleratorResponse Alibabacloud_Ga20191120::Client::deleteBasicAccelerator(shared_ptr<DeleteBasicAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBasicAcceleratorWithOptions(request, runtime);
}

DeleteBasicEndpointGroupResponse Alibabacloud_Ga20191120::Client::deleteBasicEndpointGroupWithOptions(shared_ptr<DeleteBasicEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBasicEndpointGroup"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBasicEndpointGroupResponse(callApi(params, req, runtime));
}

DeleteBasicEndpointGroupResponse Alibabacloud_Ga20191120::Client::deleteBasicEndpointGroup(shared_ptr<DeleteBasicEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBasicEndpointGroupWithOptions(request, runtime);
}

DeleteBasicIpSetResponse Alibabacloud_Ga20191120::Client::deleteBasicIpSetWithOptions(shared_ptr<DeleteBasicIpSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("IpSetId", *request->ipSetId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBasicIpSet"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBasicIpSetResponse(callApi(params, req, runtime));
}

DeleteBasicIpSetResponse Alibabacloud_Ga20191120::Client::deleteBasicIpSet(shared_ptr<DeleteBasicIpSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBasicIpSetWithOptions(request, runtime);
}

DeleteEndpointGroupResponse Alibabacloud_Ga20191120::Client::deleteEndpointGroupWithOptions(shared_ptr<DeleteEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEndpointGroup"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEndpointGroupResponse(callApi(params, req, runtime));
}

DeleteEndpointGroupResponse Alibabacloud_Ga20191120::Client::deleteEndpointGroup(shared_ptr<DeleteEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEndpointGroupWithOptions(request, runtime);
}

DeleteEndpointGroupsResponse Alibabacloud_Ga20191120::Client::deleteEndpointGroupsWithOptions(shared_ptr<DeleteEndpointGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, vector<string>>("EndpointGroupIds", *request->endpointGroupIds));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEndpointGroups"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEndpointGroupsResponse(callApi(params, req, runtime));
}

DeleteEndpointGroupsResponse Alibabacloud_Ga20191120::Client::deleteEndpointGroups(shared_ptr<DeleteEndpointGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEndpointGroupsWithOptions(request, runtime);
}

DeleteForwardingRulesResponse Alibabacloud_Ga20191120::Client::deleteForwardingRulesWithOptions(shared_ptr<DeleteForwardingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, vector<string>>("ForwardingRuleIds", *request->forwardingRuleIds));
  query->insert(pair<string, string>("ListenerId", *request->listenerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteForwardingRules"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteForwardingRulesResponse(callApi(params, req, runtime));
}

DeleteForwardingRulesResponse Alibabacloud_Ga20191120::Client::deleteForwardingRules(shared_ptr<DeleteForwardingRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteForwardingRulesWithOptions(request, runtime);
}

DeleteIpSetResponse Alibabacloud_Ga20191120::Client::deleteIpSetWithOptions(shared_ptr<DeleteIpSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("IpSetId", *request->ipSetId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIpSet"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIpSetResponse(callApi(params, req, runtime));
}

DeleteIpSetResponse Alibabacloud_Ga20191120::Client::deleteIpSet(shared_ptr<DeleteIpSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteIpSetWithOptions(request, runtime);
}

DeleteIpSetsResponse Alibabacloud_Ga20191120::Client::deleteIpSetsWithOptions(shared_ptr<DeleteIpSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<string>>("IpSetIds", *request->ipSetIds));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIpSets"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIpSetsResponse(callApi(params, req, runtime));
}

DeleteIpSetsResponse Alibabacloud_Ga20191120::Client::deleteIpSets(shared_ptr<DeleteIpSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteIpSetsWithOptions(request, runtime);
}

DeleteListenerResponse Alibabacloud_Ga20191120::Client::deleteListenerWithOptions(shared_ptr<DeleteListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("ListenerId", *request->listenerId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteListener"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteListenerResponse(callApi(params, req, runtime));
}

DeleteListenerResponse Alibabacloud_Ga20191120::Client::deleteListener(shared_ptr<DeleteListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteListenerWithOptions(request, runtime);
}

DeleteSpareIpsResponse Alibabacloud_Ga20191120::Client::deleteSpareIpsWithOptions(shared_ptr<DeleteSpareIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, vector<string>>("SpareIps", *request->spareIps));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSpareIps"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSpareIpsResponse(callApi(params, req, runtime));
}

DeleteSpareIpsResponse Alibabacloud_Ga20191120::Client::deleteSpareIps(shared_ptr<DeleteSpareIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSpareIpsWithOptions(request, runtime);
}

DescribeAcceleratorResponse Alibabacloud_Ga20191120::Client::describeAcceleratorWithOptions(shared_ptr<DescribeAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAcceleratorResponse(callApi(params, req, runtime));
}

DescribeAcceleratorResponse Alibabacloud_Ga20191120::Client::describeAccelerator(shared_ptr<DescribeAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAcceleratorWithOptions(request, runtime);
}

DescribeAcceleratorAutoRenewAttributeResponse Alibabacloud_Ga20191120::Client::describeAcceleratorAutoRenewAttributeWithOptions(shared_ptr<DescribeAcceleratorAutoRenewAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAcceleratorAutoRenewAttribute"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAcceleratorAutoRenewAttributeResponse(callApi(params, req, runtime));
}

DescribeAcceleratorAutoRenewAttributeResponse Alibabacloud_Ga20191120::Client::describeAcceleratorAutoRenewAttribute(shared_ptr<DescribeAcceleratorAutoRenewAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAcceleratorAutoRenewAttributeWithOptions(request, runtime);
}

DescribeBandwidthPackageResponse Alibabacloud_Ga20191120::Client::describeBandwidthPackageWithOptions(shared_ptr<DescribeBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BandwidthPackageId", *request->bandwidthPackageId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBandwidthPackage"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBandwidthPackageResponse(callApi(params, req, runtime));
}

DescribeBandwidthPackageResponse Alibabacloud_Ga20191120::Client::describeBandwidthPackage(shared_ptr<DescribeBandwidthPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBandwidthPackageWithOptions(request, runtime);
}

DescribeEndpointGroupResponse Alibabacloud_Ga20191120::Client::describeEndpointGroupWithOptions(shared_ptr<DescribeEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEndpointGroup"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEndpointGroupResponse(callApi(params, req, runtime));
}

DescribeEndpointGroupResponse Alibabacloud_Ga20191120::Client::describeEndpointGroup(shared_ptr<DescribeEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEndpointGroupWithOptions(request, runtime);
}

DescribeIpSetResponse Alibabacloud_Ga20191120::Client::describeIpSetWithOptions(shared_ptr<DescribeIpSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("IpSetId", *request->ipSetId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeIpSet"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeIpSetResponse(callApi(params, req, runtime));
}

DescribeIpSetResponse Alibabacloud_Ga20191120::Client::describeIpSet(shared_ptr<DescribeIpSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIpSetWithOptions(request, runtime);
}

DescribeListenerResponse Alibabacloud_Ga20191120::Client::describeListenerWithOptions(shared_ptr<DescribeListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ListenerId", *request->listenerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeListener"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeListenerResponse(callApi(params, req, runtime));
}

DescribeListenerResponse Alibabacloud_Ga20191120::Client::describeListener(shared_ptr<DescribeListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeListenerWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Ga20191120::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_Ga20191120::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DetachDdosFromAcceleratorResponse Alibabacloud_Ga20191120::Client::detachDdosFromAcceleratorWithOptions(shared_ptr<DetachDdosFromAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachDdosFromAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachDdosFromAcceleratorResponse(callApi(params, req, runtime));
}

DetachDdosFromAcceleratorResponse Alibabacloud_Ga20191120::Client::detachDdosFromAccelerator(shared_ptr<DetachDdosFromAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachDdosFromAcceleratorWithOptions(request, runtime);
}

DetachLogStoreFromEndpointGroupResponse Alibabacloud_Ga20191120::Client::detachLogStoreFromEndpointGroupWithOptions(shared_ptr<DetachLogStoreFromEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, vector<string>>("EndpointGroupIds", *request->endpointGroupIds));
  query->insert(pair<string, string>("ListenerId", *request->listenerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachLogStoreFromEndpointGroup"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachLogStoreFromEndpointGroupResponse(callApi(params, req, runtime));
}

DetachLogStoreFromEndpointGroupResponse Alibabacloud_Ga20191120::Client::detachLogStoreFromEndpointGroup(shared_ptr<DetachLogStoreFromEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachLogStoreFromEndpointGroupWithOptions(request, runtime);
}

DissociateAclsFromListenerResponse Alibabacloud_Ga20191120::Client::dissociateAclsFromListenerWithOptions(shared_ptr<DissociateAclsFromListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<string>>("AclIds", *request->aclIds));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("ListenerId", *request->listenerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DissociateAclsFromListener"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DissociateAclsFromListenerResponse(callApi(params, req, runtime));
}

DissociateAclsFromListenerResponse Alibabacloud_Ga20191120::Client::dissociateAclsFromListener(shared_ptr<DissociateAclsFromListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dissociateAclsFromListenerWithOptions(request, runtime);
}

DissociateAdditionalCertificatesFromListenerResponse Alibabacloud_Ga20191120::Client::dissociateAdditionalCertificatesFromListenerWithOptions(shared_ptr<DissociateAdditionalCertificatesFromListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, vector<string>>("Domains", *request->domains));
  query->insert(pair<string, string>("ListenerId", *request->listenerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DissociateAdditionalCertificatesFromListener"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DissociateAdditionalCertificatesFromListenerResponse(callApi(params, req, runtime));
}

DissociateAdditionalCertificatesFromListenerResponse Alibabacloud_Ga20191120::Client::dissociateAdditionalCertificatesFromListener(shared_ptr<DissociateAdditionalCertificatesFromListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dissociateAdditionalCertificatesFromListenerWithOptions(request, runtime);
}

GetAclResponse Alibabacloud_Ga20191120::Client::getAclWithOptions(shared_ptr<GetAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AclId", *request->aclId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAcl"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAclResponse(callApi(params, req, runtime));
}

GetAclResponse Alibabacloud_Ga20191120::Client::getAcl(shared_ptr<GetAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAclWithOptions(request, runtime);
}

GetBasicAcceleratorResponse Alibabacloud_Ga20191120::Client::getBasicAcceleratorWithOptions(shared_ptr<GetBasicAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBasicAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBasicAcceleratorResponse(callApi(params, req, runtime));
}

GetBasicAcceleratorResponse Alibabacloud_Ga20191120::Client::getBasicAccelerator(shared_ptr<GetBasicAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBasicAcceleratorWithOptions(request, runtime);
}

GetBasicEndpointGroupResponse Alibabacloud_Ga20191120::Client::getBasicEndpointGroupWithOptions(shared_ptr<GetBasicEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBasicEndpointGroup"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBasicEndpointGroupResponse(callApi(params, req, runtime));
}

GetBasicEndpointGroupResponse Alibabacloud_Ga20191120::Client::getBasicEndpointGroup(shared_ptr<GetBasicEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBasicEndpointGroupWithOptions(request, runtime);
}

GetBasicIpSetResponse Alibabacloud_Ga20191120::Client::getBasicIpSetWithOptions(shared_ptr<GetBasicIpSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("IpSetId", *request->ipSetId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBasicIpSet"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBasicIpSetResponse(callApi(params, req, runtime));
}

GetBasicIpSetResponse Alibabacloud_Ga20191120::Client::getBasicIpSet(shared_ptr<GetBasicIpSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBasicIpSetWithOptions(request, runtime);
}

GetHealthStatusResponse Alibabacloud_Ga20191120::Client::getHealthStatusWithOptions(shared_ptr<GetHealthStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("ListenerId", *request->listenerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHealthStatus"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHealthStatusResponse(callApi(params, req, runtime));
}

GetHealthStatusResponse Alibabacloud_Ga20191120::Client::getHealthStatus(shared_ptr<GetHealthStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHealthStatusWithOptions(request, runtime);
}

GetSpareIpResponse Alibabacloud_Ga20191120::Client::getSpareIpWithOptions(shared_ptr<GetSpareIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("SpareIp", *request->spareIp));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSpareIp"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSpareIpResponse(callApi(params, req, runtime));
}

GetSpareIpResponse Alibabacloud_Ga20191120::Client::getSpareIp(shared_ptr<GetSpareIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSpareIpWithOptions(request, runtime);
}

ListAccelerateAreasResponse Alibabacloud_Ga20191120::Client::listAccelerateAreasWithOptions(shared_ptr<ListAccelerateAreasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAccelerateAreas"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAccelerateAreasResponse(callApi(params, req, runtime));
}

ListAccelerateAreasResponse Alibabacloud_Ga20191120::Client::listAccelerateAreas(shared_ptr<ListAccelerateAreasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAccelerateAreasWithOptions(request, runtime);
}

ListAcceleratorsResponse Alibabacloud_Ga20191120::Client::listAcceleratorsWithOptions(shared_ptr<ListAcceleratorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("State", *request->state));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAccelerators"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAcceleratorsResponse(callApi(params, req, runtime));
}

ListAcceleratorsResponse Alibabacloud_Ga20191120::Client::listAccelerators(shared_ptr<ListAcceleratorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAcceleratorsWithOptions(request, runtime);
}

ListAclsResponse Alibabacloud_Ga20191120::Client::listAclsWithOptions(shared_ptr<ListAclsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<string>>("AclIds", *request->aclIds));
  query->insert(pair<string, string>("AclName", *request->aclName));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAcls"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAclsResponse(callApi(params, req, runtime));
}

ListAclsResponse Alibabacloud_Ga20191120::Client::listAcls(shared_ptr<ListAclsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAclsWithOptions(request, runtime);
}

ListAvailableAccelerateAreasResponse Alibabacloud_Ga20191120::Client::listAvailableAccelerateAreasWithOptions(shared_ptr<ListAvailableAccelerateAreasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAvailableAccelerateAreas"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAvailableAccelerateAreasResponse(callApi(params, req, runtime));
}

ListAvailableAccelerateAreasResponse Alibabacloud_Ga20191120::Client::listAvailableAccelerateAreas(shared_ptr<ListAvailableAccelerateAreasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAvailableAccelerateAreasWithOptions(request, runtime);
}

ListAvailableBusiRegionsResponse Alibabacloud_Ga20191120::Client::listAvailableBusiRegionsWithOptions(shared_ptr<ListAvailableBusiRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAvailableBusiRegions"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAvailableBusiRegionsResponse(callApi(params, req, runtime));
}

ListAvailableBusiRegionsResponse Alibabacloud_Ga20191120::Client::listAvailableBusiRegions(shared_ptr<ListAvailableBusiRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAvailableBusiRegionsWithOptions(request, runtime);
}

ListBandwidthPackagesResponse Alibabacloud_Ga20191120::Client::listBandwidthPackagesWithOptions(shared_ptr<ListBandwidthPackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BandwidthPackageId", *request->bandwidthPackageId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("State", *request->state));
  query->insert(pair<string, string>("Type", *request->type));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBandwidthPackages"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBandwidthPackagesResponse(callApi(params, req, runtime));
}

ListBandwidthPackagesResponse Alibabacloud_Ga20191120::Client::listBandwidthPackages(shared_ptr<ListBandwidthPackagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBandwidthPackagesWithOptions(request, runtime);
}

ListBandwidthackagesResponse Alibabacloud_Ga20191120::Client::listBandwidthackagesWithOptions(shared_ptr<ListBandwidthackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBandwidthackages"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBandwidthackagesResponse(callApi(params, req, runtime));
}

ListBandwidthackagesResponse Alibabacloud_Ga20191120::Client::listBandwidthackages(shared_ptr<ListBandwidthackagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBandwidthackagesWithOptions(request, runtime);
}

ListBasicAcceleratorsResponse Alibabacloud_Ga20191120::Client::listBasicAcceleratorsWithOptions(shared_ptr<ListBasicAcceleratorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("State", *request->state));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBasicAccelerators"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBasicAcceleratorsResponse(callApi(params, req, runtime));
}

ListBasicAcceleratorsResponse Alibabacloud_Ga20191120::Client::listBasicAccelerators(shared_ptr<ListBasicAcceleratorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBasicAcceleratorsWithOptions(request, runtime);
}

ListBusiRegionsResponse Alibabacloud_Ga20191120::Client::listBusiRegionsWithOptions(shared_ptr<ListBusiRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBusiRegions"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBusiRegionsResponse(callApi(params, req, runtime));
}

ListBusiRegionsResponse Alibabacloud_Ga20191120::Client::listBusiRegions(shared_ptr<ListBusiRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBusiRegionsWithOptions(request, runtime);
}

ListEndpointGroupsResponse Alibabacloud_Ga20191120::Client::listEndpointGroupsWithOptions(shared_ptr<ListEndpointGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("AccessLogSwitch", *request->accessLogSwitch));
  query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  query->insert(pair<string, string>("EndpointGroupType", *request->endpointGroupType));
  query->insert(pair<string, string>("ListenerId", *request->listenerId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEndpointGroups"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEndpointGroupsResponse(callApi(params, req, runtime));
}

ListEndpointGroupsResponse Alibabacloud_Ga20191120::Client::listEndpointGroups(shared_ptr<ListEndpointGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEndpointGroupsWithOptions(request, runtime);
}

ListForwardingRulesResponse Alibabacloud_Ga20191120::Client::listForwardingRulesWithOptions(shared_ptr<ListForwardingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("ForwardingRuleId", *request->forwardingRuleId));
  query->insert(pair<string, string>("ListenerId", *request->listenerId));
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListForwardingRules"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListForwardingRulesResponse(callApi(params, req, runtime));
}

ListForwardingRulesResponse Alibabacloud_Ga20191120::Client::listForwardingRules(shared_ptr<ListForwardingRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listForwardingRulesWithOptions(request, runtime);
}

ListIpSetsResponse Alibabacloud_Ga20191120::Client::listIpSetsWithOptions(shared_ptr<ListIpSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIpSets"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIpSetsResponse(callApi(params, req, runtime));
}

ListIpSetsResponse Alibabacloud_Ga20191120::Client::listIpSets(shared_ptr<ListIpSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIpSetsWithOptions(request, runtime);
}

ListListenerCertificatesResponse Alibabacloud_Ga20191120::Client::listListenerCertificatesWithOptions(shared_ptr<ListListenerCertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("ListenerId", *request->listenerId));
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("Role", *request->role));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListListenerCertificates"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListListenerCertificatesResponse(callApi(params, req, runtime));
}

ListListenerCertificatesResponse Alibabacloud_Ga20191120::Client::listListenerCertificates(shared_ptr<ListListenerCertificatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listListenerCertificatesWithOptions(request, runtime);
}

ListListenersResponse Alibabacloud_Ga20191120::Client::listListenersWithOptions(shared_ptr<ListListenersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListListeners"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListListenersResponse(callApi(params, req, runtime));
}

ListListenersResponse Alibabacloud_Ga20191120::Client::listListeners(shared_ptr<ListListenersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listListenersWithOptions(request, runtime);
}

ListSpareIpsResponse Alibabacloud_Ga20191120::Client::listSpareIpsWithOptions(shared_ptr<ListSpareIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSpareIps"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSpareIpsResponse(callApi(params, req, runtime));
}

ListSpareIpsResponse Alibabacloud_Ga20191120::Client::listSpareIps(shared_ptr<ListSpareIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSpareIpsWithOptions(request, runtime);
}

ListSystemSecurityPoliciesResponse Alibabacloud_Ga20191120::Client::listSystemSecurityPoliciesWithOptions(shared_ptr<ListSystemSecurityPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSystemSecurityPolicies"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSystemSecurityPoliciesResponse(callApi(params, req, runtime));
}

ListSystemSecurityPoliciesResponse Alibabacloud_Ga20191120::Client::listSystemSecurityPolicies(shared_ptr<ListSystemSecurityPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSystemSecurityPoliciesWithOptions(request, runtime);
}

RemoveEntriesFromAclResponse Alibabacloud_Ga20191120::Client::removeEntriesFromAclWithOptions(shared_ptr<RemoveEntriesFromAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<RemoveEntriesFromAclRequestAclEntries>>("AclEntries", *request->aclEntries));
  query->insert(pair<string, string>("AclId", *request->aclId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveEntriesFromAcl"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveEntriesFromAclResponse(callApi(params, req, runtime));
}

RemoveEntriesFromAclResponse Alibabacloud_Ga20191120::Client::removeEntriesFromAcl(shared_ptr<RemoveEntriesFromAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeEntriesFromAclWithOptions(request, runtime);
}

ReplaceBandwidthPackageResponse Alibabacloud_Ga20191120::Client::replaceBandwidthPackageWithOptions(shared_ptr<ReplaceBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BandwidthPackageId", *request->bandwidthPackageId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("TargetBandwidthPackageId", *request->targetBandwidthPackageId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReplaceBandwidthPackage"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReplaceBandwidthPackageResponse(callApi(params, req, runtime));
}

ReplaceBandwidthPackageResponse Alibabacloud_Ga20191120::Client::replaceBandwidthPackage(shared_ptr<ReplaceBandwidthPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return replaceBandwidthPackageWithOptions(request, runtime);
}

UpdateAcceleratorResponse Alibabacloud_Ga20191120::Client::updateAcceleratorWithOptions(shared_ptr<UpdateAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  query->insert(pair<string, bool>("AutoUseCoupon", *request->autoUseCoupon));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("Spec", *request->spec));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAcceleratorResponse(callApi(params, req, runtime));
}

UpdateAcceleratorResponse Alibabacloud_Ga20191120::Client::updateAccelerator(shared_ptr<UpdateAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAcceleratorWithOptions(request, runtime);
}

UpdateAcceleratorAutoRenewAttributeResponse Alibabacloud_Ga20191120::Client::updateAcceleratorAutoRenewAttributeWithOptions(shared_ptr<UpdateAcceleratorAutoRenewAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  query->insert(pair<string, long>("AutoRenewDuration", *request->autoRenewDuration));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("RenewalStatus", *request->renewalStatus));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAcceleratorAutoRenewAttribute"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAcceleratorAutoRenewAttributeResponse(callApi(params, req, runtime));
}

UpdateAcceleratorAutoRenewAttributeResponse Alibabacloud_Ga20191120::Client::updateAcceleratorAutoRenewAttribute(shared_ptr<UpdateAcceleratorAutoRenewAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAcceleratorAutoRenewAttributeWithOptions(request, runtime);
}

UpdateAcceleratorConfirmResponse Alibabacloud_Ga20191120::Client::updateAcceleratorConfirmWithOptions(shared_ptr<UpdateAcceleratorConfirmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAcceleratorConfirm"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAcceleratorConfirmResponse(callApi(params, req, runtime));
}

UpdateAcceleratorConfirmResponse Alibabacloud_Ga20191120::Client::updateAcceleratorConfirm(shared_ptr<UpdateAcceleratorConfirmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAcceleratorConfirmWithOptions(request, runtime);
}

UpdateAclAttributeResponse Alibabacloud_Ga20191120::Client::updateAclAttributeWithOptions(shared_ptr<UpdateAclAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AclId", *request->aclId));
  query->insert(pair<string, string>("AclName", *request->aclName));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAclAttribute"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAclAttributeResponse(callApi(params, req, runtime));
}

UpdateAclAttributeResponse Alibabacloud_Ga20191120::Client::updateAclAttribute(shared_ptr<UpdateAclAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAclAttributeWithOptions(request, runtime);
}

UpdateBandwidthPackageResponse Alibabacloud_Ga20191120::Client::updateBandwidthPackageWithOptions(shared_ptr<UpdateBandwidthPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  query->insert(pair<string, bool>("AutoUseCoupon", *request->autoUseCoupon));
  query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  query->insert(pair<string, string>("BandwidthPackageId", *request->bandwidthPackageId));
  query->insert(pair<string, string>("BandwidthType", *request->bandwidthType));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBandwidthPackage"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBandwidthPackageResponse(callApi(params, req, runtime));
}

UpdateBandwidthPackageResponse Alibabacloud_Ga20191120::Client::updateBandwidthPackage(shared_ptr<UpdateBandwidthPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBandwidthPackageWithOptions(request, runtime);
}

UpdateBasicAcceleratorResponse Alibabacloud_Ga20191120::Client::updateBasicAcceleratorWithOptions(shared_ptr<UpdateBasicAcceleratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBasicAccelerator"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBasicAcceleratorResponse(callApi(params, req, runtime));
}

UpdateBasicAcceleratorResponse Alibabacloud_Ga20191120::Client::updateBasicAccelerator(shared_ptr<UpdateBasicAcceleratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBasicAcceleratorWithOptions(request, runtime);
}

UpdateBasicEndpointGroupResponse Alibabacloud_Ga20191120::Client::updateBasicEndpointGroupWithOptions(shared_ptr<UpdateBasicEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("EndpointAddress", *request->endpointAddress));
  query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  query->insert(pair<string, string>("EndpointType", *request->endpointType));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBasicEndpointGroup"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBasicEndpointGroupResponse(callApi(params, req, runtime));
}

UpdateBasicEndpointGroupResponse Alibabacloud_Ga20191120::Client::updateBasicEndpointGroup(shared_ptr<UpdateBasicEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBasicEndpointGroupWithOptions(request, runtime);
}

UpdateEndpointGroupResponse Alibabacloud_Ga20191120::Client::updateEndpointGroupWithOptions(shared_ptr<UpdateEndpointGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, vector<UpdateEndpointGroupRequestEndpointConfigurations>>("EndpointConfigurations", *request->endpointConfigurations));
  query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  query->insert(pair<string, string>("EndpointGroupRegion", *request->endpointGroupRegion));
  query->insert(pair<string, string>("EndpointRequestProtocol", *request->endpointRequestProtocol));
  query->insert(pair<string, bool>("HealthCheckEnabled", *request->healthCheckEnabled));
  query->insert(pair<string, long>("HealthCheckIntervalSeconds", *request->healthCheckIntervalSeconds));
  query->insert(pair<string, string>("HealthCheckPath", *request->healthCheckPath));
  query->insert(pair<string, long>("HealthCheckPort", *request->healthCheckPort));
  query->insert(pair<string, string>("HealthCheckProtocol", *request->healthCheckProtocol));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, vector<UpdateEndpointGroupRequestPortOverrides>>("PortOverrides", *request->portOverrides));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, long>("ThresholdCount", *request->thresholdCount));
  query->insert(pair<string, long>("TrafficPercentage", *request->trafficPercentage));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEndpointGroup"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEndpointGroupResponse(callApi(params, req, runtime));
}

UpdateEndpointGroupResponse Alibabacloud_Ga20191120::Client::updateEndpointGroup(shared_ptr<UpdateEndpointGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEndpointGroupWithOptions(request, runtime);
}

UpdateEndpointGroupAttributeResponse Alibabacloud_Ga20191120::Client::updateEndpointGroupAttributeWithOptions(shared_ptr<UpdateEndpointGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("EndpointGroupId", *request->endpointGroupId));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEndpointGroupAttribute"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEndpointGroupAttributeResponse(callApi(params, req, runtime));
}

UpdateEndpointGroupAttributeResponse Alibabacloud_Ga20191120::Client::updateEndpointGroupAttribute(shared_ptr<UpdateEndpointGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEndpointGroupAttributeWithOptions(request, runtime);
}

UpdateEndpointGroupsResponse Alibabacloud_Ga20191120::Client::updateEndpointGroupsWithOptions(shared_ptr<UpdateEndpointGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, vector<UpdateEndpointGroupsRequestEndpointGroupConfigurations>>("EndpointGroupConfigurations", *request->endpointGroupConfigurations));
  query->insert(pair<string, string>("ListenerId", *request->listenerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEndpointGroups"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEndpointGroupsResponse(callApi(params, req, runtime));
}

UpdateEndpointGroupsResponse Alibabacloud_Ga20191120::Client::updateEndpointGroups(shared_ptr<UpdateEndpointGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEndpointGroupsWithOptions(request, runtime);
}

UpdateForwardingRulesResponse Alibabacloud_Ga20191120::Client::updateForwardingRulesWithOptions(shared_ptr<UpdateForwardingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceleratorId", *request->acceleratorId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, vector<UpdateForwardingRulesRequestForwardingRules>>("ForwardingRules", *request->forwardingRules));
  query->insert(pair<string, string>("ListenerId", *request->listenerId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateForwardingRules"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateForwardingRulesResponse(callApi(params, req, runtime));
}

UpdateForwardingRulesResponse Alibabacloud_Ga20191120::Client::updateForwardingRules(shared_ptr<UpdateForwardingRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateForwardingRulesWithOptions(request, runtime);
}

UpdateIpSetResponse Alibabacloud_Ga20191120::Client::updateIpSetWithOptions(shared_ptr<UpdateIpSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("IpSetId", *request->ipSetId));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateIpSet"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateIpSetResponse(callApi(params, req, runtime));
}

UpdateIpSetResponse Alibabacloud_Ga20191120::Client::updateIpSet(shared_ptr<UpdateIpSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIpSetWithOptions(request, runtime);
}

UpdateIpSetsResponse Alibabacloud_Ga20191120::Client::updateIpSetsWithOptions(shared_ptr<UpdateIpSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<UpdateIpSetsRequestIpSets>>("IpSets", *request->ipSets));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateIpSets"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateIpSetsResponse(callApi(params, req, runtime));
}

UpdateIpSetsResponse Alibabacloud_Ga20191120::Client::updateIpSets(shared_ptr<UpdateIpSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIpSetsWithOptions(request, runtime);
}

UpdateListenerResponse Alibabacloud_Ga20191120::Client::updateListenerWithOptions(shared_ptr<UpdateListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<UpdateListenerRequestBackendPorts>>("BackendPorts", *request->backendPorts));
  query->insert(pair<string, vector<UpdateListenerRequestCertificates>>("Certificates", *request->certificates));
  query->insert(pair<string, string>("ClientAffinity", *request->clientAffinity));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("ListenerId", *request->listenerId));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, vector<UpdateListenerRequestPortRanges>>("PortRanges", *request->portRanges));
  query->insert(pair<string, string>("Protocol", *request->protocol));
  query->insert(pair<string, string>("ProxyProtocol", *request->proxyProtocol));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("SecurityPolicyId", *request->securityPolicyId));
  query->insert(pair<string, UpdateListenerRequestXForwardedForConfig>("XForwardedForConfig", *request->XForwardedForConfig));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateListener"))},
    {"version", boost::any(string("2019-11-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateListenerResponse(callApi(params, req, runtime));
}

UpdateListenerResponse Alibabacloud_Ga20191120::Client::updateListener(shared_ptr<UpdateListenerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateListenerWithOptions(request, runtime);
}

