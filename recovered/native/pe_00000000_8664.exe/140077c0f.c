/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140077c0f */

void FUN_140077c0f(ulonglong param_1,ulonglong param_2)

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

