/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140257891 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short * FUN_140257891(longlong param_1,short *param_2,longlong *param_3)

{
  short *psVar1;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  psVar1 = (short *)(param_1 + 2);
  if (psVar1 != param_2) {
    if ((ushort)(*psVar1 - 0x30U) < 10) {
      local_28 = (longlong *)((ulonglong)local_28 & 0xffffffff00000000);
      psVar1 = (short *)FUN_1402574af(psVar1,param_2,&local_28);
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
      if (*psVar1 != 0x7b) goto LAB_140257959;
      psVar1 = (short *)(param_1 + 4);
      if (psVar1 != param_2) {
        local_28 = param_3;
        psVar1 = (short *)FUN_140257ee9(psVar1,param_2);
      }
      if ((psVar1 == param_2) || (*psVar1 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
        FUN_14021738c("ne.");
      }
      psVar1 = psVar1 + 1;
    }
    if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_48)) {
      return psVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_20 ^ (ulonglong)auStack_48);
  }
LAB_140257959:
                    /* WARNING: Subroutine does not return */
  FUN_14021738c(
               "llbar grab.\nWhen disabled, always scroll to clicked location.\nWhen enabled, Shift+Click scrolls to clicked location."
               );
}

