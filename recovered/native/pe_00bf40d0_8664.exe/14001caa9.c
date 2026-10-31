/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001caa9 */

int FUN_14001caa9(undefined8 *param_1,char param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 auStackY_58 [32];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStackY_58;
  *param_1 = 0xf100000050;
  *(undefined4 *)(param_1 + 1) = 0;
  puVar2 = &LAB_140021f5f;
  if (param_2 == '\0') {
    puVar2 = &LAB_140021fa7;
  }
  pcVar3 = (code *)&LAB_140021f9f;
  if (param_2 == '\0') {
    pcVar3 = FUN_140021fd2;
  }
  param_1[2] = puVar2;
  param_1[3] = pcVar3;
  lVar1 = FUN_14001c617(param_3,8,0,0xf1,0,&local_1c);
  param_1[4] = lVar1;
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStackY_58)) {
    return local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStackY_58);
}

