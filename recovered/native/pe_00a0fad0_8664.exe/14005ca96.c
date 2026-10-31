/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005ca96 */

undefined8 FUN_14005ca96(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  if (-1 < lVar1) {
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar1 + 1;
    FUN_14005b5d6(param_2,*(undefined8 *)(param_1 + 0x10));
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400451d8("Can not switch from manual to automatic indexing");
}

