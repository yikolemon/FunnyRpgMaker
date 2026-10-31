/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140289b16 */

undefined4 FUN_140289b16(char *param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
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
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x28) + 4;
  if (uVar1 <= *(uint *)(param_1 + 0x2c)) {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x28));
    *(int *)(param_1 + 0x28) = (int)uVar1;
    return uVar2;
  }
  FUN_140213362(local_30,"c");
  FUN_1402897fa(local_68,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_68,0x1405b7910);
}

