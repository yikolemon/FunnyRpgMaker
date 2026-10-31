/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140057df4 */

void FUN_140057df4(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_80 [56];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*param_1 == '\0') {
    *param_1 = '\x02';
    uVar1 = FUN_140063644();
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  else {
    if (*param_1 != '\x02') {
      local_28 = FUN_14006c034(param_1);
      FUN_14006bf5d(local_48,"cannot use push_back() with ");
      FUN_14006bdec(local_80,0x134,local_48,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_80,&DAT_140196700);
    }
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  FUN_14006446a(uVar1,param_2);
  return;
}

