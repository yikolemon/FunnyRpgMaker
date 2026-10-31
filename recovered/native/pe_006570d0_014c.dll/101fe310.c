/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101fe310 */

int __fastcall FUN_101fe310(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *_Str2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int local_150;
  int local_14c;
  undefined4 local_148;
  int local_144;
  int local_140;
  int local_13c;
  char *local_138;
  undefined4 local_e8;
  undefined4 local_e4;
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
  
  local_14 = DAT_10388d00 ^ (uint)&local_150;
  uVar6 = *(undefined4 *)(param_1 + 100);
  uVar1 = *(undefined4 *)(param_1 + 0x1ec);
  FUN_101fe597();
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  iVar3 = FUN_101fe5a8(uVar6,uVar1);
  if (((iVar3 == 0) && (iVar3 = FUN_101fe719(local_e8,local_e4), iVar3 == 0)) &&
     (iVar3 = 2, *(char *)(param_1 + 0x1b5) == '*')) {
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
        iVar3 = 0;
        local_150 = 0;
        local_148 = uVar6;
        local_144 = param_1;
        do {
          local_138 = *(char **)(local_c4 + iVar3 * 4);
          *(undefined2 *)(*(int *)(param_1 + 0x180) + iVar3 * 2) = 0;
          *(char **)(*(int *)(param_1 + 0x184) + iVar3 * 4) = ".notdef";
          if ((local_138 != (char *)0x0) && (iVar5 = *(int *)(param_1 + 0x1a4), 0 < iVar5)) {
            iVar2 = *(int *)(param_1 + 0x1a8);
            iVar7 = 0;
            local_140 = iVar3;
            do {
              _Str2 = *(char **)(iVar2 + iVar7 * 4);
              iVar4 = _strcmp(local_138,_Str2);
              iVar3 = local_140;
              param_1 = local_144;
              if (iVar4 == 0) {
                *(short *)(*(int *)(local_144 + 0x180) + local_140 * 2) = (short)iVar7;
                *(char **)(*(int *)(local_144 + 0x184) + local_140 * 4) = _Str2;
                iVar5 = _strcmp(".notdef",_Str2);
                uVar6 = local_148;
                if (iVar5 != 0) {
                  if (iVar3 < local_150) {
                    local_150 = iVar3;
                  }
                  if (local_14c <= iVar3 + 1) {
                    local_14c = iVar3 + 1;
                  }
                }
                break;
              }
              iVar7 = iVar7 + 1;
              uVar6 = local_148;
            } while (iVar5 != iVar7);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_c8);
      }
      *(int *)(param_1 + 0x178) = local_150;
      *(int *)(param_1 + 0x17c) = local_14c;
      *(undefined4 *)(param_1 + 0x174) = local_dc;
    }
    iVar3 = 0;
    FUN_101fe8ed();
    if (local_13c != 0) goto LAB_101fe39f;
    iVar3 = 3;
  }
  else {
    FUN_101fe8ed();
  }
  FUN_101c0017(uVar6,*(undefined4 *)(param_1 + 0x1f0));
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
LAB_101fe39f:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_150)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar3;
}

