/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027f9fa */

undefined8 * FUN_14027f9fa(undefined8 *param_1)

{
  undefined1 local_50 [44];
  undefined4 local_24;
  undefined8 *local_20;
  undefined2 local_14;
  undefined1 local_12;
  undefined1 local_11;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_12 = 0;
  local_14 = 0;
  local_11 = 0;
  local_24 = 1;
  local_20 = param_1;
  FUN_14026b860(local_50,"o long",0);
  FUN_14028145c(local_20,local_50,&DAT_1406290a0,&local_24,&local_11,&local_14);
  FUN_14021331c(local_50);
  *local_20 = &DAT_1404caa28;
  *(undefined1 *)(local_20 + 0xb) = 0;
  local_20[0xc] = 0;
  local_20[0xd] = 0;
  local_20[0xe] = 0;
  *(undefined2 *)(local_20 + 0xf) = 0;
  *(undefined1 *)((longlong)local_20 + 0x7a) = 0;
  return local_20;
}

