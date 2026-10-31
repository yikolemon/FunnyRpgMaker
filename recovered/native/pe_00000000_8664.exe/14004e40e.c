/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004e40e */

undefined8 FUN_14004e40e(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) < 1) {
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18) = 0xffffffffffffffff;
    FUN_14004a136(param_2,*(undefined8 *)(param_1 + 0x10));
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140049b0a("Can not switch from automatic to manual indexing");
}

