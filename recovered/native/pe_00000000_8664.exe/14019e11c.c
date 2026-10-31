/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019e11c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14019e11c(int param_1)

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
    puVar4 = (undefined4 *)FUN_14019e8cc();
    *puVar4 = 0x16;
    FUN_1401ae640();
    return 0x16;
  }
  __acrt_initialize_multibyte();
  FUN_1401b7a04(0,&DAT_140f32760,0x104);
  _DAT_140f331b8 = &DAT_140f32760;
  if ((DAT_140f331d8 == (char *)0x0) || (pcVar6 = DAT_140f331d8, *DAT_140f331d8 == '\0')) {
    pcVar6 = &DAT_140f32760;
  }
  local_res18 = 0;
  local_res20 = 0;
  FUN_14019e2fc(pcVar6,0,0,&local_res18,&local_res20);
  lVar1 = local_res18;
  plVar5 = (longlong *)__acrt_allocate_buffer_for_argv(local_res18,local_res20,1);
  if (plVar5 == (longlong *)0x0) {
    puVar4 = (undefined4 *)FUN_14019e8cc();
    iVar7 = 0xc;
    *puVar4 = 0xc;
  }
  else {
    FUN_14019e2fc(pcVar6,plVar5,plVar5 + lVar1,&local_res18,&local_res20);
    if (param_1 != 1) {
      local_res10 = (longlong *)0x0;
      iVar3 = thunk_FUN_1401b7124(plVar5,&local_res10);
      plVar2 = local_res10;
      if (iVar3 != 0) {
        FUN_1401aea30(local_res10);
        local_res10 = (longlong *)0x0;
        FUN_1401aea30(plVar5);
        return iVar3;
      }
      _DAT_140f331c0 = 0;
      lVar1 = *local_res10;
      while (lVar1 != 0) {
        local_res10 = local_res10 + 1;
        _DAT_140f331c0 = _DAT_140f331c0 + 1;
        lVar1 = *local_res10;
      }
      local_res10 = (longlong *)0x0;
      DAT_140f331c8 = plVar2;
      FUN_1401aea30(0);
      local_res10 = (longlong *)0x0;
      goto LAB_14019e281;
    }
    _DAT_140f331c0 = (int)local_res18 + -1;
    DAT_140f331c8 = plVar5;
  }
  plVar5 = (longlong *)0x0;
LAB_14019e281:
  FUN_1401aea30(plVar5);
  return iVar7;
}

