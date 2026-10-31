/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802478e0 */

undefined8 * FUN_1802478e0(undefined8 *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  *param_1 = _anon_6E02EFE5::_ExceptionPtr_normal::vftable;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 2) = *param_2;
  uVar1 = param_2[1];
  param_1[3] = 0;
  *(uint *)((longlong)param_1 + 0x14) = uVar1 | 1;
  param_1[4] = 0;
  uVar1 = param_2[6];
  *(uint *)(param_1 + 5) = uVar1;
  if (0xf < uVar1) {
    uVar1 = 0xf;
  }
  FUN_1802a82f0(param_1 + 6,param_2 + 8,(ulonglong)uVar1 * 8);
  FUN_1802a89a0(param_1 + (ulonglong)uVar1 + 6,0,(ulonglong)(0xf - uVar1) << 3);
  return param_1;
}

