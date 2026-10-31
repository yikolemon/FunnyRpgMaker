/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009f554 */

undefined8 * FUN_14009f554(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 *local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar9 = *param_1;
  uVar5 = (param_1[1] - lVar9 >> 4) + 1;
  uVar4 = param_1[2] - lVar9 >> 4;
  uVar8 = (uVar4 >> 1) + uVar4;
  if (uVar8 <= uVar5) {
    uVar8 = uVar5;
  }
  if (0xfffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar8 = 0xfffffffffffffff;
  }
  if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400062c7();
  }
  lVar9 = (longlong)param_2 - lVar9;
  puVar3 = (undefined8 *)FUN_140006280(uVar8 << 4);
  local_48 = (longlong)puVar3 + lVar9 + 0x10;
  puVar10 = (undefined8 *)(lVar9 + (longlong)puVar3);
  *puVar10 = 0;
  puVar10[1] = 0;
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *puVar10 = *param_3;
  puVar10[1] = param_3[1];
  puVar2 = (undefined8 *)*param_1;
  puVar7 = (undefined8 *)param_1[1];
  if (param_2 == puVar7) {
    local_50 = puVar10;
    if (puVar2 != param_2) {
      lVar9 = 0;
      do {
        *(undefined8 *)((longlong)puVar3 + lVar9) = 0;
        ((undefined8 *)((longlong)puVar3 + lVar9))[1] = 0;
        puVar7 = (undefined8 *)((longlong)puVar2 + lVar9);
        *(undefined8 *)((longlong)puVar3 + lVar9) = *puVar7;
        *(undefined8 *)((longlong)puVar3 + lVar9 + 8) = puVar7[1];
        *puVar7 = 0;
        puVar7[1] = 0;
        lVar9 = lVar9 + 0x10;
      } while (puVar7 + 2 != param_2);
    }
  }
  else {
    if (puVar2 != param_2) {
      lVar6 = 0;
      do {
        *(undefined8 *)((longlong)puVar3 + lVar6) = 0;
        ((undefined8 *)((longlong)puVar3 + lVar6))[1] = 0;
        puVar7 = (undefined8 *)((longlong)puVar2 + lVar6);
        *(undefined8 *)((longlong)puVar3 + lVar6) = *puVar7;
        *(undefined8 *)((longlong)puVar3 + lVar6 + 8) = puVar7[1];
        *puVar7 = 0;
        puVar7[1] = 0;
        lVar6 = lVar6 + 0x10;
      } while (puVar7 + 2 != param_2);
      puVar7 = (undefined8 *)param_1[1];
    }
    local_50 = puVar3;
    if (param_2 != puVar7) {
      lVar6 = 0;
      do {
        *(undefined8 *)(local_48 + lVar6) = 0;
        ((undefined8 *)(local_48 + lVar6))[1] = 0;
        puVar2 = (undefined8 *)((longlong)param_2 + lVar6);
        *(undefined8 *)(local_48 + lVar6) = *puVar2;
        *(undefined8 *)((longlong)puVar3 + lVar6 + lVar9 + 0x18) = puVar2[1];
        *puVar2 = 0;
        puVar2[1] = 0;
        lVar6 = lVar6 + 0x10;
      } while (puVar2 + 2 != puVar7);
    }
  }
  local_60 = 0;
  local_68 = param_1;
  local_58 = uVar8;
  FUN_14009f746(param_1,puVar3,uVar5,uVar8);
  FUN_14009f7de(&local_68);
  return puVar10;
}

