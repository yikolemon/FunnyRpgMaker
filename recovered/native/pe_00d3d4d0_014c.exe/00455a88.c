/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00455a88 */

int __fastcall FUN_00455a88(int param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  byte *local_138;
  int local_134 [19];
  int local_e8;
  int local_e4;
  undefined4 local_dc;
  int local_c8;
  int local_c4;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_90;
  undefined4 local_74;
  int local_68;
  undefined8 local_60;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_150;
  iVar6 = *(int *)(param_1 + 100);
  iVar4 = *(int *)(param_1 + 0x1ec);
  FUN_00455d0f(local_134);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  iVar4 = FUN_00455d20(local_134,*(int **)(param_1 + 0x68),iVar6,iVar4);
  if (((iVar4 == 0) && (iVar4 = FUN_00455e91(param_1,local_134,local_e8,local_e4), iVar4 == 0)) &&
     (iVar4 = 2, *(char *)(param_1 + 0x1b5) == '*')) {
    *(undefined4 *)(param_1 + 0x1a4) = local_a8;
    local_13c = local_68;
    local_68 = 0;
    *(undefined4 *)(param_1 + 0x18c) = local_74;
    *(undefined8 *)(param_1 + 0x1ac) = local_60;
    *(undefined4 *)(param_1 + 400) = local_a4;
    *(undefined4 *)(param_1 + 0x1a8) = local_90;
    local_a4 = 0;
    local_90 = 0;
    if (*(int *)(param_1 + 0x170) == 1) {
      if (local_c8 < 1) {
        local_150 = 0;
        local_14c = 0;
      }
      else {
        local_14c = 0;
        iVar4 = 0;
        local_150 = 0;
        local_148 = iVar6;
        local_144 = param_1;
        do {
          local_138 = *(byte **)(local_c4 + iVar4 * 4);
          *(undefined2 *)(*(int *)(param_1 + 0x180) + iVar4 * 2) = 0;
          *(char **)(*(int *)(param_1 + 0x184) + iVar4 * 4) = ".notdef";
          if ((local_138 != (byte *)0x0) && (iVar1 = *(int *)(param_1 + 0x1a4), 0 < iVar1)) {
            iVar2 = *(int *)(param_1 + 0x1a8);
            iVar7 = 0;
            local_140 = iVar4;
            do {
              pbVar3 = *(byte **)(iVar2 + iVar7 * 4);
              uVar5 = FUN_00493010(local_138,pbVar3);
              iVar4 = local_140;
              param_1 = local_144;
              if (uVar5 == 0) {
                *(short *)(*(int *)(local_144 + 0x180) + local_140 * 2) = (short)iVar7;
                *(byte **)(*(int *)(local_144 + 0x184) + local_140 * 4) = pbVar3;
                uVar5 = FUN_00493010((byte *)".notdef",pbVar3);
                iVar6 = local_148;
                if (uVar5 != 0) {
                  if (iVar4 < local_150) {
                    local_150 = iVar4;
                  }
                  if (local_14c <= iVar4 + 1) {
                    local_14c = iVar4 + 1;
                  }
                }
                break;
              }
              iVar7 = iVar7 + 1;
              iVar6 = local_148;
            } while (iVar1 != iVar7);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_c8);
      }
      *(int *)(param_1 + 0x178) = local_150;
      *(int *)(param_1 + 0x17c) = local_14c;
      *(undefined4 *)(param_1 + 0x174) = local_dc;
    }
    iVar4 = 0;
    FUN_00456065((int)local_134);
    if (local_13c != 0) goto LAB_00455b17;
    iVar4 = 3;
  }
  else {
    FUN_00456065((int)local_134);
  }
  FUN_0041c607(iVar6,*(int *)(param_1 + 0x1f0));
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
LAB_00455b17:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_150)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_150);
  }
  return iVar4;
}

