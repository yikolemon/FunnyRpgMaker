/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140087b76 */

undefined8 * FUN_140087b76(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = std::exception::vftable;
  puVar2 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = WolfRPGException::vftable;
  puVar3 = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_1401cc8c0) {
    FUN_1400dd790(&DAT_1401cc8c0);
    if (DAT_1401cc8c0 == -1) {
      FUN_14007709a(&DAT_1401cc848);
      FUN_1400d3740(&LAB_140088654);
      param_1 = puVar3;
      _Init_thread_footer(&DAT_1401cc8c0);
      puVar3 = param_1;
    }
  }
  plVar1 = param_2 + 2;
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_140031ece(&DAT_1401cc848,param_1 + 3,param_2,(longlong)param_2 + *plVar1 * 2,puVar2,
                param_1 + 3,puVar3,uVar4);
  return puVar3;
}

