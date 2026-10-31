/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cc797 */

void FUN_1800cc797(undefined8 *param_1)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_180417808) {
    FUN_18023d500(&DAT_180417808);
    if (DAT_180417808 == -1) {
      FUN_180021e84(&DAT_180417610);
      FUN_18023d710(&LAB_18002260a);
      _Init_thread_footer(&DAT_180417808);
    }
  }
  local_28 = *local_18;
  uStack_20 = local_18[1];
  *local_18 = 0;
  local_18[1] = 0;
  FUN_1800ccb80(&DAT_180417610,&local_28);
  FUN_18004363a(local_18);
  return;
}

