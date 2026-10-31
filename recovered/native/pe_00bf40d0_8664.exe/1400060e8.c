/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400060e8 */

void FUN_1400060e8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (longlong)*(int *)(*param_1 + 4);
  if ((*(int *)((longlong)param_1 + lVar2 + 0x10) == 0) &&
     ((*(byte *)((longlong)param_1 + lVar2 + 0x18) & 2) != 0)) {
    iVar1 = (**(code **)(**(longlong **)((longlong)param_1 + lVar2 + 0x48) + 0x68))();
    if (iVar1 == -1) {
      FUN_140005d34((longlong)param_1 + (longlong)*(int *)(*param_1 + 4),
                    *(uint *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x10) | 4,'\0')
      ;
    }
  }
  return;
}

