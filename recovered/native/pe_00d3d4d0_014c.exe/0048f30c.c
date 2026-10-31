/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048f30c */

undefined4 __cdecl FUN_0048f30c(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0050e8c0;
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == param_1[2]) {
    *param_1 = DAT_0050e8c0;
    param_1[1] = iVar1;
    param_1[2] = iVar1;
  }
  return 0;
}

