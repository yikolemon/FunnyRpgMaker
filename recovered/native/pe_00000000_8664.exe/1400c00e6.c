/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c00e6 */

void FUN_1400c00e6(int *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (iVar2 < param_2) {
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    uVar1 = FUN_140077ab4((longlong)iVar2);
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1401c5180(uVar1,*(longlong *)(param_1 + 2),(longlong)*param_1);
      FUN_140077b90(*(undefined8 *)(param_1 + 2));
    }
    *(undefined8 *)(param_1 + 2) = uVar1;
    param_1[1] = iVar2;
  }
  *param_1 = param_2;
  return;
}

