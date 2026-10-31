/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006a458 */

ulonglong FUN_14006a458(byte *param_1)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined6 extraout_var;
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
      pbVar4 = param_1 + 3;
      uVar3 = 0;
      uVar7 = 5;
      do {
        bVar1 = *pbVar4;
        uVar8 = bVar1 - 0x37;
        if ((byte)(bVar1 + 0xb9) < 0xfa) {
          uVar8 = 0x10;
        }
        if (bVar1 - 0x30 < 10) {
          uVar8 = bVar1 - 0x30;
        }
        if (0xf < uVar8) goto LAB_14006a4d1;
        uVar3 = (ulonglong)((int)uVar3 << 4 | uVar8);
        pbVar4 = pbVar4 + 1;
        uVar7 = uVar7 - 1;
      } while (1 < uVar7);
      if (param_1[7] == 0) {
        return uVar3;
      }
      if (param_1[7] != 0x2e) goto LAB_14006a4d1;
    }
    else {
LAB_14006a4d1:
      uVar7 = 6;
      uVar3 = 0;
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
          if (uVar7 < 3) goto LAB_14006a52c;
          goto LAB_14006a548;
        }
        uVar8 = uVar8 | (int)uVar3 << 4;
        uVar3 = (ulonglong)uVar8;
        bVar9 = uVar7 != 0;
        uVar7 = uVar7 - 1;
      } while (bVar9 && uVar7 != 0);
      uVar3 = (ulonglong)uVar8;
      pbVar4 = param_1 + 7;
LAB_14006a52c:
      if (*pbVar4 == 0) {
        return uVar3;
      }
      if (*pbVar4 != 0x2e) goto LAB_14006a548;
    }
    uVar3 = (ulonglong)((uint)uVar3 | 0x80000000);
  }
  else {
LAB_14006a548:
    while ((bVar6 != 0 && (bVar6 != 0x2e))) {
      bVar6 = pbVar5[1];
      pbVar5 = pbVar5 + 1;
    }
    uVar3 = 0;
    if (param_1 < pbVar5) {
      uVar2 = FUN_14006a936(param_1,pbVar5);
      uVar3 = (ulonglong)((int)CONCAT62(extraout_var,uVar2) + 0x80000000);
      if (bVar6 != 0x2e) {
        uVar3 = CONCAT62(extraout_var,uVar2) & 0xffffffff;
      }
    }
  }
  return uVar3;
}

