/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020edab */

bool __fastcall FUN_1020edab(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= param_1[1] + *param_1) {
    bVar1 = *param_1 <= *param_2 + param_2[1];
  }
  return bVar1;
}

