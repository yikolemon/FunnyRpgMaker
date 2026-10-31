/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008562a */

void Catch_14008562a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x58);
  *(longlong *)(param_2 + 0x50) = lVar1;
  uVar2 = *(undefined8 *)(lVar1 + 8);
  *(longlong *)(param_2 + 0x50) = lVar1;
  thunk_FUN_1400498e2(*(undefined8 *)(param_2 + 0x70),uVar2,*(undefined8 *)(param_2 + 0x78));
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x50) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_140106270(0,0);
}

