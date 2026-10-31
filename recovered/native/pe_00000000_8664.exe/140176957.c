/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140176957 */

ulonglong FUN_140176957(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  uint *local_50;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined4 *)(param_2 + 0xe0) = 0;
  uVar1 = FUN_14012db43();
  iVar2 = FUN_14012d9e0(param_1,&local_3c);
  uVar3 = (ulonglong)local_3c;
  if (local_3c == 0) {
    do {
      if (iVar2 != 0x774f4646) {
        uVar3 = 2;
        if (iVar2 < 0x4f54544f) {
          if (iVar2 < 0x10000) {
            if ((iVar2 != -0x5a949d9c) && (iVar2 != -0x5a938c8c)) break;
          }
          else if ((iVar2 != 0x10000) && (iVar2 != 0x20000)) break;
        }
        else if (iVar2 < 0x74746366) {
          if ((iVar2 != 0x4f54544f) && (iVar2 != 0x74727565)) break;
        }
        else if ((iVar2 != 0x74746366) && (iVar2 != 0x74797031)) break;
        *(undefined4 *)(param_2 + 0xd8) = 0x74746366;
        if (iVar2 == 0x74746366) {
          uVar3 = FUN_14012e0a0(param_1,&DAT_140eb0e50,(undefined4 *)(param_2 + 0xd8));
          local_3c = (uint)uVar3;
          if (local_3c == 0) {
            if (*(uint *)(param_2 + 0xe0) == 0) {
              uVar3 = 8;
            }
            else {
              uVar3 = 10;
              if (*(uint *)(param_2 + 0xe0) <= *(uint *)(param_1 + 8) >> 5) {
                local_58 = 0;
                local_50 = &local_3c;
                uVar4 = FUN_14012b8aa(uVar4,4,0);
                *(undefined8 *)(param_2 + 0xe8) = uVar4;
                uVar3 = (ulonglong)local_3c;
                if (local_3c == 0) {
                  uVar3 = FUN_14012dc34(param_1,*(int *)(param_2 + 0xe0) << 2);
                  local_3c = (uint)uVar3;
                  if (local_3c == 0) {
                    if (0 < *(int *)(param_2 + 0xe0)) {
                      lVar6 = 0;
                      do {
                        uVar1 = FUN_14012dddf(param_1);
                        *(undefined4 *)(*(longlong *)(param_2 + 0xe8) + lVar6 * 4) = uVar1;
                        lVar6 = lVar6 + 1;
                      } while (lVar6 < *(int *)(param_2 + 0xe0));
                    }
                    FUN_14012dd58(param_1);
LAB_140176bbf:
                    uVar3 = (ulonglong)local_3c;
                  }
                }
              }
            }
          }
        }
        else {
          *(undefined8 *)(param_2 + 0xdc) = 0x100010000;
          puVar5 = (undefined4 *)FUN_14012afda(uVar4,4,&local_3c);
          *(undefined4 **)(param_2 + 0xe8) = puVar5;
          uVar3 = (ulonglong)local_3c;
          if (local_3c == 0) {
            *puVar5 = uVar1;
            goto LAB_140176bbf;
          }
        }
        break;
      }
      uVar3 = FUN_14012d612(param_1,uVar1);
      local_3c = (uint)uVar3;
      if (local_3c != 0) break;
      uVar3 = FUN_140176be0(param_1,param_2);
      local_3c = (uint)uVar3;
      if (local_3c != 0) break;
      param_1 = *(longlong *)(param_2 + 0xa0);
      uVar1 = FUN_14012db43(param_1);
      iVar2 = FUN_14012d9e0(param_1,&local_3c);
      uVar3 = (ulonglong)local_3c;
    } while (local_3c == 0);
  }
  if (DAT_140f17b40 != (local_38 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_38 ^ (ulonglong)auStack_78);
  }
  return uVar3;
}

