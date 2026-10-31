/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800643ee */

longlong * FUN_1800643ee(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (0x3ffffffffffffffeU - lVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800013a5();
  }
  uVar2 = param_1[3];
  uVar5 = param_2 + lVar1 | 3;
  local_48 = 0x3ffffffffffffffe;
  if (((uVar5 < 0x3fffffffffffffff) && (uVar2 <= 0x3ffffffffffffffe - (uVar2 >> 1))) &&
     (local_48 = (uVar2 >> 1) + uVar2, local_48 < uVar5)) {
    local_48 = uVar5;
  }
  lVar4 = FUN_18006364e(param_1,&local_48);
  param_1[2] = param_2 + lVar1;
  param_1[3] = local_48;
  if (uVar2 < 4) {
    FUN_1802a82f0(lVar4,param_1,lVar1 * 4);
    *(undefined4 *)(lVar4 + lVar1 * 4) = param_4;
    *(undefined4 *)(lVar4 + 4 + lVar1 * 4) = 0;
  }
  else {
    lVar3 = *param_1;
    FUN_1802a82f0(lVar4,lVar3,lVar1 * 4);
    *(undefined4 *)(lVar4 + lVar1 * 4) = param_4;
    *(undefined4 *)(lVar4 + 4 + lVar1 * 4) = 0;
    FUN_180061b30(param_1,lVar3,uVar2);
  }
  *param_1 = lVar4;
  if (DAT_180402640 != (local_40 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_40 ^ (ulonglong)auStack_68);
  }
  return param_1;
}

