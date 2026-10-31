/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007720c */

void FUN_14007720c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = std::
             wstring_convert<std::codecvt_utf8<wchar_t,1114111,0>,wchar_t,std::allocator<wchar_t>,std::allocator<char>_>
             ::vftable;
  FUN_140005242(param_1 + 8);
  FUN_1400017de(param_1 + 4);
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1[3] + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014007727c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1,*(code **)*puVar1);
      return;
    }
  }
  return;
}

