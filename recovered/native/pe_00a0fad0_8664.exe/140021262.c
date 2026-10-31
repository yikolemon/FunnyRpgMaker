/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140021262 */

undefined8 Catch_140021262(undefined8 param_1,longlong param_2)

{
  char *_Str;
  size_t sVar1;
  
  _Str = (char *)(**(code **)(**(longlong **)(param_2 + 0x70) + 8))();
  sVar1 = strlen(_Str);
  FUN_140017200(*(undefined8 *)(param_2 + 0x60),_Str,sVar1);
  return 0x14002121e;
}

