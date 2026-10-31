/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801819de */

longlong FUN_1801819de(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar6 = *param_1;
  uVar4 = (param_1[1] - lVar6 >> 3) * -0x71c71c71c71c71c7 + 1;
  uVar2 = (param_1[2] - lVar6 >> 3) * -0x71c71c71c71c71c7;
  uVar5 = 0x38e38e38e38e38e - (uVar2 >> 1);
  uVar8 = (uVar2 >> 1) + uVar2;
  if (uVar8 <= uVar4) {
    uVar8 = uVar4;
  }
  if (uVar5 <= uVar2 && uVar2 - uVar5 != 0) {
    uVar8 = 0x38e38e38e38e38e;
  }
  local_50 = param_3;
  if (0x38e38e38e38e38e < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_180001427();
  }
  lVar1 = FUN_1800013e0(uVar8 * 0x48);
  lVar7 = lVar1 + (param_2 - lVar6) + 0x48;
  lVar9 = (param_2 - lVar6) + lVar1;
  local_80 = param_1;
  local_78 = lVar1;
  local_70 = uVar8;
  local_68 = lVar7;
  local_60 = lVar7;
  local_58 = param_1;
  FUN_180181bb8(lVar9,local_50);
  lVar6 = *local_58;
  lVar3 = local_58[1];
  local_68 = lVar9;
  local_50 = lVar1;
  if (param_2 == lVar3) {
    for (; lVar6 != param_2; lVar6 = lVar6 + 0x48) {
      FUN_18018365a(lVar1,lVar6);
      lVar1 = lVar1 + 0x48;
    }
  }
  else {
    if (lVar6 != param_2) {
      do {
        FUN_18018365a(lVar1,lVar6);
        lVar1 = lVar1 + 0x48;
        lVar6 = lVar6 + 0x48;
      } while (lVar6 != param_2);
      lVar3 = local_58[1];
      lVar1 = local_50;
    }
    for (; local_68 = lVar1, param_2 != lVar3; param_2 = param_2 + 0x48) {
      FUN_18018365a(lVar7,param_2);
      lVar7 = lVar7 + 0x48;
      lVar1 = local_68;
    }
  }
  local_78 = 0;
  FUN_180183548(local_58,local_50,uVar4,uVar8);
  FUN_1801835e2(&local_80);
  return lVar9;
}

