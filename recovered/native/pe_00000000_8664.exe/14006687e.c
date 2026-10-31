/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14006687e */

undefined8 FUN_14006687e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  if (-1 < lVar1) {
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar1 + 1;
    FUN_1400653be(param_2,*(undefined8 *)(param_1 + 0x10));
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140049b0a("Can not switch from manual to automatic indexing");
}

