/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b2530 */

void FUN_1400b2530(longlong param_1,undefined8 *param_2,longlong param_3)

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
  longlong lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  uVar7 = *param_2;
  uVar8 = param_2[1];
  lVar16 = (longlong)param_2 - param_1;
  lVar12 = param_1 + param_3;
  puVar15 = (undefined4 *)(lVar12 + -0x10 + lVar16);
  uVar4 = puVar15[1];
  uVar5 = puVar15[2];
  uVar6 = puVar15[3];
  puVar13 = (undefined4 *)(lVar12 + -0x10);
  uVar17 = param_3 - 0x10;
  puVar14 = puVar13;
  uVar19 = *puVar15;
  uVar20 = uVar4;
  uVar21 = uVar5;
  uVar22 = uVar6;
  if (((ulonglong)puVar13 & 0xf) != 0) {
    puVar14 = (undefined4 *)((ulonglong)puVar13 & 0xfffffffffffffff0);
    puVar1 = (undefined4 *)((longlong)puVar14 + lVar16);
    uVar19 = *puVar1;
    uVar20 = puVar1[1];
    uVar21 = puVar1[2];
    uVar22 = puVar1[3];
    *puVar13 = *puVar15;
    *(undefined4 *)(lVar12 + -0xc) = uVar4;
    *(undefined4 *)(lVar12 + -8) = uVar5;
    *(undefined4 *)(lVar12 + -4) = uVar6;
    uVar17 = (longlong)puVar14 - (longlong)in_RAX;
  }
  uVar18 = uVar17 >> 7;
  if (uVar18 != 0) {
    *puVar14 = uVar19;
    puVar14[1] = uVar20;
    puVar14[2] = uVar21;
    puVar14[3] = uVar22;
    puVar15 = puVar14;
    while( true ) {
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x10);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x20);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      puVar14 = puVar15 + -0x20;
      *(undefined8 *)(puVar15 + -4) = *puVar2;
      *(undefined8 *)(puVar15 + -2) = uVar9;
      *(undefined8 *)(puVar15 + -8) = uVar10;
      *(undefined8 *)(puVar15 + -6) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x30);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x40);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      uVar18 = uVar18 - 1;
      *(undefined8 *)(puVar15 + -0xc) = *puVar2;
      *(undefined8 *)(puVar15 + -10) = uVar9;
      *(undefined8 *)(puVar15 + -0x10) = uVar10;
      *(undefined8 *)(puVar15 + -0xe) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x50);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x60);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      *(undefined8 *)(puVar15 + -0x14) = *puVar2;
      *(undefined8 *)(puVar15 + -0x12) = uVar9;
      *(undefined8 *)(puVar15 + -0x18) = uVar10;
      *(undefined8 *)(puVar15 + -0x16) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x70);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar13 = (undefined4 *)((longlong)puVar14 + lVar16);
      uVar19 = *puVar13;
      uVar20 = puVar13[1];
      uVar21 = puVar13[2];
      uVar22 = puVar13[3];
      if (uVar18 == 0) break;
      *(undefined8 *)(puVar15 + -0x1c) = uVar9;
      *(undefined8 *)(puVar15 + -0x1a) = uVar10;
      *puVar14 = uVar19;
      puVar15[-0x1f] = uVar20;
      puVar15[-0x1e] = uVar21;
      puVar15[-0x1d] = uVar22;
      puVar15 = puVar14;
    }
    *(undefined8 *)(puVar15 + -0x1c) = uVar9;
    *(undefined8 *)(puVar15 + -0x1a) = uVar10;
    uVar17 = uVar17 & 0x7f;
  }
  for (uVar18 = uVar17 >> 4; uVar18 != 0; uVar18 = uVar18 - 1) {
    *puVar14 = uVar19;
    puVar14[1] = uVar20;
    puVar14[2] = uVar21;
    puVar14[3] = uVar22;
    puVar14 = puVar14 + -4;
    puVar15 = (undefined4 *)((longlong)puVar14 + lVar16);
    uVar19 = *puVar15;
    uVar20 = puVar15[1];
    uVar21 = puVar15[2];
    uVar22 = puVar15[3];
  }
  if ((uVar17 & 0xf) != 0) {
    *in_RAX = uVar7;
    in_RAX[1] = uVar8;
  }
  *puVar14 = uVar19;
  puVar14[1] = uVar20;
  puVar14[2] = uVar21;
  puVar14[3] = uVar22;
  return;
}

