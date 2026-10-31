/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008c5f2 */

void FUN_18008c5f2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  ulonglong local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  ulonglong local_48;
  undefined1 *puStack_40;
  undefined1 *local_38;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_48 = 0;
  puStack_40 = (undefined1 *)0x0;
  local_38 = (undefined1 *)0x0;
  if (DAT_180417cb8 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2c) < DAT_180417d40) && (FUN_18023d500(&DAT_180417d40), DAT_180417d40 == -1)) {
      FUN_18007645e(&DAT_180417cc8);
      FUN_18023d710(&LAB_180081b19);
      _Init_thread_footer(&DAT_180417d40);
    }
    plVar1 = param_2 + 2;
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_1800770d6(&DAT_180417cc8,&local_68,param_2,(longlong)param_2 + *plVar1 * 2);
    local_88 = 0;
    puStack_80 = (undefined1 *)0x0;
    local_78 = (undefined1 *)0x0;
    FUN_1800448ea();
    FUN_180004cea(&local_48);
    local_48 = local_88;
    puStack_40 = puStack_80;
    local_38 = local_78;
    local_88 = 0;
    puStack_80 = (undefined1 *)0x0;
    local_78 = (undefined1 *)0x0;
    FUN_180004cea(&local_88);
    local_88 = local_88 & 0xffffffffffffff00;
    if (puStack_40 == local_38) {
      FUN_18004dc74(&local_48,puStack_40,&local_88);
    }
    else {
      *puStack_40 = 0;
      puStack_40 = puStack_40 + 1;
    }
    FUN_180001ef2(&local_68);
  }
  else {
    FUN_18008cb4e(&local_68,param_2);
    FUN_180004cea(&local_48);
    local_48 = local_68;
    puStack_40 = puStack_60;
    local_38 = local_58;
    local_68 = 0;
    puStack_60 = (undefined1 *)0x0;
    local_58 = (undefined1 *)0x0;
    FUN_180004cea(&local_68);
  }
  local_68._0_4_ = (int)puStack_40 - (int)local_48;
  FUN_18008ca8a(param_1 + 0x58);
  local_68 = CONCAT44(local_68._4_4_,0xffffffff);
  FUN_18008cdc4(param_1 + 0x58,&local_48);
  FUN_180004cea(&local_48);
  return;
}

