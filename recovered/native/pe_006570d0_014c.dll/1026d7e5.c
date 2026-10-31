/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026d7e5 */

undefined4 FUN_1026d7e5(int param_1,int *param_2)

{
  char cVar1;
  
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0xc) >> 0xd & 1) != 0) {
      cVar1 = FUN_1026d7c2(*(uint *)(param_1 + 0xc));
      if (cVar1 != '\0') {
        return 1;
      }
      *param_2 = *param_2 + 1;
    }
  }
  return 0;
}

