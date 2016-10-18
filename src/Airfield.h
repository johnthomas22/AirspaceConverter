//============================================================================
// AirspaceConverter
// Since       : 14/6/2016
// Author      : Alberto Realis-Luc <alberto.realisluc@gmail.com>
// Web         : http://www.alus.it/AirspaceConverter
// Copyright   : (C) 2016 Alberto Realis-Luc
// License     : GNU GPL v3
//
// This source file is part of AirspaceConverter project
//============================================================================

#pragma once
#include "Waypoint.h"

class Airfield: public Waypoint {
public:
	Airfield(std::string& longName, std::string& shortName, std::string& countryCode, double lat, double lon, double alt, int style, int rwyDir, int rwyLen, std::string& freq, std::string& descr)
		: Waypoint(longName, shortName, countryCode, lat, lon, alt, style, descr)
		, runwayDir(rwyDir)
		, runwayLength(rwyLen)
		, radioFreq(freq) {
	}

	virtual ~Airfield() {}

private:
	int runwayDir;    // [deg]
	int runwayLength; // [m]
	std::string radioFreq;

};
