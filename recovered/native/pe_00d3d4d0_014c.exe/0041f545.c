/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041f545 */

undefined4 __cdecl FUN_0041f545(int param_1,byte *param_2)

{
  int *piVar1;
  
  piVar1 = FUN_0041d39b(param_1,param_2);
  if (piVar1 != (int *)0x0) {
    return *(undefined4 *)(*piVar1 + 0x14);
  }
  return 0;
}

