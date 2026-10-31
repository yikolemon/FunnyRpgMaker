/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140097fdc */

ulonglong FUN_140097fdc(undefined8 *param_1)

{
  bool bVar1;
  uint uVar2;
  __acrt_ptd *p_Var3;
  ulonglong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  
  local_18 = auStack_38;
  if (param_1 == (undefined8 *)0x0) {
    local_18 = auStack_38;
    p_Var3 = FUN_140095e5c();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_1400a0ea0();
    return 0xffffffff;
  }
  FUN_14008ea30((longlong)param_1);
  bVar1 = true;
  if ((*(uint *)((longlong)param_1 + 0x14) >> 0xc & 1) == 0) {
    uVar2 = FUN_1400a5bb4((longlong)param_1);
    if (uVar2 < 0xfffffffe) {
      puVar6 = (undefined *)
               ((&DAT_1401433a0)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
    }
    else {
      puVar6 = &DAT_14013bf10;
    }
    puVar5 = &DAT_14013bf10;
    if (puVar6[0x39] == '\0') {
      if (uVar2 < 0xfffffffe) {
        puVar5 = (undefined *)
                 ((&DAT_1401433a0)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if ((puVar5[0x3d] & 1) == 0) goto LAB_1400980a8;
    }
    bVar1 = false;
  }
LAB_1400980a8:
  if (bVar1) {
    uVar4 = _fgetc_nolock(param_1);
    uVar4 = uVar4 & 0xffffffff;
    FUN_14008ea3c((longlong)param_1);
  }
  else {
    p_Var3 = FUN_140095e5c();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_1400a0ea0();
    FUN_1400abf70(local_18,(PVOID)0x1400980ce);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

