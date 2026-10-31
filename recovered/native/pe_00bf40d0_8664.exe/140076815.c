/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140076815 */

ulonglong FUN_140076815(longlong param_1,longlong *param_2,short *param_3)

{
  int iVar1;
  bool bVar2;
  ulonglong uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_98 [40];
  int local_70;
  int local_6c;
  short *local_68;
  int local_5c [2];
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_1 + 0xc);
  uVar3 = FUN_140020a41((longlong)param_2,iVar1 + 0xc);
  local_4c = (uint)uVar3;
  if (local_4c == 0) {
    if (*(short *)(param_1 + 4) == 0) {
      *param_3 = 0;
    }
    else {
      uVar6 = iVar1 + 0x1c;
      uVar5 = 0;
      local_70 = 0;
      local_6c = 0;
      bVar2 = false;
      sVar4 = 0;
      local_4c = 0;
      local_68 = param_3;
      do {
        local_4c = FUN_1400214cf(param_2,0x14010a020,(longlong)local_5c);
        if (local_4c != 0) {
          *(short *)(param_1 + 4) = (short)uVar5;
          break;
        }
        if ((local_54 <= *(uint *)(param_2 + 1)) &&
           (((local_50 <= *(uint *)(param_2 + 1) - local_54 || (local_5c[0] == 0x766d7478)) ||
            (local_5c[0] == 0x686d7478)))) {
          sVar4 = sVar4 + 1;
          if (local_5c[0] < 0x62686564) {
            if (local_5c[0] == 0x4d455441) {
              local_70 = 1;
            }
            else if (local_5c[0] == 0x53494e47) {
              local_6c = 1;
            }
          }
          else if ((local_5c[0] == 0x68656164) || (local_5c[0] == 0x62686564)) {
            if (local_50 < 0x36) {
              uVar3 = 0x8e;
              goto LAB_1400769b3;
            }
            uVar3 = FUN_140020a41((longlong)param_2,local_54 + 0xc);
            local_4c = (uint)uVar3;
            if (local_4c != 0) goto LAB_1400769b3;
            FUN_140020e0f(param_2,&local_4c);
            uVar3 = (ulonglong)local_4c;
            if (local_4c != 0) goto LAB_1400769b3;
            uVar3 = FUN_140020a41((longlong)param_2,uVar6);
            local_4c = (uint)uVar3;
            bVar2 = true;
            if (local_4c != 0) goto LAB_1400769b3;
          }
        }
        uVar5 = uVar5 + 1;
        uVar6 = uVar6 + 0x10;
      } while (uVar5 < *(ushort *)(param_1 + 4));
      *local_68 = sVar4;
      if (sVar4 != 0) {
        uVar3 = 0;
        if (!bVar2) {
          uVar3 = 0;
          if (local_70 == 0) {
            uVar3 = 0x8e;
          }
          if (local_6c == 0) {
            uVar3 = 0x8e;
          }
        }
        goto LAB_1400769b3;
      }
    }
    uVar3 = 2;
  }
LAB_1400769b3:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_98);
  }
  return uVar3;
}

