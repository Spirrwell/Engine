#ifndef DXCCPROPERTY_H
#define DXCCPROPERTY_H

#define DXCCPD_CREATE( _type_, _class_,_rows_, _columns_) ((DXCCPROPERTY_DESC)(((( _type_ ) << 24) & 0xff000000 )|((( _class_ ) << 16) & 0x00ff0000)|((( _rows_ ) << 8) & 0x0000ff00)|((( _columns_ ) << 0) & 0x000000ff)))
#define DXCCPD_GET_TYPE( _desc_ ) ((DXCCPROPERTY_TYPE)((((DWORD)( _desc_ )) >> 24)& 0x000000ff))
#define DXCCPD_GET_CLASS( _desc_ ) ((DXCCPROPERTY_CLASS)((((DWORD)( _desc_ )) >> 16)& 0x000000ff))
#define DXCCPD_GET_ROWS( _desc_ ) ((UINT)((((DWORD)( _desc_ )) >> 8)& 0x000000ff))
#define DXCCPD_GET_COLUMNS( _desc_ ) ((UINT)((((DWORD)( _desc_ )) >> 0)& 0x000000ff))

enum DXCCPROPERTY_CLASS
{
    DXCCPC_SCALAR= 0,
    DXCCPC_VECTOR= 1,
    DXCCPC_MATRIX= 2,
    DXCCPC_OBJECT= 3,
    DXCCPC_INTERFACE= 4,
    DXCCPROPERTY_CLASS_COUNT= 5,
};

enum DXCCPROPERTY_TYPE
{
    DXCCPT_BOOL= 0,
    DXCCPT_INT= 1,
    DXCCPT_FLOAT= 2,
    DXCCPT_STRING= 3,
    DXCCPT_BAG= 4,
    DXCCPT_ARRAY= 5,
    DXCCPT_RESOURCE= 6,
    DXCCPT_UNKNOWN= 7,
    DXCCPROPERTY_TYPE_COUNT= 8,
};



enum DXCCPROPERTY_DESC
{
	DXCCPD_NULL = 0,

	DXCCPD_FLOAT = DXCCPD_CREATE(DXCCPT_FLOAT, DXCCPC_SCALAR, 1, 1),	
	DXCCPD_FLOAT2 = DXCCPD_CREATE(DXCCPT_FLOAT, DXCCPC_VECTOR, 1, 2),	
	DXCCPD_FLOAT3 = DXCCPD_CREATE(DXCCPT_FLOAT, DXCCPC_VECTOR, 1, 3),
	DXCCPD_FLOAT4 = DXCCPD_CREATE(DXCCPT_FLOAT, DXCCPC_VECTOR, 1, 4),
	DXCCPD_FLOAT2X1 = DXCCPD_CREATE(DXCCPT_FLOAT, DXCCPC_MATRIX, 2, 1),	
	DXCCPD_FLOAT2X2 = DXCCPD_CREATE(DXCCPT_FLOAT, DXCCPC_MATRIX, 2, 2),
	DXCCPD_FLOAT2X3 = DXCCPD_CREATE(DXCCPT_FLOAT, DXCCPC_MATRIX, 2, 3),
	DXCCPD_FLOAT2X4 = DXCCPD_CREATE(DXCCPT_FLOAT, DXCCPC_MATRIX, 2, 4),
	DXCCPD_FLOAT3X1 = DXCCPD_CREATE(DXCCPT_FLOAT, DXCCPC_MATRIX, 3, 1),	
	DXCCPD_FLOAT3X2 = DXCCPD_CREATE(DXCCPT_FLOAT, DXCCPC_MATRIX, 3, 2),
	DXCCPD_FLOAT3X3 = DXCCPD_CREATE(DXCCPT_FLOAT, DXCCPC_MATRIX, 3, 3),
	DXCCPD_FLOAT3X4 = DXCCPD_CREATE(DXCCPT_FLOAT, DXCCPC_MATRIX, 3, 4),
	DXCCPD_FLOAT4X1 = DXCCPD_CREATE(DXCCPT_FLOAT, DXCCPC_MATRIX, 4, 1),	
	DXCCPD_FLOAT4X2 = DXCCPD_CREATE(DXCCPT_FLOAT, DXCCPC_MATRIX, 4, 2),
	DXCCPD_FLOAT4X3 = DXCCPD_CREATE(DXCCPT_FLOAT, DXCCPC_MATRIX, 4, 3),
	DXCCPD_FLOAT4X4 = DXCCPD_CREATE(DXCCPT_FLOAT, DXCCPC_MATRIX, 4, 4),

