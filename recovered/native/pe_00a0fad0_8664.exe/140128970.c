/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140128970 */

/* Library Function - Single Match
    GetLcidFromLangCountry
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void GetLcidFromLangCountry(uint *param_1)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  short *psVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  lVar3 = FUN_140121578();
  lVar6 = -1;
  lVar7 = -1;
  iVar8 = 0;
  do {
    lVar7 = lVar7 + 1;
  } while (*(short *)(*(longlong *)(lVar3 + 0x98) + lVar7 * 2) != 0);
  *(uint *)(lVar3 + 0xb0) = (uint)(lVar7 == 3);
  do {
    lVar6 = lVar6 + 1;
  } while (*(short *)(*(longlong *)(lVar3 + 0xa0) + lVar6 * 2) != 0);
  *(uint *)(lVar3 + 0xb4) = (uint)(lVar6 == 3);
  param_1[1] = 0;
  iVar5 = 2;
  if (*(int *)(lVar3 + 0xb0) == 0) {
    psVar4 = *(short **)(lVar3 + 0x98);
    while( true ) {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
      if ((0x19 < (ushort)(sVar1 - 0x41U)) && (iVar5 = iVar8, 0x19 < (ushort)(sVar1 - 0x61U)))
      break;
      iVar8 = iVar8 + 1;
    }
  }
  *(int *)(lVar3 + 0xac) = iVar5;
  EnumSystemLocalesW(FUN_140128a40,1);
  uVar2 = *param_1;
  if ((uVar2 >> 8 & 1) == 0 || ((uVar2 & 7) == 0 || (uVar2 >> 9 & 1) == 0)) {
    *param_1 = 0;
  }
  return;
}

