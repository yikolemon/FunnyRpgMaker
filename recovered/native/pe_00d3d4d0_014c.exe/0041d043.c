/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041d043 */

void __cdecl FUN_0041d043(int param_1)

{
  if ((param_1 != 0) && (*(code **)(param_1 + 0x18) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0041d052. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))();
    return;
  }
  return;
}

