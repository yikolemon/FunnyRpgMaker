/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008c160 */

undefined8 * FUN_18008c160(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 *local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar18 = *param_1;
  uVar14 = (param_1[1] - lVar18 >> 5) + 1;
  uVar13 = param_1[2] - lVar18 >> 5;
  uVar17 = (uVar13 >> 1) + uVar13;
  if (uVar17 <= uVar14) {
    uVar17 = uVar14;
  }
  if (0x7ffffffffffffff - (uVar13 >> 1) < uVar13) {
    uVar17 = 0x7ffffffffffffff;
  }
  if (uVar17 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180001427();
  }
  lVar18 = (longlong)param_2 - lVar18;
  puVar12 = (undefined8 *)FUN_1800013e0(uVar17 << 5);
  local_48 = (longlong)puVar12 + lVar18 + 0x20;
  puVar19 = (undefined8 *)(lVar18 + (longlong)puVar12);
  puVar19[2] = 0;
  puVar19[3] = 0;
  *puVar19 = 0;
  puVar19[1] = 0;
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  uVar8 = param_3[5];
  uVar9 = param_3[6];
  uVar10 = param_3[7];
  *(undefined4 *)(puVar19 + 2) = param_3[4];
  *(undefined4 *)((longlong)puVar19 + 0x14) = uVar8;
  *(undefined4 *)(puVar19 + 3) = uVar9;
  *(undefined4 *)((longlong)puVar19 + 0x1c) = uVar10;
  *(undefined4 *)puVar19 = uVar4;
  *(undefined4 *)((longlong)puVar19 + 4) = uVar5;
  *(undefined4 *)(puVar19 + 1) = uVar6;
  *(undefined4 *)((longlong)puVar19 + 0xc) = uVar7;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 7;
  *(undefined2 *)param_3 = 0;
  puVar3 = (undefined4 *)*param_1;
  puVar16 = (undefined4 *)param_1[1];
  if (param_2 == puVar16) {
    local_50 = puVar19;
    if (puVar3 != param_2) {
      lVar18 = 0;
      do {
        puVar2 = (undefined8 *)((longlong)puVar12 + lVar18 + 0x10);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)((longlong)puVar12 + lVar18) = 0;
        ((undefined8 *)((longlong)puVar12 + lVar18))[1] = 0;
        puVar16 = (undefined4 *)((longlong)puVar3 + lVar18);
        uVar4 = *puVar16;
        uVar5 = puVar16[1];
        uVar6 = puVar16[2];
        uVar7 = puVar16[3];
        uVar11 = *(undefined8 *)(puVar16 + 6);
        puVar2 = (undefined8 *)((longlong)puVar12 + lVar18 + 0x10);
        *puVar2 = *(undefined8 *)(puVar16 + 4);
        puVar2[1] = uVar11;
        puVar1 = (undefined4 *)((longlong)puVar12 + lVar18);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        *(undefined8 *)(puVar16 + 4) = 0;
        *(undefined8 *)(puVar16 + 6) = 7;
        *(undefined2 *)puVar16 = 0;
        lVar18 = lVar18 + 0x20;
      } while (puVar16 + 8 != param_2);
    }
  }
  else {
    if (puVar3 != param_2) {
      lVar15 = 0;
      do {
        puVar2 = (undefined8 *)((longlong)puVar12 + lVar15 + 0x10);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)((longlong)puVar12 + lVar15) = 0;
        ((undefined8 *)((longlong)puVar12 + lVar15))[1] = 0;
        puVar16 = (undefined4 *)((longlong)puVar3 + lVar15);
        uVar4 = *puVar16;
        uVar5 = puVar16[1];
        uVar6 = puVar16[2];
        uVar7 = puVar16[3];
        uVar11 = *(undefined8 *)(puVar16 + 6);
        puVar2 = (undefined8 *)((longlong)puVar12 + lVar15 + 0x10);
        *puVar2 = *(undefined8 *)(puVar16 + 4);
        puVar2[1] = uVar11;
        puVar1 = (undefined4 *)((longlong)puVar12 + lVar15);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        *(undefined8 *)(puVar16 + 4) = 0;
        *(undefined8 *)(puVar16 + 6) = 7;
        *(undefined2 *)puVar16 = 0;
        lVar15 = lVar15 + 0x20;
      } while (puVar16 + 8 != param_2);
      puVar16 = (undefined4 *)param_1[1];
    }
    local_50 = puVar12;
    if (param_2 != puVar16) {
      lVar15 = 0;
      do {
        puVar2 = (undefined8 *)((longlong)puVar12 + lVar15 + lVar18 + 0x30);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)(local_48 + lVar15) = 0;
        ((undefined8 *)(local_48 + lVar15))[1] = 0;
        puVar3 = (undefined4 *)((longlong)param_2 + lVar15);
        uVar4 = *puVar3;
        uVar5 = puVar3[1];
        uVar6 = puVar3[2];
        uVar7 = puVar3[3];
        uVar11 = *(undefined8 *)(puVar3 + 6);
        puVar2 = (undefined8 *)((longlong)puVar12 + lVar15 + lVar18 + 0x30);
        *puVar2 = *(undefined8 *)(puVar3 + 4);
        puVar2[1] = uVar11;
        puVar1 = (undefined4 *)(local_48 + lVar15);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        *(undefined8 *)(puVar3 + 4) = 0;
        *(undefined8 *)(puVar3 + 6) = 7;
        *(undefined2 *)puVar3 = 0;
        lVar15 = lVar15 + 0x20;
      } while (puVar3 + 8 != puVar16);
    }
  }
  local_60 = 0;
  local_68 = param_1;
  local_58 = uVar17;
  FUN_18008c3c2(param_1,puVar12,uVar14,uVar17);
  FUN_18008c45a(&local_68);
  return puVar19;
}

