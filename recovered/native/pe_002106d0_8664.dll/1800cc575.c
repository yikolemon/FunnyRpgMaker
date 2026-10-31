/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cc575 */

undefined8 * FUN_1800cc575(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong local_28 [2];
  
  local_28[1] = 0xfffffffffffffffe;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_180417808) {
    FUN_18023d500(&DAT_180417808);
    if (DAT_180417808 == -1) {
      FUN_180021e84(&DAT_180417610);
      FUN_18023d710(&LAB_18002260a);
      _Init_thread_footer(&DAT_180417808);
    }
  }
  FUN_180044980(&DAT_180417610);
  FUN_18006258a(&DAT_180417700,local_28,param_2);
  if (local_28[0] == DAT_180417708) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    if (*(longlong *)(local_28[0] + 0x38) == 0) {
      uVar2 = 0;
    }
    else {
      LOCK();
      piVar1 = (int *)(*(longlong *)(local_28[0] + 0x38) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      uVar2 = *(undefined8 *)(local_28[0] + 0x38);
    }
    *param_1 = *(undefined8 *)(local_28[0] + 0x30);
    param_1[1] = uVar2;
  }
  FUN_18023d6e0(&DAT_180417610);
  return param_1;
}

