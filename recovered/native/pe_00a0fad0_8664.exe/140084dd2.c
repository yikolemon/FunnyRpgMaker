/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140084dd2 */

void FUN_140084dd2(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  cVar2 = FUN_1400d74a0(param_2,param_3);
  if (cVar2 == '\0') {
    do {
      if ((char)param_2[1] == '\0') {
        FUN_1400d64e0(param_2);
      }
      local_29 = *(undefined1 *)((longlong)param_2 + 9);
      puVar1 = *(undefined1 **)(param_1 + 8);
      if (puVar1 == *(undefined1 **)(param_1 + 0x10)) {
        FUN_1400660b8(param_1,puVar1,&local_29);
      }
      else {
        *puVar1 = local_29;
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
      }
      if (*param_2 == 0) {
LAB_140084e4f:
        *param_2 = 0;
        uVar3 = 1;
      }
      else {
        iVar4 = FUN_14000c9ac();
        if (iVar4 == -1) goto LAB_140084e4f;
        uVar3 = 0;
      }
      *(undefined1 *)(param_2 + 1) = uVar3;
      cVar2 = FUN_1400d74a0(param_2,param_3);
    } while (cVar2 == '\0');
  }
  if (DAT_1401c9640 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_28 ^ (ulonglong)auStack_58);
}

