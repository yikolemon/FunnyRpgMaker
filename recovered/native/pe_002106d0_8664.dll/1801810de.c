/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801810de */

undefined8 * FUN_1801810de(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  undefined8 *puStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)param_1[2]) {
    *puVar1 = 0;
    puVar1[1] = 0;
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    puVar1 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar1 + 2);
    return puVar1;
  }
  uStack_40 = 0xfffffffffffffffe;
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
    FUN_180001427();
  }
  lVar9 = (longlong)puVar1 - lVar9;
  puVar3 = (undefined8 *)FUN_1800013e0(uVar8 << 4);
  lStack_48 = (longlong)puVar3 + lVar9 + 0x10;
  puVar10 = (undefined8 *)(lVar9 + (longlong)puVar3);
  *puVar10 = 0;
  puVar10[1] = 0;
  *puVar10 = *param_2;
  puVar10[1] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  puVar2 = (undefined8 *)*param_1;
  puVar7 = (undefined8 *)param_1[1];
  if (puVar1 == puVar7) {
    puStack_50 = puVar10;
    if (puVar2 != puVar1) {
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
      } while (puVar7 + 2 != puVar1);
    }
  }
  else {
    if (puVar2 != puVar1) {
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
      } while (puVar7 + 2 != puVar1);
      puVar7 = (undefined8 *)param_1[1];
    }
    puStack_50 = puVar3;
    if (puVar1 != puVar7) {
      lVar6 = 0;
      do {
        *(undefined8 *)(lStack_48 + lVar6) = 0;
        ((undefined8 *)(lStack_48 + lVar6))[1] = 0;
        puVar2 = (undefined8 *)((longlong)puVar1 + lVar6);
        *(undefined8 *)(lStack_48 + lVar6) = *puVar2;
        *(undefined8 *)((longlong)puVar3 + lVar6 + lVar9 + 0x18) = puVar2[1];
        *puVar2 = 0;
        puVar2[1] = 0;
        lVar6 = lVar6 + 0x10;
      } while (puVar2 + 2 != puVar7);
    }
  }
  uStack_60 = 0;
  plStack_68 = param_1;
  uStack_58 = uVar8;
  FUN_18009debc(param_1,puVar3,uVar5,uVar8);
  FUN_18009df54(&plStack_68);
  return puVar10;
}

