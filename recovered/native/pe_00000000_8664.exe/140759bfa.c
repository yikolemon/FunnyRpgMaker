/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140759bfa */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140759bfa(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  uint uVar10;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  longlong in_FS_OFFSET;
  ulonglong uVar11;
  
  uVar16 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar10 = (int)&stack0xffffffffffffffe0 - 0x28;
  uVar11 = (ulonglong)uVar10;
  uVar7 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x18);
  *(uint *)(uVar7 - 4) = uVar10;
  *(undefined8 *)(uVar7 + 8) = 0;
  *(undefined4 *)(uVar7 + 4) = 0x1012c990;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x35) = 1;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(int *)(uVar16 - 0x20) = (int)param_1;
  *(undefined8 *)(param_1 + 0x134) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(uVar7 + 8) = 0;
  uVar7 = (ulonglong)*(uint *)(uVar16 - 0x20);
  *(undefined4 *)(uVar7 + 0x1dc) = 0;
  *(undefined4 *)(uVar7 + 0x1d8) = 0;
  *(undefined4 *)(uVar7 + 0x1e0) = 0;
  *(undefined8 *)(uVar7 + 0x144) = 0;
  *(undefined8 *)(uVar7 + 0x14c) = 0;
  *(undefined8 *)(uVar7 + 0x154) = 0;
  *(undefined8 *)(uVar7 + 0x15c) = 0;
  *(undefined8 *)(uVar7 + 0x164) = 0;
  *(undefined8 *)(uVar7 + 0x16c) = 0;
  *(undefined8 *)(uVar7 + 0x174) = 0;
  *(undefined8 *)(uVar7 + 0x188) = 0;
  *(undefined8 *)(uVar7 + 400) = 0;
  *(undefined4 *)(uVar7 + 0x198) = 0;
  *(undefined8 *)(uVar7 + 0x1a8) = 0;
  *(undefined8 *)(uVar7 + 0x1b0) = 0;
  *(undefined8 *)(uVar7 + 0x1b8) = 0;
  *(undefined8 *)(uVar7 + 0x1c0) = 0;
  *(undefined4 *)(uVar7 + 0x1c8) = 0;
  *(undefined4 *)(uVar16 - 0x10) = 0xffffffff;
  *(undefined8 *)(uVar7 + 0x208) = 0;
  *(undefined8 *)(uVar7 + 0x210) = 0;
  *(undefined4 *)(uVar7 + 0x228) = 0;
  *(undefined4 *)(uVar7 + 0x224) = 0;
  *(undefined4 *)(uVar7 + 0x22c) = 0;
  *(undefined4 *)(uVar16 - 0x10) = 1;
  uVar7 = (ulonglong)*(uint *)(uVar16 - 0x20);
  *(undefined4 *)(uVar7 + 0x234) = 0;
  *(undefined4 *)(uVar7 + 0x230) = 0;
  *(undefined4 *)(uVar7 + 0x238) = 0;
  *(undefined4 *)(uVar16 - 0x10) = 2;
  *(undefined4 *)(uVar16 - 0x10) = 0xffffffff;
  *(int *)(uVar16 - 0x34) = *(int *)(uVar16 - 0x20) + 0x144;
  *(undefined4 *)(uVar16 - 0x10) = 3;
  uVar7 = (ulonglong)*(uint *)(uVar16 - 0x20);
  *(uint *)(uVar16 - 0x30) = *(uint *)(uVar16 - 0x20) + 0x2c0;
  *(undefined4 *)(uVar7 + 0x2c4) = 0;
  *(undefined4 *)(uVar7 + 0x2c0) = 0;
  *(undefined4 *)(uVar7 + 0x2c8) = 0;
  *(undefined8 *)(uVar7 + 0x23c) = 0;
  *(undefined8 *)(uVar7 + 0x244) = 0;
  *(undefined8 *)(uVar7 + 0x24c) = 0;
  *(undefined8 *)(uVar7 + 0x254) = 0;
  *(undefined8 *)(uVar7 + 0x25c) = 0;
  *(undefined8 *)(uVar7 + 0x264) = 0;
  *(undefined8 *)(uVar7 + 0x26c) = 0;
  *(undefined8 *)(uVar7 + 0x274) = 0;
  *(undefined8 *)(uVar7 + 0x27c) = 0;
  *(undefined8 *)(uVar7 + 0x284) = 0;
  *(undefined8 *)(uVar7 + 0x28c) = 0;
  *(undefined8 *)(uVar7 + 0x294) = 0;
  *(undefined8 *)(uVar7 + 0x29c) = 0;
  *(undefined8 *)(uVar7 + 0x2a4) = 0;
  *(undefined8 *)(uVar7 + 0x2ac) = 0;
  *(undefined4 *)(uVar16 - 0x10) = 4;
  uVar7 = (ulonglong)*(uint *)(uVar16 - 0x20);
  *(undefined4 *)(uVar7 + 0x2d0) = 0;
  *(undefined4 *)(uVar7 + 0x2cc) = 0;
  *(undefined4 *)(uVar7 + 0x2d4) = 0;
  *(undefined4 *)(uVar16 - 0x10) = 5;
  *(int *)(uVar16 - 0x24) = *(int *)(uVar16 - 0x20) + 0x2f0;
  *(undefined8 *)(uVar11 - 8) = 0;
  *(undefined8 *)(uVar11 - 0x10) = 0x140759dca;
  FUN_1407deea8();
  *(undefined4 *)(uVar16 - 0x10) = 6;
  uVar10 = *(uint *)(uVar16 - 0x20);
  uVar3 = *(undefined4 *)(uVar16 + 8);
  *(undefined8 *)(uVar11 - 0x10) = 0x440;
  *(undefined8 *)(uVar11 - 0x18) = 0;
  *(undefined4 **)(uVar11 - 0x20) = (undefined4 *)(ulonglong)uVar10;
  *(undefined8 *)(uVar11 - 0x28) = 0x140759de7;
  FUN_1408b3720();
  uVar12 = (ulonglong)((int)(uVar11 - 0x20) + 0xc);
  *(undefined4 *)(ulonglong)uVar10 = uVar3;
  *(undefined8 *)(uVar12 - 8) = *(undefined8 *)(uVar16 + 0xc);
  *(undefined8 *)(uVar12 - 0x10) = 0x140759df4;
  uVar3 = FUN_14075209b();
  uVar7 = (ulonglong)*(uint *)(uVar16 - 0x20);
  uVar13 = (ulonglong)((int)(uVar12 - 8) + 4);
  *(undefined4 *)(uVar7 + 4) = uVar3;
  uVar10 = *(uint *)(uVar16 + 0xc);
  *(ulonglong *)(uVar13 - 8) = (ulonglong)uVar10;
  *(undefined8 *)(uVar13 - 0x10) = 0x140759e07;
  uVar3 = FUN_1408c85c0();
  uVar14 = (ulonglong)((int)(uVar13 - 8) + 4);
  *(undefined4 *)(uVar7 + 0xb0) = uVar3;
  *(undefined8 *)(uVar14 - 8) = 0;
  *(undefined8 *)(uVar14 - 0x10) = 0;
  *(ulonglong *)(uVar14 - 0x18) = (ulonglong)uVar10;
  *(undefined8 *)(uVar14 - 0x20) = 0x140759e1b;
  uVar3 = FUN_140752593();
  puVar15 = (undefined1 *)(ulonglong)((int)(uVar14 - 0x18) + 0xc);
  *(undefined4 *)(uVar7 + 8) = uVar3;
  uVar10 = *(uint *)(uVar7 + 0x138);
  if (uVar10 == *(uint *)(uVar7 + 0x13c)) {
    if (uVar10 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = (int)uVar10 / 2 + uVar10;
    }
    iVar1 = uVar10 + 1;
    if ((int)(uVar10 + 1) < iVar4) {
      iVar1 = iVar4;
    }
    *(int *)(uVar16 - 0x2c) = iVar1;
    *(ulonglong *)(puVar15 + -8) = (ulonglong)(uint)(iVar1 * 4);
    *(undefined8 *)(puVar15 + -0x10) = 0x140759e66;
    uVar5 = FUN_1407520ca();
    uVar7 = (ulonglong)*(uint *)(uVar16 - 0x20);
    puVar15 = (undefined1 *)(ulonglong)((int)(puVar15 + -8) + 4);
    uVar8 = (ulonglong)uVar5;
    uVar10 = *(uint *)(uVar7 + 0x140);
    if (uVar10 != 0) {
      *(ulonglong *)(puVar15 + -8) = (ulonglong)(uint)(*(int *)(uVar7 + 0x138) << 2);
      *(ulonglong *)(puVar15 + -0x10) = (ulonglong)uVar10;
      *(ulonglong *)(puVar15 + -0x18) = uVar8;
      *(uint *)(uVar16 - 0x28) = uVar5;
      *(undefined8 *)(puVar15 + -0x20) = 0x140759e8d;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(puVar15 + -0x18) + 0xc) - 8) =
           *(undefined8 *)(uVar7 + 0x140);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(puVar15 + -0x18) + 0xc) - 0x10) = &UNK_140759e9b;
      FUN_14075219b();
    }
    *(uint *)(uVar7 + 0x140) = uVar5;
    *(undefined4 *)(uVar7 + 0x13c) = *(undefined4 *)(uVar16 - 0x2c);
    uVar3 = *(undefined4 *)(uVar7 + 8);
    uVar10 = *(uint *)(uVar7 + 0x138);
  }
  else {
    uVar8 = (ulonglong)*(uint *)(uVar7 + 0x140);
  }
  *(undefined4 *)(uVar8 + (ulonglong)uVar10 * 4) = uVar3;
  *(int *)(uVar7 + 0x138) = *(int *)(uVar7 + 0x138) + 1;
  *(undefined4 *)(uVar7 + 0x4c) = 0xffffffff;
  *(undefined4 *)(uVar7 + 0x44) = 0x7f7fffff;
  *(undefined4 *)(uVar7 + 0x48) = 0x7f7fffff;
  *(undefined8 *)(puVar15 + -8) = 0;
  *(undefined8 *)(puVar15 + -0x10) = 0x1033c8ed;
  *(undefined8 *)(puVar15 + -0x18) = 0x140759ee7;
  uVar3 = FUN_14075a0a4(uVar7);
  *(undefined4 *)((ulonglong)*(uint *)(uVar16 - 0x20) + 0xb4) = uVar3;
  *(undefined8 *)(puVar15 + -0x18) = 0;
  *(undefined8 *)(puVar15 + -0x20) = 0x1033cce8;
  *(undefined8 *)(puVar15 + -0x28) = 0x140759efd;
  iVar4 = FUN_14075a0a4();
  piVar9 = (int *)(ulonglong)*(uint *)(uVar16 - 0x20);
  piVar9[0x2e] = iVar4;
  uVar2 = uRam0000000150a12a96;
  *(undefined8 *)(piVar9 + 0x35) = _DAT_150a12a8e;
  *(undefined8 *)(piVar9 + 0x37) = uVar2;
  piVar9[0x45] = 0;
  piVar9[0x46] = 0;
  *(undefined2 *)(piVar9 + 0x46) = 0;
  *(ulonglong *)(piVar9 + 0x48) =
       CONCAT44((uint)((ulonglong)*(undefined8 *)(piVar9 + 0x48) >> 0x20) & uRam0000000150a12ac8,
                (uint)*(undefined8 *)(piVar9 + 0x48) & _DAT_150a12ac4);
  uVar2 = uRam0000000150a12aba;
  *(undefined8 *)(piVar9 + 0x4a) = _DAT_150a12ab2;
  *(undefined8 *)(piVar9 + 0x4c) = uVar2;
  piVar9[0xad] = 0;
  piVar9[0xae] = 0;
  piVar9[0xaf] = -0x40800000;
  piVar9[0xb8] = 0;
  *(undefined8 *)(piVar9 + 0xb6) = _DAT_150a11011;
  piVar9[0xb9] = 0;
  *(undefined2 *)((longlong)piVar9 + 0x40a) = 0;
  piVar9[0xba] = *(int *)(uVar16 - 0x24);
  piVar9[0xe7] = piVar9[1];
  *(ulonglong *)(puVar15 + -0x28) = (ulonglong)(*piVar9 + 0x123c);
  *(undefined8 *)(puVar15 + -0x30) = 0x140759fa5;
  FUN_1407df0f4();
  uVar2 = uRam0000000150a12b28;
  uVar10 = *(uint *)(uVar16 - 0x20);
  uVar7 = (ulonglong)uVar10;
  *(undefined8 *)(uVar7 + 0x3ec) = _DAT_150a12b20;
  *(undefined8 *)(uVar7 + 0x3f4) = uVar2;
  *(undefined4 *)(uVar16 - 0x10) = 7;
  puVar6 = (undefined8 *)(ulonglong)(uVar10 + 0x18);
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined4 *)(puVar6 + 4) = 0;
  *(undefined8 *)(uVar7 + 0x1c) = 0;
  *(undefined1 *)(uVar7 + 0x35) = 1;
  *(undefined4 *)(uVar16 - 0x10) = 0;
  *(undefined4 *)(in_FS_OFFSET + -0x7c1fba7500000000) = *(undefined4 *)(uVar16 - 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

