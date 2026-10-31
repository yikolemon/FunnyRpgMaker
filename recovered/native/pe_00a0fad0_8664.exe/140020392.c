/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140020392 */

undefined8 FUN_140020392(uint param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14000b3ff(param_2);
  return CONCAT71((int7)((ulonglong)*(longlong *)(lVar1 + 0x18) >> 8),
                  (*(byte *)(*(longlong *)(lVar1 + 0x18) + ((ulonglong)param_1 & 0xff) * 2) & 0x48)
                  != 0);
}

