/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140056194 */

ulonglong FUN_140056194(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  
  uVar2 = FUN_140020a41((longlong)param_2,0);
  if ((int)uVar2 == 0) {
    iVar1 = FUN_1400214cf(param_2,0x1400f8230,param_1);
    uVar2 = CONCAT44(extraout_var,iVar1);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x48) * 0x10000;
      uVar2 = 0;
    }
  }
  return uVar2;
}

