/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180076e36 */

ulonglong FUN_180076e36(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                       longlong param_5)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_42 [2];
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_78;
  lVar2 = param_3;
  if (param_3 != param_4 && param_5 != 0) {
    do {
      param_5 = param_5 + -1;
      local_58 = param_1 + 0x10;
      iVar1 = FUN_18023ec80(local_42,lVar2,param_4 - lVar2,param_2);
      if ((iVar1 < 0) || (lVar2 = lVar2 + (ulonglong)(iVar1 + (uint)(iVar1 == 0)), param_5 == 0))
      break;
    } while (lVar2 != param_4);
  }
  uVar3 = lVar2 - param_3;
  if (0x7ffffffe < (longlong)uVar3) {
    uVar3 = 0x7fffffff;
  }
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_78)) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_78);
}

