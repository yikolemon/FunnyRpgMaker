/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a600c */

longlong *
FUN_1800a600c(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             longlong param_5,undefined2 param_6)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
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
  local_58 = param_4;
  lVar5 = FUN_1800013b6(param_1,&local_50);
  lVar4 = local_58;
  param_1[2] = param_2 + lVar2;
  param_1[3] = local_50;
  if (uVar3 < 8) {
    FUN_1802a82f0(lVar5,param_1,local_58 * 2);
    lVar1 = lVar5 + lVar4 * 2;
    if (param_5 != 0) {
      lVar8 = 0;
      do {
        *(undefined2 *)(lVar1 + lVar8 * 2) = param_6;
        lVar8 = lVar8 + 1;
      } while (param_5 != lVar8);
    }
    FUN_1802a82f0(lVar1 + param_5 * 2,(longlong)param_1 + lVar4 * 2,(lVar2 - lVar4) * 2 + 2);
  }
  else {
    lVar8 = *param_1;
    FUN_1802a82f0(lVar5,lVar8,local_58 * 2);
    lVar1 = lVar5 + lVar4 * 2;
    if (param_5 != 0) {
      lVar7 = 0;
      do {
        *(undefined2 *)(lVar1 + lVar7 * 2) = param_6;
        lVar7 = lVar7 + 1;
      } while (param_5 != lVar7);
    }
    FUN_1802a82f0(lVar1 + param_5 * 2,lVar8 + lVar4 * 2,(lVar2 - lVar4) * 2 + 2);
    FUN_18000171c(param_1,lVar8,uVar3);
  }
  *param_1 = lVar5;
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
  }
  return param_1;
}

