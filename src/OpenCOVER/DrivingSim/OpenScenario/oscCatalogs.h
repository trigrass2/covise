/* This file is part of COVISE.

You can use it under the terms of the GNU Lesser General Public License
version 2.1 or later, see lgpl-2.1.txt.

* License: LGPL 2+ */
#ifndef OSC_CATALOGS_H
#define OSC_CATALOGS_H
#include <oscExport.h>
#include <oscObjectBase.h>
#include <oscObjectVariable.h>
#include <oscVariables.h>

#include <oscVehicleCatalog.h>
#include <oscDriverCatalog.h>
#include <oscObserverCatalog.h>
#include <oscPedestrianCatalog.h>
#include <oscMiscObjectCatalog.h>
#include <oscEntityCatalog.h>
#include <oscEnvironmentCatalog.h>
#include <oscManeuverCatalog.h>
#include <oscRoutingCatalog.h>

#include <oscUserData.h>
#include <oscFile.h>

namespace OpenScenario {

/// \class This class represents a generic OpenScenario Object
class OPENSCENARIOEXPORT oscCatalogs: public oscObjectBase
{
public:
    oscCatalogs()
    {
		OSC_OBJECT_ADD_MEMBER(vehicleCatalog,"oscVehicleCatalog");
		OSC_OBJECT_ADD_MEMBER(driverCatalog,"oscDriverCatalog");
		OSC_OBJECT_ADD_MEMBER(observerCatalog,"oscObserverCatalog");
		OSC_OBJECT_ADD_MEMBER(pedestrianCatalog,"oscPedestrianCatalog");
		OSC_OBJECT_ADD_MEMBER(miscObjectCatalog,"oscMiscObjectCatalog");
		OSC_OBJECT_ADD_MEMBER(entityCatalog,"oscEntityCatalog");
		OSC_OBJECT_ADD_MEMBER(environmentCatalog,"oscEnvironmentCatalog");
		OSC_OBJECT_ADD_MEMBER(maneuverCatalog,"oscManeuverCatalog");
		OSC_OBJECT_ADD_MEMBER(routingCatalog,"oscRoutingCatalog");
		OSC_OBJECT_ADD_MEMBER(userData,"oscUserData");
		OSC_OBJECT_ADD_MEMBER(include,"oscFile");
		
    };
	oscVehicleCatalogMember vehicleCatalog;
	oscDriverCatalogMember driverCatalog;
	oscObserverCatalogMember observerCatalog;
	oscPedestrianCatalogMember pedestrianCatalog;
	oscMiscObjectCatalogMember miscObjectCatalog;
	oscEntityCatalogMember entityCatalog;
	oscEnvironmentCatalogMember environmentCatalog;
	oscManeuverCatalogMember maneuverCatalog;
	oscRoutingCatalogMember routingCatalog;
	oscUserDataMember userData;
	oscFileMember include;
    
};

typedef oscObjectVariable<oscCatalogs *> oscCatalogsMember;

}

#endif //OSC_CATALOGS_H
