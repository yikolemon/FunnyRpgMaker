/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007b462 */

undefined8 Catch_18007b462(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  lVar2 = (longlong)*(int *)(*plVar1 + 4);
  uVar3 = *(uint *)((longlong)plVar1 + lVar2 + 0x10) & 0x13 | 4;
  *(uint *)((longlong)plVar1 + lVar2 + 0x10) = uVar3;
  if ((*(uint *)((longlong)plVar1 + lVar2 + 0x14) & uVar3) == 0) {
    *(undefined4 *)(param_2 + 0x3c) = 0;
    return 0x18007b41b;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(0,0);
}

