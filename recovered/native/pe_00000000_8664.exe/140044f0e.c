/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140044f0e */

undefined8 Catch_140044f0e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  lVar2 = (longlong)*(int *)(*plVar1 + 4);
  uVar3 = *(uint *)((longlong)plVar1 + lVar2 + 0x10) & 0x13 | 4;
  *(uint *)((longlong)plVar1 + lVar2 + 0x10) = uVar3;
  if ((*(uint *)((longlong)plVar1 + lVar2 + 0x14) & uVar3) == 0) {
    return 0x140044e99;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14018f0a0(0,0);
}

