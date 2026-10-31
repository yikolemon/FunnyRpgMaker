/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004206ea */

undefined4 __cdecl FUN_004206ea(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (-1 < param_2) {
    uVar1 = FUN_00420696(param_1,param_2 + *(int *)(param_1 + 8));
    return uVar1;
  }
  return 0x55;
}

