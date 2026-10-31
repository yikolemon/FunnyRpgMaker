/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00420bb8 */

void __cdecl FUN_00420bb8(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00420be1(param_1,param_2);
  if (iVar1 == 0) {
    *param_3 = param_1[8];
    param_1[8] = 0;
    param_1[9] = 0;
  }
  return;
}

