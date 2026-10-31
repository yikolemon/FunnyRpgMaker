/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a8940 */

bool FUN_1400a8940(uint param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  longlong lVar4;
  short *psVar5;
  bool bVar6;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  lVar4 = FUN_1400a1528();
  iVar3 = GetLocaleInfoW(param_1 & 0x3ff | 0x400,0x20000001,(LPWSTR)local_res8,2);
  if (iVar3 == 0) {
    bVar6 = false;
  }
  else if ((param_1 == local_res8[0]) || (param_2 == 0)) {
    bVar6 = true;
  }
  else {
    psVar2 = *(short **)(lVar4 + 0x98);
    iVar3 = 0;
    sVar1 = *psVar2;
    psVar5 = psVar2;
    while ((psVar5 = psVar5 + 1, (ushort)(sVar1 - 0x41U) < 0x1a || ((ushort)(sVar1 - 0x61U) < 0x1a))
          ) {
      iVar3 = iVar3 + 1;
      sVar1 = *psVar5;
    }
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (psVar2[lVar4] != 0);
    bVar6 = iVar3 != (int)lVar4;
  }
  return bVar6;
}

