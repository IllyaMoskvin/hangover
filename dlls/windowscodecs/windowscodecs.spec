@ stdcall -private DllCanUnloadNow()
@ stdcall -private DllGetClassObject(ptr ptr ptr)
@ stdcall -private DllRegisterServer()
@ stdcall -private DllUnregisterServer()
@ stub IEnumString_Next_WIC_Proxy
@ stub IEnumString_Reset_WIC_Proxy
# @ stdcall IPropertyBag2_Write_Proxy(ptr long ptr ptr)
# @ stdcall IWICBitmapClipper_Initialize_Proxy(ptr ptr ptr) IWICBitmapClipper_Initialize_Proxy_W
# @ stdcall IWICBitmapCodecInfo_DoesSupportAnimation_Proxy(ptr ptr) IWICBitmapCodecInfo_DoesSupportAnimation_Proxy_W
# @ stdcall IWICBitmapCodecInfo_DoesSupportLossless_Proxy(ptr ptr) IWICBitmapCodecInfo_DoesSupportLossless_Proxy_W
# @ stdcall IWICBitmapCodecInfo_DoesSupportMultiframe_Proxy(ptr ptr) IWICBitmapCodecInfo_DoesSupportMultiframe_Proxy_W
# @ stdcall IWICBitmapCodecInfo_GetContainerFormat_Proxy(ptr ptr) IWICBitmapCodecInfo_GetContainerFormat_Proxy_W
# @ stdcall IWICBitmapCodecInfo_GetDeviceManufacturer_Proxy(ptr long ptr ptr) IWICBitmapCodecInfo_GetDeviceManufacturer_Proxy_W
# @ stdcall IWICBitmapCodecInfo_GetDeviceModels_Proxy(ptr long ptr ptr) IWICBitmapCodecInfo_GetDeviceModels_Proxy_W
# @ stdcall IWICBitmapCodecInfo_GetFileExtensions_Proxy(ptr long ptr ptr) IWICBitmapCodecInfo_GetFileExtensions_Proxy_W
# @ stdcall IWICBitmapCodecInfo_GetMimeTypes_Proxy(ptr long ptr ptr) IWICBitmapCodecInfo_GetMimeTypes_Proxy_W
# @ stdcall IWICBitmapDecoder_CopyPalette_Proxy(ptr ptr) IWICBitmapDecoder_CopyPalette_Proxy_W
# @ stdcall IWICBitmapDecoder_GetColorContexts_Proxy(ptr long ptr ptr) IWICBitmapDecoder_GetColorContexts_Proxy_W
# @ stdcall IWICBitmapDecoder_GetDecoderInfo_Proxy(ptr ptr) IWICBitmapDecoder_GetDecoderInfo_Proxy_W
# @ stdcall IWICBitmapDecoder_GetFrameCount_Proxy(ptr ptr) IWICBitmapDecoder_GetFrameCount_Proxy_W
# @ stdcall IWICBitmapDecoder_GetFrame_Proxy(ptr long ptr) IWICBitmapDecoder_GetFrame_Proxy_W
# @ stdcall IWICBitmapDecoder_GetMetadataQueryReader_Proxy(ptr ptr) IWICBitmapDecoder_GetMetadataQueryReader_Proxy_W
# @ stdcall IWICBitmapDecoder_GetPreview_Proxy(ptr ptr) IWICBitmapDecoder_GetPreview_Proxy_W
# @ stdcall IWICBitmapDecoder_GetThumbnail_Proxy(ptr ptr) IWICBitmapDecoder_GetThumbnail_Proxy_W
# @ stdcall IWICBitmapEncoder_Commit_Proxy(ptr) IWICBitmapEncoder_Commit_Proxy_W
# @ stdcall IWICBitmapEncoder_CreateNewFrame_Proxy(ptr ptr ptr) IWICBitmapEncoder_CreateNewFrame_Proxy_W
# @ stdcall IWICBitmapEncoder_GetEncoderInfo_Proxy(ptr ptr) IWICBitmapEncoder_GetEncoderInfo_Proxy_W
# @ stdcall IWICBitmapEncoder_GetMetadataQueryWriter_Proxy(ptr ptr) IWICBitmapEncoder_GetMetadataQueryWriter_Proxy_W
# @ stdcall IWICBitmapEncoder_Initialize_Proxy(ptr ptr long) IWICBitmapEncoder_Initialize_Proxy_W
# @ stdcall IWICBitmapEncoder_SetPalette_Proxy(ptr ptr) IWICBitmapEncoder_SetPalette_Proxy_W
# @ stdcall IWICBitmapEncoder_SetThumbnail_Proxy(ptr ptr) IWICBitmapEncoder_SetThumbnail_Proxy_W
# @ stdcall IWICBitmapFlipRotator_Initialize_Proxy(ptr ptr long) IWICBitmapFlipRotator_Initialize_Proxy_W
# @ stdcall IWICBitmapFrameDecode_GetColorContexts_Proxy(ptr long ptr ptr) IWICBitmapFrameDecode_GetColorContexts_Proxy_W
# @ stdcall IWICBitmapFrameDecode_GetMetadataQueryReader_Proxy(ptr ptr) IWICBitmapFrameDecode_GetMetadataQueryReader_Proxy_W
# @ stdcall IWICBitmapFrameDecode_GetThumbnail_Proxy(ptr ptr) IWICBitmapFrameDecode_GetThumbnail_Proxy_W
# @ stdcall IWICBitmapFrameEncode_Commit_Proxy(ptr) IWICBitmapFrameEncode_Commit_Proxy_W
# @ stdcall IWICBitmapFrameEncode_GetMetadataQueryWriter_Proxy(ptr ptr) IWICBitmapFrameEncode_GetMetadataQueryWriter_Proxy_W
# @ stdcall IWICBitmapFrameEncode_Initialize_Proxy(ptr ptr) IWICBitmapFrameEncode_Initialize_Proxy_W
# @ stdcall IWICBitmapFrameEncode_SetColorContexts_Proxy(ptr long ptr) IWICBitmapFrameEncode_SetColorContexts_Proxy_W
# @ stdcall IWICBitmapFrameEncode_SetResolution_Proxy(ptr double double) IWICBitmapFrameEncode_SetResolution_Proxy_W
# @ stdcall IWICBitmapFrameEncode_SetSize_Proxy(ptr long long) IWICBitmapFrameEncode_SetSize_Proxy_W
# @ stdcall IWICBitmapFrameEncode_SetThumbnail_Proxy(ptr ptr) IWICBitmapFrameEncode_SetThumbnail_Proxy_W
# @ stdcall IWICBitmapFrameEncode_WriteSource_Proxy(ptr ptr ptr) IWICBitmapFrameEncode_WriteSource_Proxy_W
# @ stdcall IWICBitmapLock_GetDataPointer_STA_Proxy(ptr ptr ptr) IWICBitmapLock_GetDataPointer_Proxy_W
# @ stdcall IWICBitmapLock_GetStride_Proxy(ptr ptr) IWICBitmapLock_GetStride_Proxy_W
# @ stdcall IWICBitmapScaler_Initialize_Proxy(ptr ptr long long long) IWICBitmapScaler_Initialize_Proxy_W
# @ stdcall IWICBitmapSource_CopyPalette_Proxy(ptr ptr) IWICBitmapSource_CopyPalette_Proxy_W
# @ stdcall IWICBitmapSource_CopyPixels_Proxy(ptr ptr long long ptr) IWICBitmapSource_CopyPixels_Proxy_W
# @ stdcall IWICBitmapSource_GetPixelFormat_Proxy(ptr ptr) IWICBitmapSource_GetPixelFormat_Proxy_W
# @ stdcall IWICBitmapSource_GetResolution_Proxy(ptr ptr ptr) IWICBitmapSource_GetResolution_Proxy_W
# @ stdcall IWICBitmapSource_GetSize_Proxy(ptr ptr ptr) IWICBitmapSource_GetSize_Proxy_W
# @ stdcall IWICBitmap_Lock_Proxy(ptr ptr long ptr) IWICBitmap_Lock_Proxy_W
# @ stdcall IWICBitmap_SetPalette_Proxy(ptr ptr) IWICBitmap_SetPalette_Proxy_W
# @ stdcall IWICBitmap_SetResolution_Proxy(ptr double double) IWICBitmap_SetResolution_Proxy_W
# @ stdcall IWICColorContext_InitializeFromMemory_Proxy(ptr ptr long) IWICColorContext_InitializeFromMemory_Proxy_W
# @ stdcall IWICComponentFactory_CreateMetadataWriterFromReader_Proxy(ptr ptr ptr ptr) IWICComponentFactory_CreateMetadataWriterFromReader_Proxy_W
# @ stdcall IWICComponentFactory_CreateQueryWriterFromBlockWriter_Proxy(ptr ptr ptr) IWICComponentFactory_CreateQueryWriterFromBlockWriter_Proxy_W
# @ stdcall IWICComponentInfo_GetAuthor_Proxy(ptr long ptr ptr) IWICComponentInfo_GetAuthor_Proxy_W
# @ stdcall IWICComponentInfo_GetCLSID_Proxy(ptr ptr) IWICComponentInfo_GetCLSID_Proxy_W
# @ stdcall IWICComponentInfo_GetFriendlyName_Proxy(ptr long ptr ptr) IWICComponentInfo_GetFriendlyName_Proxy_W
# @ stdcall IWICComponentInfo_GetSpecVersion_Proxy(ptr long ptr ptr) IWICComponentInfo_GetSpecVersion_Proxy_W
# @ stdcall IWICComponentInfo_GetVersion_Proxy(ptr long ptr ptr) IWICComponentInfo_GetVersion_Proxy_W
# @ stdcall IWICFastMetadataEncoder_Commit_Proxy(ptr) IWICFastMetadataEncoder_Commit_Proxy_W
# @ stdcall IWICFastMetadataEncoder_GetMetadataQueryWriter_Proxy(ptr ptr) IWICFastMetadataEncoder_GetMetadataQueryWriter_Proxy_W
# @ stdcall IWICFormatConverter_Initialize_Proxy(ptr ptr ptr long ptr double long) IWICFormatConverter_Initialize_Proxy_W
# @ stdcall IWICImagingFactory_CreateBitmapClipper_Proxy(ptr ptr) IWICImagingFactory_CreateBitmapClipper_Proxy_W
# @ stdcall IWICImagingFactory_CreateBitmapFlipRotator_Proxy(ptr ptr) IWICImagingFactory_CreateBitmapFlipRotator_Proxy_W
# @ stdcall IWICImagingFactory_CreateBitmapFromHBITMAP_Proxy(ptr ptr ptr long ptr) IWICImagingFactory_CreateBitmapFromHBITMAP_Proxy_W
# @ stdcall IWICImagingFactory_CreateBitmapFromHICON_Proxy(ptr ptr ptr) IWICImagingFactory_CreateBitmapFromHICON_Proxy_W
# @ stdcall IWICImagingFactory_CreateBitmapFromMemory_Proxy(ptr long long ptr long long ptr ptr) IWICImagingFactory_CreateBitmapFromMemory_Proxy_W
# @ stdcall IWICImagingFactory_CreateBitmapFromSource_Proxy(ptr ptr long ptr) IWICImagingFactory_CreateBitmapFromSource_Proxy_W
# @ stdcall IWICImagingFactory_CreateBitmapScaler_Proxy(ptr ptr) IWICImagingFactory_CreateBitmapScaler_Proxy_W
# @ stdcall IWICImagingFactory_CreateBitmap_Proxy(ptr long long ptr long ptr) IWICImagingFactory_CreateBitmap_Proxy_W
# @ stdcall IWICImagingFactory_CreateComponentInfo_Proxy(ptr ptr ptr) IWICImagingFactory_CreateComponentInfo_Proxy_W
# @ stdcall IWICImagingFactory_CreateDecoderFromFileHandle_Proxy(ptr long ptr long ptr) IWICImagingFactory_CreateDecoderFromFileHandle_Proxy_W
# @ stdcall IWICImagingFactory_CreateDecoderFromFilename_Proxy(ptr wstr ptr long long ptr) IWICImagingFactory_CreateDecoderFromFilename_Proxy_W
# @ stdcall IWICImagingFactory_CreateDecoderFromStream_Proxy(ptr ptr ptr long ptr) IWICImagingFactory_CreateDecoderFromStream_Proxy_W
# @ stdcall IWICImagingFactory_CreateEncoder_Proxy(ptr ptr ptr ptr) IWICImagingFactory_CreateEncoder_Proxy_W
# @ stdcall IWICImagingFactory_CreateFastMetadataEncoderFromDecoder_Proxy(ptr ptr ptr) IWICImagingFactory_CreateFastMetadataEncoderFromDecoder_Proxy_W
# @ stdcall IWICImagingFactory_CreateFastMetadataEncoderFromFrameDecode_Proxy(ptr ptr ptr) IWICImagingFactory_CreateFastMetadataEncoderFromFrameDecode_Proxy_W
# @ stdcall IWICImagingFactory_CreateFormatConverter_Proxy(ptr ptr) IWICImagingFactory_CreateFormatConverter_Proxy_W
# @ stdcall IWICImagingFactory_CreatePalette_Proxy(ptr ptr) IWICImagingFactory_CreatePalette_Proxy_W
# @ stdcall IWICImagingFactory_CreateQueryWriterFromReader_Proxy(ptr ptr ptr ptr) IWICImagingFactory_CreateQueryWriterFromReader_Proxy_W
# @ stdcall IWICImagingFactory_CreateQueryWriter_Proxy(ptr ptr ptr ptr) IWICImagingFactory_CreateQueryWriter_Proxy_W
# @ stdcall IWICImagingFactory_CreateStream_Proxy(ptr ptr) IWICImagingFactory_CreateStream_Proxy_W
# @ stdcall IWICMetadataBlockReader_GetCount_Proxy(ptr ptr) IWICMetadataBlockReader_GetCount_Proxy_W
# @ stdcall IWICMetadataBlockReader_GetReaderByIndex_Proxy(ptr long ptr) IWICMetadataBlockReader_GetReaderByIndex_Proxy_W
# @ stdcall IWICMetadataQueryReader_GetContainerFormat_Proxy(ptr ptr) IWICMetadataQueryReader_GetContainerFormat_Proxy_W
# @ stdcall IWICMetadataQueryReader_GetEnumerator_Proxy(ptr ptr) IWICMetadataQueryReader_GetEnumerator_Proxy_W
# @ stdcall IWICMetadataQueryReader_GetLocation_Proxy(ptr long ptr ptr) IWICMetadataQueryReader_GetLocation_Proxy_W
# @ stdcall IWICMetadataQueryReader_GetMetadataByName_Proxy(ptr wstr ptr) IWICMetadataQueryReader_GetMetadataByName_Proxy_W
# @ stdcall IWICMetadataQueryWriter_RemoveMetadataByName_Proxy(ptr wstr) IWICMetadataQueryWriter_RemoveMetadataByName_Proxy_W
# @ stdcall IWICMetadataQueryWriter_SetMetadataByName_Proxy(ptr wstr ptr) IWICMetadataQueryWriter_SetMetadataByName_Proxy_W
# @ stdcall IWICPalette_GetColorCount_Proxy(ptr ptr) IWICPalette_GetColorCount_Proxy_W
# @ stdcall IWICPalette_GetColors_Proxy(ptr long ptr ptr) IWICPalette_GetColors_Proxy_W
# @ stdcall IWICPalette_GetType_Proxy(ptr ptr) IWICPalette_GetType_Proxy_W
# @ stdcall IWICPalette_HasAlpha_Proxy(ptr ptr) IWICPalette_HasAlpha_Proxy_W
# @ stdcall IWICPalette_InitializeCustom_Proxy(ptr ptr long) IWICPalette_InitializeCustom_Proxy_W
# @ stdcall IWICPalette_InitializeFromBitmap_Proxy(ptr ptr long long) IWICPalette_InitializeFromBitmap_Proxy_W
# @ stdcall IWICPalette_InitializeFromPalette_Proxy(ptr ptr) IWICPalette_InitializeFromPalette_Proxy_W
# @ stdcall IWICPalette_InitializePredefined_Proxy(ptr long long) IWICPalette_InitializePredefined_Proxy_W
@ stub IWICPixelFormatInfo_GetBitsPerPixel_Proxy
@ stub IWICPixelFormatInfo_GetChannelCount_Proxy
@ stub IWICPixelFormatInfo_GetChannelMask_Proxy
# @ stdcall IWICStream_InitializeFromIStream_Proxy(ptr ptr) IWICStream_InitializeFromIStream_Proxy_W
# @ stdcall IWICStream_InitializeFromMemory_Proxy(ptr ptr long) IWICStream_InitializeFromMemory_Proxy_W
# @ stdcall WICConvertBitmapSource(ptr ptr ptr)
# @ stdcall WICCreateBitmapFromSection(long long ptr long long long ptr)
# @ stdcall WICCreateBitmapFromSectionEx(long long ptr long long long long ptr)
# @ stdcall WICCreateColorContext_Proxy(ptr ptr)
# @ stdcall WICCreateImagingFactory_Proxy(long ptr)
@ stub WICGetMetadataContentSize
# @ stdcall WICMapGuidToShortName(ptr long ptr ptr)
# @ stdcall WICMapSchemaToName(ptr wstr long ptr ptr)
# @ stdcall WICMapShortNameToGuid(wstr ptr)
@ stub WICMatchMetadataContent
@ stub WICSerializeMetadataContent
# @ stdcall WICSetEncoderFormat_Proxy(ptr ptr ptr ptr)
