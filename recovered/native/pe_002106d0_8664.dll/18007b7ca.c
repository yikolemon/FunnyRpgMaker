/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007b7ca */

void Catch_18007b7ca(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x58);
  *(longlong *)(param_2 + 0x50) = lVar1;
  uVar2 = *(undefined8 *)(lVar1 + 8);
  *(longlong *)(param_2 + 0x50) = lVar1;
  thunk_FUN_18000a68c(*(undefined8 *)(param_2 + 0x70),uVar2,*(undefined8 *)(param_2 + 0x78));
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x50) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(0,0);
}

