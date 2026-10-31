/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402761cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402761cc(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = ram0x000140613b10 ^ (ulonglong)auStack_78;
  if (0x317 < param_2 - param_1) {
    lVar2 = param_2;
    do {
      if ((longlong)param_3 < 1) {
        FUN_140276386(param_1,lVar2);
        lVar1 = lVar2 - param_1;
        do {
          FUN_1402765dc(param_1,lVar2);
          lVar2 = lVar2 + -0x18;
          lVar1 = lVar1 + -0x18;
        } while (0x18 < lVar1);
        goto LAB_1402762ba;
      }
      FUN_140276436(&local_50,param_1,lVar2);
      lVar1 = local_48;
      param_2 = local_50;
      param_3 = (param_3 >> 2) + (param_3 >> 1);
      if (local_50 - param_1 < lVar2 - local_48) {
        FUN_1402761cc(param_1,local_50,param_3);
        param_2 = lVar2;
        param_1 = lVar1;
      }
      else {
        FUN_1402761cc(local_48,lVar2,param_3);
      }
      lVar2 = param_2;
    } while (0x317 < param_2 - param_1);
  }
  FUN_1402762ec(param_1,param_2);
LAB_1402762ba:
  if (ram0x000140613b10 == (local_40 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_40 ^ (ulonglong)auStack_78);
}

