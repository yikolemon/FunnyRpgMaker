/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f6e4b */

void * FUN_100f6e4b(void *param_1,uint param_2)

{
  int iVar1;
  
  if ((0x401f < param_2 && param_1 != (void *)0x0) && (iVar1 = FUN_100f6f09(), iVar1 != 0)) {
    _memset(param_1,0,0x4014);
    return param_1;
  }
  return (void *)0x0;
}

