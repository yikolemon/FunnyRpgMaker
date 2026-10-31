/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f05a2 */

void __fastcall FUN_100f05a2(int *param_1)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_2c;
  local_14 = &LAB_100f5360;
  local_24 = *param_1;
  if (local_24 != 0) {
    local_28 = local_24 + -4;
    local_2c = *(int *)(local_24 + -4);
    iVar1 = local_2c * 0xc;
    ppvVar3 = &local_18;
    iVar4 = iVar1;
    local_18 = ExceptionList;
    iVar2 = local_20;
    iVar5 = local_2c;
    while (local_20 = iVar4, ExceptionList = ppvVar3, iVar5 != 0) {
      local_10 = 1;
      FUN_100f0b9a();
      iVar5 = local_20 + -0xc;
      ppvVar3 = ExceptionList;
      iVar4 = iVar5;
      iVar2 = local_20;
    }
    local_10 = 0xffffffff;
    local_20 = iVar2;
    FUN_102332d0(local_28,iVar1 + 4);
    ExceptionList = local_18;
  }
  return;
}

