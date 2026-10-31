/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00485210 */

undefined4 __cdecl
FUN_00485210(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  PVOID pvVar2;
  undefined4 *local_40;
  undefined *local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_1c;
  int *local_18;
  undefined4 local_14;
  code *local_10;
  undefined4 local_c;
  code *local_8;
  
  local_20 = &stack0xfffffffc;
  local_24 = &stack0xffffffbc;
  if (param_1 == (int *)0x123) {
    *param_2 = 0x4852ea;
    local_c = 1;
  }
  else {
    local_3c = &DAT_00485420;
    local_38 = DAT_0050e8c0 ^ (uint)&local_40;
    local_34 = param_5;
    local_30 = param_2;
    local_2c = param_6;
    local_28 = param_7;
    local_1c = 0;
    local_40 = ExceptionList;
    ExceptionList = &local_40;
    iVar1 = FUN_004a6ff0(*param_1);
    *param_1 = iVar1;
    local_c = 1;
    local_18 = param_1;
    local_14 = param_3;
    pvVar2 = FUN_00494580();
    local_8 = *(code **)((int)pvVar2 + 8);
    guard_check_icall();
    local_10 = local_8;
    (*local_8)(*param_1,&local_18);
    local_c = 0;
    if (local_1c != 0) {
      *local_40 = *(undefined4 *)ExceptionList;
    }
    ExceptionList = local_40;
  }
  return local_c;
}

