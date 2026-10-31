/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10046742 */

short * FUN_10046742(short *param_1,short *param_2)

{
  short sVar1;
  undefined4 local_18;
  undefined1 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_18;
  sVar1 = *param_1;
  if ((sVar1 == 0x7d) || (sVar1 == 0x3a)) {
    FUN_100467f4(local_14);
LAB_100467c6:
    if (DAT_10388d00 == (local_10 ^ (uint)&local_18)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  if ((ushort)(sVar1 - 0x30U) < 10) {
    local_18 = 0;
    if (sVar1 == 0x30) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (short *)FUN_10045c3a(param_1,param_2,&local_18);
    }
    if ((param_1 != param_2) && ((*param_1 == 0x3a || (*param_1 == 0x7d)))) {
      FUN_100468d4(local_18);
      goto LAB_100467c6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10006198("Invalid format string.");
}

