/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c5888 */

void FUN_101c5888(undefined4 param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  int iVar2;
  
  if (param_2 == (char *)0x0) {
    iVar2 = 0;
  }
  else {
    sVar1 = _strlen(param_2);
    iVar2 = sVar1 + 1;
  }
  FUN_101c5815(param_1,param_2,iVar2,param_3);
  return;
}

