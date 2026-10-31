/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017869b */

undefined8 FUN_18017869b(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  uint uVar5;
  
  *(longlong *)(param_1 + 0x20) = param_2;
  if (*(int *)(param_1 + 0x38) == 0) {
    pcVar4 = "output buffer limit";
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x28);
    uVar5 = (uint)(param_2 - lVar1);
    if (!CARRY4(param_3,uVar5)) {
      for (uVar2 = *(int *)(param_1 + 0x30) - (int)lVar1; uVar2 < param_3 + uVar5; uVar2 = uVar2 * 2
          ) {
        if ((int)uVar2 < 0) goto LAB_180178703;
      }
      lVar3 = _realloc_base(lVar1,(ulonglong)uVar2);
      if (lVar3 != 0) {
        *(longlong *)(param_1 + 0x28) = lVar3;
        *(ulonglong *)(param_1 + 0x20) = (param_2 - lVar1 & 0xffffffffU) + lVar3;
        *(ulonglong *)(param_1 + 0x30) = (ulonglong)uVar2 + lVar3;
        return 1;
      }
    }
LAB_180178703:
    pcVar4 = "outofmem";
  }
  FUN_1801765d0(pcVar4);
  return 0;
}

