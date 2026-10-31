/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140089e70 */

void FUN_140089e70(undefined1 *param_1)

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
  
  local_28 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  puVar1 = param_1 + 0x10;
  local_29 = FUN_14008ab9c(puVar1);
  if (*(int *)(param_1 + 0xc) == 2) {
    local_30 = 1;
    cVar2 = FUN_140089d92(puVar1);
    if (cVar2 != 'P') goto LAB_140089f61;
    local_34 = 5;
    cVar2 = FUN_140089d92(puVar1);
    if (cVar2 != 'T') goto LAB_140089f61;
    local_38 = 7;
    cVar2 = FUN_140089d92(puVar1);
    if (cVar2 != 'K') goto LAB_140089f61;
  }
  FUN_14008a47a(param_1,&local_29);
  *param_1 = 1;
  DAT_1401cc8c6 = 1;
  local_30 = 5;
  FUN_14008a9d2(puVar1,&local_30);
  iVar3 = FUN_14008aab0(puVar1);
  local_30 = iVar3;
  if (*(int *)(param_1 + 0xc) == 0) {
    piVar4 = &local_30;
  }
  else {
    cVar2 = FUN_14008ab9c(puVar1);
    if (DAT_1401c9930 == -1) {
      DAT_1401c9930 = (int)cVar2;
    }
    local_34 = iVar3 + -1;
    piVar4 = &local_34;
  }
  FUN_14008a9d2(puVar1,piVar4);
LAB_140089f61:
  if (DAT_1401c9640 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_28 ^ (ulonglong)auStack_58);
}

