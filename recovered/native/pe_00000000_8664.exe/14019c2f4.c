/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019c2f4 */

undefined8 * FUN_14019c2f4(LPCWSTR param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_calloc_base(1);
  FUN_1401aea30(0);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    GetModuleHandleExW(4,param_1,(HMODULE *)(puVar1 + 3));
  }
  return puVar1;
}

