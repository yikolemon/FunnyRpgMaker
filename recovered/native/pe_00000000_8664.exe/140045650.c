/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140045650 */

void FUN_140045650(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014004565a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x10))();
  return;
}

