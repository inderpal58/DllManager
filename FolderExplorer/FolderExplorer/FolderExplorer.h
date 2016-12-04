#pragma once

#ifdef FOLDEREXPLORER_EXPORTS  
#define FOLDEREXPLORER_API __declspec(dllexport)   
#else  
#define FOLDEREXPLORER_API __declspec(dllimport)   
#endif  

namespace FolderExplorer
{
	class Functions
	{
	public:
		
		static FOLDEREXPLORER_API double Add(double a, double b);

	};
}