/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013d398 */

void FUN_14013d398(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = *param_2;
  lVar3 = (longlong)iVar1;
  if ((lVar3 < 1) || (*(int *)(param_1 + 0x38) < iVar1)) {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x86;
    }
  }
  else {
    iVar2 = param_2[-lVar3];
    FUN_1401c5180(param_2 + -lVar3,param_2 + (1 - lVar3),(ulonglong)(iVar1 - 1) << 2);
    param_2[-1] = iVar2;
  }
  return;
}

