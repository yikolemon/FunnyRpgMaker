/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020599b */

int FUN_18020599b(longlong param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_68;
  local_34 = 0;
  iVar5 = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
    if (param_2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar3 = 0;
      uVar6 = 0;
      do {
        uVar7 = *(ushort *)(*(longlong *)(param_1 + 8) + uVar3 * 2);
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        uVar3 = uVar3 + 1;
        uVar6 = uVar7;
      } while (param_2 != uVar3);
      uVar4 = (uint)uVar7;
    }
    local_40 = &local_34;
    local_48 = 0;
    uVar2 = FUN_1801c9c3f(param_3,2,0,uVar4 + 1);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    iVar5 = local_34;
    if (local_34 == 0) {
      iVar5 = 0;
      if (param_2 != 0) {
        uVar1 = param_2 - 1;
        do {
          *(short *)(*(longlong *)(param_1 + 0x10) +
                    (ulonglong)*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 2) * 2) =
               (short)uVar1;
          uVar1 = uVar1 - 1;
          iVar5 = local_34;
        } while (uVar1 < param_2);
      }
      *(uint *)(param_1 + 0x18) = uVar4;
      *(uint *)(param_1 + 0x1c) = param_2;
    }
  }
  if (DAT_180402640 != (local_30 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_30 ^ (ulonglong)auStack_68);
  }
  return iVar5;
}

