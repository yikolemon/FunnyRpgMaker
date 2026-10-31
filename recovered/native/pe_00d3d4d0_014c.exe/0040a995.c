/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040a995 */

LPWSTR __cdecl FUN_0040a995(byte *param_1,UINT *param_2)

{
  size_t sVar1;
  uint uVar2;
  LPWSTR pWVar3;
  uint uVar4;
  byte *pbVar5;
  uint unaff_EDI;
  int iVar6;
  LPWSTR pWStack_28;
  uint uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  WCHAR local_16;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&stack0xffffffd0;
  iVar6 = 0;
  local_1c = 0;
  local_20 = 0;
  sVar1 = _strlen((char *)param_1);
  uVar2 = sVar1 + 1;
  pbVar5 = param_1;
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  else {
    do {
      uVar4 = FUN_004814e0(&local_16,pbVar5,uVar2,&local_20,param_2);
      if ((int)uVar4 < 1) break;
      iVar6 = iVar6 + 1;
      uVar2 = uVar2 - uVar4;
      pbVar5 = pbVar5 + uVar4;
    } while (uVar2 != 0);
    uVar2 = iVar6 + 1;
  }
  pWVar3 = (LPWSTR)FUN_00490470(uVar2,2);
  if (pWVar3 == (LPWSTR)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f870();
  }
  local_1c = 0;
  local_20 = 0;
  pWStack_28 = pWVar3;
  while ((uVar2 != 0 &&
         (uVar4 = FUN_004814e0(pWVar3,param_1,uStack_24,&local_20,param_2), 0 < (int)uVar4))) {
    param_1 = param_1 + uVar4;
    pWVar3 = pWVar3 + 1;
    uVar2 = uVar2 - 1;
  }
  *pWVar3 = L'\0';
  if (DAT_0050e8c0 == (unaff_EDI ^ (uint)&pWStack_28)) {
    return pWStack_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(unaff_EDI ^ (uint)&pWStack_28);
}

