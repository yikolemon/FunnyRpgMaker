/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029886c */

longlong FUN_18029886c(longlong param_1,short *param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  short *local_res8;
  longlong local_38;
  ulonglong local_30;
  longlong local_28;
  ulonglong local_20;
  undefined8 local_18;
  char local_10;
  
  if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
    uVar3 = 0x7fffffff;
    if (param_3 < 0x7fffffff) {
      uVar3 = (int)param_3;
    }
    lVar2 = FUN_1802a6768(param_1,uVar3);
  }
  else {
    local_18 = 0;
    local_10 = '\0';
    local_res8 = param_2;
    if (param_1 == 0) {
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      FUN_180298a78(&local_38,&local_res8);
      lVar2 = FUN_180298920(&local_38);
      if (local_10 != '\0') {
        thunk_FUN_180290e40(local_28);
      }
    }
    else {
      local_38 = param_1;
      local_30 = param_3;
      local_28 = param_1;
      local_20 = param_3;
      iVar1 = FUN_180298a04();
      lVar2 = 0;
      if (iVar1 == 0) {
        lVar2 = param_1;
      }
    }
  }
  return lVar2;
}

