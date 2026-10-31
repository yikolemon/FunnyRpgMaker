/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400e1cf0 */

undefined8 * FUN_1400e1cf0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_18 [2];
  
  *(undefined4 *)(param_1 + 1) = param_3;
  puVar1 = param_1 + 2;
  *param_1 = std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>::
             vftable;
  *puVar1 = 0;
  uVar2 = FUN_140108d30();
  if (puVar1 != local_18) {
    thunk_FUN_1401212e0(*puVar1);
    *puVar1 = uVar2;
    uVar2 = 0;
  }
  thunk_FUN_1401212e0(uVar2);
  return param_1;
}

