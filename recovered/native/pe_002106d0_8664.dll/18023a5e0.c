/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023a5e0 */

ulonglong FUN_18023a5e0(UINT param_1,LPCSTR param_2,int param_3,LPWSTR param_4,int param_5)

{
  uint uVar1;
  DWORD DVar2;
  
  uVar1 = MultiByteToWideChar(param_1,8,param_2,param_3,param_4,param_5);
  if (uVar1 == 0) {
    DVar2 = GetLastError();
    return (ulonglong)DVar2 << 0x20;
  }
  return (ulonglong)uVar1;
}

