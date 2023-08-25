#pragma once

using namespace System;

namespace SupportTracker
{
	namespace Domain
	{
		public ref class SiteContact
		{
		public:
			// Properties
			property int ID;
			property String^ Name;

			// Constructor
			SiteContact();

			// Any other methods or functions related to this class
		};
	}
}
