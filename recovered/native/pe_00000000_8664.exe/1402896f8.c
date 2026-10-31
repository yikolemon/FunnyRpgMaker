/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402896f8 */

void FUN_1402896f8(char *param_1,undefined8 param_2,int param_3)

{
  undefined1 local_b0 [56];
  undefined1 local_78 [56];
  undefined1 local_40 [32];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*param_1 == '\0') {
    FUN_140213362(local_40,"d");
    FUN_1402897fa(local_b0,local_40);
                    /* WARNING: Subroutine does not return */
    FUN_14047ea80(local_b0,0x1405b7910);
  }
  if (*(uint *)(param_1 + 0x28) + param_3 <= *(uint *)(param_1 + 0x2c)) {
    FUN_1404b97c0(param_2,(ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x20),
                  param_3);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + param_3;
    return;
  }
  FUN_140213362(local_40,"ceBold");
  FUN_1402897fa(local_78,local_40);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_78,0x1405b7910);
}

