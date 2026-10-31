/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140049ae4 */

undefined8 FUN_140049ae4(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) < 1) {
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18) = 0xffffffffffffffff;
    FUN_1400457f0(param_2,*(undefined8 *)(param_1 + 0x10));
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400451d8("Can not switch from automatic to manual indexing");
}

