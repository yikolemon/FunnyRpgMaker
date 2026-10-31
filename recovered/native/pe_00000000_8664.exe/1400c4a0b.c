/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c4a0b */

void FUN_1400c4a0b(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  lVar2 = DAT_140f2a910;
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  if (*(int *)(DAT_140f2a910 + 0x27e4) == *(int *)(DAT_140f2a910 + 0x27e0)) {
    iVar1 = *(int *)(DAT_140f2a910 + 0x27f0);
    local_28 = *(undefined4 *)(param_1 + 1);
    local_30 = *param_1;
    local_24 = 0;
    iVar3 = FUN_140078692();
    if (iVar1 == iVar3) {
      *param_2 = *(undefined4 *)(lVar2 + 0x27e8);
    }
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
}

