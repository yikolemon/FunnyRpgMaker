/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c05fb */

undefined8 FUN_1400c05fb(longlong param_1,int param_2)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x20) >> 8),
                  *(undefined1 *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2));
}

