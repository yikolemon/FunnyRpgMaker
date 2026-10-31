/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005cce7 */

int FUN_14005cce7(longlong *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined1 auStackY_88 [32];
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  uVar3 = FUN_14005d77b((longlong)param_1,*(longlong *)(param_2 + 0x140),*(uint *)(param_2 + 0x13c),
                        param_3,&local_44,&local_48);
  local_4c = (int)uVar3;
  iVar2 = local_4c;
  if ((local_4c == 0) && (uVar1 = FUN_14002142d(param_1,&local_4c), iVar2 = local_4c, local_4c == 0)
     ) {
    iVar2 = 0;
    if ((uVar1 & 0xfffffe00) == 0) {
      if ((uVar1 & 4) == 0) {
        puVar6 = &DAT_1400f8dd0;
      }
      else {
        puVar6 = &DAT_1400f8d90;
      }
      local_4c = FUN_1400214cf(param_1,(longlong)puVar6,param_2 + 0x148);
      iVar2 = local_4c;
      if (local_4c == 0) {
        uVar7 = *(uint *)(param_2 + 0x150);
        uVar4 = -uVar7;
        if ((int)-uVar7 < 0) {
          uVar4 = uVar7;
        }
        if (0x7fff < uVar4) {
          uVar5 = 0x7fff;
          if ((int)uVar7 < 0) {
            uVar5 = 0xffff8001;
          }
          *(undefined4 *)(param_2 + 0x150) = uVar5;
        }
        uVar7 = *(uint *)(param_2 + 0x154);
        uVar4 = -uVar7;
        if ((int)-uVar7 < 0) {
          uVar4 = uVar7;
        }
        if (0x7fff < uVar4) {
          uVar5 = 0x7fff;
          if ((int)uVar7 < 0) {
            uVar5 = 0xffff8001;
          }
          *(undefined4 *)(param_2 + 0x154) = uVar5;
        }
        uVar7 = uVar1 & 0xff;
        local_4c = FUN_14005d7f7(param_1,uVar7,(undefined8 *)(param_2 + 0x15c));
        iVar2 = local_4c;
        if (local_4c == 0) {
          local_4c = FUN_14005d7f7(param_1,uVar7,(undefined8 *)(param_2 + 0x16c));
          iVar2 = local_4c;
          if (local_4c == 0) {
            if ((uVar1 & 0xffffff00) == 0x100) {
              iVar2 = FUN_14005d7f7(param_1,uVar7,(undefined8 *)(param_2 + 0x17c));
              local_4c = iVar2;
              if (iVar2 == 0) {
                iVar2 = FUN_14005d7f7(param_1,uVar7,(undefined8 *)(param_2 + 0x18c));
              }
            }
            else {
              *(undefined8 *)(param_2 + 0x17c) = *(undefined8 *)(param_2 + 0x15c);
              *(undefined8 *)(param_2 + 0x184) = *(undefined8 *)(param_2 + 0x164);
              *(undefined8 *)(param_2 + 0x18c) = *(undefined8 *)(param_2 + 0x16c);
              *(undefined8 *)(param_2 + 0x194) = *(undefined8 *)(param_2 + 0x174);
              iVar2 = 0;
            }
          }
        }
      }
    }
  }
  if (DAT_14012ea80 != (local_40 ^ (ulonglong)auStackY_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_40 ^ (ulonglong)auStackY_88);
  }
  return iVar2;
}

