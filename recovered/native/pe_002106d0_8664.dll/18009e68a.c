/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009e68a */

void FUN_18009e68a(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *local_68;
  undefined8 *local_60;
  ulonglong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18001620a();
  }
  uVar9 = (param_1[2] - *param_1 >> 3) * -0x5555555555555555;
  uVar10 = 0xaaaaaaaaaaaaaaa - (uVar9 >> 1);
  uVar8 = (uVar9 >> 1) + uVar9;
  if (uVar8 <= param_2) {
    uVar8 = param_2;
  }
  if (uVar10 <= uVar9 && uVar9 - uVar10 != 0) {
    uVar8 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar8 < 0xaaaaaaaaaaaaaab) {
    lVar11 = param_1[1] - *param_1;
    puVar5 = (undefined8 *)FUN_1800013e0(uVar8 * 0x18);
    lVar12 = (longlong)puVar5 + lVar11;
    lVar11 = (lVar11 >> 3) * 0x5555555555555555 + param_2;
    local_68 = param_1;
    local_58 = uVar8;
    local_50 = lVar12;
    if (lVar11 != 0) {
      lVar11 = lVar11 * 0x18;
      local_60 = puVar5;
      local_48 = lVar12;
      FUN_1802a89a0(lVar12,0,lVar11);
      lVar12 = lVar12 + lVar11;
    }
    puVar1 = (undefined8 *)param_1[1];
    puVar7 = puVar5;
    for (puVar6 = (undefined8 *)*param_1; puVar6 != puVar1; puVar6 = puVar6 + 3) {
      uVar2 = puVar6[2];
      puVar6[2] = 0;
      uVar3 = *puVar6;
      uVar4 = puVar6[1];
      *puVar6 = 0;
      puVar6[1] = 0;
      *puVar7 = uVar3;
      puVar7[1] = uVar4;
      puVar7[2] = uVar2;
      puVar7 = puVar7 + 3;
    }
    local_60 = (undefined8 *)0x0;
    local_48 = lVar12;
    FUN_18009e81c(param_1,puVar5,param_2,uVar8);
    FUN_18009e8b6(&local_68);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

