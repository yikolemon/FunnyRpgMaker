/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001884e */

undefined8 FUN_14001884e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_50 = param_1;
  while (DAT_14013c994 == '\x01') {
    FUN_140018a59(&local_60,&PTR_s_FunnyGamePlayer_GlobalHotkeyMana_14012e918);
    cVar4 = FUN_140018b28(local_60);
    if (cVar4 != '\0') {
      FUN_140018798((uint *)&DAT_14012e920);
      FUN_140018f04(0x14013c948,DAT_14013c948,&local_60);
      FUN_14008b270(0x14012e920);
    }
    plVar3 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
    }
  }
  FUN_14008b4f0();
  if (param_1 != 0) {
    local_48 = param_1;
    FUN_1400863f0();
  }
  return 0;
}

