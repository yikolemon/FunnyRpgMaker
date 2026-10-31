/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180066568 */

longlong * FUN_180066568(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_68;
  if (0x3ffffffffffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800013a5();
  }
  uVar1 = param_1[3];
  uVar3 = param_2 | 3;
  local_40 = 0x3ffffffffffffffe;
  if (((uVar3 < 0x3fffffffffffffff) && (uVar1 <= 0x3ffffffffffffffe - (uVar1 >> 1))) &&
     (local_40 = (uVar1 >> 1) + uVar1, local_40 < uVar3)) {
    local_40 = uVar3;
  }
  lVar2 = FUN_18006364e(param_1,&local_40);
  param_1[2] = param_2;
  param_1[3] = local_40;
  FUN_1802a82f0(lVar2,param_4,param_2 * 4);
  *(undefined4 *)(lVar2 + param_2 * 4) = 0;
  if (3 < uVar1) {
    FUN_180061b30(param_1,*param_1,uVar1);
  }
  *param_1 = lVar2;
  if (DAT_180402640 != (local_38 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_38 ^ (ulonglong)auStack_68);
  }
  return param_1;
}

