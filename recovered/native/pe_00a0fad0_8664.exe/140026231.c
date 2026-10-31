/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140026231 */

ulonglong FUN_140026231(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4,
                       longlong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_158 [40];
  char local_130 [256];
  ulonglong local_30;
  
  local_30 = DAT_1401c9640 ^ (ulonglong)auStack_158;
  uVar1 = 0xffffffffffffffff;
  lVar2 = param_2 - param_3;
  if (param_3 <= param_2 && lVar2 != 0) {
    if ((ulonglong)(param_5 + lVar2) < 0x10) {
      FUN_1401366a0(local_130,0,0x100);
      if (param_5 != 0) {
        lVar2 = 0;
        do {
          local_130[*(byte *)(param_4 + lVar2)] = '\x01';
          lVar2 = lVar2 + 1;
        } while (param_5 != lVar2);
      }
      uVar1 = param_3;
      do {
        if (local_130[*(byte *)(param_1 + uVar1)] != '\x01') goto LAB_1400262ef;
        lVar2 = param_1 + uVar1;
        uVar1 = uVar1 + 1;
      } while (lVar2 + 1U < param_2 + param_1);
      uVar1 = 0xffffffffffffffff;
    }
    else {
      lVar2 = thunk_FUN_1400db100(param_1 + param_3,lVar2,param_4,param_5);
      uVar1 = param_3 + lVar2;
      if (lVar2 == -1) {
        uVar1 = 0xffffffffffffffff;
      }
    }
  }
LAB_1400262ef:
  if (DAT_1401c9640 != (local_30 ^ (ulonglong)auStack_158)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_30 ^ (ulonglong)auStack_158);
  }
  return uVar1;
}

