#pragma once

using namespace System;

namespace SupportTracker
{
	namespace Domain
	{
		public ref class SupportContract
		{
		public:
			// Properties
			property int ID;
			property String^ CompanyName;
			property String^ SiteLocation;

			// Constructor
			SupportContract();

			// Any other methods or functions related to this class
		};
	}
}
