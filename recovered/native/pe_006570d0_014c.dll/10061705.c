/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10061705 */

uint FUN_10061705(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    param_1 = (*(byte *)(param_2 + iVar1) ^ param_1) * 0x1000193;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  return param_1;
}

