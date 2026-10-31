/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006bdc9 */

bool FUN_14006bdc9(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= param_1[1] + *param_1) {
    bVar1 = *param_1 <= *param_2 + param_2[1];
  }
  return bVar1;
}

