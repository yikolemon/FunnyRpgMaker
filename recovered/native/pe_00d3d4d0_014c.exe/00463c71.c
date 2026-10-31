/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00463c71 */

void __fastcall FUN_00463c71(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    FUN_0041c607(iVar1,param_1[2]);
    param_1[2] = 0;
    FUN_0041c607(iVar1,(int)param_1);
  }
  return;
}

