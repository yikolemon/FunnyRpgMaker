/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016463e */

ulonglong FUN_14016463e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if ((int)plVar1[3] < 2) {
    FUN_140164a55(plVar1);
  }
  do {
    *(undefined4 *)(plVar1 + 3) = 0;
    uVar2 = FUN_140164aaf();
    if (uVar2 != 0) {
      if (param_2 == (longlong *)0x0) {
        return uVar2;
      }
      lVar3 = ~uVar2 + *plVar1;
      goto LAB_14016468c;
    }
  } while ((int)plVar1[3] == 2);
  lVar3 = 0;
  if (param_2 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
LAB_14016468c:
    *param_2 = lVar3;
  }
  return uVar2;
}

