/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f1406 */

/* WARNING: Unable to track spacebase fully for stack */

void __thiscall FUN_100f1406(int param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  int **ppiVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  int *piStack_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined1 *local_48;
  int local_44;
  int *local_40;
  int local_3c;
  int *local_38;
  undefined4 *local_34;
  int *local_30;
  int local_2c;
  char local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_48;
  local_14 = 0xffffffff;
  local_18 = &LAB_100f54a0;
  local_1c = ExceptionList;
  iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  local_38 = (int *)(iVar6 + 0xa8);
  ExceptionList = &local_1c;
  if (*(char *)(iVar6 + 0xac) == '\0') {
    *(undefined1 *)(iVar6 + 0xac) = 1;
  }
  *local_38 = param_1;
  iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  local_34 = (undefined4 *)(iVar6 + 0xb0);
  *local_34 = param_3;
  *(undefined4 *)(iVar6 + 0xb4) = 1;
  uStack_4c = param_3;
  iStack_50 = 0x100f148f;
  local_24 = param_1;
  (**(code **)(**(int **)(param_1 + 0x8c) + 4))();
  local_3c = param_1 + 0x60;
  local_44 = param_1 + 0x30;
  do {
    local_2c = local_24;
    local_28 = 0;
    iStack_50 = 0x100f14ab;
    FUN_100446d6();
    local_28 = '\x01';
    local_14 = 0;
    iVar6 = *(int *)(local_24 + 0xa4) + -1;
    *(int *)(local_24 + 0xa4) = iVar6;
    if (((*(char *)(local_24 + 0xb1) == '\x01') && (iVar6 == 0)) && (*(int *)(local_24 + 0xa0) == 0)
       ) {
      iStack_50 = local_3c;
      iStack_54 = 0x100f14e7;
      FUN_1022c7a0();
    }
    local_20 = (undefined1 *)&piStack_58;
    iStack_50 = local_24;
    iStack_54 = *param_2;
    local_48 = (undefined1 *)&uStack_4c;
    ppiVar3 = &piStack_58;
    if (iStack_54 != 0) {
      local_48 = (undefined1 *)&uStack_4c;
      piVar4 = (int *)FUN_10018d26(iStack_54);
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
      ppiVar3 = (int **)local_20;
    }
    local_20 = (undefined1 *)ppiVar3;
    local_40 = &iStack_54;
    piStack_58 = &local_2c;
    local_14 = 0;
    FUN_100f1676();
    puVar2 = local_48;
    local_20 = local_48;
    if (*param_2 == 0) {
code_r0x100f1561:
      *(int ***)(puVar2 + -4) = &local_30;
      *(undefined4 *)(puVar2 + -8) = 0x100f156d;
      FUN_100f1856();
      local_14 = 1;
      *(int *)(local_24 + 0xa4) = *(int *)(local_24 + 0xa4) + 1;
      *(undefined4 *)(puVar2 + -4) = 0x100f1587;
      FUN_100217b4();
      local_14 = 2;
      iStack_50 = 0x100f1599;
      (**(code **)(*local_30 + 4))();
      local_14 = 0xffffffff;
      iStack_50 = 0x100f15a9;
      FUN_100f072e();
      bVar1 = true;
    }
    else {
      *(int *)(local_48 + -4) = *param_2 + 4;
      *(undefined4 *)(puVar2 + -8) = 0x100f1557;
      puVar5 = (uint *)FUN_10018d26();
      if ((*puVar5 & 1) == 0) goto code_r0x100f1561;
      bVar1 = false;
    }
    local_14 = 0xffffffff;
    if (local_28 == '\x01') {
      iStack_50 = local_2c;
      iStack_54 = 0x100f15c7;
      FUN_1022c200();
    }
    if (!bVar1) {
      iStack_50 = param_3;
      iStack_54 = 0x100f15ee;
      (**(code **)(**(int **)(local_24 + 0x88) + 4))();
      *(undefined1 *)(local_34 + 1) = 0;
      *(undefined1 *)(local_38 + 1) = 0;
      ExceptionList = local_1c;
      return;
    }
  } while( true );
}

