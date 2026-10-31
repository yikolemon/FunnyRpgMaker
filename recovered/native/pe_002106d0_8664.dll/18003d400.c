/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003d400 */

int FUN_18003d400(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_2 + 0x18) - *(longlong *)(param_1 + 0x20) < 100000000) {
    iVar4 = *(int *)(param_1 + 0x28);
  }
  else {
    local_38 = param_3[8];
    local_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
    local_48 = param_3[4];
    uStack_44 = param_3[5];
    uStack_40 = param_3[6];
    uStack_3c = param_3[7];
    lVar2 = thunk_FUN_18027f9f0();
    iVar4 = 0;
    if (lVar2 != -1) {
      lVar3 = FUN_18027f9e0(&local_58);
      iVar4 = 0;
      if (lVar3 != -1) {
        auVar1 = SEXT816(lVar3 - lVar2) * ZEXT816(0x8888888888888889);
        iVar4 = (int)(auVar1._8_8_ >> 5) - (auVar1._12_4_ >> 0x1f);
      }
    }
    *(int *)(param_1 + 0x28) = iVar4;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x18);
  }
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_78)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_78);
}

