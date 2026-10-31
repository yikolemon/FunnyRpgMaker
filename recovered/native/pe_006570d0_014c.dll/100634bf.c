/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100634bf */

int __fastcall FUN_100634bf(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*(int *)(param_1 + iVar1) == 0) {
      return -1;
    }
    if (*(int *)(param_1 + iVar1) == 0x5d) break;
    iVar1 = iVar1 + 4;
  }
  return iVar1 >> 2;
}

