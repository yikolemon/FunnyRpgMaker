/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000a7ea */

undefined8 FUN_18000a7ea(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  if (-1 < lVar1) {
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar1 + 1;
    FUN_180006576(param_2,*(undefined8 *)(param_1 + 0x10));
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180005ebc("Can not switch from manual to automatic indexing");
}

