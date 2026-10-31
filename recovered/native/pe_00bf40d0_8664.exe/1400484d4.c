/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400484d4 */

undefined8 FUN_1400484d4(longlong param_1,int param_2,uint param_3,int *param_4)

{
  param_4[0] = 0;
  param_4[1] = 0;
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    FUN_140049c72(*(longlong *)(param_1 + 0x2a8),param_2,param_3,param_4);
  }
  return 0;
}

