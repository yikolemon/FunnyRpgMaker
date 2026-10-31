/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000b1cf */

char * FUN_1000b1cf(int param_1,char *param_2,int *param_3)

{
  char *pcVar1;
  int *local_18;
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_18;
  pcVar1 = (char *)(param_1 + 1);
  if (pcVar1 != param_2) {
    if ((int)*pcVar1 - 0x30U < 10) {
      local_14 = 0;
      pcVar1 = (char *)FUN_1000ae8c(pcVar1,param_2,&local_14);
      if ((*(byte *)(param_3 + 3) < 0xb) && ((0x47eU >> (*(byte *)(param_3 + 3) & 0x1f) & 1) != 0))
      {
                    /* WARNING: Subroutine does not return */
        FUN_10006198("Precision not allowed for this argument type.");
      }
      *(undefined4 *)(*param_3 + 4) = local_14;
    }
    else {
      if (*pcVar1 != '{') goto LAB_1000b27a;
      pcVar1 = (char *)(param_1 + 2);
      if (pcVar1 != param_2) {
        local_18 = param_3;
        pcVar1 = (char *)FUN_1000b9cc(pcVar1,param_2,&local_18);
      }
      if ((pcVar1 == param_2) || (*pcVar1 != '}')) {
                    /* WARNING: Subroutine does not return */
        FUN_10006198("Invalid format string.");
      }
      pcVar1 = pcVar1 + 1;
    }
    if (DAT_10388d00 == (local_10 ^ (uint)&local_18)) {
      return pcVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
LAB_1000b27a:
                    /* WARNING: Subroutine does not return */
  FUN_10006198("Missing precision specifier.");
}

