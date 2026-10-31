/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022815e */

void FUN_14022815e(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  while (*(char *)((longlong)param_3 + 0x19) == '\0') {
    FUN_14022815e(param_1,param_2,param_3[2]);
    puVar1 = (undefined8 *)*param_3;
    FUN_140224c96(param_3 + 8);
    FUN_1402133c2(param_3 + 4);
    thunk_FUN_1404a2310(param_3,0x50);
    param_3 = puVar1;
  }
  return;
}

