/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140005ad0 */

void FUN_140005ad0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  while (*(char *)((longlong)param_3 + 0x19) == '\0') {
    FUN_140005ad0(param_1,param_2,param_3[2]);
    puVar1 = (undefined8 *)*param_3;
    FUN_140004b06(param_3 + 8);
    FUN_14000109c(param_3 + 4);
    thunk_FUN_14018e090(param_3,0x50);
    param_3 = puVar1;
  }
  return;
}

