/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005cebe */

ulonglong FUN_14005cebe(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined1 auStackY_78 [32];
  uint local_44;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  lVar1 = *(longlong *)(param_2 + 0x98);
  uVar5 = FUN_14005d77b((longlong)param_1,*(longlong *)(param_2 + 0x140),*(uint *)(param_2 + 0x13c),
                        4,&local_40,&local_44);
  local_3c = (uint)uVar5;
  uVar5 = uVar5 & 0xffffffff;
  if (local_3c == 0) {
    uVar3 = FUN_14002142d(param_1,&local_3c);
    uVar5 = (ulonglong)local_3c;
    local_40 = uVar3;
    if ((local_3c == 0) && (uVar5 = 3, (uVar3 & 0xfffffe00) == 0)) {
      if (uVar3 < 0x100) {
        if ((uVar3 & 4) == 0) {
          uVar4 = FUN_14002142d(param_1,&local_3c);
        }
        else {
          uVar4 = FUN_140020e0f(param_1,&local_3c);
        }
      }
      else {
        if ((uVar3 & 4) == 0) {
          uVar2 = FUN_1400212d8(param_1,&local_3c);
        }
        else {
          uVar2 = FUN_140020aa5(param_1,&local_3c);
        }
        uVar4 = (uint)uVar2;
      }
      if (local_3c == 0) {
        if (uVar3 < 0x100) {
          uVar7 = 0xc;
        }
        else {
          uVar7 = 5;
        }
        uVar5 = 8;
        if (uVar4 - 1 < local_44 / uVar7) {
          uVar7 = 0xfffe;
          if (uVar4 < 0xfffe) {
            uVar7 = uVar4;
          }
          *(uint *)(param_2 + 0x1a8) = uVar7 + 1;
          puVar6 = (undefined8 *)FUN_14001f231(lVar1,0x10,0,uVar7 + 1,0,(int *)&local_3c);
          *(undefined8 **)(param_2 + 0x1b0) = puVar6;
          uVar5 = (ulonglong)local_3c;
          if (local_3c == 0) {
            if (1 < *(uint *)(param_2 + 0x1a8)) {
              uVar7 = 1;
              uVar4 = local_3c;
              do {
                local_3c = uVar4;
                local_3c = FUN_14005d7f7(param_1,uVar3,puVar6 + 2);
                *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
                if (local_3c != 0) {
                  FUN_14001c53d(lVar1,*(longlong *)(param_2 + 0x1b0));
                  *(undefined8 *)(param_2 + 0x1b0) = 0;
                  uVar5 = (ulonglong)local_3c;
                  goto LAB_14005cf3a;
                }
                uVar7 = uVar7 + 1;
                puVar6 = puVar6 + 2;
                uVar4 = 0;
              } while (uVar7 < *(uint *)(param_2 + 0x1a8));
            }
            uVar5 = 0;
          }
        }
      }
    }
  }
LAB_14005cf3a:
  if (DAT_14012ea80 != (local_38 ^ (ulonglong)auStackY_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_38 ^ (ulonglong)auStackY_78);
  }
  return uVar5;
}

