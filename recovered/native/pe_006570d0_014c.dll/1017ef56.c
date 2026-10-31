/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017ef56 */

void __thiscall FUN_1017ef56(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != *(int *)(param_1 + 8)) {
    FUN_1017f136(iVar1,param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x2c;
    return;
  }
  FUN_1017ef8a(iVar1,param_2);
  return;
}

