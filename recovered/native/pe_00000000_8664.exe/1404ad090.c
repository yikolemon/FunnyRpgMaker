/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404ad090 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    GetLcidFromLanguage
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void GetLcidFromLanguage(byte *param_1)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  int iVar6;
  
  lVar2 = FUN_1404a25a8();
  lVar5 = -1;
  iVar6 = 0;
  psVar4 = *(short **)(lVar2 + 0x98);
  do {
    lVar5 = lVar5 + 1;
  } while (psVar4[lVar5] != 0);
  *(uint *)(lVar2 + 0xb0) = (uint)(lVar5 == 3);
  iVar3 = 2;
  if (lVar5 != 3) {
    while( true ) {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
      if ((0x19 < (ushort)(sVar1 - 0x41U)) && (iVar3 = iVar6, 0x19 < (ushort)(sVar1 - 0x61U)))
      break;
      iVar6 = iVar6 + 1;
    }
  }
  *(int *)(lVar2 + 0xac) = iVar3;
  (*ram0x00014059ddf8)(&DAT_1404ad128,1);
  if ((*param_1 & 4) == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

