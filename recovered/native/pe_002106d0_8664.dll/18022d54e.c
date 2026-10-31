/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022d54e */

int FUN_18022d54e(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  undefined1 auStack_d8 [32];
  int local_b8 [32];
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_d8;
  **(undefined4 **)(param_1 + 0x20) = 0x7fffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 8) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 4) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 4);
  piVar6 = local_b8;
  do {
    uVar5 = (longlong)*(int *)(param_1 + 0xc) - (longlong)iVar4;
    if (0 < (int)uVar5) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = 0;
      do {
        *(undefined8 *)(*(longlong *)(param_1 + 0x38) + uVar3 * 8) = uVar1;
        uVar3 = uVar3 + 1;
      } while ((uVar5 & 0xffffffff) != uVar3);
    }
    *(ulonglong *)(param_1 + 0x30) =
         ((uVar5 * 8 + 0x17) / 0x18) * 0x18 + *(longlong *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0;
    iVar2 = FUN_18022d6b3(param_1);
    if (iVar2 == 0x62) {
      iVar4 = (int)uVar5 >> 1;
      if (iVar4 == 0) goto LAB_18022d678;
      iVar2 = *(int *)(param_1 + 4);
      *piVar6 = iVar2;
      piVar6 = piVar6 + 1;
      iVar4 = iVar4 + iVar2;
    }
    else {
      if (iVar2 != 0) {
LAB_18022d678:
        if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_d8)) {
          return iVar2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_1802396d0(local_38 ^ (ulonglong)auStack_d8);
      }
      if (*(longlong *)(param_1 + 0x80) == 0) {
        FUN_18022d93c(param_1);
      }
      else {
        FUN_18022d6fe(param_1);
      }
      if (piVar6 == local_b8) goto LAB_18022d678;
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 4);
      iVar4 = piVar6[-1];
      piVar6 = piVar6 + -1;
    }
    *(int *)(param_1 + 4) = iVar4;
  } while( true );
}

