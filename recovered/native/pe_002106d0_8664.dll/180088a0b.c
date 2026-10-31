/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180088a0b */

longlong FUN_180088a0b(undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_1 != param_2) {
    do {
      local_48 = *param_1;
      uStack_44 = param_1[1];
      uStack_40 = param_1[2];
      uStack_3c = param_1[3];
      *(undefined1 *)param_1 = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      FUN_1800856c4(param_3,&local_48);
      param_3 = param_3 + 0x10;
      param_1 = param_1 + 4;
    } while (param_1 != param_2);
  }
  return param_3;
}

