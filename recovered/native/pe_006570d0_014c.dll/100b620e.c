/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b620e */

void __thiscall FUN_100b620e(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == *(int *)(param_1 + 8)) {
    FUN_100b6248(iVar1,param_2,param_3);
  }
  else {
    FUN_100b6402(iVar1,param_2,param_3);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x1c;
  }
  return;
}

