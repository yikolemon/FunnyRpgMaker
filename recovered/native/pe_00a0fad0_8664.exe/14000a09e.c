/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000a09e */

undefined8 * FUN_14000a09e(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 *local_48;
  longlong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar12 = *param_1;
  uVar8 = (param_1[1] - lVar12 >> 5) + 1;
  uVar7 = param_1[2] - lVar12 >> 5;
  uVar11 = (uVar7 >> 1) + uVar7;
  if (uVar11 <= uVar8) {
    uVar11 = uVar8;
  }
  if (0x7ffffffffffffff - (uVar7 >> 1) < uVar7) {
    uVar11 = 0x7ffffffffffffff;
  }
  if (uVar11 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400062c7();
  }
  lVar12 = (longlong)param_2 - lVar12;
  puVar6 = (undefined8 *)FUN_140006280(uVar11 << 5);
  local_40 = (longlong)puVar6 + lVar12 + 0x20;
  puVar13 = (undefined8 *)(lVar12 + (longlong)puVar6);
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar13[3] = 0xf;
  puVar2 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  if (param_2 == puVar10) {
    local_48 = puVar13;
    if (puVar2 != param_2) {
      lVar12 = 0;
      do {
        puVar10 = (undefined8 *)((longlong)puVar6 + lVar12 + 0x10);
        *puVar10 = 0;
        puVar10[1] = 0;
        *(undefined8 *)((longlong)puVar6 + lVar12) = 0;
        ((undefined8 *)((longlong)puVar6 + lVar12))[1] = 0;
        puVar10 = (undefined8 *)((longlong)puVar2 + lVar12);
        uVar3 = *puVar10;
        uVar4 = puVar10[1];
        uVar5 = puVar10[3];
        puVar1 = (undefined8 *)((longlong)puVar6 + lVar12 + 0x10);
        *puVar1 = puVar10[2];
        puVar1[1] = uVar5;
        *(undefined8 *)((longlong)puVar6 + lVar12) = uVar3;
        ((undefined8 *)((longlong)puVar6 + lVar12))[1] = uVar4;
        puVar10[2] = 0;
        puVar10[3] = 0xf;
        *(undefined1 *)puVar10 = 0;
        lVar12 = lVar12 + 0x20;
      } while (puVar10 + 4 != param_2);
    }
  }
  else {
    if (puVar2 != param_2) {
      lVar9 = 0;
      do {
        puVar10 = (undefined8 *)((longlong)puVar6 + lVar9 + 0x10);
        *puVar10 = 0;
        puVar10[1] = 0;
        *(undefined8 *)((longlong)puVar6 + lVar9) = 0;
        ((undefined8 *)((longlong)puVar6 + lVar9))[1] = 0;
        puVar10 = (undefined8 *)((longlong)puVar2 + lVar9);
        uVar3 = *puVar10;
        uVar4 = puVar10[1];
        uVar5 = puVar10[3];
        puVar1 = (undefined8 *)((longlong)puVar6 + lVar9 + 0x10);
        *puVar1 = puVar10[2];
        puVar1[1] = uVar5;
        *(undefined8 *)((longlong)puVar6 + lVar9) = uVar3;
        ((undefined8 *)((longlong)puVar6 + lVar9))[1] = uVar4;
        puVar10[2] = 0;
        puVar10[3] = 0xf;
        *(undefined1 *)puVar10 = 0;
        lVar9 = lVar9 + 0x20;
      } while (puVar10 + 4 != param_2);
      puVar10 = (undefined8 *)param_1[1];
    }
    local_48 = puVar6;
    if (param_2 != puVar10) {
      lVar9 = 0;
      do {
        puVar2 = (undefined8 *)((longlong)puVar6 + lVar9 + lVar12 + 0x30);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)(local_40 + lVar9) = 0;
        ((undefined8 *)(local_40 + lVar9))[1] = 0;
        puVar2 = (undefined8 *)((longlong)param_2 + lVar9);
        uVar3 = *puVar2;
        uVar4 = puVar2[1];
        uVar5 = puVar2[3];
        puVar1 = (undefined8 *)((longlong)puVar6 + lVar9 + lVar12 + 0x30);
        *puVar1 = puVar2[2];
        puVar1[1] = uVar5;
        *(undefined8 *)(local_40 + lVar9) = uVar3;
        ((undefined8 *)(local_40 + lVar9))[1] = uVar4;
        puVar2[2] = 0;
        puVar2[3] = 0xf;
        *(undefined1 *)puVar2 = 0;
        lVar9 = lVar9 + 0x20;
      } while (puVar2 + 4 != puVar10);
    }
  }
  local_58 = 0;
  local_60 = param_1;
  local_50 = uVar11;
  FUN_14000a2d8(param_1,puVar6,uVar8,uVar11);
  FUN_14000a370(&local_60);
  return puVar13;
}

