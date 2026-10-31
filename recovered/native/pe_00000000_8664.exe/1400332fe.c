/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400332fe */

void FUN_1400332fe(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char *_Str;
  size_t sVar1;
  undefined1 local_58 [40];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*(int *)(param_2 + 0x40) < 1) {
    FUN_140030a1c(local_58,0,param_1 + 8,param_4);
    FUN_140030a90(local_58);
  }
  else {
    _Str = (char *)FUN_14001a21c(*(undefined8 *)(param_2 + 0x38));
    if (*(char *)(param_1 + 0x15) == '\x01') {
      sVar1 = strlen(_Str);
    }
    else {
      sVar1 = 0;
    }
    FUN_140030a1c(local_58,sVar1,param_1 + 8,param_4);
    sVar1 = strlen(_Str);
    FUN_140019fc2(param_4,_Str,_Str + sVar1);
    FUN_140030a90(local_58);
  }
  return;
}

