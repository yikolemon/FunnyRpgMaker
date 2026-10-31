/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ff1ef */

ulonglong FUN_1800ff1ef(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  
  do {
    if (param_2 <= param_1) {
      return param_1;
    }
    uVar1 = param_2 - 1;
    pcVar2 = (char *)(param_2 - 1);
    param_2 = uVar1;
  } while (*pcVar2 < -0x40);
  return uVar1;
}

