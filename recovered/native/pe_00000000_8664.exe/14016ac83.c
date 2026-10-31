/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016ac83 */

void FUN_14016ac83(longlong param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014016ac9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x388))
            (*(undefined8 *)(param_1 + 8),param_2 + 8,
             *(int *)(param_2 + 0x10) - *(int *)(param_2 + 8));
  return;
}

