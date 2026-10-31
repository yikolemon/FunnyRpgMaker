/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007896f */

void FUN_14007896f(longlong param_1,uint param_2,int *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar3 = param_2;
  if ((int)param_2 < 0) {
    uVar3 = param_2 + 0xf;
  }
  lVar2 = (longlong)(int)(uVar3 & 0xfffffff0);
  uVar9 = 0x75bcd15;
  uVar10 = 0x75bcd15;
  uVar6 = 0x75bcd15;
  uVar7 = 0x75bcd15;
  if (0x1e < param_2 + 0xf) {
    lVar4 = (longlong)((int)uVar3 >> 4);
    piVar5 = (int *)(lVar2 + lVar4 * -0x10 + param_1 + 0xc);
    uVar7 = 0x75bcd15;
    uVar10 = 0x75bcd15;
    uVar9 = 0x75bcd15;
    do {
      uVar7 = ((uint)(piVar5[-3] * 0x239b961b) >> 0x11 | piVar5[-3] * -0x34f28000) * -0x54f16877 ^
              uVar7;
      iVar8 = (uVar7 << 0x13 | uVar7 >> 0xd) + uVar6;
      uVar7 = iVar8 * 5 + 0x561ccd1b;
      uVar6 = ((uint)(piVar5[-2] * -0x54f16877) >> 0x10 | piVar5[-2] * -0x68770000) * 0x38b34ae5 ^
              uVar6;
      uVar6 = ((uVar6 << 0x11 | uVar6 >> 0xf) + uVar10) * 5 + 0xbcaa747;
      uVar10 = ((uint)(piVar5[-1] * 0x38b34ae5) >> 0xf | piVar5[-1] * -0x6a360000) * -0x5e1c746d ^
               uVar10;
      uVar10 = ((uVar10 << 0xf | uVar10 >> 0x11) + uVar9) * 5 + 0x96cd1c35;
      uVar9 = ((uint)(*piVar5 * -0x5e1c746d) >> 0xe | *piVar5 * 0x2e4c0000) * 0x239b961b ^ uVar9;
      uVar9 = (iVar8 * 5 + (uVar9 << 0xd | uVar9 >> 0x13) + 0x561ccd1b) * 5 + 0x32ac3b17;
      piVar5 = piVar5 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  uVar3 = 0;
  switch(param_2 & 0xf) {
  case 0xf:
    uVar3 = (uint)*(byte *)(param_1 + 0xe + lVar2) << 0x10;
  case 0xe:
    uVar3 = (uint)*(byte *)(param_1 + 0xd + lVar2) << 8 | uVar3;
  case 0xd:
    uVar3 = *(byte *)(param_1 + 0xc + lVar2) ^ uVar3;
    uVar9 = uVar9 ^ (uVar3 * -0x5e1c746d >> 0xe | uVar3 * 0x2e4c0000) * 0x239b961b;
  case 0xc:
    uVar3 = (uint)*(byte *)(param_1 + 0xb + lVar2) << 0x18;
  case 0xb:
    uVar3 = uVar3 | (uint)*(byte *)(param_1 + 10 + lVar2) << 0x10;
  case 10:
    uVar3 = uVar3 ^ (uint)*(byte *)(param_1 + 9 + lVar2) << 8;
  case 9:
    uVar3 = *(byte *)(param_1 + 8 + lVar2) ^ uVar3;
    uVar10 = uVar10 ^ (uVar3 * 0x38b34ae5 >> 0xf | uVar3 * -0x6a360000) * -0x5e1c746d;
  case 8:
    uVar3 = (uint)*(byte *)(param_1 + 7 + lVar2) << 0x18;
  case 7:
    uVar3 = uVar3 | (uint)*(byte *)(param_1 + 6 + lVar2) << 0x10;
  case 6:
    uVar3 = uVar3 ^ (uint)*(byte *)(param_1 + 5 + lVar2) << 8;
  case 5:
    uVar3 = *(byte *)(param_1 + 4 + lVar2) ^ uVar3;
    uVar6 = uVar6 ^ (uVar3 * -0x54f16877 >> 0x10 | uVar3 * -0x68770000) * 0x38b34ae5;
  case 4:
    uVar3 = (uint)*(byte *)(param_1 + 3 + lVar2) << 0x18;
  case 3:
    uVar3 = uVar3 | (uint)*(byte *)(param_1 + 2 + lVar2) << 0x10;
  case 2:
    uVar3 = uVar3 ^ (uint)*(byte *)(param_1 + 1 + lVar2) << 8;
  case 1:
    uVar3 = *(byte *)(param_1 + lVar2) ^ uVar3;
    uVar7 = uVar7 ^ (uVar3 * 0x239b961b >> 0x11 | uVar3 * -0x34f28000) * -0x54f16877;
  case 0:
    uVar1 = (uVar7 ^ param_2) + (uVar6 ^ param_2) + (uVar10 ^ param_2) + (uVar9 ^ param_2);
    uVar3 = FUN_140078c6b(uVar1);
    uVar7 = FUN_140078c6b((uVar6 ^ param_2) + uVar1);
    uVar10 = FUN_140078c6b((uVar10 ^ param_2) + uVar1);
    uVar6 = FUN_140078c6b((uVar9 ^ param_2) + uVar1);
    iVar8 = uVar3 + uVar7 + uVar10 + uVar6;
    *param_3 = iVar8;
    param_3[1] = uVar7 + iVar8;
    param_3[2] = uVar10 + iVar8;
    param_3[3] = uVar6 + iVar8;
    return;
  }
}

