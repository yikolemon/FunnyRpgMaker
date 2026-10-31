/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028d0a0 */

PVOID FUN_18028d0a0(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  PVOID pvVar2;
  PVOID lpFlsData;
  PVOID pvVar3;
  
  if (DAT_180415e80 == 0xffffffff) {
    return (PVOID)0x0;
  }
  dwErrCode = GetLastError();
  pvVar2 = FlsGetValue(DAT_180415e80);
  if (pvVar2 != (PVOID)0xffffffffffffffff) {
    if (pvVar2 != (PVOID)0x0) goto LAB_18028d157;
    BVar1 = FlsSetValue(DAT_180415e80,(PVOID)0xffffffffffffffff);
    if (BVar1 != 0) {
      lpFlsData = (PVOID)_calloc_base(1,0x80);
      if ((lpFlsData == (PVOID)0x0) || (BVar1 = FlsSetValue(DAT_180415e80,lpFlsData), BVar1 == 0)) {
        FlsSetValue(DAT_180415e80,(PVOID)0x0);
        pvVar2 = (PVOID)0x0;
        pvVar3 = lpFlsData;
      }
      else {
        *(undefined4 *)((longlong)lpFlsData + 0x78) = 0xfffffffe;
        pvVar3 = (PVOID)0x0;
        pvVar2 = lpFlsData;
      }
      thunk_FUN_180290e40(pvVar3);
      goto LAB_18028d157;
    }
  }
  pvVar2 = (PVOID)0x0;
LAB_18028d157:
  SetLastError(dwErrCode);
  return pvVar2;
}

