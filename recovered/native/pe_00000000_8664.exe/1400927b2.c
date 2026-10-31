/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400927b2 */

void FUN_1400927b2(void)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  lVar5 = DAT_140f2a910;
  local_50 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(DAT_140f2a910 + 0x1608);
  lVar7 = (longlong)*(int *)(DAT_140f2a910 + 0x2138) * 0x3c + *(longlong *)(DAT_140f2a910 + 0x2140);
  if (*(char *)(lVar2 + 0x199) == '\x01') {
    FUN_14008f4b1();
  }
  uVar3 = *(undefined8 *)(lVar7 + -0x38);
  fVar11 = (float)*(undefined8 *)(lVar2 + 0x170);
  fVar13 = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x170) >> 0x20);
  fVar14 = (float)*(undefined8 *)(lVar5 + 0x1ff4);
  fVar15 = (float)((ulonglong)*(undefined8 *)(lVar5 + 0x1ff4) >> 0x20);
  uVar9 = -(uint)(fVar14 <= fVar11);
  uVar10 = -(uint)(fVar15 <= fVar13);
  uVar4 = CONCAT44(~uVar10 & (uint)fVar15,~uVar9 & (uint)fVar14) |
          CONCAT44((uint)fVar13 & uVar10,(uint)fVar11 & uVar9);
  fVar11 = (float)*(undefined8 *)(lVar7 + -0x38);
  fVar13 = (float)((ulonglong)*(undefined8 *)(lVar7 + -0x38) >> 0x20);
  fVar14 = (float)uVar4;
  fVar15 = (float)(uVar4 >> 0x20);
  uVar9 = -(uint)(fVar11 <= fVar14);
  uVar10 = -(uint)(fVar13 <= fVar15);
  uStack_58 = CONCAT44(~uVar10 & (uint)fVar13,~uVar9 & (uint)fVar11) |
              CONCAT44((uint)fVar15 & uVar10,(uint)fVar14 & uVar9);
  *(undefined8 *)(lVar2 + 0x158) = uVar3;
  *(undefined8 *)(lVar2 + 0x160) = *(undefined8 *)(lVar7 + -0x28);
  fVar11 = (float)*(undefined8 *)(lVar7 + -0x30);
  fVar13 = (float)((ulonglong)*(undefined8 *)(lVar7 + -0x30) >> 0x20);
  fVar14 = (float)uStack_58;
  fVar15 = (float)(uStack_58 >> 0x20);
  uVar9 = -(uint)(fVar14 <= fVar11);
  uVar10 = -(uint)(fVar15 <= fVar13);
  *(ulonglong *)(lVar2 + 0x170) =
       CONCAT44(~uVar10 & (uint)fVar15,~uVar9 & (uint)fVar14) |
       CONCAT44((uint)fVar13 & uVar10,(uint)fVar11 & uVar9);
  *(undefined4 *)(lVar2 + 0x19c) = *(undefined4 *)(lVar7 + -0x20);
  *(undefined4 *)(lVar2 + 0x1a4) = *(undefined4 *)(lVar7 + -0x1c);
  *(undefined8 *)(lVar2 + 0x180) = *(undefined8 *)(lVar7 + -0x18);
  *(undefined4 *)(lVar2 + 400) = *(undefined4 *)(lVar7 + -0x10);
  *(undefined1 *)(lVar2 + 0x198) = *(undefined1 *)(lVar7 + -5);
  if (*(char *)(lVar5 + 0x2a40) == '\x01') {
    *(undefined4 *)(lVar5 + 0x2a78) = 0xff7fffff;
  }
  local_60 = uVar3;
  if (*(char *)(lVar7 + -4) == '\0') {
    *(int *)(lVar5 + 0x2138) = *(int *)(lVar5 + 0x2138) + -1;
    goto LAB_140092a12;
  }
  uVar12 = FUN_14007b71f(*(undefined4 *)(lVar2 + 0x194));
  *(undefined4 *)(lVar2 + 400) = uVar12;
  local_68 = CONCAT44(fVar15 - (float)((ulonglong)uVar3 >> 0x20),fVar14 - (float)uVar3);
  FUN_14008a82c();
  FUN_14008a9ce(&local_60,0,0,1);
  iVar6 = *(int *)(lVar5 + 0x167c);
  if (*(int *)(lVar7 + -0xc) == iVar6) {
    uVar9 = 0x20;
    if (*(char *)(lVar7 + -7) == '\0') {
      bVar1 = *(byte *)(lVar5 + 0x16b5);
joined_r0x000140092987:
      uVar9 = 0x20;
      if (bVar1 != 0) {
        iVar6 = *(int *)(lVar5 + 0x16ac);
        uVar9 = 0x60;
LAB_140092994:
        *(int *)(lVar5 + 0x1fe0) = iVar6;
      }
    }
  }
  else {
    bVar8 = *(int *)(lVar5 + 0x1680) == iVar6;
    if (*(char *)(lVar7 + -7) == '\0') {
      bVar1 = *(byte *)(lVar5 + 0x16b5);
      if (iVar6 == 0 || !bVar8) goto joined_r0x000140092987;
      *(int *)(lVar5 + 0x1fe0) = iVar6;
      uVar9 = (uint)bVar1 << 6 | 0x20;
    }
    else {
      uVar9 = 0x20;
      if (iVar6 != 0 && bVar8) goto LAB_140092994;
    }
  }
  *(undefined4 *)(lVar5 + 0x1fec) = (undefined4)local_60;
  *(undefined4 *)(lVar5 + 0x1ff0) = local_60._4_4_;
  *(undefined4 *)(lVar5 + 0x1ff4) = (undefined4)uStack_58;
  *(undefined4 *)(lVar5 + 0x1ff8) = uStack_58._4_4_;
  if ((*(char *)(lVar7 + -6) == '\0') && (*(int *)(lVar5 + 0x1664) != 0)) {
    *(byte *)(lVar5 + 0x1fe8) = *(byte *)(lVar5 + 0x1fe8) | 0x80;
  }
  if ((*(char *)(lVar5 + 0x168d) == '\x01') && (*(char *)(lVar7 + -8) == '\0')) {
    *(byte *)(lVar5 + 0x1fe8) = *(byte *)(lVar5 + 0x1fe8) | 4;
  }
  *(uint *)(lVar5 + 0x1fe8) = *(uint *)(lVar5 + 0x1fe8) | uVar9;
  *(int *)(lVar5 + 0x2138) = *(int *)(lVar5 + 0x2138) + -1;
  if (*(char *)(lVar5 + 0x20e0) == '\x01') {
    local_78 = 0;
    local_88 = 0;
    local_80 = 0x3f800000;
    FUN_1400de17e(*(undefined8 *)(lVar2 + 800),&local_60,&uStack_58,0xffff00ff);
  }
LAB_140092a12:
  if (DAT_140f17b40 != (local_50 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_50 ^ (ulonglong)auStack_a8);
  }
  return;
}

