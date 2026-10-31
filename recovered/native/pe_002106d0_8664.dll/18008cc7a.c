/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008cc7a */

longlong FUN_18008cc7a(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (DAT_180417cb8 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2c) < DAT_180417d40) {
      FUN_18023d500(&DAT_180417d40);
      if (DAT_180417d40 == -1) {
        FUN_18007645e(&DAT_180417cc8);
        FUN_18023d710(&LAB_180081b19);
        _Init_thread_footer(&DAT_180417d40);
      }
    }
    plVar1 = param_1 + 2;
    if (7 < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    FUN_1800770d6(&DAT_180417cc8,&local_38,param_1,(longlong)param_1 + *plVar1 * 2);
    lVar2 = local_28 + 1;
    FUN_180001ef2();
  }
  else {
    FUN_18008cb4e(&local_38,param_1);
    lVar2 = local_30 - local_38;
    FUN_180004cea();
  }
  return lVar2;
}

