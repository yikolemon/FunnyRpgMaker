/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800765d0 */

void FUN_1800765d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = std::
             wstring_convert<std::codecvt_utf8<wchar_t,1114111,0>,wchar_t,std::allocator<wchar_t>,std::allocator<char>_>
             ::vftable;
  FUN_1800010ec(param_1 + 8);
  FUN_180001ef2(param_1 + 4);
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1[3] + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180076640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1,*(code **)*puVar1);
      return;
    }
  }
  return;
}

