/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140124b18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140124b18(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  cVar1 = FUN_140124be0();
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14010b2d0(1);
    if (param_1 == plVar2) {
      plVar2 = &DAT_140355628;
    }
    else {
      plVar2 = (longlong *)FUN_14010b2d0(2);
      if (param_1 != plVar2) {
        return 0;
      }
      plVar2 = &DAT_140355630;
    }
    _DAT_140354b20 = _DAT_140354b20 + 1;
    if ((*(uint *)((longlong)param_1 + 0x14) & 0x4c0) == 0) {
      LOCK();
      *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x282;
      UNLOCK();
      if (*plVar2 == 0) {
        lVar3 = _malloc_base(0x1000);
        *plVar2 = lVar3;
        FUN_1401212e0(0);
      }
      if (*plVar2 == 0) {
        *(undefined4 *)(param_1 + 2) = 2;
        param_1[1] = (longlong)param_1 + 0x1c;
        *param_1 = (longlong)param_1 + 0x1c;
        *(undefined4 *)(param_1 + 4) = 2;
      }
      else {
        param_1[1] = *plVar2;
        *param_1 = *plVar2;
        *(undefined4 *)(param_1 + 2) = 0x1000;
        *(undefined4 *)(param_1 + 4) = 0x1000;
      }
      return 1;
    }
  }
  return 0;
}

