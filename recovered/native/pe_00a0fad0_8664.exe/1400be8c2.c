/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400be8c2 */

undefined8 * FUN_1400be8c2(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong *plStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 != (undefined8 *)param_1[2]) {
    uVar1 = *param_2;
    *param_2 = 0xffffffffffffffff;
    *puVar7 = uVar1;
    puVar7 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar7 + 1);
    return puVar7;
  }
  uStack_40 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  uVar8 = (param_1[1] - lVar2 >> 3) + 1;
  uVar5 = param_1[2] - lVar2 >> 3;
  uVar11 = (uVar5 >> 1) + uVar5;
  if (uVar11 <= uVar8) {
    uVar11 = uVar8;
  }
  if (0x1fffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar11 = 0x1fffffffffffffff;
  }
  if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400062c7();
  }
  puVar4 = (undefined8 *)FUN_140006280(uVar11 * 8);
  puStack_48 = (undefined8 *)((longlong)puVar4 + ((longlong)puVar7 - lVar2) + 8);
  puVar12 = (undefined8 *)(((longlong)puVar7 - lVar2) + (longlong)puVar4);
  uVar1 = *param_2;
  *param_2 = 0xffffffffffffffff;
  *puVar12 = uVar1;
  puVar6 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  puVar3 = puVar4;
  if (puVar7 == puVar10) {
    for (; puStack_50 = puVar12, puVar6 != puVar7; puVar6 = puVar6 + 1) {
      uVar1 = *puVar6;
      *puVar6 = 0xffffffffffffffff;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    puVar9 = puVar4;
    puVar3 = puStack_48;
    if (puVar6 != puVar7) {
      do {
        uVar1 = *puVar6;
        *puVar6 = 0xffffffffffffffff;
        *puVar9 = uVar1;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      } while (puVar6 != puVar7);
      puVar10 = (undefined8 *)param_1[1];
    }
    for (; puStack_50 = puVar4, puVar7 != puVar10; puVar7 = puVar7 + 1) {
      uVar1 = *puVar7;
      *puVar7 = 0xffffffffffffffff;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    }
  }
  uStack_60 = 0;
  plStack_68 = param_1;
  uStack_58 = uVar11;
  FUN_1400bea92(param_1,puVar4,uVar8,uVar11);
  FUN_1400beb24(&plStack_68);
  return puVar12;
}

