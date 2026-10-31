/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006cfb0 */

void FUN_14006cfb0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  
  if ((int)param_1[1] == 0) {
    iVar2 = 6;
    if ((int)param_1[2] == 1) {
      lVar1 = *param_1;
      iVar2 = FUN_14006d8e3((longlong)(param_1 + 3),param_2,lVar1);
      if ((iVar2 == 0) && (iVar2 = FUN_14006d8e3((longlong)(param_1 + 9),param_2,lVar1), iVar2 == 0)
         ) {
        return;
      }
    }
    *(int *)(param_1 + 1) = iVar2;
  }
  return;
}

