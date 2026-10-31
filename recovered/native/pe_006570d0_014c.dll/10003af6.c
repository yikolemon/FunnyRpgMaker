/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10003af6 */

void FUN_10003af6(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_20 [20];
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)auStack_20;
  uVar1 = FUN_10002303();
  FUN_10003996(param_1,uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(auStack_20,&DAT_1035f784);
}

