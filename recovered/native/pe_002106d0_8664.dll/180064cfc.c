/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180064cfc */

void FUN_180064cfc(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_78;
  if (0x317 < param_2 - param_1) {
    lVar2 = param_2;
    do {
      if ((longlong)param_3 < 1) {
        FUN_180064eb6(param_1,lVar2);
        lVar1 = lVar2 - param_1;
        do {
          FUN_18006510c(param_1,lVar2);
          lVar2 = lVar2 + -0x18;
          lVar1 = lVar1 + -0x18;
        } while (0x18 < lVar1);
        goto LAB_180064dea;
      }
      FUN_180064f66(&local_50,param_1,lVar2);
      lVar1 = local_48;
      param_2 = local_50;
      param_3 = (param_3 >> 2) + (param_3 >> 1);
      if (local_50 - param_1 < lVar2 - local_48) {
        FUN_180064cfc(param_1,local_50,param_3);
        param_2 = lVar2;
        param_1 = lVar1;
      }
      else {
        FUN_180064cfc(local_48,lVar2,param_3);
      }
      lVar2 = param_2;
    } while (0x317 < param_2 - param_1);
  }
  FUN_180064e1c(param_1,param_2);
LAB_180064dea:
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_78);
}

