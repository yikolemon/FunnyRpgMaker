/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009d746 */

longlong FUN_18009d746(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar14 = *param_1;
  uVar11 = (param_1[1] - lVar14 >> 5) + 1;
  uVar7 = param_1[2] - lVar14 >> 5;
  uVar13 = (uVar7 >> 1) + uVar7;
  if (uVar13 <= uVar11) {
    uVar13 = uVar11;
  }
  if (0x7ffffffffffffff - (uVar7 >> 1) < uVar7) {
    uVar13 = 0x7ffffffffffffff;
  }
  local_50 = param_3;
  if (uVar13 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180001427();
  }
  lVar6 = FUN_1800013e0(uVar13 << 5);
  lVar10 = lVar6 - lVar14;
  lVar12 = (longlong)param_2 + lVar10 + 0x20;
  lVar14 = (longlong)param_2 + (lVar6 - lVar14);
  local_78 = param_1;
  local_70 = lVar6;
  local_68 = uVar13;
  local_60 = lVar12;
  local_58 = lVar12;
  FUN_18000358a(lVar14,local_50);
  puVar2 = (undefined8 *)*param_1;
  puVar9 = (undefined8 *)param_1[1];
  if (param_2 == puVar9) {
    local_60 = lVar14;
    if (puVar2 != param_2) {
      lVar10 = 0;
      do {
        puVar9 = (undefined8 *)(lVar6 + 0x10 + lVar10);
        *puVar9 = 0;
        puVar9[1] = 0;
        *(undefined8 *)(lVar6 + lVar10) = 0;
        ((undefined8 *)(lVar6 + lVar10))[1] = 0;
        puVar9 = (undefined8 *)((longlong)puVar2 + lVar10);
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        uVar5 = puVar9[3];
        puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar10);
        *puVar1 = puVar9[2];
        puVar1[1] = uVar5;
        *(undefined8 *)(lVar6 + lVar10) = uVar3;
        ((undefined8 *)(lVar6 + lVar10))[1] = uVar4;
        puVar9[2] = 0;
        puVar9[3] = 7;
        *(undefined2 *)puVar9 = 0;
        lVar10 = lVar10 + 0x20;
      } while (puVar9 + 4 != param_2);
    }
  }
  else {
    if (puVar2 != param_2) {
      lVar8 = 0;
      do {
        puVar9 = (undefined8 *)(lVar6 + 0x10 + lVar8);
        *puVar9 = 0;
        puVar9[1] = 0;
        *(undefined8 *)(lVar6 + lVar8) = 0;
        ((undefined8 *)(lVar6 + lVar8))[1] = 0;
        puVar9 = (undefined8 *)((longlong)puVar2 + lVar8);
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        uVar5 = puVar9[3];
        puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar8);
        *puVar1 = puVar9[2];
        puVar1[1] = uVar5;
        *(undefined8 *)(lVar6 + lVar8) = uVar3;
        ((undefined8 *)(lVar6 + lVar8))[1] = uVar4;
        puVar9[2] = 0;
        puVar9[3] = 7;
        *(undefined2 *)puVar9 = 0;
        lVar8 = lVar8 + 0x20;
      } while (puVar9 + 4 != param_2);
      puVar9 = (undefined8 *)param_1[1];
    }
    local_60 = lVar6;
    if (param_2 != puVar9) {
      lVar8 = 0;
      do {
        puVar2 = (undefined8 *)((longlong)param_2 + lVar8 + lVar10 + 0x30);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)(lVar12 + lVar8) = 0;
        ((undefined8 *)(lVar12 + lVar8))[1] = 0;
        puVar2 = (undefined8 *)((longlong)param_2 + lVar8);
        uVar3 = *puVar2;
        uVar4 = puVar2[1];
        uVar5 = puVar2[3];
        puVar1 = (undefined8 *)((longlong)param_2 + lVar8 + lVar10 + 0x30);
        *puVar1 = puVar2[2];
        puVar1[1] = uVar5;
        *(undefined8 *)(lVar12 + lVar8) = uVar3;
        ((undefined8 *)(lVar12 + lVar8))[1] = uVar4;
        puVar2[2] = 0;
        puVar2[3] = 7;
        *(undefined2 *)puVar2 = 0;
        lVar8 = lVar8 + 0x20;
      } while (puVar2 + 4 != puVar9);
    }
  }
  local_70 = 0;
  FUN_18008c3c2(param_1,lVar6,uVar11,uVar13);
  FUN_18008c45a(&local_78);
  return lVar14;
}

