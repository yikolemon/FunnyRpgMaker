/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003b6df */

int __fastcall FUN_1003b6df(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = iVar1 + -0xc;
  if (iVar1 < 0xd) {
    iVar2 = iVar1;
  }
  return iVar2;
}

