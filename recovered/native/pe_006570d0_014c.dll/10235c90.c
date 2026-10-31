/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10235c90 */

undefined * FUN_10235c90(int *param_1,int param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  uint uStack_38;
  undefined *local_28;
  undefined **local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10289166;
  local_10 = ExceptionList;
  uStack_38 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_1c = 0;
  local_20 = *(int *)(*(int *)(*(int *)(param_2 + 0x1c) + 0xc) + 4);
  local_24 = (undefined **)(*(int *)(local_20 + 0x14) + 0x60);
  local_18 = FUN_1026faa0(local_24);
  if (local_18 == 0) {
    local_1c = 1;
    LOCK();
    DAT_1038a7dc = DAT_1038a7dc + 1;
    UNLOCK();
    local_28 = &DAT_1038a7e4;
    local_24 = &PTR_vftable_1038a7d8;
    local_8 = local_18;
    FUN_102358c0(&local_28);
    ppuVar5 = local_24;
    puVar6 = (undefined *)0x0;
    local_1c = 0;
    local_8 = 0xffffffff;
    if (local_24 != (undefined **)0x0) {
      LOCK();
      ppuVar1 = local_24 + 1;
      puVar3 = *ppuVar1;
      puVar6 = *ppuVar1;
      *ppuVar1 = puVar3 + -1;
      UNLOCK();
      if (puVar3 + -1 == (undefined *)0x0) {
        pcVar4 = *(code **)*local_24;
        (*(code *)PTR_guard_check_icall_1035d810)();
        puVar6 = (undefined *)(*pcVar4)();
        LOCK();
        ppuVar1 = ppuVar5 + 2;
        puVar3 = *ppuVar1;
        *ppuVar1 = *ppuVar1 + -1;
        UNLOCK();
        if (puVar3 == (undefined *)0x1) {
          pcVar4 = *(code **)(*ppuVar5 + 4);
          (*(code *)PTR_guard_check_icall_1035d810)();
          puVar6 = (undefined *)(*pcVar4)();
          ExceptionList = local_10;
          return puVar6;
        }
      }
    }
  }
  else {
    local_8 = 1;
    iVar2 = local_18 + 0x60;
    FUN_102357f0(iVar2,*(undefined4 *)(param_2 + 0x18),local_20);
    puVar6 = (undefined *)FUN_10235a80(param_2);
    *(int *)(puVar6 + 0x24) = iVar2;
    *param_1 = (int)(puVar6 + 0xc);
    param_1[1] = (int)puVar6;
  }
  ExceptionList = local_10;
  return puVar6;
}

