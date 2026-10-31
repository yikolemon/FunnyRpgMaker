/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049bcff */

/* Library Function - Single Match
    _GetLcidFromLanguage
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl _GetLcidFromLanguage(byte *param_1)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  bool bVar6;
  
  iVar3 = FUN_004961ad();
  iVar4 = 2;
  psVar5 = *(short **)(iVar3 + 0x50);
  psVar1 = psVar5 + 1;
  do {
    sVar2 = *psVar5;
    psVar5 = psVar5 + 1;
  } while (sVar2 != 0);
  bVar6 = (int)psVar5 - (int)psVar1 >> 1 == 3;
  *(uint *)(iVar3 + 0x60) = (uint)bVar6;
  if (!bVar6) {
    iVar4 = _GetPrimaryLen(*(ushort **)(iVar3 + 0x50));
  }
  *(int *)(iVar3 + 0x5c) = iVar4;
  EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_0049bd5e,1);
  if ((*param_1 & 4) == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

