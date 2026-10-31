/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100bc1a3 */

void __fastcall
FUN_100bc1a3(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  (*DAT_1039cae8)(param_2,param_3,param_4);
  if (DAT_10388d00 == (uVar1 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

