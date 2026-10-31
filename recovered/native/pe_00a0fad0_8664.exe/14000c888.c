/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000c888 */

undefined * Catch_14000c888(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x38);
  lVar2 = (longlong)*(int *)(*plVar1 + 4);
  uVar3 = *(uint *)((longlong)plVar1 + lVar2 + 0x10) & 0x13 | 4;
  *(uint *)((longlong)plVar1 + lVar2 + 0x10) = uVar3;
  if ((*(uint *)((longlong)plVar1 + lVar2 + 0x14) & uVar3) == 0) {
    return &DAT_14000c880;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140106270(0,0);
}

