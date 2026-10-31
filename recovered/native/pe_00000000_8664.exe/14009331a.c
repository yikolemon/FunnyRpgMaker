/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009331a */

void FUN_14009331a(float param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = DAT_140f2a910;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar2 + 0x1608);
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    param_1 = *(float *)(lVar2 + 0xe24);
  }
  param_1 = *(float *)(lVar1 + 0x19c) - param_1;
  *(float *)(lVar1 + 0x19c) = param_1;
  *(float *)(lVar1 + 0x158) = param_1 + *(float *)(lVar1 + 0x60) + *(float *)(lVar1 + 0x1a0);
  return;
}

