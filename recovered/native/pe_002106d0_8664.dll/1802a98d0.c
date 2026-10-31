/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a98d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802a98d0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_180290e40(*(undefined8 *)(param_2 + 0x98));
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x20) = 8;
  LOCK();
  _DAT_1804044c8 = _DAT_1804044c8 + 1;
  UNLOCK();
  *(undefined **)(param_2 + 0x30) = &DAT_1804044d0;
  *(undefined ***)(param_2 + 0x38) = &PTR_vftable_1804044c0;
  FUN_1802477a0(*(undefined8 *)(param_2 + 0x80),param_2 + 0x30);
  *(undefined4 *)(param_2 + 0x20) = 0;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_180247670();
  }
  return 0;
}

