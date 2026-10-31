/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10045fb2 */

short * FUN_10045fb2(int param_1,short *param_2,int *param_3)

{
  short *psVar1;
  int *local_18;
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_18;
  psVar1 = (short *)(param_1 + 2);
  if (psVar1 != param_2) {
    if ((ushort)(*psVar1 - 0x30U) < 10) {
      local_14 = 0;
      psVar1 = (short *)FUN_10045c3a(psVar1,param_2,&local_14);
      if ((*(byte *)(param_3 + 3) < 0xb) && ((0x47eU >> (*(byte *)(param_3 + 3) & 0x1f) & 1) != 0))
      {
                    /* WARNING: Subroutine does not return */
        FUN_10006198("Precision not allowed for this argument type.");
      }
      *(undefined4 *)(*param_3 + 4) = local_14;
    }
    else {
      if (*psVar1 != 0x7b) goto LAB_10046062;
      psVar1 = (short *)(param_1 + 4);
      if (psVar1 != param_2) {
        local_18 = param_3;
        psVar1 = (short *)FUN_10046742(psVar1,param_2,&local_18);
      }
      if ((psVar1 == param_2) || (*psVar1 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
        FUN_10006198("Invalid format string.");
      }
      psVar1 = psVar1 + 1;
    }
    if (DAT_10388d00 == (local_10 ^ (uint)&local_18)) {
      return psVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
LAB_10046062:
                    /* WARNING: Subroutine does not return */
  FUN_10006198("Missing precision specifier.");
}

