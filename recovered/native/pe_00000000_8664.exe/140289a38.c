/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140289a38 */

void FUN_140289a38(char *param_1,int *param_2)

{
  undefined1 local_a0 [56];
  undefined1 local_68 [56];
  undefined1 local_30 [32];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if (*param_1 == '\0') {
    FUN_140213362(local_30,"d");
    FUN_1402897fa(local_a0,local_30);
                    /* WARNING: Subroutine does not return */
    FUN_14047ea80(local_a0,0x1405b7910);
  }
  if ((uint)(*param_2 + *(int *)(param_1 + 0x28)) <= *(uint *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x28) = *param_2 + *(int *)(param_1 + 0x28);
    return;
  }
  FUN_140213362(local_30,"CKENDS.md");
  FUN_1402897fa(local_68,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_68,0x1405b7910);
}

