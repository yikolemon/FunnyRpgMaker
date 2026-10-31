/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cc3c6 */

undefined8 FUN_1400cc3c6(longlong *param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_40 [2];
  longlong local_30;
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  (**(code **)(*param_1 + 0x10))(param_1,local_40);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_1401cc8c0) {
    FUN_1400dd790(&DAT_1401cc8c0);
    if (DAT_1401cc8c0 == -1) {
      FUN_14007709a(&DAT_1401cc848);
      FUN_1400d3740(&LAB_140088654);
      _Init_thread_footer(&DAT_1401cc8c0);
    }
  }
  pppuVar1 = local_40;
  if (7 < local_28) {
    pppuVar1 = (undefined8 ***)local_40[0];
  }
  FUN_140031ece(&DAT_1401cc848,param_2,pppuVar1,(longlong)pppuVar1 + local_30 * 2);
  FUN_140005242(local_40);
  return param_2;
}

