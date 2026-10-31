/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00401be7 */

LPWSTR __cdecl FUN_00401be7(LPWSTR param_1,LPCWSTR param_2,undefined4 param_3,undefined4 *param_4)

{
  LPWSTR pWVar1;
  LPCWSTR pWVar2;
  ulonglong uVar3;
  int local_34;
  undefined **local_30;
  undefined1 *local_2c;
  undefined8 local_28;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_00406d70;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_00402538();
  FUN_00402538();
  FUN_00402c36((undefined4 *)param_1);
  local_14 = 0;
  FUN_00402ca2(param_1,0x104,0);
  do {
    pWVar1 = param_1;
    if (7 < *(uint *)(param_1 + 10)) {
      pWVar1 = *(LPWSTR *)param_1;
    }
    pWVar2 = param_2;
    if (7 < *(uint *)(param_2 + 10)) {
      pWVar2 = *(LPCWSTR *)param_2;
    }
    local_2c = *(undefined1 **)(param_1 + 8);
    uVar3 = FUN_00481750(pWVar2,(DWORD)local_2c,pWVar1);
    local_28 = uVar3;
    FUN_00402ca2(param_1,(uint)uVar3,0);
  } while (local_2c <= (uint)local_28);
  local_30 = FUN_00402538();
  local_34 = local_28._4_4_;
  local_14 = 1;
  if (local_28._4_4_ == 0) {
    ExceptionList = local_1c;
    return param_1;
  }
  FUN_004024af((uint *)"absolute",&local_34,param_2);
  local_2c = &stack0xfffffffc;
  pWVar1 = (LPWSTR)FUN_00401d7c(param_4);
  return pWVar1;
}

