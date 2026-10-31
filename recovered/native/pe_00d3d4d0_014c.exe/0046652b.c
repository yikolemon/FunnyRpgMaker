/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046652b */

bool __fastcall FUN_0046652b(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= param_1[1] + *param_1) {
    bVar1 = *param_1 <= *param_2 + param_2[1];
  }
  return bVar1;
}

