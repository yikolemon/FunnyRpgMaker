/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14029d5e0 */

undefined8 * FUN_14029d5e0(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined8 *puVar22;
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 *local_50;
  longlong local_48;
  undefined8 local_40;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 != (undefined8 *)param_1[2]) {
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    uVar12 = *param_2;
    uVar13 = param_2[1];
    uVar14 = param_2[3];
    puVar3[2] = param_2[2];
    puVar3[3] = uVar14;
    *puVar3 = uVar12;
    puVar3[1] = uVar13;
    param_2[2] = 0;
    param_2[3] = 7;
    *(undefined2 *)param_2 = 0;
    puVar3 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar3 + 4);
    return puVar3;
  }
  local_40 = 0xfffffffffffffffe;
  lVar21 = *param_1;
  uVar17 = (param_1[1] - lVar21 >> 5) + 1;
  uVar16 = param_1[2] - lVar21 >> 5;
  uVar20 = (uVar16 >> 1) + uVar16;
  if (uVar20 <= uVar17) {
    uVar20 = uVar17;
  }
  if (0x7ffffffffffffff - (uVar16 >> 1) < uVar16) {
    uVar20 = 0x7ffffffffffffff;
  }
  if (uVar20 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402128f7();
  }
  lVar21 = (longlong)puVar3 - lVar21;
  puVar15 = (undefined8 *)FUN_1402128b0(uVar20 << 5);
  local_48 = (longlong)puVar15 + lVar21 + 0x20;
  puVar22 = (undefined8 *)(lVar21 + (longlong)puVar15);
  puVar22[2] = 0;
  puVar22[3] = 0;
  *puVar22 = 0;
  puVar22[1] = 0;
  uVar5 = *(undefined4 *)param_2;
  uVar6 = *(undefined4 *)((longlong)param_2 + 4);
  uVar7 = *(undefined4 *)(param_2 + 1);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar10 = *(undefined4 *)(param_2 + 3);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(puVar22 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)puVar22 + 0x14) = uVar9;
  *(undefined4 *)(puVar22 + 3) = uVar10;
  *(undefined4 *)((longlong)puVar22 + 0x1c) = uVar11;
  *(undefined4 *)puVar22 = uVar5;
  *(undefined4 *)((longlong)puVar22 + 4) = uVar6;
  *(undefined4 *)(puVar22 + 1) = uVar7;
  *(undefined4 *)((longlong)puVar22 + 0xc) = uVar8;
  param_2[2] = 0;
  param_2[3] = 7;
  *(undefined2 *)param_2 = 0;
  puVar4 = (undefined8 *)*param_1;
  puVar19 = (undefined8 *)param_1[1];
  if (puVar3 == puVar19) {
    local_50 = puVar22;
    if (puVar4 != puVar3) {
      lVar21 = 0;
      do {
        puVar19 = (undefined8 *)((longlong)puVar15 + lVar21 + 0x10);
        *puVar19 = 0;
        puVar19[1] = 0;
        *(undefined8 *)((longlong)puVar15 + lVar21) = 0;
        ((undefined8 *)((longlong)puVar15 + lVar21))[1] = 0;
        puVar1 = (undefined4 *)((longlong)puVar4 + lVar21);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        uVar12 = *(undefined8 *)(puVar1 + 6);
        puVar19 = (undefined8 *)((longlong)puVar15 + lVar21 + 0x10);
        *puVar19 = *(undefined8 *)(puVar1 + 4);
        puVar19[1] = uVar12;
        puVar2 = (undefined4 *)((longlong)puVar15 + lVar21);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        *(undefined8 *)(puVar1 + 4) = 0;
        *(undefined8 *)(puVar1 + 6) = 7;
        *(undefined2 *)puVar1 = 0;
        lVar21 = lVar21 + 0x20;
      } while ((undefined8 *)(puVar1 + 8) != puVar3);
    }
  }
  else {
    if (puVar4 != puVar3) {
      lVar18 = 0;
      do {
        puVar19 = (undefined8 *)((longlong)puVar15 + lVar18 + 0x10);
        *puVar19 = 0;
        puVar19[1] = 0;
        *(undefined8 *)((longlong)puVar15 + lVar18) = 0;
        ((undefined8 *)((longlong)puVar15 + lVar18))[1] = 0;
        puVar1 = (undefined4 *)((longlong)puVar4 + lVar18);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        uVar12 = *(undefined8 *)(puVar1 + 6);
        puVar19 = (undefined8 *)((longlong)puVar15 + lVar18 + 0x10);
        *puVar19 = *(undefined8 *)(puVar1 + 4);
        puVar19[1] = uVar12;
        puVar2 = (undefined4 *)((longlong)puVar15 + lVar18);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        *(undefined8 *)(puVar1 + 4) = 0;
        *(undefined8 *)(puVar1 + 6) = 7;
        *(undefined2 *)puVar1 = 0;
        lVar18 = lVar18 + 0x20;
      } while ((undefined8 *)(puVar1 + 8) != puVar3);
      puVar19 = (undefined8 *)param_1[1];
    }
    local_50 = puVar15;
    if (puVar3 != puVar19) {
      lVar18 = 0;
      do {
        puVar4 = (undefined8 *)((longlong)puVar15 + lVar18 + lVar21 + 0x30);
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined8 *)(local_48 + lVar18) = 0;
        ((undefined8 *)(local_48 + lVar18))[1] = 0;
        puVar1 = (undefined4 *)((longlong)puVar3 + lVar18);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        uVar12 = *(undefined8 *)(puVar1 + 6);
        puVar4 = (undefined8 *)((longlong)puVar15 + lVar18 + lVar21 + 0x30);
        *puVar4 = *(undefined8 *)(puVar1 + 4);
        puVar4[1] = uVar12;
        puVar2 = (undefined4 *)(local_48 + lVar18);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        *(undefined8 *)(puVar1 + 4) = 0;
        *(undefined8 *)(puVar1 + 6) = 7;
        *(undefined2 *)puVar1 = 0;
        lVar18 = lVar18 + 0x20;
      } while ((undefined8 *)(puVar1 + 8) != puVar19);
    }
  }
  local_60 = 0;
  local_68 = param_1;
  local_58 = uVar20;
  FUN_14029d892(param_1,puVar15,uVar17,uVar20);
  FUN_14029d92a(&local_68);
  return puVar22;
}

