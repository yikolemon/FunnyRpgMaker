/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029bbc0 */

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
  
  lVar2 = FUN_1802910d8();
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
  EnumSystemLocalesW(FUN_18029bc58,1);
  if ((*param_1 & 4) == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

