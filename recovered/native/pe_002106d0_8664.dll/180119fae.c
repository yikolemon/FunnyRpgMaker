/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180119fae */

void FUN_180119fae(float param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = DAT_180419160;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar2 + 0x1608);
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    param_1 = *(float *)(lVar2 + 0xe24);
  }
  param_1 = param_1 + *(float *)(lVar1 + 0x19c);
  *(float *)(lVar1 + 0x19c) = param_1;
  *(float *)(lVar1 + 0x158) = param_1 + *(float *)(lVar1 + 0x60) + *(float *)(lVar1 + 0x1a0);
  return;
}

