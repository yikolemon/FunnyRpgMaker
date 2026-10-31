/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016f1e4 */

uint FUN_14016f1e4(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  byte *pbVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(param_1 + 8);
  pbVar2 = *(byte **)(lVar8 + 8 + (param_2 & 0xffffffff) * 0x18);
  pbVar3 = *(byte **)(lVar8 + 8 + (param_3 & 0xffffffff) * 0x18);
  uVar1 = *(uint *)(lVar8 + (param_2 & 0xffffffff) * 0x18);
  uVar4 = *(uint *)(lVar8 + (param_3 & 0xffffffff) * 0x18);
  if (uVar1 < uVar4) {
    uVar4 = uVar1;
  }
  pbVar7 = pbVar3;
  pbVar5 = pbVar2;
  if (7 < uVar4) {
    uVar6 = (ulonglong)(uVar4 - 8 >> 3);
    pbVar5 = pbVar2 + uVar6 + 1;
    pbVar7 = pbVar3 + uVar6 + 1;
    lVar8 = 0;
    do {
      if ((pbVar2[lVar8] & pbVar3[lVar8]) != 0) {
        return 1;
      }
      uVar4 = uVar4 - 8;
      lVar8 = lVar8 + 1;
    } while (7 < uVar4);
  }
  if (uVar4 == 0) {
    return 0;
  }
  return -0x100 >> ((byte)uVar4 & 0x1f) & (uint)(*pbVar7 & *pbVar5);
}

