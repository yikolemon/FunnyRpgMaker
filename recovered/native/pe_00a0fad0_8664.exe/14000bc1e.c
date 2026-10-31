/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000bc1e */

undefined8 * FUN_14000bc1e(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  lVar1 = FUN_1400d3680(0x10);
  uVar2 = FUN_1400d4020(1);
  *(undefined8 *)(lVar1 + 8) = uVar2;
  param_1[0xc] = lVar1;
  param_1[3] = param_1 + 1;
  param_1[4] = param_1 + 2;
  param_1[7] = param_1 + 5;
  param_1[8] = param_1 + 6;
  param_1[10] = param_1 + 9;
  param_1[0xb] = (longlong)param_1 + 0x4c;
  param_1[9] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}

