/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027d9e4 */

undefined8 * FUN_18027d9e4(LPCWSTR param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_calloc_base(1);
  FUN_180290e40(0);
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

