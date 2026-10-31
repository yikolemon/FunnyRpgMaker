/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401788c1 */

ulonglong FUN_1401788c1(longlong param_1,longlong param_2,short *param_3)

{
  bool bVar1;
  ulonglong uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_98 [40];
  int local_70;
  int local_6c;
  short *local_68;
  int local_5c [2];
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  iVar5 = *(int *)(param_1 + 0xc);
  uVar2 = FUN_14012d612(param_2,iVar5 + 0xc);
  local_4c = (uint)uVar2;
  if (local_4c == 0) {
    if (*(short *)(param_1 + 4) == 0) {
      *param_3 = 0;
    }
    else {
      iVar5 = iVar5 + 0x1c;
      uVar4 = 0;
      local_70 = 0;
      local_6c = 0;
      bVar1 = false;
      sVar3 = 0;
      local_4c = 0;
      local_68 = param_3;
      do {
        local_4c = FUN_14012e0a0(param_2,&DAT_140eb1260,local_5c);
        if (local_4c != 0) {
          *(short *)(param_1 + 4) = (short)uVar4;
          break;
        }
        if ((local_54 <= *(uint *)(param_2 + 8)) &&
           (((local_50 <= *(uint *)(param_2 + 8) - local_54 || (local_5c[0] == 0x766d7478)) ||
            (local_5c[0] == 0x686d7478)))) {
          sVar3 = sVar3 + 1;
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
              uVar2 = 0x8e;
              goto LAB_140178a5f;
            }
            uVar2 = FUN_14012d612(param_2,local_54 + 0xc);
            local_4c = (uint)uVar2;
            if (local_4c != 0) goto LAB_140178a5f;
            FUN_14012d9e0(param_2,&local_4c);
            uVar2 = (ulonglong)local_4c;
            if (local_4c != 0) goto LAB_140178a5f;
            uVar2 = FUN_14012d612(param_2,iVar5);
            local_4c = (uint)uVar2;
            bVar1 = true;
            if (local_4c != 0) goto LAB_140178a5f;
          }
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0x10;
      } while (uVar4 < *(ushort *)(param_1 + 4));
      *local_68 = sVar3;
      if (sVar3 != 0) {
        uVar2 = 0;
        if (!bVar1) {
          uVar2 = 0;
          if (local_70 == 0) {
            uVar2 = 0x8e;
          }
          if (local_6c == 0) {
            uVar2 = 0x8e;
          }
        }
        goto LAB_140178a5f;
      }
    }
    uVar2 = 2;
  }
LAB_140178a5f:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_98);
  }
  return uVar2;
}

