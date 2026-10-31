/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401132ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1401132ec(int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  char *pcVar6;
  int iVar7;
  longlong *local_res10;
  longlong local_res18;
  undefined8 local_res20;
  
  iVar7 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (1 < param_1 - 1U) {
    puVar4 = (undefined4 *)FUN_140113dd4();
    *puVar4 = 0x16;
    FUN_140120ee8();
    return 0x16;
  }
  __acrt_initialize_multibyte();
  FUN_1401299b4(0,&DAT_140354b90,0x104);
  _DAT_140354b28 = &DAT_140354b90;
  if ((DAT_140354b48 == (char *)0x0) || (pcVar6 = DAT_140354b48, *DAT_140354b48 == '\0')) {
    pcVar6 = &DAT_140354b90;
  }
  local_res18 = 0;
  local_res20 = 0;
  FUN_1401134cc(pcVar6,0,0,&local_res18,&local_res20);
  lVar1 = local_res18;
  plVar5 = (longlong *)__acrt_allocate_buffer_for_argv(local_res18,local_res20,1);
  if (plVar5 == (longlong *)0x0) {
    puVar4 = (undefined4 *)FUN_140113dd4();
    iVar7 = 0xc;
    *puVar4 = 0xc;
  }
  else {
    FUN_1401134cc(pcVar6,plVar5,plVar5 + lVar1,&local_res18,&local_res20);
    if (param_1 != 1) {
      local_res10 = (longlong *)0x0;
      iVar3 = thunk_FUN_1401290d4(plVar5,&local_res10);
      plVar2 = local_res10;
      if (iVar3 != 0) {
        FUN_1401212e0(local_res10);
        local_res10 = (longlong *)0x0;
        FUN_1401212e0(plVar5);
        return iVar3;
      }
      _DAT_140354b30 = 0;
      lVar1 = *local_res10;
      while (lVar1 != 0) {
        local_res10 = local_res10 + 1;
        _DAT_140354b30 = _DAT_140354b30 + 1;
        lVar1 = *local_res10;
      }
      local_res10 = (longlong *)0x0;
      DAT_140354b38 = plVar2;
      FUN_1401212e0(0);
      local_res10 = (longlong *)0x0;
      goto LAB_140113451;
    }
    _DAT_140354b30 = (int)local_res18 + -1;
    DAT_140354b38 = plVar5;
  }
  plVar5 = (longlong *)0x0;
LAB_140113451:
  FUN_1401212e0(plVar5);
  return iVar7;
}

