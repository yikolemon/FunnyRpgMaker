/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140166312 */

void FUN_140166312(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((((*(char *)(lVar1 + 0x58) == '\0') &&
       (iVar2 = FUN_1401663ed(lVar1,*param_2,param_2[1]), iVar2 != 0)) ||
      (iVar2 = FUN_14016642d(lVar1,param_2[2],param_2[3]), iVar2 != 0)) &&
     (**(int **)(param_1 + 0x30) == 0)) {
    **(int **)(param_1 + 0x30) = iVar2;
  }
  return;
}

