/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000477e */

longlong *
FUN_18000477e(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  lVar1 = param_1[2];
  if (0x7ffffffffffffffeU - lVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800013a5();
  }
  uVar2 = param_1[3];
  uVar5 = param_2 + lVar1 | 7;
  local_50 = 0x7ffffffffffffffe;
  if (((uVar5 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) &&
     (local_50 = (uVar2 >> 1) + uVar2, local_50 < uVar5)) {
    local_50 = uVar5;
  }
  lVar4 = FUN_1800013b6(param_1,&local_50);
  param_1[2] = param_2 + lVar1;
  param_1[3] = local_50;
  if (uVar2 < 8) {
    FUN_1802a82f0(lVar4,param_1,lVar1 * 2);
    lVar1 = lVar4 + lVar1 * 2;
    FUN_1802a82f0(lVar1,param_4,param_5 * 2);
    *(undefined2 *)(lVar1 + param_5 * 2) = 0;
  }
  else {
    lVar3 = *param_1;
    FUN_1802a82f0(lVar4,lVar3,lVar1 * 2);
    lVar1 = lVar4 + lVar1 * 2;
    FUN_1802a82f0(lVar1,param_4,param_5 * 2);
    *(undefined2 *)(lVar1 + param_5 * 2) = 0;
    FUN_18000171c(param_1,lVar3,uVar2);
  }
  *param_1 = lVar4;
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
  }
  return param_1;
}

