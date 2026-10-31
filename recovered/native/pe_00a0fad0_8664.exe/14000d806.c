/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000d806 */

ulonglong FUN_14000d806(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4,
                       longlong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_158 [32];
  char local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_1401c9640 ^ (ulonglong)auStack_158;
  lVar2 = param_2 - param_3;
  uVar1 = 0xffffffffffffffff;
  if ((param_3 <= param_2 && lVar2 != 0) && param_5 != 0) {
    if ((ulonglong)(param_5 + lVar2) < 0x10) {
      lVar2 = 0;
      FUN_1401366a0(local_138,0,0x100);
      do {
        local_138[*(byte *)(param_4 + lVar2)] = '\x01';
        lVar2 = lVar2 + 1;
        uVar1 = param_3;
      } while (param_5 != lVar2);
      do {
        if (local_138[*(byte *)(param_1 + uVar1)] != '\0') goto LAB_14000d8cf;
        lVar2 = param_1 + uVar1;
        uVar1 = uVar1 + 1;
      } while (lVar2 + 1U < param_2 + param_1);
      uVar1 = 0xffffffffffffffff;
    }
    else {
      lVar2 = thunk_FUN_1400daf80(param_1 + param_3,lVar2,param_4,param_5);
      uVar1 = param_3 + lVar2;
      if (lVar2 == -1) {
        uVar1 = 0xffffffffffffffff;
      }
    }
  }
LAB_14000d8cf:
  if (DAT_1401c9640 != (local_38 ^ (ulonglong)auStack_158)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_38 ^ (ulonglong)auStack_158);
  }
  return uVar1;
}

