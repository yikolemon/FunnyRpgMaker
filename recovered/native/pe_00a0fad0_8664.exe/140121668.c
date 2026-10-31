/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140121668 */

PVOID FUN_140121668(undefined8 param_1,longlong param_2)

{
  PVOID pvVar1;
  PVOID pvVar2;
  
  pvVar2 = (PVOID)0x0;
  pvVar1 = pvVar2;
  if (DAT_1401ca634 != 0xffffffff) {
    pvVar1 = FlsGetValue(DAT_1401ca634);
  }
  if ((pvVar1 != (PVOID)0xffffffffffffffff) &&
     ((pvVar1 != (PVOID)0x0 || (pvVar1 = (PVOID)FUN_140121914(), pvVar1 != (PVOID)0x0)))) {
    pvVar2 = (PVOID)(param_2 * 0x3c8 + (longlong)pvVar1);
  }
  return pvVar2;
}

