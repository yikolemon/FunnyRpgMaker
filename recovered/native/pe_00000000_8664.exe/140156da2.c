/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140156da2 */

void thunk_FUN_14015718d(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_14012dd2b(*(undefined8 *)(param_1 + 0x90),param_1 + 0x98);
  }
                    /* WARNING: Could not recover jumptable at 0x0001401571c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x30))(param_1);
  return;
}

