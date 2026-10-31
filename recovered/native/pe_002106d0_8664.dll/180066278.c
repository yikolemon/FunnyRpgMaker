/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180066278 */

undefined8 * FUN_180066278(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *local_80;
  undefined8 *local_78;
  ulonglong local_70;
  undefined8 *local_68;
  longlong local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar6 = *param_1;
  uVar3 = (param_1[1] - lVar6 >> 3) * -0x3333333333333333 + 1;
  uVar2 = (param_1[2] - lVar6 >> 3) * -0x3333333333333333;
  uVar4 = 0x666666666666666 - (uVar2 >> 1);
  uVar7 = (uVar2 >> 1) + uVar2;
  if (uVar7 <= uVar3) {
    uVar7 = uVar3;
  }
  if (uVar4 <= uVar2 && uVar2 - uVar4 != 0) {
    uVar7 = 0x666666666666666;
  }
  if (0x666666666666666 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_180001427();
  }
  puVar1 = (undefined8 *)FUN_1800013e0(uVar7 * 0x28);
  lVar5 = (longlong)puVar1 + (param_2 - lVar6) + 0x28;
  local_68 = (undefined8 *)((param_2 - lVar6) + (longlong)puVar1);
  local_68[2] = 0;
  local_68[3] = 0;
  *local_68 = 0;
  local_68[1] = 0;
  local_68[4] = 3;
  lVar6 = *param_1;
  lVar8 = param_1[1];
  local_60 = lVar5;
  local_58 = local_68;
  local_78 = puVar1;
  local_50 = puVar1;
  local_70 = uVar7;
  local_80 = param_1;
  if (param_2 == lVar8) {
    for (; lVar6 != param_2; lVar6 = lVar6 + 0x28) {
      FUN_18006648d(puVar1,lVar6);
      puVar1 = puVar1 + 5;
    }
  }
  else {
    if (lVar6 != param_2) {
      do {
        FUN_18006648d(puVar1,lVar6);
        puVar1 = puVar1 + 5;
        lVar6 = lVar6 + 0x28;
      } while (lVar6 != param_2);
      lVar8 = param_1[1];
      puVar1 = local_50;
    }
    for (; local_68 = puVar1, param_2 != lVar8; param_2 = param_2 + 0x28) {
      FUN_18006648d(lVar5,param_2);
      lVar5 = lVar5 + 0x28;
      puVar1 = local_68;
    }
  }
  local_78 = (undefined8 *)0x0;
  FUN_180063680(param_1,local_50,uVar3,uVar7);
  puVar1 = local_58;
  FUN_18006371a(&local_80);
  return puVar1;
}

