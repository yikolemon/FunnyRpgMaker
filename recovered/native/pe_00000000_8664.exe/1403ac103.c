/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403ac103 */

void FUN_1403ac103(longlong param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar1 = FUN_140310be4(param_1 + 0x38,*param_2,*param_2);
    *param_2 = uVar1;
  }
  return;
}

