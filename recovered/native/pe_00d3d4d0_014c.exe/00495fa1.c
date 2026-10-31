/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00495fa1 */

void __cdecl
FUN_00495fa1(uint param_1,uint param_2,LPCSTR param_3,int param_4,LPWSTR param_5,int param_6)

{
  uint dwFlags;
  
  dwFlags = FUN_00495fcb(param_1,param_2);
  MultiByteToWideChar(param_1,dwFlags,param_3,param_4,param_5,param_6);
  return;
}

