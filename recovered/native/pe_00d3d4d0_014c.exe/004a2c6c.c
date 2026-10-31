/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a2c6c */

int __cdecl
FUN_004a2c6c(uint *param_1,uint *param_2,uint param_3,LPCWSTR param_4,uint param_5,
            undefined4 *param_6)

{
  int iVar1;
  int local_2c [10];
  
  FUN_00488e30(local_2c,param_6);
  iVar1 = FUN_004a2f4b(param_1,param_2,param_3,param_4,param_5,local_2c);
  FUN_00488e90(local_2c);
  return iVar1;
}

