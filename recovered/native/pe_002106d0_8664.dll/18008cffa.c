/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008cffa */

void FUN_18008cffa(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_80 [56];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*param_1 == '\0') {
    *param_1 = '\x02';
    uVar1 = FUN_180059790();
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  else {
    if (*param_1 != '\x02') {
      local_28 = FUN_18008843c(param_1);
      FUN_1800172c9(local_48,"cannot use push_back() with ");
      FUN_180017158(local_80,0x134,local_48,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(local_80,&DAT_180391520);
    }
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  FUN_180080f7e(uVar1,param_2);
  return;
}

