/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140026bae */

longlong * FUN_140026bae(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_60 [32];
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar2 = param_2;
  if (param_2 != param_3) {
    local_40 = param_4;
    do {
      FUN_140006874(local_60,param_2);
      cVar1 = FUN_140026d80(&local_40,local_60);
      lVar2 = param_2;
      if (cVar1 != '\0') break;
      param_2 = param_2 + 0x20;
      lVar2 = param_3;
    } while (param_2 != param_3);
  }
  *param_1 = lVar2;
  return param_1;
}

