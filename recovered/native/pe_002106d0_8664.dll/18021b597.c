/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021b597 */

void FUN_18021b597(longlong param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00018021b5ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x388))
            (*(undefined8 *)(param_1 + 8),param_2 + 8,
             *(int *)(param_2 + 0x10) - *(int *)(param_2 + 8));
  return;
}

