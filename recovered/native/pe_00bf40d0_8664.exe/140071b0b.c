/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140071b0b */

void FUN_140071b0b(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x50434c54,param_2,0);
  if (iVar1 != 0) {
    return;
  }
  FUN_1400214cf(param_2,0x140109fb0,param_1 + 0x310);
  return;
}

