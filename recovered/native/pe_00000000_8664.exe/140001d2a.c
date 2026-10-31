/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140001d2a */

void FUN_140001d2a(void)

{
  undefined *local_30;
  char local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_30 = &DAT_140f14008;
  FUN_1400378a0();
  local_28 = '\x01';
  while (DAT_140f2a36c == '\0') {
    if (DAT_140f2a36d == '\x01') {
      DAT_140f2a36d = '\0';
      FUN_140045268(&local_30);
      FUN_140045298();
      FUN_14003aa9f();
      FUN_140045912(&local_30);
      FUN_1400378a0(local_30);
      local_28 = '\x01';
    }
    FUN_140189d80(&DAT_140f2a370,local_30);
  }
  if (local_28 == '\x01') {
    FUN_14018a340(local_30);
  }
  return;
}

