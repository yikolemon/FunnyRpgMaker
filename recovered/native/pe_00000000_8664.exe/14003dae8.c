/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003dae8 */

undefined8 Catch_14003dae8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  lVar2 = (longlong)*(int *)(*plVar1 + 4);
  uVar3 = *(uint *)((longlong)plVar1 + lVar2 + 0x10) & 0x13 | 4;
  *(uint *)((longlong)plVar1 + lVar2 + 0x10) = uVar3;
  if ((*(uint *)((longlong)plVar1 + lVar2 + 0x14) & uVar3) == 0) {
    return 0x14003da8a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14018f0a0(0,0);
}

