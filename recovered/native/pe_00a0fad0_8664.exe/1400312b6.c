/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400312b6 */

undefined8 * FUN_1400312b6(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_80 [64];
  undefined1 local_40 [32];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  puVar2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar2 = (undefined8 *)*param_2;
  }
  lVar1 = FUN_14000d806(puVar2,param_2[2],0,&DAT_14013bc80,2);
  if (lVar1 == -1) {
    if (param_1 != param_2) {
      puVar2 = param_2 + 2;
      if (0xf < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      FUN_140017200(param_1,param_2,*puVar2);
    }
    return param_1;
  }
  FUN_14000169c(local_40,"Group names may not contain newlines or null characters");
  FUN_140031540(local_80,local_40);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_80,&DAT_14017a418);
}

