/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14021b6aa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_14021b6aa(longlong param_1,char *param_2,longlong *param_3)

{
  char *pcVar1;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  pcVar1 = (char *)(param_1 + 1);
  if (pcVar1 != param_2) {
    if ((int)*pcVar1 - 0x30U < 10) {
      local_28 = (longlong *)((ulonglong)local_28 & 0xffffffff00000000);
      pcVar1 = (char *)FUN_14021b324(pcVar1,param_2,&local_28);
      if ((*(byte *)(param_3 + 3) < 0xb) && ((0x47eU >> (*(byte *)(param_3 + 3) & 0x1f) & 1) != 0))
      {
                    /* WARNING: Subroutine does not return */
        FUN_14021738c(
                     "abilities.\nHere we expose them as read-only fields to avoid breaking interactions with your backend."
                     );
      }
      *(undefined4 *)(*param_3 + 4) = local_28._0_4_;
    }
    else {
      if (*pcVar1 != '{') goto LAB_14021b76e;
      pcVar1 = (char *)(param_1 + 2);
      if (pcVar1 != param_2) {
        local_28 = param_3;
        pcVar1 = (char *)FUN_14021bd9b(pcVar1,param_2);
      }
      if ((pcVar1 == param_2) || (*pcVar1 != '}')) {
                    /* WARNING: Subroutine does not return */
        FUN_14021738c("ne.");
      }
      pcVar1 = pcVar1 + 1;
    }
    if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_48)) {
      return pcVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_20 ^ (ulonglong)auStack_48);
  }
LAB_14021b76e:
                    /* WARNING: Subroutine does not return */
  FUN_14021738c(
               "llbar grab.\nWhen disabled, always scroll to clicked location.\nWhen enabled, Shift+Click scrolls to clicked location."
               );
}

