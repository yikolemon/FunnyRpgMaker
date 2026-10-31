/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017aa1b */

void FUN_14017aa1b(longlong param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  
  uVar7 = param_2;
  if ((int)param_2 < 0) {
    uVar7 = param_2 + 0xf;
  }
  lVar4 = (longlong)(int)(uVar7 & 0xfffffff0);
  uVar13 = 0x75bcd15;
  uVar14 = 0x75bcd15;
  uVar10 = 0x75bcd15;
  uVar11 = 0x75bcd15;
  if (0x1e < param_2 + 0xf) {
    lVar8 = (longlong)((int)uVar7 >> 4);
    piVar9 = (int *)(lVar4 + lVar8 * -0x10 + param_1 + 0xc);
    uVar11 = 0x75bcd15;
    uVar14 = 0x75bcd15;
    uVar13 = 0x75bcd15;
    do {
      uVar11 = ((uint)(piVar9[-3] * 0x239b961b) >> 0x11 | piVar9[-3] * -0x34f28000) * -0x54f16877 ^
               uVar11;
      iVar12 = (uVar11 << 0x13 | uVar11 >> 0xd) + uVar10;
      uVar11 = iVar12 * 5 + 0x561ccd1b;
      uVar10 = ((uint)(piVar9[-2] * -0x54f16877) >> 0x10 | piVar9[-2] * -0x68770000) * 0x38b34ae5 ^
               uVar10;
      uVar10 = ((uVar10 << 0x11 | uVar10 >> 0xf) + uVar14) * 5 + 0xbcaa747;
      uVar14 = ((uint)(piVar9[-1] * 0x38b34ae5) >> 0xf | piVar9[-1] * -0x6a360000) * -0x5e1c746d ^
               uVar14;
      uVar14 = ((uVar14 << 0xf | uVar14 >> 0x11) + uVar13) * 5 + 0x96cd1c35;
      uVar13 = ((uint)(*piVar9 * -0x5e1c746d) >> 0xe | *piVar9 * 0x2e4c0000) * 0x239b961b ^ uVar13;
      uVar13 = (iVar12 * 5 + (uVar13 << 0xd | uVar13 >> 0x13) + 0x561ccd1b) * 5 + 0x32ac3b17;
      piVar9 = piVar9 + 4;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  uVar7 = 0;
  uVar5 = 0;
  uVar6 = 0;
  switch(param_2 & 0xf) {
  case 0xf:
    uVar5 = (uint)*(byte *)(param_1 + 0xe + lVar4) << 0x10;
  case 0xe:
    uVar6 = (uint)*(byte *)(param_1 + 0xd + lVar4) << 8 | uVar5;
  case 0xd:
    uVar6 = *(byte *)(param_1 + 0xc + lVar4) ^ uVar6;
    uVar13 = uVar13 ^ (uVar6 * -0x5e1c746d >> 0xe | uVar6 * 0x2e4c0000) * 0x239b961b;
  case 0xc:
    uVar6 = (uint)*(byte *)(param_1 + 0xb + lVar4) << 0x18;
  case 0xb:
    uVar6 = uVar6 | (uint)*(byte *)(param_1 + 10 + lVar4) << 0x10;
  case 10:
    uVar6 = uVar6 ^ (uint)*(byte *)(param_1 + 9 + lVar4) << 8;
  case 9:
    uVar6 = *(byte *)(param_1 + 8 + lVar4) ^ uVar6;
    uVar14 = uVar14 ^ (uVar6 * 0x38b34ae5 >> 0xf | uVar6 * -0x6a360000) * -0x5e1c746d;
  case 8:
    uVar6 = (uint)*(byte *)(param_1 + 7 + lVar4) << 0x18;
  case 7:
    uVar6 = uVar6 | (uint)*(byte *)(param_1 + 6 + lVar4) << 0x10;
  case 6:
    uVar6 = uVar6 ^ (uint)*(byte *)(param_1 + 5 + lVar4) << 8;
  case 5:
    uVar6 = *(byte *)(param_1 + 4 + lVar4) ^ uVar6;
    uVar10 = uVar10 ^ (uVar6 * -0x54f16877 >> 0x10 | uVar6 * -0x68770000) * 0x38b34ae5;
  case 4:
    uVar6 = (uint)*(byte *)(param_1 + 3 + lVar4) << 0x18;
  case 3:
    uVar6 = uVar6 | (uint)*(byte *)(param_1 + 2 + lVar4) << 0x10;
  case 2:
    uVar7 = uVar6 ^ (uint)*(byte *)(param_1 + 1 + lVar4) << 8;
  case 1:
    uVar7 = *(byte *)(param_1 + lVar4) ^ uVar7;
    uVar11 = uVar11 ^ (uVar7 * 0x239b961b >> 0x11 | uVar7 * -0x34f28000) * -0x54f16877;
  case 0:
    iVar3 = (uVar11 ^ param_2) + (uVar10 ^ param_2) + (uVar14 ^ param_2) + (uVar13 ^ param_2);
    iVar12 = FUN_14017ad17(iVar3);
    iVar1 = FUN_14017ad17((uVar10 ^ param_2) + iVar3);
    iVar2 = FUN_14017ad17((uVar14 ^ param_2) + iVar3);
    iVar3 = FUN_14017ad17((uVar13 ^ param_2) + iVar3);
    iVar12 = iVar12 + iVar1 + iVar2 + iVar3;
    *param_3 = iVar12;
    param_3[1] = iVar1 + iVar12;
    param_3[2] = iVar2 + iVar12;
    param_3[3] = iVar3 + iVar12;
    return;
  }
}

