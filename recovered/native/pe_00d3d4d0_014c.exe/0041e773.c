/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041e773 */

int __cdecl FUN_0041e773(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 1) {
    iVar2 = 6;
    if (param_2 == 0) {
      iVar2 = 0;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(param_1 + 4))(param_1,param_2);
    iVar2 = (uint)(iVar1 == 0) << 6;
  }
  *param_3 = iVar2;
  return iVar1;
}

