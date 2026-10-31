/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016aa3a */

void __fastcall
FUN_1016aa3a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_cc [188];
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)auStack_cc;
  FUN_1016e745(param_2);
  FUN_1016e770(param_4);
  if (DAT_10388d00 == (local_10 ^ (uint)auStack_cc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

