/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10018924 */

void FUN_10018924(char *param_1,undefined4 param_2,uint param_3)

{
  size_t sVar1;
  
  sVar1 = _strlen(param_1);
  FUN_10019231(param_1,param_1 + sVar1,0,param_2,param_3 | 0x10,1);
  return;
}

