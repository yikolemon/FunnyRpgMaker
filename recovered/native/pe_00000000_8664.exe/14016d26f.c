/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016d26f */

void FUN_14016d26f(int *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 2);
    do {
      FUN_14016de94(lVar2,param_2,param_3,param_4);
      lVar2 = lVar2 + 0x28;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

