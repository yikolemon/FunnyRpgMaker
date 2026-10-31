/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180221ca4 */

ulonglong FUN_180221ca4(longlong param_1,int *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*param_2 != -1) {
    if ((*(char *)(param_1 + 0x28) == '\0') || (*(int *)(param_1 + 0x2c) != *param_2)) {
      uVar1 = FUN_18022ca2f(param_1,param_2,1);
      return uVar1;
    }
    FUN_18022cafb(param_1);
    uVar2 = 0;
    if (*(char *)(param_1 + 0x28) != '\0') {
      uVar2 = *(uint *)(param_1 + 0x30);
      *param_2 = *(int *)(param_1 + 0x2c);
    }
  }
  return (ulonglong)uVar2;
}

