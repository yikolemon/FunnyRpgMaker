/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027deb8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_18027deb8(int param_1)

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
    puVar4 = (undefined4 *)FUN_18027e66c();
    *puVar4 = 0x16;
    FUN_180290a50();
    return 0x16;
  }
  __acrt_initialize_multibyte();
  FUN_18029736c(0,&DAT_180420db0,0x104);
  _DAT_180421808 = &DAT_180420db0;
  if ((DAT_180421828 == (char *)0x0) || (pcVar6 = DAT_180421828, *DAT_180421828 == '\0')) {
    pcVar6 = &DAT_180420db0;
  }
  local_res18 = 0;
  local_res20 = 0;
  FUN_18027e098(pcVar6,0,0,&local_res18,&local_res20);
  lVar1 = local_res18;
  plVar5 = (longlong *)__acrt_allocate_buffer_for_argv(local_res18,local_res20,1);
  if (plVar5 == (longlong *)0x0) {
    puVar4 = (undefined4 *)FUN_18027e66c();
    iVar7 = 0xc;
    *puVar4 = 0xc;
  }
  else {
    FUN_18027e098(pcVar6,plVar5,plVar5 + lVar1,&local_res18,&local_res20);
    if (param_1 != 1) {
      local_res10 = (longlong *)0x0;
      iVar3 = thunk_FUN_180296a8c(plVar5,&local_res10);
      plVar2 = local_res10;
      if (iVar3 != 0) {
        FUN_180290e40(local_res10);
        local_res10 = (longlong *)0x0;
        FUN_180290e40(plVar5);
        return iVar3;
      }
      _DAT_180421810 = 0;
      lVar1 = *local_res10;
      while (lVar1 != 0) {
        local_res10 = local_res10 + 1;
        _DAT_180421810 = _DAT_180421810 + 1;
        lVar1 = *local_res10;
      }
      local_res10 = (longlong *)0x0;
      DAT_180421818 = plVar2;
      FUN_180290e40(0);
      local_res10 = (longlong *)0x0;
      goto LAB_18027e01d;
    }
    _DAT_180421810 = (int)local_res18 + -1;
    DAT_180421818 = plVar5;
  }
  plVar5 = (longlong *)0x0;
LAB_18027e01d:
  FUN_180290e40(plVar5);
  return iVar7;
}

