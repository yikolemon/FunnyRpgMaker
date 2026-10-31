/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14021bd5e */

undefined8 FUN_14021bd5e(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) < 1) {
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18) = 0xffffffffffffffff;
    FUN_140217a46(param_2,*(undefined8 *)(param_1 + 0x10));
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14021738c("cing: %.2f,%.2f");
}

