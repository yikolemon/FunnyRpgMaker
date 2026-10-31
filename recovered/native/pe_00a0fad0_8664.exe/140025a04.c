/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140025a04 */

undefined1 * FUN_140025a04(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  longlong *local_78;
  undefined1 *local_70;
  ulonglong local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar9 = *param_1;
  uVar10 = (param_1[1] - lVar9 >> 5) + 1;
  uVar6 = param_1[2] - lVar9 >> 5;
  uVar12 = (uVar6 >> 1) + uVar6;
  if (uVar12 <= uVar10) {
    uVar12 = uVar10;
  }
  if (0x7ffffffffffffff - (uVar6 >> 1) < uVar6) {
    uVar12 = 0x7ffffffffffffff;
  }
  local_50 = param_3;
  if (uVar12 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400062c7();
  }
  puVar5 = (undefined1 *)FUN_140006280(uVar12 << 5);
  puVar11 = (undefined1 *)((longlong)param_2 + (longlong)(puVar5 + (0x20 - lVar9)));
  puVar13 = (undefined1 *)((longlong)param_2 + ((longlong)puVar5 - lVar9));
  local_78 = param_1;
  local_70 = puVar5;
  local_68 = uVar12;
  local_60 = puVar11;
  local_58 = puVar11;
  FUN_14000169c(puVar13,local_50);
  puVar1 = (undefined8 *)*param_1;
  puVar8 = (undefined8 *)param_1[1];
  if (param_2 == puVar8) {
    local_60 = puVar13;
    if (puVar1 != param_2) {
      lVar9 = 0;
      do {
        *(undefined8 *)(puVar5 + lVar9 + 0x10) = 0;
        *(undefined8 *)((longlong)(puVar5 + lVar9 + 0x10) + 8) = 0;
        *(undefined8 *)(puVar5 + lVar9) = 0;
        *(undefined8 *)((longlong)(puVar5 + lVar9) + 8) = 0;
        puVar8 = (undefined8 *)((longlong)puVar1 + lVar9);
        uVar2 = *puVar8;
        uVar3 = puVar8[1];
        uVar4 = puVar8[3];
        *(undefined8 *)(puVar5 + lVar9 + 0x10) = puVar8[2];
        *(undefined8 *)((longlong)(puVar5 + lVar9 + 0x10) + 8) = uVar4;
        *(undefined8 *)(puVar5 + lVar9) = uVar2;
        *(undefined8 *)((longlong)(puVar5 + lVar9) + 8) = uVar3;
        puVar8[2] = 0;
        puVar8[3] = 0xf;
        *(undefined1 *)puVar8 = 0;
        lVar9 = lVar9 + 0x20;
      } while (puVar8 + 4 != param_2);
    }
  }
  else {
    if (puVar1 != param_2) {
      lVar7 = 0;
      do {
        *(undefined8 *)(puVar5 + lVar7 + 0x10) = 0;
        *(undefined8 *)((longlong)(puVar5 + lVar7 + 0x10) + 8) = 0;
        *(undefined8 *)(puVar5 + lVar7) = 0;
        *(undefined8 *)((longlong)(puVar5 + lVar7) + 8) = 0;
        puVar8 = (undefined8 *)((longlong)puVar1 + lVar7);
        uVar2 = *puVar8;
        uVar3 = puVar8[1];
        uVar4 = puVar8[3];
        *(undefined8 *)(puVar5 + lVar7 + 0x10) = puVar8[2];
        *(undefined8 *)((longlong)(puVar5 + lVar7 + 0x10) + 8) = uVar4;
        *(undefined8 *)(puVar5 + lVar7) = uVar2;
        *(undefined8 *)((longlong)(puVar5 + lVar7) + 8) = uVar3;
        puVar8[2] = 0;
        puVar8[3] = 0xf;
        *(undefined1 *)puVar8 = 0;
        lVar7 = lVar7 + 0x20;
      } while (puVar8 + 4 != param_2);
      puVar8 = (undefined8 *)param_1[1];
    }
    local_60 = puVar5;
    if (param_2 != puVar8) {
      lVar7 = 0;
      do {
        *(undefined8 *)((longlong)param_2 + (longlong)(puVar5 + lVar7 + (0x30 - lVar9))) = 0;
        ((undefined8 *)((longlong)param_2 + (longlong)(puVar5 + lVar7 + (0x30 - lVar9))))[1] = 0;
        *(undefined8 *)(puVar11 + lVar7) = 0;
        *(undefined8 *)((longlong)(puVar11 + lVar7) + 8) = 0;
        puVar1 = (undefined8 *)((longlong)param_2 + lVar7);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        uVar4 = puVar1[3];
        *(undefined8 *)((longlong)param_2 + (longlong)(puVar5 + lVar7 + (0x30 - lVar9))) = puVar1[2]
        ;
        ((undefined8 *)((longlong)param_2 + (longlong)(puVar5 + lVar7 + (0x30 - lVar9))))[1] = uVar4
        ;
        *(undefined8 *)(puVar11 + lVar7) = uVar2;
        *(undefined8 *)((longlong)(puVar11 + lVar7) + 8) = uVar3;
        puVar1[2] = 0;
        puVar1[3] = 0xf;
        *(undefined1 *)puVar1 = 0;
        lVar7 = lVar7 + 0x20;
      } while (puVar1 + 4 != puVar8);
    }
  }
  local_70 = (undefined1 *)0x0;
  FUN_14000a2d8(param_1,puVar5,uVar10,uVar12);
  FUN_14000a370(&local_78);
  return puVar13;
}

