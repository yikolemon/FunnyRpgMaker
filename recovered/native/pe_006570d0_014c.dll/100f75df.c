/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f75df */

undefined4 FUN_100f75df(LPCVOID param_1,uint param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  _MEMORY_BASIC_INFORMATION local_58;
  undefined1 *local_28;
  void *local_20;
  undefined1 *local_1c;
  undefined *local_18;
  undefined4 local_14;
  
  local_28 = (undefined1 *)&local_58;
  local_14 = 0xffffffff;
  local_18 = &DAT_1037aaa8;
  local_1c = &LAB_10259150;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  VirtualQuery(param_1,&local_58,0x1c);
  if (*(short *)local_58.AllocationBase == 0x5a4d) {
    piVar2 = (int *)((int)local_58.AllocationBase + *(int *)((int)local_58.AllocationBase + 0x3c));
    uVar3 = CONCAT31((int3)((uint)piVar2 >> 8),*piVar2 == 0x4550);
    if ((*piVar2 != 0x4550) ||
       ((bVar1 = false, (uint)((int)local_58.AllocationBase + piVar2[0x36]) <= param_2 &&
        (param_2 < (uint)((int)local_58.AllocationBase + piVar2[0x37] + piVar2[0x36]))))) {
      bVar1 = true;
    }
  }
  else {
    bVar1 = true;
    uVar3 = 0;
  }
  if (!bVar1) {
    uVar3 = 0;
  }
  ExceptionList = local_20;
  return uVar3;
}

