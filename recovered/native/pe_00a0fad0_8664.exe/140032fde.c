/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140032fde */

void FUN_140032fde(longlong *param_1,char param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *local_48;
  longlong *plStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  (**(code **)(*param_1 + 8))();
  if ((param_2 == '\0') && ((longlong *)param_1[0x19] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)param_1[0x19] + 0x10))();
  }
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  local_38 = 0;
  FUN_14001700e(&local_48,param_1[0x56] - param_1[0x55] >> 3,param_1 + 0x55,param_1 + 0x56);
  plVar2 = plStack_40;
  for (plVar3 = local_48; plVar3 != plVar2; plVar3 = plVar3 + 1) {
    if (*(longlong **)(*plVar3 + 0x348) == param_1) {
      FUN_140032fde(*plVar3,1,param_3);
    }
  }
  FUN_140016e5c(&local_48);
  plVar3 = (longlong *)param_1[0x61];
  for (plVar2 = (longlong *)param_1[0x60]; plVar2 != plVar3; plVar2 = plVar2 + 2) {
    if ((*(longlong *)(*plVar2 + 0x18) == 0) && (lVar1 = FUN_1400200fc(), lVar1 != 0)) {
      FUN_140032fde(*plVar2,1,param_3);
    }
  }
  plVar2 = (longlong *)param_1[0x21];
  if (((plVar2 != (longlong *)0x0) && ((char)param_3 == '\0')) &&
     (*(int *)((longlong)param_1 + 0x324) != 0)) {
    if (param_1[3] == 0) {
      lVar1 = FUN_1400200fc(param_1);
      if ((lVar1 == 0) && (param_1[0x69] != 0)) {
        return;
      }
      plVar2 = (longlong *)param_1[0x21];
      if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1400d9e50();
      }
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

