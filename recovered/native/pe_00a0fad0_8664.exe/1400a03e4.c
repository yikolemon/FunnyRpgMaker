/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a03e4 */

void FUN_1400a03e4(longlong param_1,undefined8 param_2)

{
  undefined4 local_38 [7];
  undefined4 local_1c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (DAT_1401cc8c6 == '\x01') {
    FUN_1400a09a0(param_2,local_38);
    local_1c = 0xffffffff;
    FUN_14009e716(param_1 + 0x58,local_38);
    FUN_140016e5c(local_38);
  }
  else {
    local_38[0] = 0xffffffff;
    FUN_14009e716(param_1 + 0x58);
  }
  return;
}

