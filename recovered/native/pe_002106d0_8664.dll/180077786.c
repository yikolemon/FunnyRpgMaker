/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180077786 */

void FUN_180077786(undefined1 *param_1)

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
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  puVar1 = param_1 + 0x10;
  local_29 = FUN_180078732(puVar1);
  if (*(int *)(param_1 + 0xc) == 2) {
    local_30 = 1;
    cVar2 = FUN_1800776a8(puVar1);
    if (cVar2 != 'P') goto LAB_180077877;
    local_34 = 5;
    cVar2 = FUN_1800776a8(puVar1);
    if (cVar2 != 'T') goto LAB_180077877;
    local_38 = 7;
    cVar2 = FUN_1800776a8(puVar1);
    if (cVar2 != 'K') goto LAB_180077877;
  }
  FUN_180077ede(param_1,&local_29);
  *param_1 = 1;
  DAT_180417cb8 = 1;
  local_30 = 5;
  FUN_180078568(puVar1,&local_30);
  iVar3 = FUN_180078646(puVar1);
  local_30 = iVar3;
  if (*(int *)(param_1 + 0xc) == 0) {
    piVar4 = &local_30;
  }
  else {
    cVar2 = FUN_180078732(puVar1);
    if (DAT_180401868 == -1) {
      DAT_180401868 = (int)cVar2;
    }
    local_34 = iVar3 + -1;
    piVar4 = &local_34;
  }
  FUN_180078568(puVar1,piVar4);
LAB_180077877:
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}

