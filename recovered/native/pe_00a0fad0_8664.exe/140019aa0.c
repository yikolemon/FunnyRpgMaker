/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140019aa0 */

undefined8 FUN_140019aa0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),
                  *(longlong *)(lVar1 + 0x30) != *(longlong *)(lVar1 + 0x28) ||
                  *(longlong *)(lVar1 + 0x40) != *(longlong *)(lVar1 + 0x48));
}

