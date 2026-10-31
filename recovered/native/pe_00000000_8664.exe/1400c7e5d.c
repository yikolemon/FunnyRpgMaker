/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c7e5d */

int * FUN_1400c7e5d(void)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  lVar4 = DAT_140f2a910;
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  piVar2 = *(int **)(DAT_140f2a910 + 0x2638);
  lVar7 = *(longlong *)(piVar2 + 10);
  lVar3 = *(longlong *)(DAT_140f2a910 + 0x1608);
  if (piVar2[0xc] != *(int *)(DAT_140f2a910 + 0x1f9c)) {
    FUN_14007a954("EndMultiSelect() FocusScope mismatch!");
  }
  FUN_1400c7c5c(&local_38,piVar2,lVar3);
  if (*(char *)((longlong)piVar2 + 0x52) == '\x01') {
    if ((*(char *)((longlong)piVar2 + 0x21) != '\0') ||
       ((*(char *)((longlong)piVar2 + 0x55) == '\0' && (*(longlong *)(piVar2 + 4) != -1)))) {
      if ((*(byte *)(lVar4 + 0x2acc) & 0x40) != 0) {
        FUN_1400772a6("[selection] EndMultiSelect: Reset RangeSrcItem.\n");
      }
      *(undefined8 *)(lVar7 + 0x18) = 0xffffffffffffffff;
    }
    if (((char)piVar2[0x15] == '\0') && (*(longlong *)(lVar7 + 0x20) != -1)) {
      if ((*(byte *)(lVar4 + 0x2acc) & 0x40) != 0) {
        FUN_1400772a6("[selection] EndMultiSelect: Reset NavIdItem.\n");
      }
      *(undefined8 *)(lVar7 + 0x20) = 0xffffffffffffffff;
      *(undefined1 *)(lVar7 + 0x15) = 0xff;
    }
    if (((((piVar2[0xd] & 0xc0U) != 0) && (piVar2[0x12] != 0)) &&
        (*(int *)(DAT_140f2a910 + 0x25b0) == piVar2[0x12])) &&
       (*(char *)(DAT_140f2a910 + 0x25b4) == '\x01')) {
      FUN_1400c71c2(&local_38);
    }
  }
  if (*(char *)((longlong)piVar2 + 0x51) == '\0') {
    if (piVar2[1] < 0) {
      uVar6 = FUN_140077ab4(0);
      if (*(longlong *)(piVar2 + 2) != 0) {
        FUN_1401c5180(uVar6,*(longlong *)(piVar2 + 2),(longlong)*piVar2 * 0x18);
        FUN_140077b90(*(undefined8 *)(piVar2 + 2));
      }
      *(undefined8 *)(piVar2 + 2) = uVar6;
      piVar2[1] = 0;
    }
    *piVar2 = 0;
  }
  if ((((*(float *)(lVar3 + 0x278) <= *(float *)(lVar4 + 0x118)) &&
       (*(float *)(lVar3 + 0x27c) <= *(float *)(lVar4 + 0x11c))) &&
      ((*(float *)(lVar4 + 0x118) < *(float *)(lVar3 + 0x280) &&
       ((*(float *)(lVar4 + 0x11c) < *(float *)(lVar3 + 0x284) &&
        (cVar5 = FUN_14008fbb2(1), cVar5 != '\0')))))) &&
     (((uVar8 = piVar2[0xd], (uVar8 >> 0xc & 1) == 0 ||
       ((((local_38 <= *(float *)(lVar4 + 0x118) && (local_34 <= *(float *)(lVar4 + 0x11c))) &&
         (*(float *)(lVar4 + 0x118) < local_30)) && (*(float *)(lVar4 + 0x11c) < local_2c)))) &&
      ((*(int *)(lVar4 + 0x1664) == 0 && (*(int *)(lVar4 + 0x167c) == 0)))))) {
    if ((((uVar8 & 0xc0) != 0) &&
        ((*(char *)(lVar4 + 0x25b4) == '\0' && (*(char *)(lVar4 + 0x25b5) == '\0')))) &&
       (*(short *)(lVar4 + 0xb5a) == 1)) {
      FUN_1400c823c(piVar2[0x12],0xffffffffffffffff);
      FUN_140081404(lVar3,2);
      FUN_140080777(piVar2[0x12]);
      uVar8 = piVar2[0xd];
      if ((uVar8 >> 0xc & 1) != 0) {
        local_48 = *(undefined8 *)(lVar4 + 0x118);
        local_40 = local_48;
        FUN_1400952ab(0,0,piVar2[0xc]);
        uVar8 = piVar2[0xd];
      }
    }
    if (((((uVar8 >> 10 & 1) != 0) && (cVar5 = FUN_140092089(0), cVar5 != '\0')) &&
        (cVar5 = FUN_1400920f5(0,DAT_1401c86a4), cVar5 == '\0')) && (*(int *)(lVar4 + 0x13c) == 0))
    {
      FUN_1400c7cb7(piVar2,0);
    }
  }
  lVar7 = DAT_140f2a910;
  if ((*(byte *)((longlong)piVar2 + 0x36) & 1) != 0) {
    *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
    FUN_14009499f(*(undefined8 *)(lVar7 + 0x1608),4);
  }
  if ((*(longlong *)(lVar4 + 0x24f8) != 0) &&
     (*(char *)(*(longlong *)(lVar4 + 0x24f8) + 0x23a) == '\x01')) {
    FUN_140110d38();
  }
  fVar10 = (float)*(undefined8 *)(piVar2 + 0x10);
  fVar11 = (float)((ulonglong)*(undefined8 *)(piVar2 + 0x10) >> 0x20);
  fVar12 = (float)*(undefined8 *)(lVar3 + 0x170);
  fVar13 = (float)((ulonglong)*(undefined8 *)(lVar3 + 0x170) >> 0x20);
  uVar8 = -(uint)(fVar12 <= fVar10);
  uVar9 = -(uint)(fVar13 <= fVar11);
  *(ulonglong *)(lVar3 + 0x170) =
       CONCAT44(~uVar9 & (uint)fVar13,~uVar8 & (uint)fVar12) |
       CONCAT44((uint)fVar11 & uVar9,(uint)fVar10 & uVar8);
  FUN_14008f340();
  if ((*(byte *)(lVar4 + 0x2acc) & 0x40) != 0) {
    FUN_1400c7d7b("EndMultiSelect",piVar2);
  }
  piVar2[0xc] = 0;
  piVar2[0xd] = 0;
  iVar1 = *(int *)(lVar4 + 0x2640);
  *(int *)(lVar4 + 0x2640) = iVar1 + -1;
  if ((longlong)iVar1 < 2) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)iVar1 * 0x58 + *(longlong *)(lVar4 + 0x2650) + -0xb0;
  }
  *(longlong *)(lVar4 + 0x2638) = lVar7;
  if (DAT_140f17b40 != (local_28 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_28 ^ (ulonglong)auStack_68);
  }
  return piVar2;
}

