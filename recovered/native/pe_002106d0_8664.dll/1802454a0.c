/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802454a0 */

void FUN_1802454a0(longlong param_1,short param_2)

{
  ulonglong uVar1;
  short *psVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined1 *local_80;
  ulonglong *local_78;
  longlong *local_70;
  short local_58;
  undefined1 local_56 [6];
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_a8;
  if (param_2 != -1) {
    uVar1 = **(ulonglong **)(param_1 + 0x40);
    if (uVar1 != 0) {
      iVar3 = **(int **)(param_1 + 0x58);
      if (uVar1 < uVar1 + (longlong)iVar3 * 2) {
        **(int **)(param_1 + 0x58) = iVar3 + -1;
        psVar2 = (short *)**(longlong **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x40) = (longlong)(psVar2 + 1);
        *psVar2 = param_2;
        goto LAB_18024563f;
      }
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
        lVar5 = *(longlong *)(param_1 + 0x90);
        lVar4 = *(longlong *)(param_1 + 0x88);
        **(longlong **)(param_1 + 0x18) = lVar4;
        **(longlong **)(param_1 + 0x38) = lVar4;
        **(undefined4 **)(param_1 + 0x50) = (int)(lVar5 - lVar4 >> 1);
      }
      if (*(longlong *)(param_1 + 0x68) == 0) {
        FUN_180285aac(param_2,*(undefined8 *)(param_1 + 0x80));
      }
      else {
        local_70 = &local_50;
        local_78 = &local_20;
        local_80 = local_40;
        local_88 = &local_48;
        local_58 = param_2;
        iVar3 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                          (*(longlong *)(param_1 + 0x68),param_1 + 0x74,&local_58,local_56);
        if ((iVar3 == 0) || (iVar3 == 1)) {
          lVar5 = local_50 - (longlong)local_40;
          if ((lVar5 == 0) ||
             (lVar4 = FUN_180286a64(local_40,1,lVar5,*(undefined8 *)(param_1 + 0x80)),
             lVar5 == lVar4)) {
            *(undefined1 *)(param_1 + 0x72) = 1;
          }
        }
        else if (iVar3 == 3) {
          FUN_180285aac(local_58,*(undefined8 *)(param_1 + 0x80));
        }
      }
    }
  }
LAB_18024563f:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_a8);
}

