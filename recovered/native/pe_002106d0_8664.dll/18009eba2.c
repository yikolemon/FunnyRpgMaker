/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009eba2 */

void FUN_18009eba2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  local_4c = CONCAT31(local_4c._1_3_,0x8e);
  lVar1 = param_2 + 0x58;
  FUN_18007f392(lVar1,&local_4c);
  FUN_18008ca8a(lVar1,param_1 + 8);
  FUN_18008ca8a(lVar1,param_1 + 0xc);
  local_4c = -1;
  FUN_18008cdc4(lVar1,param_1 + 0x10,&local_4c);
  FUN_18008c5f2(param_2,param_1 + 0x28);
  local_4c = (int)((ulonglong)(*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48)) >> 4);
  FUN_18008ca8a(lVar1,&local_4c);
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  for (puVar6 = *(undefined8 **)(param_1 + 0x48); puVar6 != puVar2; puVar6 = puVar6 + 2) {
    FUN_18009f0c6(*puVar6,param_2);
  }
  FUN_18008c5f2(param_2,param_1 + 0x60);
  FUN_18008c5f2(param_2,param_1 + 0x80);
  local_4c = CONCAT31(local_4c._1_3_,0x8f);
  FUN_18007f392(lVar1,&local_4c);
  local_4c = (int)((ulonglong)(*(longlong *)(param_1 + 0xa8) - *(longlong *)(param_1 + 0xa0)) >> 5);
  FUN_18008ca8a(lVar1,&local_4c);
  lVar3 = *(longlong *)(param_1 + 0xa8);
  for (lVar7 = *(longlong *)(param_1 + 0xa0); lVar7 != lVar3; lVar7 = lVar7 + 0x20) {
    FUN_18008c5f2(param_2,lVar7);
  }
  local_4c = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xb8);
  FUN_18008ca8a(lVar1);
  lVar3 = *(longlong *)(param_1 + 0xc0);
  for (lVar7 = *(longlong *)(param_1 + 0xb8); lVar7 != lVar3; lVar7 = lVar7 + 1) {
    FUN_18007f392(lVar1,lVar7);
  }
  local_4c = (int)((ulonglong)(*(longlong *)(param_1 + 0xd8) - *(longlong *)(param_1 + 0xd0)) >> 3)
             * -0x55555555;
  FUN_18008ca8a(lVar1);
  plVar5 = *(longlong **)(param_1 + 0xd0);
  plVar4 = *(longlong **)(param_1 + 0xd8);
  if (plVar5 != plVar4) {
    do {
      local_4c = (int)((ulonglong)(plVar5[1] - *plVar5) >> 5);
      FUN_18008ca8a(lVar1,&local_4c);
      lVar3 = plVar5[1];
      for (lVar7 = *plVar5; lVar7 != lVar3; lVar7 = lVar7 + 0x20) {
        FUN_18008c5f2(param_2,lVar7);
      }
      plVar5 = plVar5 + 3;
    } while (plVar5 != plVar4);
  }
  local_4c = (int)((ulonglong)(*(longlong *)(param_1 + 0xf0) - *(longlong *)(param_1 + 0xe8)) >> 3)
             * -0x55555555;
  FUN_18008ca8a(lVar1);
  plVar5 = *(longlong **)(param_1 + 0xe8);
  plVar4 = *(longlong **)(param_1 + 0xf0);
  if (plVar5 != plVar4) {
    do {
      local_4c = (int)((ulonglong)(plVar5[1] - *plVar5) >> 2);
      FUN_18008ca8a(lVar1,&local_4c);
      lVar3 = plVar5[1];
      for (lVar7 = *plVar5; lVar7 != lVar3; lVar7 = lVar7 + 4) {
        FUN_18008ca8a(lVar1,lVar7);
      }
      plVar5 = plVar5 + 3;
    } while (plVar5 != plVar4);
  }
  local_4c = -1;
  FUN_18008cdc4(lVar1,param_1 + 0x100);
  lVar7 = 0x118;
  do {
    FUN_18008c5f2(param_2,param_1 + lVar7);
    lVar7 = lVar7 + 0x20;
  } while (lVar7 != 0xd98);
  local_4c._0_1_ = 0x91;
  FUN_18007f392(lVar1);
  FUN_18008c5f2(param_2,param_1 + 0xd98);
  if (*(char *)(param_1 + 0xddc) == '\0') {
    local_4c = CONCAT31(local_4c._1_3_,0x91);
  }
  else {
    local_4c._0_1_ = 0x92;
    FUN_18007f392(lVar1,&local_4c);
    FUN_18008c5f2(param_2,param_1 + 0xdb8);
    FUN_18008ca8a(lVar1,param_1 + 0xdd8);
    local_4c = CONCAT31(local_4c._1_3_,0x92);
  }
  FUN_18007f392(lVar1,&local_4c);
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
}

