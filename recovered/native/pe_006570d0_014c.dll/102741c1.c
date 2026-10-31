/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102741c1 */

void FUN_102741c1(UINT param_1,undefined4 param_2,LPCSTR param_3,int param_4,LPWSTR param_5,
                 int param_6)

{
  DWORD dwFlags;
  
  dwFlags = FUN_102741eb(param_1,param_2);
  MultiByteToWideChar(param_1,dwFlags,param_3,param_4,param_5,param_6);
  return;
}

