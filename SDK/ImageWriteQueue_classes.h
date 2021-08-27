#pragma once

// Name: BS, Version: 1.536.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class ImageWriteQueue.ImageWriteBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ImageWriteQueue.ImageWriteBlueprintLibrary");
		return ptr;
	}


	void STATIC_ExportToDisk(class UTexture* Texture, const struct FString& FileName, const struct FImageWriteOptions& options);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
