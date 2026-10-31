/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401711a5 */

ulonglong FUN_1401711a5(longlong param_1,int *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*param_2 != -1) {
    if ((*(char *)(param_1 + 0x28) == '\0') || (*(int *)(param_1 + 0x2c) != *param_2)) {
      uVar1 = FUN_14017bdd4(param_1,param_2,1);
      return uVar1;
    }
    FUN_14017beb1(param_1);
    uVar2 = 0;
    if (*(char *)(param_1 + 0x28) != '\0') {
      uVar2 = *(uint *)(param_1 + 0x30);
      *param_2 = *(int *)(param_1 + 0x2c);
    }
  }
  return (ulonglong)uVar2;
}

