/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015f166 */

ulonglong FUN_14015f166(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  uint *local_60;
  uint local_54;
  undefined1 local_50 [4];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  local_60 = &local_54;
  local_68 = local_50;
  uVar4 = FUN_14015f82b(param_1,*(undefined8 *)(param_2 + 0x140),*(undefined4 *)(param_2 + 0x13c),8)
  ;
  if ((int)uVar4 == 0) {
    uVar4 = FUN_14012dc34(param_1,8);
    local_4c = (uint)uVar4;
    if (local_4c == 0) {
      uVar2 = FUN_14012ddfc(param_1);
      if ((uVar2 & 4) == 0) {
        uVar3 = FUN_14012ddfc();
      }
      else {
        uVar3 = FUN_14012dddf(param_1);
      }
      FUN_14012dd58(param_1);
      uVar4 = 3;
      if (uVar2 < 0x100) {
        uVar1 = 0xfffe;
        if (uVar3 < 0xfffe) {
          uVar1 = uVar3;
        }
        if (uVar1 == *(int *)(param_2 + 0x1a8) - 1U) {
          if (uVar3 != 0) {
            iVar5 = *(int *)(param_1 + 0xc);
            uVar6 = 0xfffe;
            if (uVar3 < 0xfffe) {
              uVar6 = uVar3;
            }
            uVar4 = 0;
            do {
              if ((uVar2 & 4) == 0) {
                uVar3 = FUN_14012dffe();
              }
              else {
                uVar3 = FUN_14012d9e0(param_1,&local_4c);
              }
              if (local_54 < uVar3) {
                uVar3 = 0;
              }
              *(uint *)(*(longlong *)(param_2 + 0x1b0) + 0x1c + uVar4) =
                   uVar3 + iVar5 + uVar1 * 4 + 0x10;
              uVar4 = uVar4 + 0x10;
            } while (uVar6 << 4 != uVar4);
            uVar4 = (ulonglong)local_4c;
            if (local_4c != 0) goto LAB_14015f2d0;
          }
          iVar5 = 4;
          do {
            if ((uVar2 & 4) == 0) {
              FUN_14012dffe();
            }
            else {
              FUN_14012d9e0(param_1,&local_4c);
            }
            uVar4 = (ulonglong)local_4c;
            if (local_4c != 0) goto LAB_14015f2d0;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          *(uint *)(param_2 + 0x1d0) = uVar2;
          uVar4 = 0;
        }
      }
    }
  }
LAB_14015f2d0:
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_88)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
}

