/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10044d00 */

short * FUN_10044d00(int param_1,short *param_2,int param_3)

{
  short *psVar1;
  undefined4 extraout_EDX;
  int iVar2;
  int local_18;
  int local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_18;
  psVar1 = (short *)(param_1 + 2);
  if (psVar1 == param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_10006198("Invalid format string.");
  }
  if (*psVar1 == 0x7b) {
    FUN_10044e30(psVar1,param_1 + 4,*(undefined4 *)(param_3 + 0x10));
    *(undefined4 *)(param_3 + 0x10) = extraout_EDX;
  }
  else {
    if (*psVar1 == 0x7d) {
      iVar2 = *(int *)(param_3 + 0xc);
      if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_10006198("Can not switch from manual to automatic indexing");
      }
      *(int *)(param_3 + 0xc) = iVar2 + 1;
    }
    else {
      local_18 = param_3;
      local_14 = -1;
      psVar1 = (short *)FUN_10044f20(psVar1,param_2,&local_18);
      if (psVar1 == param_2) {
LAB_10044de6:
                    /* WARNING: Subroutine does not return */
        FUN_10006198("Missing \'}\' in format string.");
      }
      if (*psVar1 == 0x3a) {
        psVar1 = (short *)FUN_10044fee(local_14,psVar1 + 1,param_2);
        if ((psVar1 == param_2) || (*psVar1 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
          FUN_10006198("Unknown format specifier.");
        }
        goto LAB_10044db5;
      }
      iVar2 = local_14;
      if (*psVar1 != 0x7d) goto LAB_10044de6;
    }
    FUN_10044e7c(iVar2,psVar1);
  }
LAB_10044db5:
  if (DAT_10388d00 != (local_10 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return psVar1 + 1;
}

