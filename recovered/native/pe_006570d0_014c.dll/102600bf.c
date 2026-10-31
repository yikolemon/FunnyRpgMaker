/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102600bf */

bool __thiscall FUN_102600bf(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *(undefined1 *)(param_2 + 0x1c) = 1;
    *(undefined4 *)(param_2 + 0x18) = 0x16;
    FUN_10274034(0,0,0,0,0,param_2);
  }
  return iVar1 != 0;
}

