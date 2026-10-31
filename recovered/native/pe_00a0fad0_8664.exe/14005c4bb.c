/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005c4bb */

short * FUN_14005c4bb(longlong param_1,short *param_2,longlong *param_3)

{
  short *psVar1;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_48;
  psVar1 = (short *)(param_1 + 2);
  if (psVar1 != param_2) {
    if ((ushort)(*psVar1 - 0x30U) < 10) {
      local_28 = (longlong *)((ulonglong)local_28 & 0xffffffff00000000);
      psVar1 = (short *)FUN_14005c0d9(psVar1,param_2,&local_28);
      if ((*(byte *)(param_3 + 3) < 0xb) && ((0x47eU >> (*(byte *)(param_3 + 3) & 0x1f) & 1) != 0))
      {
                    /* WARNING: Subroutine does not return */
        FUN_1400451d8("Precision not allowed for this argument type.");
      }
      *(undefined4 *)(*param_3 + 4) = local_28._0_4_;
    }
    else {
      if (*psVar1 != 0x7b) goto LAB_14005c583;
      psVar1 = (short *)(param_1 + 4);
      if (psVar1 != param_2) {
        local_28 = param_3;
        psVar1 = (short *)FUN_14005cb13(psVar1,param_2);
      }
      if ((psVar1 == param_2) || (*psVar1 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
        FUN_1400451d8("Invalid format string.");
      }
      psVar1 = psVar1 + 1;
    }
    if (DAT_1401c9640 == (local_20 ^ (ulonglong)auStack_48)) {
      return psVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_20 ^ (ulonglong)auStack_48);
  }
LAB_14005c583:
                    /* WARNING: Subroutine does not return */
  FUN_1400451d8("Missing precision specifier.");
}

