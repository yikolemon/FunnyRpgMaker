/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800acf6e */

undefined8 * FUN_1800acf6e(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  uVar7 = (param_1[1] - lVar1 >> 3) + 1;
  uVar5 = param_1[2] - lVar1 >> 3;
  uVar10 = (uVar5 >> 1) + uVar5;
  if (uVar10 <= uVar7) {
    uVar10 = uVar7;
  }
  if (0x1fffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar10 = 0x1fffffffffffffff;
  }
  if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180001427();
  }
  puVar4 = (undefined8 *)FUN_1800013e0(uVar10 * 8);
  local_48 = (undefined8 *)((longlong)puVar4 + ((longlong)param_2 - lVar1) + 8);
  puVar11 = (undefined8 *)(((longlong)param_2 - lVar1) + (longlong)puVar4);
  uVar2 = *param_3;
  *param_3 = 0xffffffffffffffff;
  *puVar11 = uVar2;
  puVar6 = (undefined8 *)*param_1;
  puVar9 = (undefined8 *)param_1[1];
  puVar3 = puVar4;
  if (param_2 == puVar9) {
    for (; local_50 = puVar11, puVar6 != param_2; puVar6 = puVar6 + 1) {
      uVar2 = *puVar6;
      *puVar6 = 0xffffffffffffffff;
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    puVar8 = puVar4;
    puVar3 = local_48;
    if (puVar6 != param_2) {
      do {
        uVar2 = *puVar6;
        *puVar6 = 0xffffffffffffffff;
        *puVar8 = uVar2;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (puVar6 != param_2);
      puVar9 = (undefined8 *)param_1[1];
    }
    for (; local_50 = puVar4, param_2 != puVar9; param_2 = param_2 + 1) {
      uVar2 = *param_2;
      *param_2 = 0xffffffffffffffff;
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
    }
  }
  local_60 = 0;
  local_68 = param_1;
  local_58 = uVar10;
  FUN_1800ad112(param_1,puVar4,uVar7,uVar10);
  FUN_1800ad1a4(&local_68);
  return puVar11;
}

