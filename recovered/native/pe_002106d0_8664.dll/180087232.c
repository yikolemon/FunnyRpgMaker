/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180087232 */

undefined8 FUN_180087232(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  undefined1 local_a0 [16];
  char *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  char *local_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + -8) != 0) &&
     (cVar2 = FUN_18005262c(param_1 + 0x70,
                            (int)((ulonglong)
                                  (*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8)) >> 3)
                            + -1,1), cVar2 == '\0')) {
    FUN_180087b9a(local_a0,param_1 + 0xb8);
    FUN_1800856c4(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + -8),local_a0);
  }
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -8;
  FUN_18005258c(param_1 + 0x20);
  if (((*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) &&
      (local_90 = *(char **)(*(longlong *)(param_1 + 0x10) + -8), local_90 != (char *)0x0)) &&
     (cVar2 = *local_90, (byte)(cVar2 - 1U) < 2)) {
    local_68 = 0;
    lStack_60 = 0;
    local_58 = -0x8000000000000000;
    lVar1 = **(longlong **)(local_90 + 8);
    if (cVar2 == '\x01') {
      local_68 = **(longlong **)(local_90 + 8);
      lVar1 = lStack_60;
    }
    lStack_60 = lVar1;
    local_70 = local_90;
    while( true ) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0x8000000000000000;
      if (cVar2 == '\x02') {
        uStack_80 = *(undefined8 *)(*(longlong *)(local_90 + 8) + 8);
      }
      else if (cVar2 == '\x01') {
        local_88 = *(undefined8 *)(*(longlong *)(local_90 + 8) + 8);
      }
      else {
        local_78 = 1;
      }
      cVar2 = FUN_18005324c(&local_70,&local_90);
      if (cVar2 != '\0') {
        return 1;
      }
      pcVar3 = (char *)FUN_180087c66(&local_70);
      if (*pcVar3 == '\t') break;
      if (*local_70 == '\x02') {
        lStack_60 = lStack_60 + 0x10;
      }
      else if (*local_70 == '\x01') {
        local_68 = local_68 + 0x30;
      }
      else {
        local_58 = local_58 + 1;
      }
      local_90 = *(char **)(*(longlong *)(param_1 + 0x10) + -8);
      cVar2 = *local_90;
    }
    FUN_180087d14(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + -8),&local_90);
  }
  return 1;
}

