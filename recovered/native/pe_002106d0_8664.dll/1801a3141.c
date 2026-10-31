/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a3141 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801a3141(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_98;
  local_20 = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  iVar2 = (**(code **)(*param_1 + 0x38))(param_1,&DAT_180328550,&local_20);
  if (local_20 != (longlong *)0x0 && -1 < iVar2) {
    (**(code **)(*local_20 + 0x140))(local_20,&local_28);
    if (local_28 != (longlong *)0x0) {
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_38 = 0;
      iVar2 = (**(code **)(*param_1 + 0x60))(param_1,&local_78);
      if (local_48 != 0 && -1 < iVar2) {
        cVar1 = FUN_1801a2ed9();
        if (cVar1 != '\0') {
          if (DAT_180420d28 != local_20) {
            if (DAT_180420d30 != local_28) {
              if (DAT_180420d30 != (longlong *)0x0 && DAT_180420d28 != (longlong *)0x0) {
                FUN_1801c92a3();
                (**(code **)(*DAT_180420d28 + 0x10))();
                (**(code **)(*DAT_180420d30 + 0x10))();
                DAT_180420d28 = (longlong *)0x0;
                DAT_180420d30 = (longlong *)0x0;
              }
              cVar1 = FUN_1801c8fcc(local_20,local_28);
              if (cVar1 != '\0') {
                DAT_180420d28 = local_20;
                DAT_180420d30 = local_28;
                _DAT_18041f140 = 0;
                _DAT_18041f148 = local_20;
                DAT_180420d38 = param_1;
                goto LAB_1801a32cb;
              }
            }
          }
        }
      }
      (**(code **)(*local_28 + 0x10))();
    }
    (**(code **)(*local_20 + 0x10))();
  }
LAB_1801a32cb:
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_98);
}

