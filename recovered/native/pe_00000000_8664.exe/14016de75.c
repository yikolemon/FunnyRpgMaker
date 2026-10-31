/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016de75 */

bool FUN_14016de75(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= param_1[1] + *param_1) {
    bVar1 = *param_1 <= *param_2 + param_2[1];
  }
  return bVar1;
}

