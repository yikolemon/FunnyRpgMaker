/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180044e72 */

longlong *
FUN_180044e72(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  lVar2 = param_1[2];
  if (0x7ffffffffffffffeU - lVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800013a5();
  }
  uVar3 = param_1[3];
  uVar6 = param_2 + lVar2 | 7;
  local_50 = 0x7ffffffffffffffe;
  if (((uVar6 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) &&
     (local_50 = (uVar3 >> 1) + uVar3, local_50 < uVar6)) {
    local_50 = uVar6;
  }
  lVar5 = FUN_1800013b6(param_1,&local_50);
  param_1[2] = param_2 + lVar2;
  param_1[3] = local_50;
  if (uVar3 < 8) {
    FUN_1802a82f0(lVar5,param_1,param_4 * 2);
    lVar1 = lVar5 + param_4 * 2;
    FUN_1802a82f0(lVar1,param_5,param_6 * 2);
    FUN_1802a82f0(lVar1 + param_6 * 2,(longlong)param_1 + param_4 * 2,(lVar2 - param_4) * 2 + 2);
  }
  else {
    lVar4 = *param_1;
    FUN_1802a82f0(lVar5,lVar4,param_4 * 2);
    lVar1 = lVar5 + param_4 * 2;
    FUN_1802a82f0(lVar1,param_5,param_6 * 2);
    FUN_1802a82f0(param_6 * 2 + lVar1,lVar4 + param_4 * 2,(lVar2 - param_4) * 2 + 2);
    FUN_18000171c(param_1,lVar4,uVar3);
  }
  *param_1 = lVar5;
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
  }
  return param_1;
}

