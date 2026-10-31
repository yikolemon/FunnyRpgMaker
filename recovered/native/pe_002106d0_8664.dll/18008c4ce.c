/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008c4ce */

void FUN_18008c4ce(longlong param_1,undefined8 param_2)

{
  undefined4 local_38 [7];
  undefined4 local_1c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (DAT_180417cb8 == '\x01') {
    FUN_18008ca0a(param_2,local_38);
    local_1c = 0xffffffff;
    FUN_18008cdc4(param_1 + 0x58,local_38);
    FUN_180004cea(local_38);
  }
  else {
    local_38[0] = 0xffffffff;
    FUN_18008cdc4(param_1 + 0x58);
  }
  return;
}

