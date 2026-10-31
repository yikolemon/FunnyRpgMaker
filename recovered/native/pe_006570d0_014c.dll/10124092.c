/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10124092 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124092(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 *local_34;
  char *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  undefined8 local_14;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_34;
  if (param_1 != (undefined8 *)0x0) {
    local_34 = (undefined8 *)0xa0;
    cVar2 = FUN_10102a1a();
    iVar1 = DAT_1039d74c;
    if (cVar2 != '\0') {
      local_34 = param_1;
      FUN_10125a84();
      local_34 = *(undefined8 **)(*(int *)(iVar1 + 0x14cc) + 0x3c);
      FUN_100fe900();
      local_30 = (char *)&local_14;
      local_14 = CONCAT44((float)((ulonglong)*(undefined8 *)(iVar1 + 0x1e94) >> 0x20) +
                          DAT_102b88d0._4_4_,
                          (float)*(undefined8 *)(iVar1 + 0x1e94) + (float)DAT_102b88d0);
      local_34 = &local_1c;
      local_1c = CONCAT44((float)((ulonglong)*(undefined8 *)(iVar1 + 0x1e8c) >> 0x20) +
                          _UNK_102b9054,(float)*(undefined8 *)(iVar1 + 0x1e8c) + _DAT_102b9050);
      local_2c = _DAT_102b8d70;
      uStack_28 = _UNK_102b8d74;
      uStack_24 = _UNK_102b8d78;
      uStack_20 = _UNK_102b8d7c;
      FUN_1018b762();
      if ((*(char *)(iVar1 + 0xa0) == '\x01') && (DAT_1028b430 < *(float *)(iVar1 + 0x2464))) {
        local_30 = "in ItemAdd()";
        local_34 = (undefined8 *)0x0;
        FUN_1012442d();
        local_34 = *(undefined8 **)(iVar1 + 0x27e0);
        cVar2 = FUN_1011453c();
        if (cVar2 != '\0') {
          *(undefined1 *)(iVar1 + 0x27de) = 1;
        }
      }
    }
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_34)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

