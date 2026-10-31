/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041d055 */

void __cdecl FUN_0041d055(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    FUN_0041d043(param_1);
    if (param_2 == 0) {
      FUN_0041c607(iVar1,param_1);
    }
  }
  return;
}

