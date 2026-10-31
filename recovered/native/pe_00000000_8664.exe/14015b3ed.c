/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015b3ed */

int FUN_14015b3ed(longlong param_1)

{
  undefined8 uVar1;
  char *_Str1;
  longlong lVar2;
  char *_Str2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_2a8 [44];
  int local_27c;
  ulonglong local_278;
  int local_26c;
  undefined8 local_268;
  undefined1 local_260 [152];
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  int local_194;
  longlong local_190;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 local_130;
  undefined8 local_f8;
  int local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_2a8;
  uVar6 = *(undefined8 *)(param_1 + 0x98);
  uVar1 = *(undefined8 *)(param_1 + 0x2a0);
  FUN_14015b6ce(local_260);
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  iVar3 = FUN_14015b6db(local_260,*(undefined8 *)(param_1 + 0xa0),uVar6,uVar1);
  if (((iVar3 == 0) &&
      (iVar3 = FUN_14015b8ae(param_1,local_260,local_1c8,local_1c0), iVar5 = local_e0, iVar3 == 0))
     && (iVar3 = 2, *(char *)(param_1 + 0x261) == '*')) {
    *(undefined4 *)(param_1 + 0x240) = local_158;
    local_e0 = 0;
    *(undefined8 *)(param_1 + 0x210) = local_f8;
    *(undefined4 *)(param_1 + 0x250) = local_d8;
    *(undefined4 *)(param_1 + 0x254) = uStack_d4;
    *(undefined4 *)(param_1 + 600) = uStack_d0;
    *(undefined4 *)(param_1 + 0x25c) = uStack_cc;
    *(undefined8 *)(param_1 + 0x218) = local_150;
    *(undefined8 *)(param_1 + 0x248) = local_130;
    iVar3 = 0;
    local_150 = 0;
    local_130 = 0;
    if (*(int *)(param_1 + 0x1e0) == 1) {
      local_26c = iVar5;
      local_268 = uVar6;
      if (local_194 < 1) {
        local_27c = 0;
        local_278 = 0;
      }
      else {
        local_278 = 0;
        lVar7 = 0;
        local_27c = 0;
        do {
          _Str1 = *(char **)(local_190 + lVar7 * 8);
          *(undefined2 *)(*(longlong *)(param_1 + 0x1f8) + lVar7 * 2) = 0;
          *(char **)(*(longlong *)(param_1 + 0x200) + lVar7 * 8) = ".notdef";
          if ((_Str1 != (char *)0x0) && (iVar5 = *(int *)(param_1 + 0x240), 0 < (longlong)iVar5)) {
            lVar2 = *(longlong *)(param_1 + 0x248);
            lVar8 = 0;
            do {
              _Str2 = *(char **)(lVar2 + lVar8 * 8);
              iVar4 = strcmp(_Str1,_Str2);
              if (iVar4 == 0) {
                *(short *)(*(longlong *)(param_1 + 0x1f8) + lVar7 * 2) = (short)lVar8;
                *(char **)(*(longlong *)(param_1 + 0x200) + lVar7 * 8) = _Str2;
                iVar5 = strcmp(".notdef",_Str2);
                if (iVar5 != 0) {
                  iVar5 = (int)lVar7;
                  if (iVar5 < local_27c) {
                    local_27c = iVar5;
                  }
                  iVar4 = (int)local_278;
                  local_278 = local_278 & 0xffffffff;
                  if (iVar4 <= (int)(iVar5 + 1U)) {
                    local_278 = (ulonglong)(iVar5 + 1U);
                  }
                }
                break;
              }
              lVar8 = lVar8 + 1;
            } while (iVar5 != lVar8);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < local_194);
      }
      *(int *)(param_1 + 0x1ec) = local_27c;
      *(int *)(param_1 + 0x1f0) = (int)local_278;
      *(undefined4 *)(param_1 + 0x1e8) = local_1b8;
      uVar6 = local_268;
      iVar5 = local_26c;
    }
    FUN_14015babc(local_260);
    if (iVar5 != 0) goto LAB_14015b4ad;
    iVar3 = 3;
  }
  else {
    FUN_14015babc(local_260);
  }
  FUN_140128b39(uVar6,*(undefined8 *)(param_1 + 0x2a8));
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
LAB_14015b4ad:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_2a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_2a8);
  }
  return iVar3;
}

