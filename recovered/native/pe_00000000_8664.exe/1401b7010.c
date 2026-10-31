/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b7010 */

bool FUN_1401b7010(uint param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  longlong lVar4;
  short *psVar5;
  int iVar6;
  bool bVar7;
  uint local_res8 [2];
  
  iVar6 = 0;
  local_res8[0] = 0;
  lVar4 = FUN_1401aecc8();
  iVar3 = GetLocaleInfoW(param_1 & 0x3ff | 0x400,0x20000001,(LPWSTR)local_res8,2);
  if (iVar3 == 0) {
    bVar7 = false;
  }
  else if ((param_1 == local_res8[0]) || (param_2 == 0)) {
    bVar7 = true;
  }
  else {
    psVar2 = *(short **)(lVar4 + 0x98);
    sVar1 = *psVar2;
    psVar5 = psVar2;
    while ((psVar5 = psVar5 + 1, (ushort)(sVar1 - 0x41U) < 0x1a || ((ushort)(sVar1 - 0x61U) < 0x1a))
          ) {
      iVar6 = iVar6 + 1;
      sVar1 = *psVar5;
    }
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (psVar2[lVar4] != 0);
    bVar7 = iVar6 != (int)lVar4;
  }
  return bVar7;
}

