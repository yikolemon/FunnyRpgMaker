/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401290a5 */

undefined4 FUN_1401290a5(undefined8 *param_1,char param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 *local_30;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  *param_1 = 0xf100000050;
  *(undefined4 *)(param_1 + 1) = 0;
  puVar2 = &LAB_14012eb30;
  if (param_2 == '\0') {
    puVar2 = &LAB_14012eb78;
  }
  pcVar3 = (code *)&LAB_14012eb70;
  if (param_2 == '\0') {
    pcVar3 = FUN_14012eba3;
  }
  param_1[2] = puVar2;
  param_1[3] = pcVar3;
  local_30 = &local_1c;
  local_38 = 0;
  uVar1 = FUN_140128c13(param_3,8,0,0xf1);
  param_1[4] = uVar1;
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_58)) {
    return local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_58);
}

