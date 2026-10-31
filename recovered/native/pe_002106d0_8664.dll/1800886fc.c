/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800886fc */

void FUN_1800886fc(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *local_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0x555555555555555 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18001620a();
  }
  uVar3 = (param_1[2] - *param_1 >> 4) * -0x5555555555555555;
  uVar4 = 0x555555555555555 - (uVar3 >> 1);
  uVar2 = (uVar3 >> 1) + uVar3;
  if (uVar2 <= param_2) {
    uVar2 = param_2;
  }
  if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
    uVar2 = 0x555555555555555;
  }
  if (0x555555555555555 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_180001427();
  }
  lVar5 = param_1[1] - *param_1;
  lVar1 = FUN_1800013e0(uVar2 * 0x30);
  lVar6 = lVar1 + lVar5;
  local_58 = lVar6;
  local_50 = lVar6;
  local_68 = lVar1;
  local_60 = uVar2;
  local_70 = param_1;
  for (lVar5 = (lVar5 >> 4) * 0x5555555555555555 + param_2; lVar5 != 0; lVar5 = lVar5 + -1) {
    FUN_180088980(lVar6);
    lVar6 = lVar6 + 0x30;
  }
  local_50 = lVar6;
  FUN_1800880fa(*param_1,param_1[1],lVar1,param_1);
  local_68 = 0;
  FUN_180088868(param_1,lVar1,param_2,uVar2);
  FUN_180088908(&local_70);
  return;
}

