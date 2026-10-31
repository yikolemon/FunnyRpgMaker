/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180181114 */

undefined8 * FUN_180181114(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 *local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar8 = *param_1;
  uVar4 = (param_1[1] - lVar8 >> 4) + 1;
  uVar3 = param_1[2] - lVar8 >> 4;
  uVar7 = (uVar3 >> 1) + uVar3;
  if (uVar7 <= uVar4) {
    uVar7 = uVar4;
  }
  if (0xfffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar7 = 0xfffffffffffffff;
  }
  if (uVar7 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180001427();
  }
  lVar8 = (longlong)param_2 - lVar8;
  puVar2 = (undefined8 *)FUN_1800013e0(uVar7 << 4);
  local_48 = (longlong)puVar2 + lVar8 + 0x10;
  puVar9 = (undefined8 *)(lVar8 + (longlong)puVar2);
  *puVar9 = 0;
  puVar9[1] = 0;
  *puVar9 = *param_3;
  puVar9[1] = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  puVar1 = (undefined8 *)*param_1;
  puVar6 = (undefined8 *)param_1[1];
  if (param_2 == puVar6) {
    local_50 = puVar9;
    if (puVar1 != param_2) {
      lVar8 = 0;
      do {
        *(undefined8 *)((longlong)puVar2 + lVar8) = 0;
        ((undefined8 *)((longlong)puVar2 + lVar8))[1] = 0;
        puVar6 = (undefined8 *)((longlong)puVar1 + lVar8);
        *(undefined8 *)((longlong)puVar2 + lVar8) = *puVar6;
        *(undefined8 *)((longlong)puVar2 + lVar8 + 8) = puVar6[1];
        *puVar6 = 0;
        puVar6[1] = 0;
        lVar8 = lVar8 + 0x10;
      } while (puVar6 + 2 != param_2);
    }
  }
  else {
    if (puVar1 != param_2) {
      lVar5 = 0;
      do {
        *(undefined8 *)((longlong)puVar2 + lVar5) = 0;
        ((undefined8 *)((longlong)puVar2 + lVar5))[1] = 0;
        puVar6 = (undefined8 *)((longlong)puVar1 + lVar5);
        *(undefined8 *)((longlong)puVar2 + lVar5) = *puVar6;
        *(undefined8 *)((longlong)puVar2 + lVar5 + 8) = puVar6[1];
        *puVar6 = 0;
        puVar6[1] = 0;
        lVar5 = lVar5 + 0x10;
      } while (puVar6 + 2 != param_2);
      puVar6 = (undefined8 *)param_1[1];
    }
    local_50 = puVar2;
    if (param_2 != puVar6) {
      lVar5 = 0;
      do {
        *(undefined8 *)(local_48 + lVar5) = 0;
        ((undefined8 *)(local_48 + lVar5))[1] = 0;
        puVar1 = (undefined8 *)((longlong)param_2 + lVar5);
        *(undefined8 *)(local_48 + lVar5) = *puVar1;
        *(undefined8 *)((longlong)puVar2 + lVar5 + lVar8 + 0x18) = puVar1[1];
        *puVar1 = 0;
        puVar1[1] = 0;
        lVar5 = lVar5 + 0x10;
      } while (puVar1 + 2 != puVar6);
    }
  }
  local_60 = 0;
  local_68 = param_1;
  local_58 = uVar7;
  FUN_18009debc(param_1,puVar2,uVar4,uVar7);
  FUN_18009df54(&local_68);
  return puVar9;
}

