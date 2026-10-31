/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180291218 */

PVOID FUN_180291218(undefined8 param_1,longlong param_2)

{
  PVOID pvVar1;
  PVOID pvVar2;
  
  pvVar2 = (PVOID)0x0;
  pvVar1 = pvVar2;
  if (DAT_180415e90 != 0xffffffff) {
    pvVar1 = FlsGetValue(DAT_180415e90);
  }
  if ((pvVar1 != (PVOID)0xffffffffffffffff) &&
     ((pvVar1 != (PVOID)0x0 || (pvVar1 = (PVOID)FUN_1802914c4(), pvVar1 != (PVOID)0x0)))) {
    pvVar2 = (PVOID)(param_2 * 0x3c8 + (longlong)pvVar1);
  }
  return pvVar2;
}

