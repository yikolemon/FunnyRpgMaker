/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140290862 */

void FUN_140290862(char *param_1,undefined8 param_2)

{
  undefined1 local_68 [56];
  undefined1 local_30 [32];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
  if (*param_1 == '\x01') {
    FUN_14028c9a2(param_1 + 0x128,*(undefined8 *)(param_1 + 0x130),param_2,1);
    return;
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_140290924(param_1 + 0x20,param_2,1);
    return;
  }
  FUN_140213362(local_30," BeginOrderWithinContext: %d");
  FUN_140290a54(local_68,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_68,&DAT_1405b79b0);
}

