/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b4f82 */

undefined4 __thiscall FUN_100b4f82(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 local_30 [4];
  int *local_2c;
  int local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4930;
  local_1c = ExceptionList;
  iVar1 = *(int *)(*param_1 + 4);
  uVar6 = *(uint *)((int)param_1 + iVar1 + 0xc);
  ExceptionList = &local_1c;
  if (uVar6 == 0) {
    local_24 = param_1;
    puVar3 = local_30;
    if (*(int *)((int)param_1 + iVar1 + 0x3c) != 0) {
      FUN_1007a6ec();
      puVar3 = local_20;
    }
    local_20 = puVar3;
    if ((param_2 == '\0') && ((*(byte *)((int)local_24 + *(int *)(*local_24 + 4) + 0x14) & 1) != 0))
    {
      local_2c = *(int **)(*(int *)((int)local_24 + *(int *)(*local_24 + 4) + 0x30) + 4);
      (**(code **)(*local_2c + 4))();
      local_14 = 0;
      local_28 = FUN_1001c23e(local_30);
      local_14 = 0xffffffff;
      if (local_2c != (int *)0x0) {
        puVar5 = (undefined4 *)(**(code **)(*local_2c + 8))();
        if (puVar5 != (undefined4 *)0x0) {
          (**(code **)*puVar5)(1);
        }
      }
      piVar2 = *(int **)((int)local_24 + *(int *)(*local_24 + 4) + 0x38);
      if ((*(byte **)piVar2[7] == (byte *)0x0) || (*(int *)piVar2[0xb] < 1)) {
        local_14 = 1;
        uVar6 = (**(code **)(*piVar2 + 0x18))();
      }
      else {
        uVar6 = (uint)**(byte **)piVar2[7];
      }
      while (uVar6 != 0xffffffff) {
        if ((*(byte *)(*(int *)(local_28 + 0xc) + (uVar6 & 0xff) * 2) & 0x48) == 0)
        goto code_r0x100b50ef;
        local_14 = 1;
        uVar6 = FUN_100b5186();
      }
      local_14 = 0xffffffff;
      FUN_10073a60((uint)(*(int *)((int)local_24 + *(int *)(*local_24 + 4) + 0x38) == 0) << 2 |
                   *(uint *)((int)local_24 + *(int *)(*local_24 + 4) + 0xc) | 3,0);
    }
code_r0x100b50ef:
    uVar4 = CONCAT31((int3)((uint)*(int *)(*local_24 + 4) >> 8),
                     *(int *)((int)local_24 + *(int *)(*local_24 + 4) + 0xc) == 0);
  }
  else {
    local_20 = local_30;
    FUN_10073a60(uVar6 | (uint)(*(int *)((int)param_1 + iVar1 + 0x38) == 0) << 2 | 2,0);
    uVar4 = 0;
  }
  ExceptionList = local_1c;
  return uVar4;
}

