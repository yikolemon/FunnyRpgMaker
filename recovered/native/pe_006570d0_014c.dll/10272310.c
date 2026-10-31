/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10272310 */

PVOID FUN_10272310(void)

{
  DWORD dwErrCode;
  PVOID pvVar1;
  BOOL BVar2;
  PVOID lpFlsData;
  PVOID pvVar3;
  
  if (DAT_1039b3e0 == 0xffffffff) {
    return (PVOID)0x0;
  }
  dwErrCode = GetLastError();
  pvVar1 = FlsGetValue(DAT_1039b3e0);
  if (pvVar1 == (PVOID)0xffffffff) {
LAB_1027234f:
    SetLastError(dwErrCode);
    return (PVOID)0x0;
  }
  if (pvVar1 != (PVOID)0x0) goto LAB_102723a1;
  BVar2 = FlsSetValue(DAT_1039b3e0,(PVOID)0xffffffff);
  if (BVar2 == 0) goto LAB_1027234f;
  lpFlsData = (PVOID)FUN_1026d360(1,0x28);
  if (lpFlsData == (PVOID)0x0) {
LAB_10272381:
    FlsSetValue(DAT_1039b3e0,(PVOID)0x0);
    pvVar1 = (PVOID)0x0;
    pvVar3 = lpFlsData;
  }
  else {
    BVar2 = FlsSetValue(DAT_1039b3e0,lpFlsData);
    if (BVar2 == 0) goto LAB_10272381;
    pvVar3 = (PVOID)0x0;
    pvVar1 = lpFlsData;
  }
  thunk_FUN_10274120(pvVar3);
LAB_102723a1:
  SetLastError(dwErrCode);
  return pvVar1;
}

