/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ac02c */

void FUN_1400ac02c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  lVar1 = DAT_140f2a910;
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x1608) + 0x10e) == '\0') {
    FUN_140077ef6(&local_20,&local_28,param_1,param_2);
    FUN_1400abb60(local_20,local_28,1);
  }
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

