/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041e7a6 */

void __cdecl FUN_0041e7a6(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 != (int *)0x0 && param_1 != (undefined4 *)0x0) {
    iVar1 = param_1[1];
    param_2[1] = 0;
    *param_2 = iVar1;
    if (iVar1 == 0) {
      *param_1 = param_2;
    }
    else {
      *(int **)(iVar1 + 4) = param_2;
    }
    param_1[1] = param_2;
  }
  return;
}

