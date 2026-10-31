/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027ccf4 */

/* Library Function - Single Match
    _GetLcidFromLangCountry
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void _GetLcidFromLangCountry(uint *param_1)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  short *psVar6;
  short *psVar7;
  
  iVar4 = FUN_102743cd();
  uVar5 = 2;
  psVar6 = *(short **)(iVar4 + 0x50);
  psVar1 = psVar6 + 1;
  do {
    sVar2 = *psVar6;
    psVar6 = psVar6 + 1;
  } while (sVar2 != 0);
  psVar7 = *(short **)(iVar4 + 0x54);
  *(uint *)(iVar4 + 0x60) = (uint)((int)psVar6 - (int)psVar1 >> 1 == 3);
  psVar1 = psVar7 + 1;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar2 != 0);
  *(uint *)(iVar4 + 100) = (uint)((int)psVar7 - (int)psVar1 >> 1 == 3);
  param_1[1] = 0;
  if (*(int *)(iVar4 + 0x60) == 0) {
    uVar5 = _GetPrimaryLen(*(undefined4 *)(iVar4 + 0x50));
  }
  *(undefined4 *)(iVar4 + 0x5c) = uVar5;
  EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_1027cd8f,1);
  uVar3 = *param_1;
  if ((uVar3 >> 8 & 1) == 0 || ((uVar3 & 7) == 0 || (uVar3 >> 9 & 1) == 0)) {
    *param_1 = 0;
  }
  return;
}

