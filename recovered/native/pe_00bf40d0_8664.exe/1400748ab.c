/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400748ab */

ulonglong FUN_1400748ab(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong lVar4;
  undefined4 extraout_var_01;
  uint *puVar5;
  undefined1 auStackY_78 [32];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  lVar4 = param_1[6];
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined4 *)(param_2 + 0xe0) = 0;
  uVar1 = FUN_140020f72((longlong)param_1);
  uVar2 = FUN_140020e0f(param_1,&local_3c);
  uVar3 = (ulonglong)local_3c;
  if (local_3c == 0) {
    do {
      if (uVar2 != 0x774f4646) {
        uVar3 = 2;
        if ((int)uVar2 < 0x4f54544f) {
          if ((int)uVar2 < 0x10000) {
            if ((uVar2 != 0xa56b6264) && (uVar2 != 0xa56c7374)) break;
          }
          else if ((uVar2 != 0x10000) && (uVar2 != 0x20000)) break;
        }
        else if ((int)uVar2 < 0x74746366) {
          if ((uVar2 != 0x4f54544f) && (uVar2 != 0x74727565)) break;
        }
        else if ((uVar2 != 0x74746366) && (uVar2 != 0x74797031)) break;
        *(undefined4 *)(param_2 + 0xd8) = 0x74746366;
        if (uVar2 == 0x74746366) {
          local_3c = FUN_1400214cf(param_1,0x140109c10,param_2 + 0xd8);
          uVar3 = CONCAT44(extraout_var_00,local_3c);
          if (local_3c == 0) {
            uVar1 = *(uint *)(param_2 + 0xe0);
            if (uVar1 == 0) {
              uVar3 = 8;
            }
            else {
              uVar3 = 10;
              if (uVar1 <= *(uint *)(param_1 + 1) >> 5) {
                lVar4 = FUN_14001f231(lVar4,4,0,uVar1,0,(int *)&local_3c);
                *(longlong *)(param_2 + 0xe8) = lVar4;
                uVar3 = (ulonglong)local_3c;
                if (local_3c == 0) {
                  local_3c = FUN_140021063(param_1,*(int *)(param_2 + 0xe0) << 2);
                  uVar3 = CONCAT44(extraout_var_01,local_3c);
                  if (local_3c == 0) {
                    if (0 < *(int *)(param_2 + 0xe0)) {
                      lVar4 = 0;
                      do {
                        uVar1 = FUN_14002120e((longlong)param_1);
                        *(uint *)(*(longlong *)(param_2 + 0xe8) + lVar4 * 4) = uVar1;
                        lVar4 = lVar4 + 1;
                      } while (lVar4 < *(int *)(param_2 + 0xe0));
                    }
                    FUN_140021187(param_1);
LAB_140074b13:
                    uVar3 = (ulonglong)local_3c;
                  }
                }
              }
            }
          }
        }
        else {
          *(undefined8 *)(param_2 + 0xdc) = 0x100010000;
          puVar5 = (uint *)FUN_14001e961(lVar4,4,(int *)&local_3c);
          *(uint **)(param_2 + 0xe8) = puVar5;
          uVar3 = (ulonglong)local_3c;
          if (local_3c == 0) {
            *puVar5 = uVar1;
            goto LAB_140074b13;
          }
        }
        break;
      }
      uVar3 = FUN_140020a41((longlong)param_1,uVar1);
      local_3c = (uint)uVar3;
      if (local_3c != 0) break;
      local_3c = FUN_140074b34(param_1,param_2);
      uVar3 = CONCAT44(extraout_var,local_3c);
      if (local_3c != 0) break;
      param_1 = *(longlong **)(param_2 + 0xa0);
      uVar1 = FUN_140020f72((longlong)param_1);
      uVar2 = FUN_140020e0f(param_1,&local_3c);
      uVar3 = (ulonglong)local_3c;
    } while (local_3c == 0);
  }
  if (DAT_14012ea80 != (local_38 ^ (ulonglong)auStackY_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_38 ^ (ulonglong)auStackY_78);
  }
  return uVar3;
}

