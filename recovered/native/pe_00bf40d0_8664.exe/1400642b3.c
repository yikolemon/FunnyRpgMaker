/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400642b3 */

void FUN_1400642b3(longlong param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (*(char *)(lVar1 + 0x58) == '\0') {
    iVar2 = FUN_14006433d(lVar1,*param_2,param_2[1]);
    if (iVar2 != 0) goto LAB_14006432a;
  }
  iVar2 = FUN_140064426(lVar1,3);
  if (iVar2 == 0) {
    FUN_140062107(lVar1,param_2[2],param_2[3],'\0');
    FUN_140062107(lVar1,param_2[4],param_2[5],'\0');
    FUN_140062107(lVar1,param_2[6],param_2[7],'\x01');
    return;
  }
LAB_14006432a:
  if (**(int **)(param_1 + 0x30) == 0) {
    **(int **)(param_1 + 0x30) = iVar2;
  }
  return;
}

