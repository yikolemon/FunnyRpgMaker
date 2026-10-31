/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00420696 */

undefined4 __cdecl FUN_00420696(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0x14) == (code *)0x0) {
    if (*(uint *)(param_1 + 4) < param_2) {
      return 0x55;
    }
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x14))(param_1,param_2,0,0);
    if (iVar1 != 0) {
      return 0x55;
    }
  }
  *(uint *)(param_1 + 8) = param_2;
  return 0;
}

