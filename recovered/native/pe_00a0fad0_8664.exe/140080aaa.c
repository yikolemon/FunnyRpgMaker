/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140080aaa */

undefined8 * FUN_140080aaa(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 extraout_XMM0_Da;
  char *local_48;
  char *pcStack_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_48 = (char *)0x0;
  pcStack_40 = (char *)0x0;
  local_38 = 0;
  local_28 = param_2;
  cVar1 = FUN_140082ca4(0,param_3,&local_48,local_2c);
  if ((cVar1 == '\0') || (local_48 == pcStack_40)) {
    *local_28 = 0;
    local_28[1] = 0;
    local_28[2] = 0;
  }
  else if (*local_48 == -0x60) {
    *(undefined4 *)(param_1 + 0xa4) = 1;
    FUN_140083208(extraout_XMM0_Da,local_28,&local_48,local_2c);
  }
  else {
    *(undefined4 *)(param_1 + 0xa4) = 2;
    FUN_140083302(extraout_XMM0_Da,local_28,&local_48);
  }
  FUN_140016e5c(&local_48);
  return local_28;
}

