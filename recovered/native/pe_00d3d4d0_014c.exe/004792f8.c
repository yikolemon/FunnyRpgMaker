/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004792f8 */

undefined4 __fastcall FUN_004792f8(int *param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  
  iVar1 = param_1[8];
  if (iVar1 == 3) {
    FUN_00479b6b(param_1,param_2,param_3,param_4);
  }
  else if (iVar1 == 2) {
    FUN_004795fe(param_1,param_2,param_3,param_4);
  }
  else {
    if (iVar1 != 1) {
      return 6;
    }
    FUN_00479374(param_1,param_2,param_3,param_4);
  }
  return 0;
}

