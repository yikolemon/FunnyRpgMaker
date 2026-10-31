/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003ce0d */

void FUN_14003ce0d(longlong param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_14004656d(param_1,*param_2,
                        *(int *)(param_1 + 0x1ac + (ulonglong)(*(byte *)(param_1 + 0x1f0) & 3) * 4))
  ;
  *param_2 = uVar1;
  return;
}