	DXCCPD_INT = DXCCPD_CREATE(DXCCPT_INT, DXCCPC_SCALAR, 1, 1),
	DXCCPD_INT2 = DXCCPD_CREATE(DXCCPT_INT, DXCCPC_VECTOR, 1, 2),
	DXCCPD_INT3 = DXCCPD_CREATE(DXCCPT_INT, DXCCPC_VECTOR, 1, 3),
	DXCCPD_INT4 = DXCCPD_CREATE(DXCCPT_INT, DXCCPC_VECTOR, 1, 4),
	DXCCPD_INT2X1 = DXCCPD_CREATE(DXCCPT_INT, DXCCPC_MATRIX, 2, 1),	
	DXCCPD_INT2X2 = DXCCPD_CREATE(DXCCPT_INT, DXCCPC_MATRIX, 2, 2),
	DXCCPD_INT2X3 = DXCCPD_CREATE(DXCCPT_INT, DXCCPC_MATRIX, 2, 3),
	DXCCPD_INT2X4 = DXCCPD_CREATE(DXCCPT_INT, DXCCPC_MATRIX, 2, 4),
	DXCCPD_INT3X1 = DXCCPD_CREATE(DXCCPT_INT, DXCCPC_MATRIX, 3, 1),	
	DXCCPD_INT3X2 = DXCCPD_CREATE(DXCCPT_INT, DXCCPC_MATRIX, 3, 2),
	DXCCPD_INT3X3 = DXCCPD_CREATE(DXCCPT_INT, DXCCPC_MATRIX, 3, 3),
	DXCCPD_INT3X4 = DXCCPD_CREATE(DXCCPT_INT, DXCCPC_MATRIX, 3, 4),
	DXCCPD_INT4X1 = DXCCPD_CREATE(DXCCPT_INT, DXCCPC_MATRIX, 4, 1),	
	DXCCPD_INT4X2 = DXCCPD_CREATE(DXCCPT_INT, DXCCPC_MATRIX, 4, 2),
	DXCCPD_INT4X3 = DXCCPD_CREATE(DXCCPT_INT, DXCCPC_MATRIX, 4, 3),
	DXCCPD_INT4X4 = DXCCPD_CREATE(DXCCPT_INT, DXCCPC_MATRIX, 4, 4),

	DXCCPD_BOOL = DXCCPD_CREATE(DXCCPT_BOOL, DXCCPC_SCALAR, 1, 1),
	DXCCPD_BOOL2 = DXCCPD_CREATE(DXCCPT_BOOL, DXCCPC_VECTOR, 1, 2),	
	DXCCPD_BOOL3 = DXCCPD_CREATE(DXCCPT_BOOL, DXCCPC_VECTOR, 1, 3),
	DXCCPD_BOOL4 = DXCCPD_CREATE(DXCCPT_BOOL, DXCCPC_VECTOR, 1, 4),
	DXCCPD_BOOL2X1 = DXCCPD_CREATE(DXCCPT_BOOL, DXCCPC_MATRIX, 2, 1),
	DXCCPD_BOOL2X2 = DXCCPD_CREATE(DXCCPT_BOOL, DXCCPC_MATRIX, 2, 2),
	DXCCPD_BOOL2X3 = DXCCPD_CREATE(DXCCPT_BOOL, DXCCPC_MATRIX, 2, 3),
	DXCCPD_BOOL2X4 = DXCCPD_CREATE(DXCCPT_BOOL, DXCCPC_MATRIX, 2, 4),
	DXCCPD_BOOL3X1 = DXCCPD_CREATE(DXCCPT_BOOL, DXCCPC_MATRIX, 3, 1),
	DXCCPD_BOOL3X2 = DXCCPD_CREATE(DXCCPT_BOOL, DXCCPC_MATRIX, 3, 2),
	DXCCPD_BOOL3X3 = DXCCPD_CREATE(DXCCPT_BOOL, DXCCPC_MATRIX, 3, 3),
	DXCCPD_BOOL3X4 = DXCCPD_CREATE(DXCCPT_BOOL, DXCCPC_MATRIX, 3, 4),
	DXCCPD_BOOL4X1 = DXCCPD_CREATE(DXCCPT_BOOL, DXCCPC_MATRIX, 4, 1),
	DXCCPD_BOOL4X2 = DXCCPD_CREATE(DXCCPT_BOOL, DXCCPC_MATRIX, 4, 2),
	DXCCPD_BOOL4X3 = DXCCPD_CREATE(DXCCPT_BOOL, DXCCPC_MATRIX, 4, 3),
	DXCCPD_BOOL4X4 = DXCCPD_CREATE(DXCCPT_BOOL, DXCCPC_MATRIX, 4, 4),

	DXCCPD_STRING = DXCCPD_CREATE(DXCCPT_STRING, DXCCPC_OBJECT, 1, 1),

	DXCCPD_BAG = DXCCPD_CREATE(DXCCPT_BAG, DXCCPC_INTERFACE, 1, 1),
	DXCCPD_ARRAY = DXCCPD_CREATE(DXCCPT_ARRAY, DXCCPC_INTERFACE, 1, 1),
	DXCCPD_RESOURCE = DXCCPD_CREATE(DXCCPT_RESOURCE, DXCCPC_INTERFACE, 1, 1),
	DXCCPD_UNKNOWN = DXCCPD_CREATE(DXCCPT_UNKNOWN, DXCCPC_INTERFACE, 1, 1),

	DXCCPD_FORCE_DWORD= 0x7fffffff,
};

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

size_t WINAPI
DXCCPropertySize(DXCCPROPERTY_DESC desc, LPCVOID value);


bool WINAPI
DXCCPropertyValidate(DXCCPROPERTY_DESC desc);

#ifdef __cplusplus
}
#endif //__cplusplus

#endif