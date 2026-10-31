/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140288c56 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140288c56(undefined1 *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  puVar1 = param_1 + 0x10;
  local_29 = FUN_140289c02(puVar1);
  if (*(int *)(param_1 + 0xc) == 2) {
    local_30 = 1;
    cVar2 = FUN_140288b78(puVar1);
    if (cVar2 != 'P') goto LAB_140288d47;
    local_34 = 5;
    cVar2 = FUN_140288b78(puVar1);
    if (cVar2 != 'T') goto LAB_140288d47;
    local_38 = 7;
    cVar2 = FUN_140288b78(puVar1);
    if (cVar2 != 'K') goto LAB_140288d47;
  }
  FUN_1402893ae(param_1,&local_29);
  *param_1 = 1;
  DAT_140629188 = 1;
  local_30 = 5;
  FUN_140289a38(puVar1,&local_30);
  iVar3 = FUN_140289b16(puVar1);
  local_30 = iVar3;
  if (*(int *)(param_1 + 0xc) == 0) {
    piVar4 = &local_30;
  }
  else {
    cVar2 = FUN_140289c02(puVar1);
    if (s___AVEngineUI___140612d30._8_4_ == -1) {
      s___AVEngineUI___140612d30._8_4_ = SEXT14(cVar2);
    }
    local_34 = iVar3 + -1;
    piVar4 = &local_34;
  }
  FUN_140289a38(puVar1,piVar4);
LAB_140288d47:
  if (ram0x000140613b10 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_28 ^ (ulonglong)auStack_58);
}

