/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005a7e8 */

void FUN_14005a7e8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  while (*(char *)((longlong)param_3 + 0x19) == '\0') {
    FUN_14005a7e8(param_1,param_2,param_3[2]);
    puVar1 = (undefined8 *)*param_3;
    FUN_140057b90(param_3 + 8);
    FUN_1400017de(param_3 + 4);
    thunk_FUN_1400ddcd0(param_3,0x50);
    param_3 = puVar1;
  }
  return;
}

