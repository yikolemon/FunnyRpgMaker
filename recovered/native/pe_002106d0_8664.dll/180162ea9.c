/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180162ea9 */

void FUN_180162ea9(char *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_c8 [56];
  undefined1 local_90 [32];
  undefined1 local_70 [16];
  undefined8 *local_60;
  longlong local_58 [2];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*param_1 == '\x01') {
    FUN_180057354(local_58);
    puVar1 = (undefined8 *)**(longlong **)(param_1 + 8);
    local_60 = (undefined8 *)*puVar1;
    while (puVar2 = local_60, local_60 != puVar1) {
      FUN_1800136fa(local_70,local_60 + 8);
      FUN_180163076(local_58,local_90,puVar2 + 4,local_70);
      FUN_1800137c6(local_70);
      FUN_180016c4c(&local_60);
    }
    FUN_1801632d8(param_2,local_58);
    FUN_180016c8e(local_58,local_58,*(undefined8 *)(local_58[0] + 8));
    thunk_FUN_1802464a0(local_58[0],0x50);
    return;
  }
  local_58[0] = FUN_1800173a0(param_1);
  FUN_1800172c9(local_90,"type must be object, but is ");
  FUN_180017158(local_c8,0x12e,local_90,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_c8,&DAT_180391520);
}

