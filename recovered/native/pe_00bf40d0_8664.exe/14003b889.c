/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003b889 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003b889(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStackY_98 [32];
  longlong local_68;
  longlong local_60;
  longlong lStack_58;
  uint local_50;
  ulonglong local_48;
  ulonglong uVar4;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_98;
  uVar5 = *(uint *)(param_1 + 0x324);
  if (uVar5 != 0) {
    if (uVar5 == 7) goto LAB_14003ba44;
    *(uint *)(param_1 + 0x324) = uVar5 | 1 << (*(byte *)(param_1 + 0x1f0) & 1);
  }
  if (*(short *)(param_1 + 0xea) != 0) {
    local_68 = *(longlong *)(param_1 + 0xf0);
    if ((*(byte *)(param_1 + 0x1f0) & 1) == 0) {
      local_68 = local_68 + 4;
      local_60 = *(longlong *)(param_1 + 0xf8) + _DAT_1400f4d40;
      lStack_58 = *(longlong *)(param_1 + 0x100) + _UNK_1400f4d48;
      bVar7 = 0x10;
    }
    else {
      local_60 = *(longlong *)(param_1 + 0xf8);
      lStack_58 = *(longlong *)(param_1 + 0x100);
      bVar7 = 8;
    }
    local_50 = (uint)*(ushort *)(param_1 + 0xe8);
    uVar2 = 0;
    uVar6 = 0;
    do {
      uVar1 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x110) + uVar6 * 2) -
              (uint)*(ushort *)(param_1 + 0x118);
      uVar5 = *(ushort *)(param_1 + 0xe8) - 1;
      if (uVar1 < *(ushort *)(param_1 + 0xe8)) {
        uVar5 = uVar1;
      }
      uVar1 = (uint)uVar2;
      if (uVar1 <= uVar5) {
        uVar4 = uVar2;
        while( true ) {
          uVar3 = (uint)uVar4;
          uVar8 = uVar3 + 1;
          uVar2 = (ulonglong)uVar8;
          if ((bVar7 & *(byte *)(*(longlong *)(param_1 + 0x108) + uVar4)) != 0) break;
          uVar4 = uVar2;
          if (uVar5 < uVar8) goto LAB_14003b9ef;
        }
        uVar10 = uVar4;
        if (uVar5 < uVar8) goto LAB_14003b9da;
        do {
          uVar8 = (uint)uVar4;
          uVar9 = uVar8 + 1;
          uVar4 = (ulonglong)uVar9;
          if ((bVar7 & *(byte *)(*(longlong *)(param_1 + 0x108) + uVar4)) != 0) {
            FUN_140046255(&local_68,(uint)uVar10 + 1,uVar8,(uint)uVar10,uVar9);
            uVar10 = (ulonglong)uVar9;
          }
        } while (uVar8 + 2 <= uVar5);
        uVar2 = (ulonglong)(uVar8 + 2);
        uVar8 = (uint)uVar10;
        if (uVar8 == uVar3) {
LAB_14003b9da:
          FUN_1400463ba(&local_68,uVar1,uVar5,uVar3);
        }
        else {
          FUN_140046255(&local_68,uVar8 + 1 & 0xffff,uVar5,uVar8,uVar3);
          if (uVar3 != 0) {
            FUN_140046255(&local_68,uVar1,uVar3 - 1,uVar8,uVar3);
          }
        }
      }
LAB_14003b9ef:
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(param_1 + 0xea));
  }
LAB_14003ba44:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_98);
  }
  return;
}

