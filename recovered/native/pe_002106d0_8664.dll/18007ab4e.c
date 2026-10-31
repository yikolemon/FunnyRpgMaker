/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007ab4e */

undefined * Catch_18007ab4e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x38);
  lVar2 = (longlong)*(int *)(*plVar1 + 4);
  uVar3 = *(uint *)((longlong)plVar1 + lVar2 + 0x10) & 0x13 | 4;
  *(uint *)((longlong)plVar1 + lVar2 + 0x10) = uVar3;
  if ((*(uint *)((longlong)plVar1 + lVar2 + 0x14) & uVar3) == 0) {
    return &DAT_18007ab47;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(0,0);
}

