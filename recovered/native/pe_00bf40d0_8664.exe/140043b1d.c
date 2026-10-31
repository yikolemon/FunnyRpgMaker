/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140043b1d */

void FUN_140043b1d(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  code *pcVar9;
  uint uVar10;
  code *pcVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  code *pcVar17;
  code *pcVar18;
  
  lVar12 = param_1[0x23];
  param_1[0xe] = lVar12;
  lVar2 = param_1[0x1d];
  lVar3 = param_1[0x1e];
  lVar4 = param_1[0x1f];
  lVar5 = param_1[0x20];
  lVar6 = param_1[0x21];
  lVar7 = param_1[0x22];
  param_1[0xc] = lVar6;
  param_1[0xd] = lVar7;
  param_1[10] = lVar4;
  param_1[0xb] = lVar5;
  param_1[8] = lVar2;
  param_1[9] = lVar3;
  param_1[0xf] = lVar2;
  param_1[0x10] = lVar3;
  param_1[0x11] = lVar4;
  param_1[0x12] = lVar5;
  param_1[0x13] = lVar6;
  param_1[0x14] = lVar7;
  param_1[0x15] = lVar12;
  param_1[0x16] = lVar2;
  param_1[0x17] = lVar3;
  param_1[0x18] = lVar4;
  param_1[0x19] = lVar5;
  param_1[0x1a] = lVar6;
  param_1[0x1b] = lVar7;
  param_1[0x1c] = lVar12;
  uVar1 = *(ushort *)(param_1 + 0x1d);
  uVar8 = *(uint *)(param_1 + 0x3f);
  uVar10 = (uVar8 + uVar1) * 2;
  uVar15 = 0x1e;
  if (0x1e < uVar10) {
    uVar15 = uVar10;
  }
  if (uVar15 < *(ushort *)(param_1 + 0x24)) {
    *(short *)(param_1 + 0x24) = (short)uVar15;
  }
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0;
  if (uVar1 == 0) {
    uVar10 = uVar8 * 0x16 + 300;
  }
  else {
    iVar16 = (uint)uVar1 * 10;
    if (uVar1 < 5) {
      iVar16 = 0x32;
    }
    uVar10 = uVar8 / 10;
    if (uVar8 < 500) {
      uVar10 = 0x32;
    }
    uVar10 = uVar10 + iVar16;
  }
  *(uint *)(param_1 + 0x66) = uVar10;
  uVar8 = *(int *)(*param_1 + 0x10) * 100;
  if (uVar10 < uVar8) {
    uVar8 = uVar10;
  }
  *(uint *)(param_1 + 0x66) = uVar8;
  *(uint *)(param_1 + 0x67) = uVar8;
  if (*(short *)((longlong)param_1 + 0x15c) == *(short *)((longlong)param_1 + 0x15e)) {
    pcVar9 = FUN_140043eb6;
    pcVar11 = FUN_140043e88;
    pcVar17 = (code *)&LAB_140043e7b;
    pcVar18 = (code *)&LAB_140043e73;
  }
  else {
    pcVar9 = FUN_140043e26;
    pcVar11 = FUN_140043de7;
    pcVar17 = FUN_140043da9;
    pcVar18 = FUN_140043d75;
  }
  param_1[0x60] = (longlong)pcVar18;
  param_1[0x61] = (longlong)pcVar17;
  param_1[0x62] = (longlong)pcVar11;
  param_1[99] = (longlong)pcVar9;
  puVar13 = (undefined4 *)(param_2 + 0x88);
  puVar14 = (undefined4 *)((longlong)param_1 + 0x18c);
  for (lVar12 = 0x13; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  param_1[0x59] = (longlong)&LAB_140043ee4;
  FUN_140043f14((longlong)param_1);
  *(byte *)((longlong)param_1 + 0x324) = *(byte *)((longlong)param_1 + 0x324) & 0xfc;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c4) = 0;
                    /* WARNING: Could not recover jumptable at 0x000140043cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[3])();
  return;
}

