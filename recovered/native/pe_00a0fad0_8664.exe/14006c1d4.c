/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006c1d4 */

longlong * FUN_14006c1d4(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  param_4 = param_4 - param_3;
  if (param_4 != 0) {
    lVar2 = param_3 - *param_1;
    for (; lVar1 = param_4 + param_3, param_1[1] != lVar1; param_3 = param_3 + 0x30) {
      FUN_1400578a6(param_3 + 0x20);
      FUN_1400017de(param_3);
      FUN_14006c30c(param_3,lVar1);
    }
    FUN_14006c3ca(param_1,(lVar1 - *param_1 >> 4) * -0x5555555555555555 +
                          (param_4 >> 4) * 0x5555555555555555,&local_49);
    param_3 = lVar2 + *param_1;
  }
  *param_2 = param_3;
  return param_2;
}

