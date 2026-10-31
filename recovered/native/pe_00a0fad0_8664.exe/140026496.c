/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140026496 */

undefined8 Catch_140026496(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x68);
  lVar2 = (longlong)*(int *)(*plVar1 + 4);
  uVar3 = *(uint *)((longlong)plVar1 + lVar2 + 0x10) & 0x13 | 4;
  *(uint *)((longlong)plVar1 + lVar2 + 0x10) = uVar3;
  if ((*(uint *)((longlong)plVar1 + lVar2 + 0x14) & uVar3) == 0) {
    *(undefined4 *)(param_2 + 0x74) = 0;
    return 0x140026409;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140106270(0,0);
}

