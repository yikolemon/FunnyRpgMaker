/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000a1da */

char * FUN_18000a1da(longlong param_1,char *param_2,longlong *param_3)

{
  char *pcVar1;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  pcVar1 = (char *)(param_1 + 1);
  if (pcVar1 != param_2) {
    if ((int)*pcVar1 - 0x30U < 10) {
      local_28 = (longlong *)((ulonglong)local_28 & 0xffffffff00000000);
      pcVar1 = (char *)FUN_180009e54(pcVar1,param_2,&local_28);
      if ((*(byte *)(param_3 + 3) < 0xb) && ((0x47eU >> (*(byte *)(param_3 + 3) & 0x1f) & 1) != 0))
      {
                    /* WARNING: Subroutine does not return */
        FUN_180005ebc("Precision not allowed for this argument type.");
      }
      *(undefined4 *)(*param_3 + 4) = local_28._0_4_;
    }
    else {
      if (*pcVar1 != '{') goto LAB_18000a29e;
      pcVar1 = (char *)(param_1 + 2);
      if (pcVar1 != param_2) {
        local_28 = param_3;
        pcVar1 = (char *)FUN_18000a8cb(pcVar1,param_2);
      }
      if ((pcVar1 == param_2) || (*pcVar1 != '}')) {
                    /* WARNING: Subroutine does not return */
        FUN_180005ebc("Invalid format string.");
      }
      pcVar1 = pcVar1 + 1;
    }
    if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_48)) {
      return pcVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
  }
LAB_18000a29e:
                    /* WARNING: Subroutine does not return */
  FUN_180005ebc("Missing precision specifier.");
}

