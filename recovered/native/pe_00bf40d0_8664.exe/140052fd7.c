/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140052fd7 */

int FUN_140052fd7(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined1 auStackY_68 [32];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStackY_68;
  local_34 = 0;
  iVar2 = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
    if (param_2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar4 = 0;
      uVar6 = 0;
      do {
        uVar7 = *(ushort *)(*(longlong *)(param_1 + 8) + uVar4 * 2);
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        uVar4 = uVar4 + 1;
        uVar6 = uVar7;
      } while (param_2 != uVar4);
      uVar5 = (uint)uVar7;
    }
    lVar3 = FUN_14001c617(param_3,2,0,uVar5 + 1,0,&local_34);
    *(longlong *)(param_1 + 0x10) = lVar3;
    iVar2 = local_34;
    if (local_34 == 0) {
      iVar2 = 0;
      if (param_2 != 0) {
        uVar1 = param_2 - 1;
        do {
          *(short *)(*(longlong *)(param_1 + 0x10) +
                    (ulonglong)*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 2) * 2) =
               (short)uVar1;
          uVar1 = uVar1 - 1;
          iVar2 = local_34;
        } while (uVar1 < param_2);
      }
      *(uint *)(param_1 + 0x18) = uVar5;
      *(uint *)(param_1 + 0x1c) = param_2;
    }
  }
  if (DAT_14012ea80 != (local_30 ^ (ulonglong)auStackY_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_30 ^ (ulonglong)auStackY_68);
  }
  return iVar2;
}

