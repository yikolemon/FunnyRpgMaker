/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046f0fd */

void __fastcall FUN_0046f0fd(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x204))(param_1,param_3,param_2,0);
  if (iVar1 == 0) {
    FUN_00420fcf(param_2,0x4f65c8,param_1 + 0xa0);
  }
  return;
}

