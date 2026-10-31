/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005d0b6 */

ulonglong FUN_14005d0b6(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  int iVar5;
  uint uVar6;
  undefined1 auStackY_88 [32];
  uint local_54;
  undefined4 local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  uVar4 = FUN_14005d77b((longlong)param_1,*(longlong *)(param_2 + 0x140),*(uint *)(param_2 + 0x13c),
                        8,&local_50,&local_54);
  if ((int)uVar4 == 0) {
    local_4c = FUN_140021063(param_1,8);
    uVar4 = CONCAT44(extraout_var,local_4c);
    if (local_4c == 0) {
      uVar2 = FUN_14002122b((longlong)param_1);
      if ((uVar2 & 4) == 0) {
        uVar3 = FUN_14002122b((longlong)param_1);
      }
      else {
        uVar3 = FUN_14002120e((longlong)param_1);
      }
      FUN_140021187(param_1);
      uVar4 = 3;
      if (uVar2 < 0x100) {
        uVar1 = 0xfffe;
        if (uVar3 < 0xfffe) {
          uVar1 = uVar3;
        }
        if (uVar1 == *(int *)(param_2 + 0x1a8) - 1U) {
          if (uVar3 != 0) {
            iVar5 = *(int *)((longlong)param_1 + 0xc);
            uVar6 = 0xfffe;
            if (uVar3 < 0xfffe) {
              uVar6 = uVar3;
            }
            uVar4 = 0;
            do {
              if ((uVar2 & 4) == 0) {
                uVar3 = FUN_14002142d(param_1,&local_4c);
              }
              else {
                uVar3 = FUN_140020e0f(param_1,&local_4c);
              }
              if (local_54 < uVar3) {
                uVar3 = 0;
              }
              *(uint *)(*(longlong *)(param_2 + 0x1b0) + 0x1c + uVar4) =
                   uVar3 + iVar5 + uVar1 * 4 + 0x10;
              uVar4 = uVar4 + 0x10;
            } while (uVar6 << 4 != uVar4);
            uVar4 = (ulonglong)local_4c;
            if (local_4c != 0) goto LAB_14005d220;
          }
          iVar5 = 4;
          do {
            if ((uVar2 & 4) == 0) {
              FUN_14002142d(param_1,&local_4c);
            }
            else {
              FUN_140020e0f(param_1,&local_4c);
            }
            uVar4 = (ulonglong)local_4c;
            if (local_4c != 0) goto LAB_14005d220;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          *(uint *)(param_2 + 0x1d0) = uVar2;
          uVar4 = 0;
        }
      }
    }
  }
LAB_14005d220:
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_88)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_88);
}

