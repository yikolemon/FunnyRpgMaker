/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006d039 */

void FUN_14006d039(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  
  if ((int)param_1[1] == 0) {
    lVar1 = *param_1;
    iVar2 = FUN_14006d07f((longlong)(param_1 + 3),param_2,lVar1);
    if (iVar2 == 0) {
      FUN_14006d07f((longlong)(param_1 + 9),param_2,lVar1);
      return;
    }
  }
  return;
}

