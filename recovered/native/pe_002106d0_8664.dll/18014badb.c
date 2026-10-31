/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014badb */

void FUN_18014badb(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  lVar2 = DAT_180419160;
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  if (*(int *)(DAT_180419160 + 0x27e4) == *(int *)(DAT_180419160 + 0x27e0)) {
    iVar1 = *(int *)(DAT_180419160 + 0x27f0);
    local_28 = *(undefined4 *)(param_1 + 1);
    local_30 = *param_1;
    local_24 = 0;
    iVar3 = FUN_1800ff3d6();
    if (iVar1 == iVar3) {
      *param_2 = *(undefined4 *)(lVar2 + 0x27e8);
    }
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}

