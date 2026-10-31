/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140235e64 */

void FUN_140235e64(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
    plVar1 = (longlong *)*plVar3;
    if (*(char *)(*plVar3 + 0x19) == '\0') {
      do {
        plVar2 = plVar1;
        plVar1 = (longlong *)plVar2[2];
      } while (*(char *)(plVar2[2] + 0x19) == '\0');
    }
    else {
      plVar2 = (longlong *)plVar3[1];
      if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
        do {
          plVar1 = plVar2;
          plVar2 = plVar1;
          if (plVar3 != (longlong *)*plVar1) break;
          *param_1 = (longlong)plVar1;
          plVar2 = (longlong *)plVar1[1];
          plVar3 = plVar1;
        } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
        if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
          return;
        }
      }
    }
  }
  else {
    plVar2 = (longlong *)plVar3[2];
  }
  *param_1 = (longlong)plVar2;
  return;
}

