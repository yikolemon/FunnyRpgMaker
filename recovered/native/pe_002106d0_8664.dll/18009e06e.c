/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009e06e */

void FUN_18009e06e(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_2 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18001620a();
  }
  uVar9 = param_1[2] - *param_1 >> 5;
  uVar10 = (uVar9 >> 1) + uVar9;
  if (uVar10 <= param_2) {
    uVar10 = param_2;
  }
  if (0x7ffffffffffffff - (uVar9 >> 1) < uVar9) {
    uVar10 = 0x7ffffffffffffff;
  }
  if (uVar10 >> 0x3b == 0) {
    lVar11 = param_1[1] - *param_1;
    lVar8 = FUN_1800013e0(uVar10 << 5);
    local_40 = (undefined8 *)(lVar8 + lVar11);
    uVar9 = lVar11 >> 5;
    local_38 = local_40;
    if (param_2 != uVar9) {
      lVar11 = uVar9 - param_2;
      do {
        *local_38 = 0;
        local_38[1] = 0;
        local_38[2] = 0;
        local_38[3] = 7;
        local_38 = local_38 + 4;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 0);
    }
    puVar3 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)param_1[1];
    if (puVar3 != puVar4) {
      lVar11 = 0;
      do {
        puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar11);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar8 + lVar11) = 0;
        ((undefined8 *)(lVar8 + lVar11))[1] = 0;
        puVar1 = (undefined8 *)((longlong)puVar3 + lVar11);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        uVar7 = puVar1[3];
        puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar11);
        *puVar2 = puVar1[2];
        puVar2[1] = uVar7;
        *(undefined8 *)(lVar8 + lVar11) = uVar5;
        ((undefined8 *)(lVar8 + lVar11))[1] = uVar6;
        puVar1[2] = 0;
        puVar1[3] = 7;
        *(undefined2 *)puVar1 = 0;
        lVar11 = lVar11 + 0x20;
      } while (puVar1 + 4 != puVar4);
    }
    local_50 = 0;
    local_58 = param_1;
    local_48 = uVar10;
    FUN_18008c3c2(param_1,lVar8,param_2,uVar10);
    FUN_18008c45a(&local_58);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

