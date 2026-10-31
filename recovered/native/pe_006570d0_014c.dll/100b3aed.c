/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b3aed */

undefined4 __fastcall
FUN_100b3aed(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_18;
  local_18 = &local_c;
  local_14 = (undefined1 *)&param_3;
  local_10 = param_4;
  local_c = param_2;
  FUN_100b78e4();
  if (DAT_10388d00 == (local_8 ^ (uint)&local_18)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

