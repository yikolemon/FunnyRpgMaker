/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000a88e */

undefined8 FUN_18000a88e(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) < 1) {
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18) = 0xffffffffffffffff;
    FUN_180006576(param_2,*(undefined8 *)(param_1 + 0x10));
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180005ebc("Can not switch from automatic to manual indexing");
}

