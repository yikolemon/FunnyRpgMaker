/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400087bc */

undefined8 * FUN_1400087bc(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
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
  lVar1 = FUN_1400863a0(0x10);
  plVar2 = FUN_140086860('\x01');
  *(longlong **)(lVar1 + 8) = plVar2;
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

