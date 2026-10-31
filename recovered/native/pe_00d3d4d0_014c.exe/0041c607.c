/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041c607 */

void __cdecl FUN_0041c607(int param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0041c612. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))();
    return;
  }
  return;
}

