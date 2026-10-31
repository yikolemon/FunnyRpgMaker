/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000c4bc */

undefined8 FUN_14000c4bc(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  char *pcVar3;
  undefined1 local_a0 [16];
  char *local_90;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + -8) != 0) &&
     (cVar2 = FUN_14000ce02(param_1 + 0x70,
                            (int)((ulonglong)
                                  (*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8)) >> 3)
                            + -1,1), cVar2 == '\0')) {
    FUN_14000d704(local_a0,param_1 + 0xb8);
    FUN_14000a108(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + -8),local_a0);
  }
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -8;
  FUN_14000cd62(param_1 + 0x20);
  if (((*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) &&
      (local_70 = *(char **)(*(longlong *)(param_1 + 0x10) + -8), local_70 != (char *)0x0)) &&
     (cVar2 = *local_70, (byte)(cVar2 - 1U) < 2)) {
    local_88 = 0;
    puStack_80 = (undefined8 *)0x0;
    local_78 = 0x8000000000000000;
    puVar1 = (undefined8 *)**(undefined8 **)(local_70 + 8);
    if (cVar2 == '\x01') {
      local_88 = *(undefined8 *)**(undefined8 **)(local_70 + 8);
      puVar1 = puStack_80;
    }
    puStack_80 = puVar1;
    local_90 = local_70;
    while( true ) {
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0x8000000000000000;
      if (cVar2 == '\x02') {
        uStack_60 = *(undefined8 *)(*(longlong *)(local_70 + 8) + 8);
      }
      else if (cVar2 == '\x01') {
        local_68 = **(undefined8 **)(local_70 + 8);
      }
      else {
        local_58 = 1;
      }
      cVar2 = FUN_14000e3e0(&local_90,&local_70);
      if (cVar2 != '\0') {
        return 1;
      }
      pcVar3 = (char *)FUN_14000d7d0(&local_90);
      if (*pcVar3 == '\t') break;
      FUN_14000dad0(&local_90);
      local_70 = *(char **)(*(longlong *)(param_1 + 0x10) + -8);
      cVar2 = *local_70;
    }
    FUN_14000d87e(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + -8),&local_70);
  }
  return 1;
}

