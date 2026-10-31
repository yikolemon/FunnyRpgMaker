/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020d726 */

uint FUN_1020d726(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  bVar4 = *param_1;
  pbVar3 = param_1;
  if (bVar4 == 0x75) {
    if ((param_1[1] == 0x6e) && (param_1[2] == 0x69)) {
      pbVar6 = param_1 + 3;
      uVar2 = 0;
      uVar7 = 5;
      do {
        bVar1 = *pbVar6;
        uVar8 = 0x10;
        if (0xf9 < (byte)(bVar1 + 0xb9)) {
          uVar8 = bVar1 - 0x37;
        }
        uVar5 = bVar1 - 0x30;
        if (9 < uVar5) {
          uVar5 = uVar8;
        }
        if (0xf < uVar5) goto LAB_1020d799;
        uVar2 = uVar2 << 4 | uVar5;
        pbVar6 = pbVar6 + 1;
        uVar7 = uVar7 - 1;
      } while (1 < uVar7);
      if (param_1[7] == 0) {
        return uVar2;
      }
      if (param_1[7] != 0x2e) goto LAB_1020d799;
    }
    else {
LAB_1020d799:
      uVar7 = 6;
      uVar2 = 0;
      pbVar6 = param_1;
      do {
        pbVar6 = pbVar6 + 1;
        bVar1 = *pbVar6;
        uVar8 = 0x10;
        if (0xf9 < (byte)(bVar1 + 0xb9)) {
          uVar8 = bVar1 - 0x37;
        }
        uVar5 = bVar1 - 0x30;
        if (9 < uVar5) {
          uVar5 = uVar8;
        }
        if (0xf < uVar5) {
          if (uVar7 < 3) goto LAB_1020d809;
          goto LAB_1020d7d8;
        }
        uVar2 = uVar2 << 4 | uVar5;
        bVar9 = uVar7 != 0;
        uVar7 = uVar7 - 1;
      } while (bVar9 && uVar7 != 0);
      pbVar6 = param_1 + 7;
LAB_1020d809:
      if (*pbVar6 == 0) {
        return uVar2;
      }
      if (*pbVar6 != 0x2e) goto LAB_1020d7d8;
    }
    uVar2 = uVar2 | 0x80000000;
  }
  else {
LAB_1020d7d8:
    while ((bVar4 != 0 && (bVar4 != 0x2e))) {
      bVar4 = pbVar3[1];
      pbVar3 = pbVar3 + 1;
    }
    uVar2 = 0;
    if (param_1 < pbVar3) {
      uVar7 = FUN_1020db58();
      uVar2 = uVar7 + 0x80000000;
      if (bVar4 != 0x2e) {
        uVar2 = uVar7;
      }
    }
  }
  return uVar2;
}

