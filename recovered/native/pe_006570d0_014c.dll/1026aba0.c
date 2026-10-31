/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026aba0 */

undefined4 FUN_1026aba0(LPCWSTR param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  HANDLE hObject;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_38 [12];
  HANDLE local_8;
  
  if (param_2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_10269012();
    *puVar2 = 0;
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    FUN_10273ea8();
    return 0xffffffff;
  }
  _memset(local_38,0,0x30);
  puVar2 = local_38;
  puVar4 = param_2;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  if (param_1 == (LPCWSTR)0x0) {
    puVar2 = (undefined4 *)FUN_10269012();
    *puVar2 = 0;
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    FUN_10273ea8();
  }
  else {
    hObject = CreateFileW(param_1,0x80,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x2000000,(HANDLE)0x0);
    local_8 = hObject;
    if (hObject == (HANDLE)0xffffffff) {
      cVar1 = FUN_1026ae0e(param_1,param_2);
      if (cVar1 != '\0') {
        return 0;
      }
      _memset(local_38,0,0x30);
      puVar2 = local_38;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *param_2 = *puVar2;
        puVar2 = puVar2 + 1;
        param_2 = param_2 + 1;
      }
    }
    else {
      cVar1 = FUN_1026aca0(param_1,0xffffffff,hObject);
      if (cVar1 != '\0') {
        CloseHandle(hObject);
        return 0;
      }
      _memset(local_38,0,0x30);
      puVar2 = local_38;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *param_2 = *puVar2;
        puVar2 = puVar2 + 1;
        param_2 = param_2 + 1;
      }
      CloseHandle(local_8);
    }
  }
  return 0xffffffff;
}

