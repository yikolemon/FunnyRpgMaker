/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fb986 */

undefined8 FUN_1800fb986(LPCVOID param_1,ulonglong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  int *piVar3;
  _MEMORY_BASIC_INFORMATION local_60;
  ulonglong local_30;
  
  local_30 = param_2;
  VirtualQuery(param_1,&local_60,0x30);
  if (*(short *)local_60.AllocationBase == 0x5a4d) {
    piVar3 = (int *)((longlong)*(int *)((longlong)local_60.AllocationBase + 0x3c) +
                    (longlong)local_60.AllocationBase);
    uVar2 = CONCAT71((int7)((ulonglong)piVar3 >> 8),*piVar3 == 0x4550);
    if ((*piVar3 != 0x4550) ||
       ((bVar1 = false,
        (ulonglong)(uint)piVar3[0x3a] + (longlong)local_60.AllocationBase <= local_30 &&
        (local_30 <
         (longlong)local_60.AllocationBase +
         (ulonglong)(uint)piVar3[0x3b] + (ulonglong)(uint)piVar3[0x3a])))) {
      bVar1 = true;
    }
  }
  else {
    bVar1 = true;
    uVar2 = 0;
  }
  if (!bVar1) {
    uVar2 = 0;
  }
  return uVar2;
}

