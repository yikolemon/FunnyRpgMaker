/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a0a20 */

void FUN_1400a0a20(longlong param_1,undefined8 *param_2)

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
  if (DAT_1401cc8c6 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4
                 ) < DAT_1401cc8c0) && (FUN_1400dd790(&DAT_1401cc8c0), DAT_1401cc8c0 == -1)) {
      FUN_14007709a(&DAT_1401cc848);
      FUN_1400d3740(&LAB_140088654);
      _Init_thread_footer(&DAT_1401cc8c0);
    }
    plVar1 = param_2 + 2;
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_140031ece(&DAT_1401cc848,&local_68,param_2,(longlong)param_2 + *plVar1 * 2);
    local_88 = 0;
    puStack_80 = (undefined1 *)0x0;
    local_78 = (undefined1 *)0x0;
    FUN_14005872a();
    FUN_140016e5c(&local_48);
    local_48 = local_88;
    puStack_40 = puStack_80;
    local_38 = local_78;
    local_88 = 0;
    puStack_80 = (undefined1 *)0x0;
    local_78 = (undefined1 *)0x0;
    FUN_140016e5c(&local_88);
    local_88 = local_88 & 0xffffffffffffff00;
    if (puStack_40 == local_38) {
      FUN_1400660b8(&local_48,puStack_40,&local_88);
    }
    else {
      *puStack_40 = 0;
      puStack_40 = puStack_40 + 1;
    }
    FUN_1400017de(&local_68);
  }
  else {
    FUN_1400a0d82(&local_68,param_2);
    FUN_140016e5c(&local_48);
    local_48 = local_68;
    puStack_40 = puStack_60;
    local_38 = local_58;
    local_68 = 0;
    puStack_60 = (undefined1 *)0x0;
    local_58 = (undefined1 *)0x0;
    FUN_140016e5c(&local_68);
  }
  local_68._0_4_ = (int)puStack_40 - (int)local_48;
  FUN_14009e652(param_1 + 0x58);
  local_68 = CONCAT44(local_68._4_4_,0xffffffff);
  FUN_14009e716(param_1 + 0x58,&local_48);
  FUN_140016e5c(&local_48);
  return;
}

