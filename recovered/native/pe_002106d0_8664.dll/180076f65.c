/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180076f65 */

ulonglong FUN_180076f65(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                       ulonglong param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined1 *local_80;
  undefined8 ***local_78;
  undefined8 ***local_70;
  longlong local_68;
  undefined1 local_5a [2];
  undefined8 ***local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_a8;
  local_68 = param_3;
  if (param_3 != param_4 && param_5 != 0) {
    while( true ) {
      local_70 = &local_58;
      local_88 = &local_50;
      local_80 = local_5a;
      local_78 = &local_58;
      iVar1 = FUN_180076956(param_1,param_2,param_3,param_4);
      if (iVar1 != 0) break;
      param_5 = param_5 - ((undefined8 ****)local_58 == &local_58);
      param_3 = local_50;
      if ((param_5 == 0) || (local_50 == param_4)) goto LAB_18007701c;
    }
    if (iVar1 == 3) {
      uVar2 = param_4 - param_3;
      if (param_5 < (ulonglong)(param_4 - param_3)) {
        uVar2 = param_5;
      }
      param_3 = param_3 + uVar2;
    }
  }
LAB_18007701c:
  uVar2 = param_3 - local_68;
  if (0x7ffffffe < (longlong)uVar2) {
    uVar2 = 0x7fffffff;
  }
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_a8);
  }
  return uVar2 & 0xffffffff;
}

