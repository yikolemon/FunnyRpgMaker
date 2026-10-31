/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400784ab */

ulonglong FUN_1400784ab(ulonglong param_1,ulonglong param_2)

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

