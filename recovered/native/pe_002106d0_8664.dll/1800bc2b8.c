/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bc2b8 */

void Catch_1800bc2b8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x70);
  *(longlong *)(param_2 + 0x58) = lVar1;
  uVar2 = *(undefined8 *)(lVar1 + 8);
  *(longlong *)(param_2 + 0x58) = lVar1;
  thunk_FUN_180018197(*(undefined8 *)(param_2 + 0x80),uVar2,*(undefined8 *)(param_2 + 0x88));
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x58) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(0,0);
}

