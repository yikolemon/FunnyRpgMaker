/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00401dde */

int * __cdecl FUN_00401dde(int *param_1,uint *param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined4 local_48 [6];
  undefined4 local_30 [4];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_48;
  local_14 = 0xffffffff;
  local_18 = &LAB_00406da0;
  local_1c = ExceptionList;
  puVar1 = param_2 + 4;
  if (7 < param_2[5]) {
    param_2 = (uint *)*param_2;
  }
  ExceptionList = &local_1c;
  FUN_00406a27(local_48,param_2,*puVar1);
  local_14 = 0;
  FUN_004069f8(local_30,local_48,0x22,0x5c);
  piVar2 = FUN_00406667(param_1,local_30);
  local_14 = 0xffffffff;
  FUN_0040226e(local_48);
  ExceptionList = local_1c;
  return piVar2;
}

