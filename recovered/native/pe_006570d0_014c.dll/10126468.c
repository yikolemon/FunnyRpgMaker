/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10126468 */

int __fastcall FUN_10126468(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x434) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x434) + 0x7c), iVar1 != 0)) {
    return iVar1;
  }
  return param_1;
}

