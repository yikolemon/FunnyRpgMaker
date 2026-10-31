/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044b95f */

void __cdecl FUN_0044b95f(int param_1)

{
  if (*(int *)(param_1 + 0x224) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0044b96d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 0x224) + 0x48))();
    return;
  }
  return;
}

