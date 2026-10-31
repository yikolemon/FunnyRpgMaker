/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00476be8 */

void __fastcall FUN_00476be8(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  
  do {
    piVar1 = param_1;
    param_1 = (undefined4 *)*piVar1;
    if (param_1 == (undefined4 *)0x0) break;
  } while ((int)param_1[6] < param_2[6]);
  *param_2 = (int)param_1;
  *piVar1 = (int)param_2;
  return;
}

