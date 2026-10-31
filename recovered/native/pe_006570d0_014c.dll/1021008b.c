/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021008b */

uint __fastcall FUN_1021008b(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  iVar5 = *(int *)(param_1 + 8);
  uVar3 = *(uint *)(iVar5 + param_2 * 0x10);
  pbVar1 = *(byte **)(iVar5 + 8 + param_2 * 0x10);
  uVar4 = *(uint *)(iVar5 + param_3 * 0x10);
  pbVar2 = *(byte **)(iVar5 + 8 + param_3 * 0x10);
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  pbVar7 = pbVar2;
  pbVar6 = pbVar1;
  if (7 < uVar4) {
    uVar3 = uVar4 - 8 >> 3;
    pbVar6 = pbVar1 + uVar3 + 1;
    pbVar7 = pbVar2 + uVar3 + 1;
    iVar5 = 0;
    do {
      if ((pbVar1[iVar5] & pbVar2[iVar5]) != 0) {
        return 1;
      }
      uVar4 = uVar4 - 8;
      iVar5 = iVar5 + 1;
    } while (7 < uVar4);
  }
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = -0x100 >> ((byte)uVar4 & 0x1f) & (uint)(*pbVar7 & *pbVar6);
  }
  return uVar3;
}

