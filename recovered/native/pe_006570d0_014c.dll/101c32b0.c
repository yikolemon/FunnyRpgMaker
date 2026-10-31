/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c32b0 */

undefined4 FUN_101c32b0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_101c0dab(param_1,param_2);
  if (piVar1 != (int *)0x0) {
    return *(undefined4 *)(*piVar1 + 0x14);
  }
  return 0;
}

