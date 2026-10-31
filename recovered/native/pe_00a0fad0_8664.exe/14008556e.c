/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008556e */

void Catch_14008556e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_2 + 0x58);
  *(longlong *)(param_2 + 0x60) = lVar2;
  lVar1 = *(longlong *)(param_2 + 0x78) + *(longlong *)(param_2 + 0x70) * 2;
  *(longlong *)(param_2 + 0x60) = lVar2;
  thunk_FUN_1400498e2(*(undefined8 *)(param_2 + 0x48),lVar1);
  uVar3 = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)(param_2 + 0x60) = 0;
  thunk_FUN_1400498e2(lVar1,uVar3,*(undefined8 *)(param_2 + 0x48));
  *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x60) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_140106270(0,0);
}

