/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041f066 */

void __fastcall FUN_0041f066(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 100);
  if (*(code **)(param_1[3] + 8) != (code *)0x0) {
    (**(code **)(param_1[3] + 8))(param_1);
  }
  FUN_0041c607(iVar1,(int)param_1);
  return;
}

