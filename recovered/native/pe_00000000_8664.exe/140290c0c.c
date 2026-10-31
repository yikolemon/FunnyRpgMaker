/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140290c0c */

void FUN_140290c0c(longlong param_1,undefined8 param_2)

{
  undefined1 local_1a0 [136];
  longlong local_118;
  undefined1 local_98 [56];
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_140290d48(local_1a0,param_2,0x22,0x40,1);
  if (local_118 != 0) {
    FUN_140290924(local_1a0,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x2c));
    FUN_140290da0(local_1a0);
    return;
  }
  FUN_140214a5a(local_40,param_2);
  FUN_14028733b(local_60,"ormat error",local_40);
  FUN_140287392(local_98,local_60);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_98,0x1405b7910);
}

