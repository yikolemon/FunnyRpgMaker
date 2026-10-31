/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004024af */

void FUN_004024af(uint *param_1,undefined4 *param_2,LPCWSTR param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int local_94 [23];
  uint local_38 [6];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_94;
  local_14 = 0xffffffff;
  local_18 = &LAB_00406e10;
  local_1c = ExceptionList;
  uVar1 = *param_2;
  piVar2 = (int *)param_2[1];
  ExceptionList = &local_1c;
  FUN_00402bae(local_38,param_1);
  local_14 = 0;
  FUN_00402f0a(local_38,param_3,uVar1,piVar2);
                    /* WARNING: Subroutine does not return */
  FUN_00484ff0(local_94,&DAT_00509828);
}

