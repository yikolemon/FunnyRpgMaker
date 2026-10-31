/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021ce18 */

uint FUN_18021ce18(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  bVar6 = *param_1;
  pbVar5 = param_1;
  if (bVar6 == 0x75) {
    if ((param_1[1] == 0x6e) && (param_1[2] == 0x69)) {
      pbVar3 = param_1 + 3;
      uVar2 = 0;
      uVar7 = 5;
      do {
        bVar1 = *pbVar3;
        uVar8 = bVar1 - 0x37;
        if ((byte)(bVar1 + 0xb9) < 0xfa) {
          uVar8 = 0x10;
        }
        if (bVar1 - 0x30 < 10) {
          uVar8 = bVar1 - 0x30;
        }
        if (0xf < uVar8) goto LAB_18021ce91;
        uVar2 = uVar2 << 4 | uVar8;
        pbVar3 = pbVar3 + 1;
        uVar7 = uVar7 - 1;
      } while (1 < uVar7);
      if (param_1[7] == 0) {
        return uVar2;
      }
      if (param_1[7] != 0x2e) goto LAB_18021ce91;
    }
    else {
LAB_18021ce91:
      pbVar3 = param_1 + 7;
      uVar7 = 6;
      uVar2 = 0;
      pbVar4 = param_1;
      do {
        pbVar4 = pbVar4 + 1;
        bVar1 = *pbVar4;
        uVar8 = bVar1 - 0x37;
        if ((byte)(bVar1 + 0xb9) < 0xfa) {
          uVar8 = 0x10;
        }
        if (bVar1 - 0x30 < 10) {
          uVar8 = bVar1 - 0x30;
        }
        if (0xf < uVar8) {
          pbVar3 = pbVar4;
          if (2 < uVar7) goto LAB_18021cf08;
          break;
        }
        uVar2 = uVar8 | uVar2 << 4;
        bVar9 = uVar7 != 0;
        uVar7 = uVar7 - 1;
      } while (bVar9 && uVar7 != 0);
      if (*pbVar3 == 0) {
        return uVar2;
      }
      if (*pbVar3 != 0x2e) goto LAB_18021cf08;
    }
    uVar2 = uVar2 | 0x80000000;
  }
  else {
LAB_18021cf08:
    while ((bVar6 != 0 && (bVar6 != 0x2e))) {
      bVar6 = pbVar5[1];
      pbVar5 = pbVar5 + 1;
    }
    uVar2 = 0;
    if (param_1 < pbVar5) {
      uVar7 = FUN_18021d2f6();
      uVar2 = uVar7 + 0x80000000;
      if (bVar6 != 0x2e) {
        uVar2 = uVar7;
      }
    }
  }
  return uVar2;
}

