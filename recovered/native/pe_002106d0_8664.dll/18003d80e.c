/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003d80e */

void FUN_18003d80e(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char *_Str;
  size_t sVar1;
  undefined1 local_50 [40];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(int *)(param_2 + 0x40) < 1) {
    FUN_18003ae98(local_50,0,param_1 + 8,param_4);
    FUN_18003af0c(local_50);
  }
  else {
    if (*(char *)(param_1 + 0x15) == '\x01') {
      sVar1 = strlen(*(char **)(param_2 + 0x38));
    }
    else {
      sVar1 = 0;
    }
    FUN_18003ae98(local_50,sVar1,param_1 + 8,param_4);
    _Str = *(char **)(param_2 + 0x38);
    sVar1 = strlen(_Str);
    FUN_180018bde(param_4,_Str,_Str + sVar1);
    FUN_18003af0c(local_50);
  }
  return;
}

