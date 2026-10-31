/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400754b3 */

void FUN_1400754b3(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,param_3,param_2,0);
  if (iVar1 != 0) {
    return;
  }
  FUN_1400214cf(param_2,0x140109d40,param_1 + 0x100);
  return;
}

