/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140093264 */

void FUN_140093264(float param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar1 + 0x1608);
  *(float *)(lVar1 + 0x15c) = (*(float *)(lVar1 + 100) - *(float *)(lVar1 + 0xd8)) + param_1;
  *(undefined1 *)(lVar1 + 0x199) = 1;
  return;
}

