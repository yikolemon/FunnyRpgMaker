/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c4ff6 */

longlong FUN_1400c4ff6(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (DAT_1401cc8c6 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
        < DAT_1401cc8c0) {
      FUN_1400dd790(&DAT_1401cc8c0);
      if (DAT_1401cc8c0 == -1) {
        FUN_14007709a(&DAT_1401cc848);
        FUN_1400d3740(&LAB_140088654);
        _Init_thread_footer(&DAT_1401cc8c0);
      }
    }
    plVar1 = param_1 + 2;
    if (7 < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    FUN_140031ece(&DAT_1401cc848,&local_38,param_1,(longlong)param_1 + *plVar1 * 2);
    lVar2 = local_28 + 1;
    FUN_1400017de();
  }
  else {
    FUN_1400a0d82(&local_38,param_1);
    lVar2 = local_30 - local_38;
    FUN_140016e5c();
  }
  return lVar2;
}

