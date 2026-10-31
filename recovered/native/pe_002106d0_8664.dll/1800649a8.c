/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800649a8 */

undefined8 * FUN_1800649a8(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (0x3ffffffffffffffeU - lVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800013a5();
  }
  uVar2 = param_1[3];
  uVar5 = param_2 + lVar1 | 3;
  local_40 = 0x3ffffffffffffffe;
  if (((uVar5 < 0x3fffffffffffffff) && (uVar2 <= 0x3ffffffffffffffe - (uVar2 >> 1))) &&
     (local_40 = (uVar2 >> 1) + uVar2, local_40 < uVar5)) {
    local_40 = uVar5;
  }
  uVar4 = FUN_18006364e(param_1,&local_40);
  param_1[2] = param_2 + lVar1;
  param_1[3] = local_40;
  if (uVar2 < 4) {
    FUN_1802a82f0(uVar4,param_1,lVar1 * 4 + 4);
  }
  else {
    uVar3 = *param_1;
    FUN_1802a82f0(uVar4,uVar3,lVar1 * 4 + 4);
    FUN_180061b30(param_1,uVar3,uVar2);
  }
  *param_1 = uVar4;
  if (DAT_180402640 != (local_38 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_38 ^ (ulonglong)auStack_68);
  }
  return param_1;
}

