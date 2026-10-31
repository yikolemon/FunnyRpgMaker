/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000a1dd */

LPWSTR FUN_14000a1dd(byte *param_1,UINT *param_2)

{
  uint uVar1;
  size_t sVar2;
  LPWSTR pWVar3;
  ulonglong uVar4;
  LPWSTR pWVar5;
  byte *pbVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStackY_88 [32];
  undefined8 local_60;
  undefined8 local_58;
  WCHAR local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  local_58 = 0;
  sVar2 = strlen((char *)param_1);
  uVar7 = 1;
  uVar4 = sVar2 + 1;
  if (uVar4 != 0) {
    lVar8 = 0;
    uVar7 = uVar4;
    pbVar6 = param_1;
    do {
      uVar1 = FUN_140088b60(&local_4a,pbVar6,uVar7,&local_58,param_2);
      if ((int)uVar1 < 1) break;
      pbVar6 = pbVar6 + uVar1;
      lVar8 = lVar8 + 1;
      uVar7 = uVar7 - uVar1;
    } while (uVar7 != 0);
    uVar7 = lVar8 + 1;
  }
  pWVar3 = _calloc_base(uVar7,2);
  if (pWVar3 == (LPWSTR)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_140086a90();
  }
  local_60 = 0;
  pWVar5 = pWVar3;
  if (uVar7 != 0) {
    do {
      uVar1 = FUN_140088b60(pWVar5,param_1,uVar4,&local_60,param_2);
      if ((int)uVar1 < 1) break;
      param_1 = param_1 + uVar1;
      pWVar5 = pWVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  *pWVar5 = L'\0';
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_88)) {
    return pWVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_88);
}

