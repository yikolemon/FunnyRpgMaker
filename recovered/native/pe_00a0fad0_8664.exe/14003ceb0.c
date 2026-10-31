/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003ceb0 */

ulonglong FUN_14003ceb0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (*(longlong *)(lVar1 + 0x18) != 0) {
    return 0;
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x4d)) ^ 1;
}

