/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ca0d1 */

undefined4 FUN_1801ca0d1(undefined8 *param_1,char param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 *local_30;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_58;
  *param_1 = 0xf100000050;
  *(undefined4 *)(param_1 + 1) = 0;
  puVar2 = &LAB_1801cfb5c;
  if (param_2 == '\0') {
    puVar2 = &LAB_1801cfba4;
  }
  pcVar3 = (code *)&LAB_1801cfb9c;
  if (param_2 == '\0') {
    pcVar3 = FUN_1801cfbcf;
  }
  param_1[2] = puVar2;
  param_1[3] = pcVar3;
  local_30 = &local_1c;
  local_38 = 0;
  uVar1 = FUN_1801c9c3f(param_3,8,0,0xf1);
  param_1[4] = uVar1;
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_58)) {
    return local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_58);
}

