/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180225043 */

undefined8 FUN_180225043(longlong param_1,uint param_2,ushort *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ushort uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  
  if (*(longlong *)(param_1 + 0x480) == 0) {
    if (*(uint *)(param_1 + 0x478) <= param_2) {
      return 6;
    }
  }
  else {
    if (*(uint *)(param_1 + 0x28) <= param_2) {
      return 6;
    }
    param_2 = *(uint *)(*(longlong *)(param_1 + 0x480) + (ulonglong)param_2 * 4);
  }
  if (1 < *(int *)(param_1 + 0x474) - 1U) {
    if (*(int *)(param_1 + 0x474) != 3) {
      return 2;
    }
    uVar9 = *(uint *)(*(longlong *)(param_1 + 0x468) + 8 + (ulonglong)(param_2 << 2));
    uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    if (*(uint *)(param_1 + 0x4d4) < uVar9 + 4) {
      return 3;
    }
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    uVar7 = FUN_1801ce63e(uVar4,uVar9 + *(int *)(param_1 + 0x4d0));
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    uVar7 = FUN_1801cec60(uVar4,4);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    uVar5 = FUN_1801cedcb(uVar4);
    FUN_1801cedcb(uVar4);
    FUN_1801ced84(uVar4);
    *param_3 = uVar5;
    param_3[1] = uVar5;
    iVar13 = FUN_1801cc3a4((uint)uVar5 << 6,*(undefined2 *)(param_1 + 0x112));
    lVar8 = (longlong)iVar13;
    lVar12 = *(short *)(param_1 + 0x13c) * lVar8;
    *(int *)(param_3 + 6) = (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10);
    lVar12 = *(short *)(param_1 + 0x13e) * lVar8;
    *(int *)(param_3 + 8) = (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10);
    lVar12 = ((longlong)*(short *)(param_1 + 0x140) +
             ((longlong)*(short *)(param_1 + 0x13c) - (longlong)*(short *)(param_1 + 0x13e))) *
             lVar8;
    *(int *)(param_3 + 10) = (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10);
    lVar8 = (ulonglong)*(ushort *)(param_1 + 0x142) * lVar8;
    *(int *)(param_3 + 0xc) = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
    *(int *)(param_3 + 2) = iVar13;
    goto LAB_1802252c3;
  }
  lVar8 = *(longlong *)(param_1 + 0x468);
  uVar10 = (ulonglong)(param_2 * 0x30);
  uVar5 = (ushort)*(byte *)(lVar8 + 0x34 + uVar10);
  *param_3 = uVar5;
  uVar11 = (ushort)*(byte *)(lVar8 + 0x35 + uVar10);
  param_3[1] = uVar11;
  cVar1 = *(char *)(lVar8 + 0x18 + uVar10);
  iVar13 = (int)cVar1 << 6;
  *(int *)(param_3 + 6) = iVar13;
  cVar2 = *(char *)(lVar8 + 0x19 + uVar10);
  iVar14 = cVar2 * 0x40;
  *(int *)(param_3 + 8) = iVar14;
  cVar3 = *(char *)(lVar8 + 0x21 + uVar10);
  if (cVar2 < '\x01') {
    if (cVar2 == '\0' && cVar1 == '\0') {
      cVar1 = *(char *)(lVar8 + 0x20 + uVar10);
      if (cVar3 == '\0' && cVar1 == '\0') {
        iVar13 = (uint)uVar11 << 6;
        *(int *)(param_3 + 6) = iVar13;
        iVar14 = 0;
      }
      else {
        iVar13 = (int)cVar1 << 6;
        *(int *)(param_3 + 6) = iVar13;
        iVar14 = (int)cVar3 << 6;
      }
      goto LAB_180225262;
    }
  }
  else if (cVar3 < '\0') {
    iVar14 = cVar2 * -0x40;
LAB_180225262:
    *(int *)(param_3 + 8) = iVar14;
  }
  *(int *)(param_3 + 10) = iVar13 - iVar14;
  if (iVar13 - iVar14 == 0) {
    *(uint *)(param_3 + 10) = (uint)uVar11 * 0x40;
    *(uint *)(param_3 + 8) = iVar14 + (uint)uVar11 * -0x40;
  }
  *(uint *)(param_3 + 0xc) =
       ((int)*(char *)(lVar8 + 0x1f + uVar10) +
       (uint)*(byte *)(lVar8 + 0x1a + uVar10) + (int)*(char *)(lVar8 + 0x1e + uVar10)) * 0x40;
  uVar6 = FUN_1801cc3a4((ulonglong)uVar5 << 6,*(undefined2 *)(param_1 + 0x112));
  *(undefined4 *)(param_3 + 2) = uVar6;
  iVar13 = FUN_1801cc3a4((ulonglong)param_3[1] << 6,*(undefined2 *)(param_1 + 0x112));
LAB_1802252c3:
  *(int *)(param_3 + 4) = iVar13;
  return 0;
}

