/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e5ef0 */

longlong FUN_1400e5ef0(longlong param_1,ushort param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 *local_c0;
  undefined4 *local_b8;
  ushort local_aa;
  undefined4 *local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  ushort local_62;
  ulonglong local_60;
  
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_e8;
  lVar7 = *(longlong *)(param_1 + 0x58);
  lVar1 = *(longlong *)(lVar7 + 8);
  local_62 = param_2;
  if ((*(char *)(lVar1 + 0x50) == '\0') && ((*(byte *)(lVar7 + 0x10) & 4) == 0)) {
    FUN_1400e61a7(lVar7,&local_62);
    uVar3 = local_62;
    uVar6 = (ulonglong)local_62;
    if (((local_62 == *(ushort *)(lVar7 + 0x30)) && (*(char *)(lVar7 + 0x35) == '\x01')) &&
       (lVar5 = FUN_1400e8806(lVar1,param_1), lVar5 != 0)) goto LAB_1400e60c0;
    local_aa = param_2;
    local_a8 = param_3;
    if ((longlong)*(int *)(lVar7 + 0x20) != 0) {
      local_a0 = *(longlong *)(lVar7 + 0x28);
      lVar5 = (longlong)*(int *)(lVar7 + 0x20) << 3;
      lVar7 = *(longlong *)(param_1 + 0x60);
      lVar8 = 0;
      do {
        lVar2 = *(longlong *)(local_a0 + lVar8 * 2);
        lVar9 = *(longlong *)(lVar2 + 0x88);
        if (lVar9 == 0) {
          lVar9 = *(longlong *)(lVar1 + 0x2b8);
        }
        if ((*(longlong *)(lVar2 + 0x48) == 0) ||
           (cVar4 = FUN_1400e8a19(lVar2,uVar6), cVar4 != '\0')) {
          if (local_a8 == (undefined4 *)0x0) {
            local_88 = 0;
            uStack_80 = 0;
            local_98 = 0;
            uStack_90 = 0;
            local_78 = 0;
            local_70 = 0xffffffff;
            local_b8 = (undefined4 *)0x0;
            local_c0 = &local_98;
            local_c8 = CONCAT22(local_c8._2_2_,uVar3);
            cVar4 = (**(code **)(lVar9 + 0x40))(lVar1,lVar2,param_1,lVar7);
            if (cVar4 != '\0') {
              local_98 = CONCAT44(local_98._4_4_,
                                  (uint)lVar8 & 0x3c | (uint)local_98 & 3 | (uint)local_aa << 6);
              lVar5 = FUN_1400e31e7(lVar1,param_1,lVar2);
              goto LAB_1400e60c0;
            }
          }
          else {
            local_b8 = local_a8;
            local_c8 = CONCAT22(local_c8._2_2_,uVar3);
            local_c0 = (undefined8 *)0x0;
            cVar4 = (**(code **)(lVar9 + 0x40))(lVar1,lVar2,param_1,lVar7);
            if (cVar4 != '\0') {
              local_c8 = *local_a8;
              FUN_1400e5cd9(local_c8,param_1,lVar2,uVar6);
              goto LAB_1400e60be;
            }
          }
        }
        lVar7 = lVar7 + *(longlong *)(lVar9 + 0x48);
        lVar8 = lVar8 + 4;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    if ((*(byte *)(param_1 + 0x4f) & 8) == 0) {
      if (*(int *)(param_1 + 0x40) == -1) {
        FUN_1400e8722(param_1);
      }
      FUN_1400e5bb6(param_1,uVar3 + 1);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + uVar6 * 4) = *(undefined4 *)(param_1 + 0x10);
      *(undefined2 *)(*(longlong *)(param_1 + 0x28) + uVar6 * 2) = 0xfffe;
    }
  }
  else if ((*(int *)(param_1 + 0x40) == -1) && ((*(byte *)(param_1 + 0x4f) & 8) == 0)) {
    FUN_1400e8722(param_1);
  }
LAB_1400e60be:
  lVar5 = 0;
LAB_1400e60c0:
  if (DAT_140f17b40 != (local_60 ^ (ulonglong)auStack_e8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_60 ^ (ulonglong)auStack_e8);
  }
  return lVar5;
}

