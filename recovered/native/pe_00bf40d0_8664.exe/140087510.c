/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140087510 */

void FUN_140087510(longlong param_1,WCHAR param_2)

{
  WCHAR *pWVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined1 *local_80;
  ulonglong *local_78;
  longlong *local_70;
  WCHAR local_58;
  undefined1 local_56 [6];
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_a8;
  if (param_2 != L'\xffff') {
    uVar6 = **(ulonglong **)(param_1 + 0x40);
    if (uVar6 != 0) {
      iVar4 = **(int **)(param_1 + 0x58);
      if (uVar6 < uVar6 + (longlong)iVar4 * 2) {
        **(int **)(param_1 + 0x58) = iVar4 + -1;
        pWVar1 = (WCHAR *)**(longlong **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x40) = (longlong)(pWVar1 + 1);
        *pWVar1 = param_2;
        goto LAB_1400876af;
      }
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
        lVar2 = *(longlong *)(param_1 + 0x90);
        lVar3 = *(longlong *)(param_1 + 0x88);
        **(longlong **)(param_1 + 0x18) = lVar3;
        **(longlong **)(param_1 + 0x38) = lVar3;
        **(undefined4 **)(param_1 + 0x50) = (int)(lVar2 - lVar3 >> 1);
      }
      if (*(longlong *)(param_1 + 0x68) == 0) {
        FUN_140098938(param_2,*(longlong **)(param_1 + 0x80));
      }
      else {
        local_70 = &local_50;
        local_78 = &local_20;
        local_80 = local_40;
        local_88 = &local_48;
        local_58 = param_2;
        iVar4 = (*(code *)PTR__guard_dispatch_icall_1401200f0)
                          (*(longlong *)(param_1 + 0x68),param_1 + 0x74,&local_58,local_56);
        if ((iVar4 == 0) || (iVar4 == 1)) {
          uVar6 = local_50 - (longlong)local_40;
          if ((uVar6 == 0) ||
             (uVar5 = FUN_1400997cc(local_40,1,uVar6,*(longlong *)(param_1 + 0x80)), uVar6 == uVar5)
             ) {
            *(undefined1 *)(param_1 + 0x72) = 1;
          }
        }
        else if (iVar4 == 3) {
          FUN_140098938(local_58,*(longlong **)(param_1 + 0x80));
        }
      }
    }
  }
LAB_1400876af:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStack_a8);
}

