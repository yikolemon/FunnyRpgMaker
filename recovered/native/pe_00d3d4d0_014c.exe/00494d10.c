/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00494d10 */

undefined4 __cdecl FUN_00494d10(uint *param_1,byte *param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  bool bVar6;
  
  uVar4 = param_1[1];
  if ((uVar4 != 0) && (pbVar3 = (byte *)(uVar4 + 8), *(char *)(uVar4 + 8) != '\0')) {
    uVar2 = *param_1;
    if (((char)uVar2 < '\0') && ((*param_2 & 0x10) != 0)) {
      return 1;
    }
    if (uVar4 != *(uint *)(param_2 + 4)) {
      pbVar5 = (byte *)(*(uint *)(param_2 + 4) + 8);
      do {
        bVar1 = *pbVar3;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00494d60:
          uVar4 = -(uint)bVar6 | 1;
          goto LAB_00494d65;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00494d60;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_00494d65:
      if (uVar4 != 0) {
        return 0;
      }
    }
    if (((((*param_2 & 2) != 0) && ((uVar2 & 8) == 0)) ||
        (((*param_3 & 1) != 0 && ((uVar2 & 1) == 0)))) ||
       (((*param_3 & 2) != 0 && ((uVar2 & 2) == 0)))) {
      return 0;
    }
  }
  return 1;
}

