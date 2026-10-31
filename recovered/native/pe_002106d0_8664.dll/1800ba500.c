/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ba500 */

undefined8 Catch_1800ba500(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x38);
  lVar2 = (longlong)*(int *)(*plVar1 + 4);
  uVar3 = *(uint *)((longlong)plVar1 + lVar2 + 0x10) & 0x13 | 4;
  *(uint *)((longlong)plVar1 + lVar2 + 0x10) = uVar3;
  if ((*(uint *)((longlong)plVar1 + lVar2 + 0x14) & uVar3) == 0) {
    *(undefined4 *)(param_2 + 0x44) = 0;
    return 0x1800ba4a1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(0,0);
}

