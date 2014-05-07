#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.30.9200.16384
//
//
///
// Buffer Definitions: 
//
// cbuffer BufferCopyParams
// {
//
//   uint FirstPixelOffset;             // Offset:    0 Size:     4 [unused]
//   uint PixelsPerRow;                 // Offset:    4 Size:     4 [unused]
//   uint RowStride;                    // Offset:    8 Size:     4 [unused]
//   uint RowsPerSlice;                 // Offset:   12 Size:     4 [unused]
//   float2 PositionOffset;             // Offset:   16 Size:     8 [unused]
//   float2 PositionScale;              // Offset:   24 Size:     8 [unused]
//   int2 TexLocationOffset;            // Offset:   32 Size:     8 [unused]
//   int2 TexLocationScale;             // Offset:   40 Size:     8 [unused]
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim Slot Elements
// ------------------------------ ---------- ------- ----------- ---- --------
// Buffer4F                          texture  float4         buf    0        1
// BufferCopyParams                  cbuffer      NA          NA    0        1
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Position              0   xyzw        0      POS   float       
// TEXCOORD                 0   x           1     NONE    uint   x   
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Target                0   xyzw        0   TARGET   float   xyzw
//
ps_4_0
dcl_constantbuffer cb0[1], immediateIndexed
dcl_resource_buffer (float,float,float,float) t0
dcl_input_ps constant v1.x
dcl_output o0.xyzw
ld o0.xyzw, v1.xxxx, t0.xyzw
ret 
// Approximately 2 instruction slots used
#endif

const BYTE g_PS_BufferToTexture_4F[] =
{
     68,  88,  66,  67, 161, 212, 
     38, 156, 243,  82,  97,  91, 
    138,   4,  55, 121,  28,  62, 
    245, 159,   1,   0,   0,   0, 
    216,   3,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    104,   2,   0,   0, 192,   2, 
      0,   0, 244,   2,   0,   0, 
     92,   3,   0,   0,  82,  68, 
     69,  70,  44,   2,   0,   0, 
      1,   0,   0,   0, 120,   0, 
      0,   0,   2,   0,   0,   0, 
     28,   0,   0,   0,   0,   4, 
    255, 255,   0,   1,   0,   0, 
    249,   1,   0,   0,  92,   0, 
      0,   0,   2,   0,   0,   0, 
      5,   0,   0,   0,   1,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0,   1,   0, 
      0,   0,  13,   0,   0,   0, 
    101,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,  66, 117, 102, 102, 
    101, 114,  52,  70,   0,  66, 
    117, 102, 102, 101, 114,  67, 
    111, 112, 121,  80,  97, 114, 
     97, 109, 115,   0, 171, 171, 
    101,   0,   0,   0,   8,   0, 
      0,   0, 144,   0,   0,   0, 
     48,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     80,   1,   0,   0,   0,   0, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0, 100,   1, 
      0,   0,   0,   0,   0,   0, 
    116,   1,   0,   0,   4,   0, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0, 100,   1, 
      0,   0,   0,   0,   0,   0, 
    129,   1,   0,   0,   8,   0, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0, 100,   1, 
      0,   0,   0,   0,   0,   0, 
    139,   1,   0,   0,  12,   0, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0, 100,   1, 
      0,   0,   0,   0,   0,   0, 
    152,   1,   0,   0,  16,   0, 
      0,   0,   8,   0,   0,   0, 
      0,   0,   0,   0, 168,   1, 
      0,   0,   0,   0,   0,   0, 
    184,   1,   0,   0,  24,   0, 
      0,   0,   8,   0,   0,   0, 
      0,   0,   0,   0, 168,   1, 
      0,   0,   0,   0,   0,   0, 
    198,   1,   0,   0,  32,   0, 
      0,   0,   8,   0,   0,   0, 
      0,   0,   0,   0, 216,   1, 
      0,   0,   0,   0,   0,   0, 
    232,   1,   0,   0,  40,   0, 
      0,   0,   8,   0,   0,   0, 
      0,   0,   0,   0, 216,   1, 
      0,   0,   0,   0,   0,   0, 
     70, 105, 114, 115, 116,  80, 
    105, 120, 101, 108,  79, 102, 
    102, 115, 101, 116,   0, 171, 
    171, 171,   0,   0,  19,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     80, 105, 120, 101, 108, 115, 
     80, 101, 114,  82, 111, 119, 
      0,  82, 111, 119,  83, 116, 
    114, 105, 100, 101,   0,  82, 
    111, 119, 115,  80, 101, 114, 
     83, 108, 105,  99, 101,   0, 
     80, 111, 115, 105, 116, 105, 
    111, 110,  79, 102, 102, 115, 
    101, 116,   0, 171,   1,   0, 
      3,   0,   1,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  80, 111, 115, 105, 
    116, 105, 111, 110,  83,  99, 
     97, 108, 101,   0,  84, 101, 
    120,  76, 111,  99,  97, 116, 
    105, 111, 110,  79, 102, 102, 
    115, 101, 116,   0,   1,   0, 
      2,   0,   1,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  84, 101, 120,  76, 
    111,  99,  97, 116, 105, 111, 
    110,  83,  99,  97, 108, 101, 
      0,  77, 105,  99, 114, 111, 
    115, 111, 102, 116,  32,  40, 
     82,  41,  32,  72,  76,  83, 
     76,  32,  83, 104,  97, 100, 
    101, 114,  32,  67, 111, 109, 
    112, 105, 108, 101, 114,  32, 
     57,  46,  51,  48,  46,  57, 
     50,  48,  48,  46,  49,  54, 
     51,  56,  52,   0,  73,  83, 
     71,  78,  80,   0,   0,   0, 
      2,   0,   0,   0,   8,   0, 
      0,   0,  56,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   0, 
      0,   0,  68,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,   1,   1, 
      0,   0,  83,  86,  95,  80, 
    111, 115, 105, 116, 105, 111, 
    110,   0,  84,  69,  88,  67, 
     79,  79,  82,  68,   0, 171, 
    171, 171,  79,  83,  71,  78, 
     44,   0,   0,   0,   1,   0, 
      0,   0,   8,   0,   0,   0, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  15,   0,   0,   0, 
     83,  86,  95,  84,  97, 114, 
    103, 101, 116,   0, 171, 171, 
     83,  72,  68,  82,  96,   0, 
      0,   0,  64,   0,   0,   0, 
     24,   0,   0,   0,  89,   0, 
      0,   4,  70, 142,  32,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,  88,   8,   0,   4, 
      0, 112,  16,   0,   0,   0, 
      0,   0,  85,  85,   0,   0, 
     98,   8,   0,   3,  18,  16, 
     16,   0,   1,   0,   0,   0, 
    101,   0,   0,   3, 242,  32, 
     16,   0,   0,   0,   0,   0, 
     45,   0,   0,   7, 242,  32, 
     16,   0,   0,   0,   0,   0, 
      6,  16,  16,   0,   1,   0, 
      0,   0,  70, 126,  16,   0, 
      0,   0,   0,   0,  62,   0, 
      0,   1,  83,  84,  65,  84, 
    116,   0,   0,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0
};
