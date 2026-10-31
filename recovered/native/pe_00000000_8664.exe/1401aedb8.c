/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401aedb8 */

PVOID FUN_1401aedb8(undefined8 param_1,longlong param_2)

{
  PVOID pvVar1;
  PVOID pvVar2;
  
  pvVar2 = (PVOID)0x0;
  pvVar1 = pvVar2;
  if (DAT_140f29630 != 0xffffffff) {
    pvVar1 = FlsGetValue(DAT_140f29630);
  }
  if ((pvVar1 != (PVOID)0xffffffffffffffff) &&
     ((pvVar1 != (PVOID)0x0 || (pvVar1 = (PVOID)FUN_1401af064(), pvVar1 != (PVOID)0x0)))) {
    pvVar2 = (PVOID)(param_2 * 0x3c8 + (longlong)pvVar1);
  }
  return pvVar2;
}

