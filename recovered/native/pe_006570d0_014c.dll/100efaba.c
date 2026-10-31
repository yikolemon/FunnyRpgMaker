/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100efaba */

void FUN_100efaba(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 *local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_18 = &LAB_100f52f0;
  local_1c = ExceptionList;
  local_14 = 8;
  ExceptionList = &local_1c;
  FUN_100efa08();
  iVar4 = *(int *)(local_24 + 0xac);
  if (iVar4 != 0) {
    local_30 = iVar4 + -4;
    local_34 = *(int *)(iVar4 + -4);
    iVar2 = local_34 * 0xc;
    local_2c = iVar4;
    iVar3 = iVar2;
    puVar5 = local_28;
    iVar4 = local_34;
    while (local_28 = (undefined4 *)iVar3, iVar4 != 0) {
      local_14 = 1;
      FUN_100f0b9a();
      iVar4 = (int)local_28 + -0xc;
      iVar3 = iVar4;
      puVar5 = local_28;
    }
    local_14 = 0xffffffff;
    local_28 = puVar5;
    FUN_102332d0(local_30,iVar2 + 4);
  }
  puVar5 = (undefined4 *)(local_24 + 0x90);
  local_14 = 0xffffffff;
  local_28 = puVar5;
  FUN_100f092a();
  uVar1 = *puVar5;
  *puVar5 = 0;
  FUN_102283a0(uVar1,8);
  FUN_100f072e();
  FUN_100f072e();
  FUN_10056526();
  ExceptionList = local_1c;
  return;
}

