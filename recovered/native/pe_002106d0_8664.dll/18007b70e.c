/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007b70e */

void Catch_18007b70e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_2 + 0x58);
  *(longlong *)(param_2 + 0x60) = lVar2;
  lVar1 = *(longlong *)(param_2 + 0x78) + *(longlong *)(param_2 + 0x70) * 2;
  *(longlong *)(param_2 + 0x60) = lVar2;
  thunk_FUN_18000a68c(*(undefined8 *)(param_2 + 0x48),lVar1);
  uVar3 = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)(param_2 + 0x60) = 0;
  thunk_FUN_18000a68c(lVar1,uVar3,*(undefined8 *)(param_2 + 0x48));
  *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x60) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(0,0);
}

