/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ee255 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801ee255(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  ulonglong uVar11;
  undefined1 auStack_98 [32];
  uint local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong lStack_58;
  uint local_50;
  ulonglong local_48;
  ulonglong uVar10;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_98;
  uVar5 = *(uint *)(param_1 + 0x324);
  if (uVar5 != 0) {
    if (uVar5 == 7) goto LAB_1801ee410;
    *(uint *)(param_1 + 0x324) = uVar5 | 1 << (*(byte *)(param_1 + 0x1f0) & 1);
  }
  if (*(short *)(param_1 + 0xea) != 0) {
    local_68 = *(longlong *)(param_1 + 0xf0);
    if ((*(byte *)(param_1 + 0x1f0) & 1) == 0) {
      local_68 = local_68 + 4;
      local_60 = *(longlong *)(param_1 + 0xf8) + _DAT_180337c20;
      lStack_58 = *(longlong *)(param_1 + 0x100) + _UNK_180337c28;
      bVar8 = 0x10;
    }
    else {
      local_60 = *(longlong *)(param_1 + 0xf8);
      lStack_58 = *(longlong *)(param_1 + 0x100);
      bVar8 = 8;
    }
    local_50 = (uint)*(ushort *)(param_1 + 0xe8);
    uVar3 = 0;
    uVar6 = 0;
    do {
      uVar2 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x110) + uVar6 * 2) -
              (uint)*(ushort *)(param_1 + 0x118);
      uVar5 = *(ushort *)(param_1 + 0xe8) - 1;
      if (uVar2 < *(ushort *)(param_1 + 0xe8)) {
        uVar5 = uVar2;
      }
      uVar10 = uVar3;
      if ((uint)uVar3 <= uVar5) {
        uVar4 = uVar3;
        while( true ) {
          uVar2 = (uint)uVar4;
          uVar9 = uVar2 + 1;
          uVar10 = (ulonglong)uVar9;
          if ((bVar8 & *(byte *)(*(longlong *)(param_1 + 0x108) + uVar4)) != 0) break;
          uVar4 = uVar10;
          if (uVar5 < uVar9) goto LAB_1801ee3bb;
        }
        uVar7 = uVar4;
        uVar11 = uVar4;
        local_70 = uVar3;
        if (uVar5 < uVar9) goto LAB_1801ee3a6;
        do {
          iVar1 = (int)uVar7;
          uVar9 = iVar1 + 1;
          if ((bVar8 & *(byte *)(*(longlong *)(param_1 + 0x108) + (ulonglong)uVar9)) != 0) {
            local_78 = uVar9;
            FUN_1801f8c21(&local_68,(int)uVar11 + 1,uVar7,uVar11);
            uVar11 = (ulonglong)uVar9;
          }
          uVar7 = (ulonglong)uVar9;
        } while (iVar1 + 2U <= uVar5);
        uVar10 = (ulonglong)(iVar1 + 2);
        if ((uint)uVar11 == uVar2) {
LAB_1801ee3a6:
          FUN_1801f8d86(&local_68,local_70,uVar5,uVar4);
        }
        else {
          local_78 = uVar2;
          FUN_1801f8c21(&local_68,(uint)uVar11 + 1 & 0xffff,uVar5,uVar11);
          if (uVar2 != 0) {
            local_78 = uVar2;
            FUN_1801f8c21(&local_68,local_70,uVar2 - 1,uVar11);
          }
        }
      }
LAB_1801ee3bb:
      uVar3 = uVar10;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(param_1 + 0xea));
  }
LAB_1801ee410:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_98);
  }
  return;
}

