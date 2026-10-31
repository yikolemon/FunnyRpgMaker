/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005cad6 */

undefined8 FUN_14005cad6(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) < 1) {
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18) = 0xffffffffffffffff;
    FUN_14005b5d6(param_2,*(undefined8 *)(param_1 + 0x10));
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400451d8("Can not switch from automatic to manual indexing");
}

