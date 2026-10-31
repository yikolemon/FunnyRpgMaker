/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041e54f */

void __cdecl FUN_0041e54f(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != (int *)0x0 && param_1 != (undefined4 *)0x0) {
    iVar1 = *param_2;
    piVar2 = (int *)param_2[1];
    if (iVar1 == 0) {
      *param_1 = piVar2;
    }
    else {
      *(int **)(iVar1 + 4) = piVar2;
    }
    if (piVar2 != (int *)0x0) {
      *piVar2 = iVar1;
      return;
    }
    param_1[1] = iVar1;
  }
  return;
}

