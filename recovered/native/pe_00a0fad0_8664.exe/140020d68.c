/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140020d68 */

void FUN_140020d68(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14000a2c6();
    }
    FUN_140019b84();
    uVar1 = FUN_140020dfa(*param_3,*param_4,*param_1,param_1);
    param_1[1] = uVar1;
  }
  return;
}

