/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00488dec */

int __cdecl
FUN_00488dec(uint param_1,undefined4 param_2,undefined1 ****param_3,int param_4,int param_5,
            undefined4 *param_6,int *param_7)

{
  int iVar1;
  int local_2c [10];
  
  FUN_00488e30(local_2c,param_6);
  iVar1 = FUN_004892be(param_1,param_2,param_3,param_4,param_5,local_2c,param_7);
  FUN_00488e90(local_2c);
  return iVar1;
}

