/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e61a7 */

void FUN_1400e61a7(longlong param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar1 = FUN_1400789d0(param_1 + 0x38,*param_2,*param_2);
    *param_2 = uVar1;
  }
  return;
}

