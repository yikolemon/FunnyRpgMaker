/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400735bc */

void Catch_1400735bc(undefined8 param_1,longlong param_2)

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
  thunk_FUN_14000d5ca(*(undefined8 *)(param_2 + 0x50));
  uVar4 = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)(param_2 + 0x68) = 0;
  thunk_FUN_14000d5ca(lVar1 * 0x10 + lVar3,uVar4,*(undefined8 *)(param_2 + 0x50));
  *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x68) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_14018f0a0(0,0);
}

