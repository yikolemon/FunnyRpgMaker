/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140134da0 */

void FUN_140134da0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *in_RAX;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  uVar7 = *param_2;
  uVar8 = param_2[1];
  lVar15 = (longlong)param_2 - param_1;
  param_1 = param_1 + param_3;
  puVar14 = (undefined4 *)(param_1 + -0x10 + lVar15);
  uVar4 = puVar14[1];
  uVar5 = puVar14[2];
  uVar6 = puVar14[3];
  puVar12 = (undefined4 *)(param_1 + -0x10);
  uVar16 = param_3 - 0x10;
  puVar13 = puVar12;
  uVar18 = *puVar14;
  uVar19 = uVar4;
  uVar20 = uVar5;
  uVar21 = uVar6;
  if (((ulonglong)puVar12 & 0xf) != 0) {
    puVar13 = (undefined4 *)((ulonglong)puVar12 & 0xfffffffffffffff0);
    puVar1 = (undefined4 *)((longlong)puVar13 + lVar15);
    uVar18 = *puVar1;
    uVar19 = puVar1[1];
    uVar20 = puVar1[2];
    uVar21 = puVar1[3];
    *puVar12 = *puVar14;
    *(undefined4 *)(param_1 + -0xc) = uVar4;
    *(undefined4 *)(param_1 + -8) = uVar5;
    *(undefined4 *)(param_1 + -4) = uVar6;
    uVar16 = (longlong)puVar13 - (longlong)in_RAX;
  }
  uVar17 = uVar16 >> 7;
  if (uVar17 != 0) {
    *puVar13 = uVar18;
    puVar13[1] = uVar19;
    puVar13[2] = uVar20;
    puVar13[3] = uVar21;
    puVar14 = puVar13;
    while( true ) {
      puVar2 = (undefined8 *)((longlong)puVar14 + lVar15 + -0x10);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar14 + lVar15 + -0x20);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      puVar13 = puVar14 + -0x20;
      *(undefined8 *)(puVar14 + -4) = *puVar2;
      *(undefined8 *)(puVar14 + -2) = uVar9;
      *(undefined8 *)(puVar14 + -8) = uVar10;
      *(undefined8 *)(puVar14 + -6) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar14 + lVar15 + -0x30);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar14 + lVar15 + -0x40);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      uVar17 = uVar17 - 1;
      *(undefined8 *)(puVar14 + -0xc) = *puVar2;
      *(undefined8 *)(puVar14 + -10) = uVar9;
      *(undefined8 *)(puVar14 + -0x10) = uVar10;
      *(undefined8 *)(puVar14 + -0xe) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar14 + lVar15 + -0x50);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar14 + lVar15 + -0x60);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      *(undefined8 *)(puVar14 + -0x14) = *puVar2;
      *(undefined8 *)(puVar14 + -0x12) = uVar9;
      *(undefined8 *)(puVar14 + -0x18) = uVar10;
      *(undefined8 *)(puVar14 + -0x16) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar14 + lVar15 + -0x70);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar12 = (undefined4 *)((longlong)puVar13 + lVar15);
      uVar18 = *puVar12;
      uVar19 = puVar12[1];
      uVar20 = puVar12[2];
      uVar21 = puVar12[3];
      if (uVar17 == 0) break;
      *(undefined8 *)(puVar14 + -0x1c) = uVar9;
      *(undefined8 *)(puVar14 + -0x1a) = uVar10;
      *puVar13 = uVar18;
      puVar14[-0x1f] = uVar19;
      puVar14[-0x1e] = uVar20;
      puVar14[-0x1d] = uVar21;
      puVar14 = puVar13;
    }
    *(undefined8 *)(puVar14 + -0x1c) = uVar9;
    *(undefined8 *)(puVar14 + -0x1a) = uVar10;
    uVar16 = uVar16 & 0x7f;
  }
  for (uVar17 = uVar16 >> 4; uVar17 != 0; uVar17 = uVar17 - 1) {
    *puVar13 = uVar18;
    puVar13[1] = uVar19;
    puVar13[2] = uVar20;
    puVar13[3] = uVar21;
    puVar13 = puVar13 + -4;
    puVar14 = (undefined4 *)((longlong)puVar13 + lVar15);
    uVar18 = *puVar14;
    uVar19 = puVar14[1];
    uVar20 = puVar14[2];
    uVar21 = puVar14[3];
  }
  if ((uVar16 & 0xf) != 0) {
    *in_RAX = uVar7;
    in_RAX[1] = uVar8;
  }
  *puVar13 = uVar18;
  puVar13[1] = uVar19;
  puVar13[2] = uVar20;
  puVar13[3] = uVar21;
  return;
}

