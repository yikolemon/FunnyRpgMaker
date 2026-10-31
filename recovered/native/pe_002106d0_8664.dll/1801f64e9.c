/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f64e9 */

void FUN_1801f64e9(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  code *pcVar15;
  uint uVar16;
  code *pcVar17;
  longlong lVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  uint uVar21;
  int iVar22;
  code *pcVar23;
  code *pcVar24;
  
  lVar18 = param_1[0x23];
  param_1[0xe] = lVar18;
  uVar2 = (undefined4)param_1[0x1d];
  uVar3 = *(undefined4 *)((longlong)param_1 + 0xec);
  uVar4 = (undefined4)param_1[0x1e];
  uVar5 = *(undefined4 *)((longlong)param_1 + 0xf4);
  uVar6 = (undefined4)param_1[0x1f];
  uVar7 = *(undefined4 *)((longlong)param_1 + 0xfc);
  uVar8 = (undefined4)param_1[0x20];
  uVar9 = *(undefined4 *)((longlong)param_1 + 0x104);
  uVar10 = (undefined4)param_1[0x21];
  uVar11 = *(undefined4 *)((longlong)param_1 + 0x10c);
  uVar12 = (undefined4)param_1[0x22];
  uVar13 = *(undefined4 *)((longlong)param_1 + 0x114);
  *(undefined4 *)(param_1 + 0xc) = uVar10;
  *(undefined4 *)((longlong)param_1 + 100) = uVar11;
  *(undefined4 *)(param_1 + 0xd) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar13;
  *(undefined4 *)(param_1 + 10) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar7;
  *(undefined4 *)(param_1 + 0xb) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar9;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 9) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
  *(undefined4 *)(param_1 + 0xf) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar5;
  *(undefined4 *)(param_1 + 0x11) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar7;
  *(undefined4 *)(param_1 + 0x12) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar9;
  *(undefined4 *)(param_1 + 0x13) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar11;
  *(undefined4 *)(param_1 + 0x14) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar13;
  param_1[0x15] = lVar18;
  *(undefined4 *)(param_1 + 0x16) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar3;
  *(undefined4 *)(param_1 + 0x17) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar5;
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar7;
  *(undefined4 *)(param_1 + 0x19) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar9;
  *(undefined4 *)(param_1 + 0x1a) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar11;
  *(undefined4 *)(param_1 + 0x1b) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar13;
  param_1[0x1c] = lVar18;
  uVar1 = *(ushort *)(param_1 + 0x1d);
  uVar14 = *(uint *)(param_1 + 0x3f);
  uVar16 = (uVar14 + uVar1) * 2;
  uVar21 = 0x1e;
  if (0x1e < uVar16) {
    uVar21 = uVar16;
  }
  if (uVar21 < *(ushort *)(param_1 + 0x24)) {
    *(short *)(param_1 + 0x24) = (short)uVar21;
  }
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0;
  if (uVar1 == 0) {
    uVar16 = uVar14 * 0x16 + 300;
  }
  else {
    iVar22 = (uint)uVar1 * 10;
    if (uVar1 < 5) {
      iVar22 = 0x32;
    }
    uVar16 = uVar14 / 10;
    if (uVar14 < 500) {
      uVar16 = 0x32;
    }
    uVar16 = uVar16 + iVar22;
  }
  *(uint *)(param_1 + 0x66) = uVar16;
  uVar14 = *(int *)(*param_1 + 0x10) * 100;
  if (uVar16 < uVar14) {
    uVar14 = uVar16;
  }
  *(uint *)(param_1 + 0x66) = uVar14;
  *(uint *)(param_1 + 0x67) = uVar14;
  if (*(short *)((longlong)param_1 + 0x15c) == *(short *)((longlong)param_1 + 0x15e)) {
    pcVar15 = FUN_1801f6882;
    pcVar17 = FUN_1801f6854;
    pcVar23 = (code *)&LAB_1801f6847;
    pcVar24 = (code *)&LAB_1801f683f;
  }
  else {
    pcVar15 = FUN_1801f67f2;
    pcVar17 = FUN_1801f67b3;
    pcVar23 = FUN_1801f6775;
    pcVar24 = FUN_1801f6741;
  }
  param_1[0x60] = (longlong)pcVar24;
  param_1[0x61] = (longlong)pcVar23;
  param_1[0x62] = (longlong)pcVar17;
  param_1[99] = (longlong)pcVar15;
  puVar19 = (undefined4 *)(param_2 + 0x88);
  puVar20 = (undefined4 *)((longlong)param_1 + 0x18c);
  for (lVar18 = 0x13; lVar18 != 0; lVar18 = lVar18 + -1) {
    *puVar20 = *puVar19;
    puVar19 = puVar19 + 1;
    puVar20 = puVar20 + 1;
  }
  param_1[0x59] = (longlong)&LAB_1801f68b0;
  FUN_1801f68e0(param_1);
  *(byte *)((longlong)param_1 + 0x324) = *(byte *)((longlong)param_1 + 0x324) & 0xfc;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c4) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001801f66c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[3])();
  return;
}

