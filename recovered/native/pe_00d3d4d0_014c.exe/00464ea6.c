/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00464ea6 */

uint __cdecl FUN_00464ea6(byte *param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 extraout_var;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  bVar5 = *param_1;
  pbVar4 = param_1;
  if (bVar5 == 0x75) {
    if ((param_1[1] == 0x6e) && (param_1[2] == 0x69)) {
      pbVar7 = param_1 + 3;
      uVar3 = 0;
      uVar8 = 5;
      do {
        bVar1 = *pbVar7;
        uVar9 = 0x10;
        if (0xf9 < (byte)(bVar1 + 0xb9)) {
          uVar9 = bVar1 - 0x37;
        }
        uVar6 = bVar1 - 0x30;
        if (9 < uVar6) {
          uVar6 = uVar9;
        }
        if (0xf < uVar6) goto LAB_00464f19;
        uVar3 = uVar3 << 4 | uVar6;
        pbVar7 = pbVar7 + 1;
        uVar8 = uVar8 - 1;
      } while (1 < uVar8);
      if (param_1[7] == 0) {
        return uVar3;
      }
      if (param_1[7] != 0x2e) goto LAB_00464f19;
    }
    else {
LAB_00464f19:
      uVar8 = 6;
      uVar3 = 0;
      pbVar7 = param_1;
      do {
        pbVar7 = pbVar7 + 1;
        bVar1 = *pbVar7;
        uVar9 = 0x10;
        if (0xf9 < (byte)(bVar1 + 0xb9)) {
          uVar9 = bVar1 - 0x37;
        }
        uVar6 = bVar1 - 0x30;
        if (9 < uVar6) {
          uVar6 = uVar9;
        }
        if (0xf < uVar6) {
          if (uVar8 < 3) goto LAB_00464f89;
          goto LAB_00464f58;
        }
        uVar3 = uVar3 << 4 | uVar6;
        bVar10 = uVar8 != 0;
        uVar8 = uVar8 - 1;
      } while (bVar10 && uVar8 != 0);
      pbVar7 = param_1 + 7;
LAB_00464f89:
      if (*pbVar7 == 0) {
        return uVar3;
      }
      if (*pbVar7 != 0x2e) goto LAB_00464f58;
    }
    uVar3 = uVar3 | 0x80000000;
  }
  else {
LAB_00464f58:
    while ((bVar5 != 0 && (bVar5 != 0x2e))) {
      bVar5 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
    }
    uVar3 = 0;
    if (param_1 < pbVar4) {
      uVar2 = FUN_004652d8(param_1,pbVar4);
      uVar3 = CONCAT22(extraout_var,uVar2) + 0x80000000;
      if (bVar5 != 0x2e) {
        uVar3 = CONCAT22(extraout_var,uVar2);
      }
    }
  }
  return uVar3;
}

