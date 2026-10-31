/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007367c */

void Catch_14007367c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x70);
  *(longlong *)(param_2 + 0x58) = lVar1;
  uVar2 = *(undefined8 *)(lVar1 + 8);
  *(longlong *)(param_2 + 0x58) = lVar1;
  thunk_FUN_14000d5ca(*(undefined8 *)(param_2 + 0x80),uVar2,*(undefined8 *)(param_2 + 0x88));
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x58) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_14018f0a0(0,0);
}

