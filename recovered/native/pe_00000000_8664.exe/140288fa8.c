/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140288fa8 */

void FUN_140288fa8(char *param_1,uint *param_2)

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
  if (*param_2 <= *(uint *)(param_1 + 0x2c)) {
    *(uint *)(param_1 + 0x28) = *param_2;
    return;
  }
  FUN_140213362(local_30,"i/blob/master/docs/FAQ.md");
  FUN_1402897fa(local_68,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_68,0x1405b7910);
}

