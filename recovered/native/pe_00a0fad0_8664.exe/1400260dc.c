/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400260dc */

bool FUN_1400260dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  lVar2 = FUN_14000d806(param_1,*puVar1,0,&DAT_140139020,7);
  return lVar2 != -1;
}

