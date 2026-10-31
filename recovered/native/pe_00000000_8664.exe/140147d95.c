/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140147d95 */

undefined8 FUN_140147d95(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = *(longlong *)(param_1 + 0xd8);
  iVar1 = *(int *)(lVar3 + 0x218);
  if (0 < iVar1) {
    FUN_1401c5180(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),
                  (ulonglong)*(ushort *)(param_1 + 0xa0) << 3);
  }
  if (param_2 == '\0') {
    *(undefined4 *)(lVar3 + 0x160) = *(undefined4 *)(*(longlong *)(lVar2 + 0x40) + 4);
    *(undefined4 *)(lVar3 + 0x164) = *(undefined4 *)(*(longlong *)(lVar2 + 0x40) + 8);
  }
  else {
    *(undefined8 *)(lVar3 + 0x160) = 0x1000000010000;
    FUN_1401c5180(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xb0),
                  (ulonglong)*(ushort *)(param_1 + 0xa0) << 3);
  }
  *(uint *)(*(longlong *)(param_1 + 0xb0) + -0x20 + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8) =
       *(int *)(*(longlong *)(param_1 + 0xb0) + -0x20 + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8)
       + 0x20U & 0xffffffc0;
  *(uint *)(*(longlong *)(param_1 + 0xb0) + -0x18 + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8) =
       *(int *)(*(longlong *)(param_1 + 0xb0) + -0x18 + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8)
       + 0x20U & 0xffffffc0;
  *(uint *)(*(longlong *)(param_1 + 0xb0) + -0xc + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8) =
       *(int *)(*(longlong *)(param_1 + 0xb0) + -0xc + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8) +
       0x20U & 0xffffffc0;
  *(uint *)(*(longlong *)(param_1 + 0xb0) + -4 + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8) =
       *(int *)(*(longlong *)(param_1 + 0xb0) + -4 + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8) +
       0x20U & 0xffffffc0;
  if (0 < iVar1) {
    FUN_140145b9a(lVar3,3,*(undefined8 *)(lVar3 + 0x220),iVar1);
    *(char *)(lVar3 + 0x2c5) = param_2;
    uVar5 = *(undefined4 *)(param_1 + 0xa4);
    uVar6 = *(undefined4 *)(param_1 + 0xa8);
    uVar7 = *(undefined4 *)(param_1 + 0xac);
    uVar8 = *(undefined4 *)(param_1 + 0xb0);
    uVar9 = *(undefined4 *)(param_1 + 0xb4);
    uVar10 = *(undefined4 *)(param_1 + 0xb8);
    uVar11 = *(undefined4 *)(param_1 + 0xbc);
    uVar12 = *(undefined4 *)(param_1 + 0xc0);
    uVar13 = *(undefined4 *)(param_1 + 0xc4);
    uVar14 = *(undefined4 *)(param_1 + 200);
    uVar15 = *(undefined4 *)(param_1 + 0xcc);
    *(undefined4 *)(lVar3 + 0xe8) = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)(lVar3 + 0xec) = uVar5;
    *(undefined4 *)(lVar3 + 0xf0) = uVar6;
    *(undefined4 *)(lVar3 + 0xf4) = uVar7;
    *(undefined4 *)(lVar3 + 0xf8) = uVar8;
    *(undefined4 *)(lVar3 + 0xfc) = uVar9;
    *(undefined4 *)(lVar3 + 0x100) = uVar10;
    *(undefined4 *)(lVar3 + 0x104) = uVar11;
    *(undefined4 *)(lVar3 + 0x108) = uVar12;
    *(undefined4 *)(lVar3 + 0x10c) = uVar13;
    *(undefined4 *)(lVar3 + 0x110) = uVar14;
    *(undefined4 *)(lVar3 + 0x114) = uVar15;
    *(undefined8 *)(lVar3 + 0x118) = *(undefined8 *)(param_1 + 0xd0);
    uVar16 = FUN_140145bd5(lVar3,lVar2);
    if (((int)uVar16 != 0) && (*(char *)(lVar3 + 0x2c6) != '\0')) {
      return uVar16;
    }
    pbVar4 = *(byte **)(*(longlong *)(param_1 + 0x18) + 0x70);
    *pbVar4 = *(char *)(lVar3 + 0x1d4) << 5 | *pbVar4 | 4;
  }
  if (*(int *)(lVar3 + 0x324) == 0) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    uVar17 = (ulonglong)*(ushort *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar2 + -0x20 + uVar17 * 8);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar2 + -0x18 + uVar17 * 8);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(lVar2 + -0x10 + uVar17 * 8);
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(lVar2 + -8 + uVar17 * 8);
  }
  return 0;
}

