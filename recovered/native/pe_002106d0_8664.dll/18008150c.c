/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008150c */

undefined8 * FUN_18008150c(undefined8 *param_1,undefined8 *param_2)

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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_180417d40) {
    FUN_18023d500(&DAT_180417d40);
    if (DAT_180417d40 == -1) {
      FUN_18007645e(&DAT_180417cc8);
      FUN_18023d710(&LAB_180081b19);
      param_1 = puVar3;
      _Init_thread_footer(&DAT_180417d40);
      puVar3 = param_1;
    }
  }
  plVar1 = param_2 + 2;
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_1800770d6(&DAT_180417cc8,param_1 + 3,param_2,(longlong)param_2 + *plVar1 * 2,puVar2,
                param_1 + 3,puVar3,uVar4);
  return puVar3;
}

