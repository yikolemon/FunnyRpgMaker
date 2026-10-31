/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027cfe3 */

/* Library Function - Single Match
    _GetLcidFromLanguage
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _GetLcidFromLanguage(byte *param_1)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  short *psVar5;
  bool bVar6;
  
  iVar3 = FUN_102743cd();
  uVar4 = 2;
  psVar5 = *(short **)(iVar3 + 0x50);
  psVar1 = psVar5 + 1;
  do {
    sVar2 = *psVar5;
    psVar5 = psVar5 + 1;
  } while (sVar2 != 0);
  bVar6 = (int)psVar5 - (int)psVar1 >> 1 == 3;
  *(uint *)(iVar3 + 0x60) = (uint)bVar6;
  if (!bVar6) {
    uVar4 = _GetPrimaryLen(*(undefined4 *)(iVar3 + 0x50));
  }
  *(undefined4 *)(iVar3 + 0x5c) = uVar4;
  EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_1027d042,1);
  if ((*param_1 & 4) == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

