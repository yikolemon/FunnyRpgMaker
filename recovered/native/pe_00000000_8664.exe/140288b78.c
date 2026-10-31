/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140288b78 */

undefined4 FUN_140288b78(char *param_1,uint *param_2)

{
  uint uVar1;
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
  uVar1 = *param_2;
  if (uVar1 < *(uint *)(param_1 + 0x2c)) {
    return CONCAT31((int3)(uVar1 >> 8),
                    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar1));
  }
  FUN_140213362(local_30,"llo\nWorld");
  FUN_1402897fa(local_68,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_68,0x1405b7910);
}

