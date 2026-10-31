/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fe953 */

void FUN_1800fe953(ulonglong param_1,ulonglong param_2)

{
  char *pcVar1;
  
  do {
    if (param_1 <= param_2) {
      return;
    }
    pcVar1 = (char *)(param_1 - 1);
    param_1 = param_1 - 1;
  } while (*pcVar1 != '\n');
  return;
}

