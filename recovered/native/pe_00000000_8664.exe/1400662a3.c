/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400662a3 */

short * FUN_1400662a3(longlong param_1,short *param_2,longlong *param_3)

{
  short *psVar1;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  psVar1 = (short *)(param_1 + 2);
  if (psVar1 != param_2) {
    if ((ushort)(*psVar1 - 0x30U) < 10) {
      local_28 = (longlong *)((ulonglong)local_28 & 0xffffffff00000000);
      psVar1 = (short *)FUN_140065ec1(psVar1,param_2,&local_28);
      if ((*(byte *)(param_3 + 3) < 0xb) && ((0x47eU >> (*(byte *)(param_3 + 3) & 0x1f) & 1) != 0))
      {
                    /* WARNING: Subroutine does not return */
        FUN_140049b0a("Precision not allowed for this argument type.");
      }
      *(undefined4 *)(*param_3 + 4) = local_28._0_4_;
    }
    else {
      if (*psVar1 != 0x7b) goto LAB_14006636b;
      psVar1 = (short *)(param_1 + 4);
      if (psVar1 != param_2) {
        local_28 = param_3;
        psVar1 = (short *)FUN_1400668fb(psVar1,param_2);
      }
      if ((psVar1 == param_2) || (*psVar1 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
        FUN_140049b0a("Invalid format string.");
      }
      psVar1 = psVar1 + 1;
    }
    if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_48)) {
      return psVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_20 ^ (ulonglong)auStack_48);
  }
LAB_14006636b:
                    /* WARNING: Subroutine does not return */
  FUN_140049b0a("Missing precision specifier.");
}

