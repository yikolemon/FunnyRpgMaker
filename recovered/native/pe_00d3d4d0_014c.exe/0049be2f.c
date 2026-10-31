/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049be2f */

/* Library Function - Single Match
    _GetLcidFromCountry
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl _GetLcidFromCountry(byte *param_1)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  iVar3 = FUN_004961ad();
  psVar4 = *(short **)(iVar3 + 0x54);
  psVar1 = psVar4 + 1;
  do {
    sVar2 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar2 != 0);
  *(uint *)(iVar3 + 100) = (uint)((int)psVar4 - (int)psVar1 >> 1 == 3);
  EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_0049be7a,1);
  if ((*param_1 & 4) == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

