/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400956cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1400956cc(int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  __acrt_ptd *p_Var5;
  longlong *plVar6;
  short *psVar7;
  int iVar8;
  longlong *local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  
  iVar8 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (1 < param_1 - 1U) {
    p_Var5 = FUN_140095e5c();
    *(undefined4 *)p_Var5 = 0x16;
    FUN_1400a0ea0();
    return 0x16;
  }
  GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_140142c50,0x104);
  _DAT_140142bf0 = &DAT_140142c50;
  if ((DAT_140142c18 == (short *)0x0) || (psVar7 = DAT_140142c18, *DAT_140142c18 == 0)) {
    psVar7 = (short *)&DAT_140142c50;
  }
  local_res18 = 0;
  local_res20 = 0;
  FUN_1400958a8(psVar7,(undefined8 *)0x0,(short *)0x0,(longlong *)&local_res18,
                (longlong *)&local_res20);
  uVar3 = local_res18;
  plVar6 = __acrt_allocate_buffer_for_argv(local_res18,local_res20,2);
  if (plVar6 == (longlong *)0x0) {
    p_Var5 = FUN_140095e5c();
    iVar8 = 0xc;
    *(undefined4 *)p_Var5 = 0xc;
  }
  else {
    FUN_1400958a8(psVar7,plVar6,(short *)(plVar6 + uVar3),(longlong *)&local_res18,
                  (longlong *)&local_res20);
    if (param_1 != 1) {
      local_res10 = (longlong *)0x0;
      iVar4 = thunk_FUN_1400a8a54(plVar6,&local_res10);
      plVar2 = local_res10;
      if (iVar4 != 0) {
        FUN_1400a1290(local_res10);
        local_res10 = (longlong *)0x0;
        FUN_1400a1290(plVar6);
        return iVar4;
      }
      _DAT_140142bf8 = 0;
      lVar1 = *local_res10;
      while (lVar1 != 0) {
        local_res10 = local_res10 + 1;
        _DAT_140142bf8 = _DAT_140142bf8 + 1;
        lVar1 = *local_res10;
      }
      local_res10 = (longlong *)0x0;
      DAT_140142c08 = plVar2;
      FUN_1400a1290((LPVOID)0x0);
      local_res10 = (longlong *)0x0;
      goto LAB_14009582d;
    }
    _DAT_140142bf8 = (int)local_res18 + -1;
    DAT_140142c08 = plVar6;
  }
  plVar6 = (longlong *)0x0;
LAB_14009582d:
  FUN_1400a1290(plVar6);
  return iVar8;
}

