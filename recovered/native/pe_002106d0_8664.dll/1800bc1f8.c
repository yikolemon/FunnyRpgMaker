/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bc1f8 */

void Catch_1800bc1f8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x80);
  lVar2 = *(longlong *)(param_2 + 0x70);
  *(longlong *)(param_2 + 0x68) = lVar2;
  lVar3 = *(longlong *)(param_2 + 0x88);
  *(longlong *)(param_2 + 0x68) = lVar2;
  thunk_FUN_180018197(*(undefined8 *)(param_2 + 0x50));
  uVar4 = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)(param_2 + 0x68) = 0;
  thunk_FUN_180018197(lVar1 * 0x10 + lVar3,uVar4,*(undefined8 *)(param_2 + 0x50));
  *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x68) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(0,0);
}

