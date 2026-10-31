/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101884b4 */

void __thiscall FUN_101884b4(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x60) != param_4 || *(int *)(param_1 + 100) != param_5) ||
     (*(int *)(param_1 + 0x58) != param_2)) {
    *(int *)(param_1 + 0x58) = param_2;
    *(undefined4 *)(param_1 + 0x5c) = param_3;
    *(int *)(param_1 + 0x60) = param_4;
    *(int *)(param_1 + 100) = param_5;
    iVar1 = *(int *)(param_1 + 0x98);
    iVar2 = *(int *)(param_1 + 0x90) * 0x10;
    *(int *)(iVar1 + -0x10 + iVar2) = param_2;
    *(undefined4 *)(iVar1 + -0xc + iVar2) = param_3;
    *(int *)(iVar1 + -8 + iVar2) = param_4;
    *(int *)(iVar1 + -4 + iVar2) = param_5;
    FUN_10188046();
  }
  return;
}

