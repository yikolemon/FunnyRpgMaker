/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020f6ab */

int FUN_18020f6ab(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 *local_60;
  int local_4c;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_88;
  local_60 = local_48;
  local_68 = local_44;
  local_4c = FUN_18021013f(param_1,*(undefined8 *)(param_2 + 0x140),*(undefined4 *)(param_2 + 0x13c)
                           ,param_3);
  iVar2 = local_4c;
  if (((local_4c == 0) &&
      (uVar1 = FUN_1801cf02a(param_1,&local_4c), iVar2 = local_4c, local_4c == 0)) &&
     (iVar2 = 0, (uVar1 & 0xfffffe00) == 0)) {
    if ((uVar1 & 4) == 0) {
      puVar5 = &DAT_18033bca0;
    }
    else {
      puVar5 = &DAT_18033bc60;
    }
    local_4c = FUN_1801cf0cc(param_1,puVar5,param_2 + 0x148);
    iVar2 = local_4c;
    if (local_4c == 0) {
      uVar6 = *(uint *)(param_2 + 0x150);
      uVar3 = -uVar6;
      if ((int)-uVar6 < 0) {
        uVar3 = uVar6;
      }
      if (0x7fff < uVar3) {
        uVar4 = 0x7fff;
        if ((int)uVar6 < 0) {
          uVar4 = 0xffff8001;
        }
        *(undefined4 *)(param_2 + 0x150) = uVar4;
      }
      uVar6 = *(uint *)(param_2 + 0x154);
      uVar3 = -uVar6;
      if ((int)-uVar6 < 0) {
        uVar3 = uVar6;
      }
      if (0x7fff < uVar3) {
        uVar4 = 0x7fff;
        if ((int)uVar6 < 0) {
          uVar4 = 0xffff8001;
        }
        *(undefined4 *)(param_2 + 0x154) = uVar4;
      }
      uVar6 = uVar1 & 0xff;
      local_4c = FUN_1802101bb(param_1,uVar6,(undefined8 *)(param_2 + 0x15c));
      iVar2 = local_4c;
      if (local_4c == 0) {
        local_4c = FUN_1802101bb(param_1,uVar6,(undefined4 *)(param_2 + 0x16c));
        iVar2 = local_4c;
        if (local_4c == 0) {
          if ((uVar1 & 0xffffff00) == 0x100) {
            local_4c = FUN_1802101bb(param_1,uVar6);
            iVar2 = local_4c;
            if (local_4c == 0) {
              iVar2 = FUN_1802101bb(param_1,uVar6,param_2 + 0x18c);
            }
          }
          else {
            *(undefined8 *)(param_2 + 0x17c) = *(undefined8 *)(param_2 + 0x15c);
            *(undefined8 *)(param_2 + 0x184) = *(undefined8 *)(param_2 + 0x164);
            *(undefined4 *)(param_2 + 0x18c) = *(undefined4 *)(param_2 + 0x16c);
            *(undefined4 *)(param_2 + 400) = *(undefined4 *)(param_2 + 0x170);
            *(undefined4 *)(param_2 + 0x194) = *(undefined4 *)(param_2 + 0x174);
            *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_2 + 0x178);
            iVar2 = 0;
          }
        }
      }
    }
  }
  if (DAT_180402640 != (local_40 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_40 ^ (ulonglong)auStack_88);
  }
  return iVar2;
}

