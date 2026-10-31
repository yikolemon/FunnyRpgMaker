/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400938a4 */

undefined8 * FUN_1400938a4(LPCWSTR param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = _calloc_base(1,0x28);
  FUN_1400a1290((LPVOID)0x0);
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

