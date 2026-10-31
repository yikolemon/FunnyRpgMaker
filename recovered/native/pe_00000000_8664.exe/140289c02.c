/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140289c02 */

undefined4 FUN_140289c02(char *param_1)

{
  undefined1 uVar1;
  uint uVar2;
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
  uVar2 = *(uint *)(param_1 + 0x28);
  if (uVar2 < *(uint *)(param_1 + 0x2c)) {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2);
    *(uint *)(param_1 + 0x28) = uVar2 + 1;
    return CONCAT31((int3)(uVar2 >> 8),uVar1);
  }
  FUN_140213362(local_30,"c");
  FUN_1402897fa(local_68,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_68,0x1405b7910);
}

