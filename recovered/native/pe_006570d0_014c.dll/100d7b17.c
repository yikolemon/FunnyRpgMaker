/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d7b17 */

uint FUN_100d7b17(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    param_1 = (*(byte *)(param_2 + iVar1) ^ param_1) * 0x1000193;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  return param_1;
}

