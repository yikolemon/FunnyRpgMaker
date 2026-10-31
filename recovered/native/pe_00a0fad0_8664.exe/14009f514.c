/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009f514 */

undefined8 * FUN_14009f514(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  undefined8 *puStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)param_1[2]) {
    *puVar2 = 0;
    puVar2[1] = 0;
    if (param_2[1] != 0) {
      LOCK();
      piVar1 = (int *)(param_2[1] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar2 + 2);
    return puVar2;
  }
  uStack_40 = 0xfffffffffffffffe;
  lVar10 = *param_1;
  uVar6 = (param_1[1] - lVar10 >> 4) + 1;
  uVar5 = param_1[2] - lVar10 >> 4;
  uVar9 = (uVar5 >> 1) + uVar5;
  if (uVar9 <= uVar6) {
    uVar9 = uVar6;
  }
  if (0xfffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar9 = 0xfffffffffffffff;
  }
  if (uVar9 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400062c7();
  }
  lVar10 = (longlong)puVar2 - lVar10;
  puVar4 = (undefined8 *)FUN_140006280(uVar9 << 4);
  lStack_48 = (longlong)puVar4 + lVar10 + 0x10;
  puVar11 = (undefined8 *)(lVar10 + (longlong)puVar4);
  *puVar11 = 0;
  puVar11[1] = 0;
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *puVar11 = *param_2;
  puVar11[1] = param_2[1];
  puVar3 = (undefined8 *)*param_1;
  puVar8 = (undefined8 *)param_1[1];
  if (puVar2 == puVar8) {
    puStack_50 = puVar11;
    if (puVar3 != puVar2) {
      lVar10 = 0;
      do {
        *(undefined8 *)((longlong)puVar4 + lVar10) = 0;
        ((undefined8 *)((longlong)puVar4 + lVar10))[1] = 0;
        puVar8 = (undefined8 *)((longlong)puVar3 + lVar10);
        *(undefined8 *)((longlong)puVar4 + lVar10) = *puVar8;
        *(undefined8 *)((longlong)puVar4 + lVar10 + 8) = puVar8[1];
        *puVar8 = 0;
        puVar8[1] = 0;
        lVar10 = lVar10 + 0x10;
      } while (puVar8 + 2 != puVar2);
    }
  }
  else {
    if (puVar3 != puVar2) {
      lVar7 = 0;
      do {
        *(undefined8 *)((longlong)puVar4 + lVar7) = 0;
        ((undefined8 *)((longlong)puVar4 + lVar7))[1] = 0;
        puVar8 = (undefined8 *)((longlong)puVar3 + lVar7);
        *(undefined8 *)((longlong)puVar4 + lVar7) = *puVar8;
        *(undefined8 *)((longlong)puVar4 + lVar7 + 8) = puVar8[1];
        *puVar8 = 0;
        puVar8[1] = 0;
        lVar7 = lVar7 + 0x10;
      } while (puVar8 + 2 != puVar2);
      puVar8 = (undefined8 *)param_1[1];
    }
    puStack_50 = puVar4;
    if (puVar2 != puVar8) {
      lVar7 = 0;
      do {
        *(undefined8 *)(lStack_48 + lVar7) = 0;
        ((undefined8 *)(lStack_48 + lVar7))[1] = 0;
        puVar3 = (undefined8 *)((longlong)puVar2 + lVar7);
        *(undefined8 *)(lStack_48 + lVar7) = *puVar3;
        *(undefined8 *)((longlong)puVar4 + lVar7 + lVar10 + 0x18) = puVar3[1];
        *puVar3 = 0;
        puVar3[1] = 0;
        lVar7 = lVar7 + 0x10;
      } while (puVar3 + 2 != puVar8);
    }
  }
  uStack_60 = 0;
  plStack_68 = param_1;
  uStack_58 = uVar9;
  FUN_14009f746(param_1,puVar4,uVar6,uVar9);
  FUN_14009f7de(&plStack_68);
  return puVar11;
}

