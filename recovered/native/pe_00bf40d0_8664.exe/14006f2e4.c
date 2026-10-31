/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006f2e4 */

uint FUN_14006f2e4(longlong *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*param_2 != -1) {
    if (((char)param_1[5] == '\0') || (*(int *)((longlong)param_1 + 0x2c) != *param_2)) {
      uVar1 = FUN_14007a06f(param_1,param_2,1);
      return uVar1;
    }
    FUN_14007a13b(param_1);
    uVar1 = 0;
    if ((char)param_1[5] != '\0') {
      uVar1 = *(uint *)(param_1 + 6);
      *param_2 = *(int *)((longlong)param_1 + 0x2c);
    }
  }
  return uVar1;
}

