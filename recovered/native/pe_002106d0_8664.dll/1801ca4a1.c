/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ca4a1 */

undefined8 FUN_1801ca4a1(undefined8 *param_1,char *param_2)

{
  char *_Str1;
  int iVar1;
  
  if (param_2 != (char *)0x0 && param_1 != (undefined8 *)0x0) {
    _Str1 = (char *)*param_1;
    while (_Str1 != (char *)0x0) {
      iVar1 = strcmp(_Str1,param_2);
      if (iVar1 == 0) {
        return param_1[1];
      }
      _Str1 = (char *)param_1[2];
      param_1 = param_1 + 2;
    }
  }
  return 0;
}

