/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d97f9 */

int FUN_100d97f9(int param_1,int param_2,int param_3)

{
  void **ppvVar1;
  void **ppvVar2;
  int iVar3;
  undefined1 auStack_3c [12];
  void **ppvStack_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  ppvStack_30 = &local_1c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100de020;
  ppvVar1 = ppvStack_30;
  local_24 = param_3;
  local_1c = ExceptionList;
  for (; ExceptionList = ppvVar1, ppvStack_30 = ppvVar2, param_1 = iVar3, param_2 != 0;
      param_2 = param_2 + -1) {
    local_2c = (undefined1 *)&local_2c;
    local_20 = auStack_3c;
    local_28 = auStack_3c;
    FUN_10013db4(param_1);
    iVar3 = local_24;
    local_14 = 0xffffffff;
    ppvVar2 = (void **)FUN_1004eed0();
    local_24 = iVar3 + 0x10;
    iVar3 = param_1 + 0x10;
    ppvVar1 = ExceptionList;
  }
  ExceptionList = local_1c;
  return local_24;
}

