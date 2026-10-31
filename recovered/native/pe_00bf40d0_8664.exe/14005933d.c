/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005933d */

int FUN_14005933d(longlong param_1)

{
  longlong lVar1;
  char *_Str1;
  char *_Str2;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_2a8 [44];
  int local_27c;
  ulonglong local_278;
  int local_26c;
  longlong local_268;
  ulonglong local_260 [19];
  ulonglong local_1c8;
  int local_1c0;
  undefined4 local_1b8;
  int local_194;
  longlong local_190;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 local_130;
  undefined8 local_f8;
  int local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_2a8;
  lVar6 = *(longlong *)(param_1 + 0x98);
  lVar1 = *(longlong *)(param_1 + 0x2a0);
  FUN_14005961e((undefined1 (*) [32])local_260);
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  uVar5 = FUN_14005962b((longlong *)local_260,*(longlong **)(param_1 + 0xa0),lVar6,lVar1);
  iVar2 = (int)uVar5;
  if (iVar2 == 0) {
    uVar5 = FUN_1400597fe(param_1,local_260,local_1c8,local_1c0);
    iVar4 = local_e0;
    iVar2 = (int)uVar5;
    if ((iVar2 != 0) || (iVar2 = 2, *(char *)(param_1 + 0x261) != '*')) goto LAB_1400593cf;
    *(undefined4 *)(param_1 + 0x240) = local_158;
    local_e0 = 0;
    *(undefined8 *)(param_1 + 0x210) = local_f8;
    *(undefined8 *)(param_1 + 0x250) = local_d8;
    *(undefined8 *)(param_1 + 600) = uStack_d0;
    *(undefined8 *)(param_1 + 0x218) = local_150;
    *(undefined8 *)(param_1 + 0x248) = local_130;
    iVar2 = 0;
    local_150 = 0;
    local_130 = 0;
    if (*(int *)(param_1 + 0x1e0) == 1) {
      local_26c = iVar4;
      local_268 = lVar6;
      if (local_194 < 1) {
        local_27c = 0;
        local_278 = 0;
      }
      else {
        local_278 = 0;
        lVar6 = 0;
        local_27c = 0;
        do {
          _Str1 = *(char **)(local_190 + lVar6 * 8);
          *(undefined2 *)(*(longlong *)(param_1 + 0x1f8) + lVar6 * 2) = 0;
          *(char **)(*(longlong *)(param_1 + 0x200) + lVar6 * 8) = ".notdef";
          if ((_Str1 != (char *)0x0) && (iVar4 = *(int *)(param_1 + 0x240), 0 < (longlong)iVar4)) {
            lVar1 = *(longlong *)(param_1 + 0x248);
            lVar7 = 0;
            do {
              _Str2 = *(char **)(lVar1 + lVar7 * 8);
              iVar3 = strcmp(_Str1,_Str2);
              if (iVar3 == 0) {
                *(short *)(*(longlong *)(param_1 + 0x1f8) + lVar6 * 2) = (short)lVar7;
                *(char **)(*(longlong *)(param_1 + 0x200) + lVar6 * 8) = _Str2;
                iVar4 = strcmp(".notdef",_Str2);
                if (iVar4 != 0) {
                  iVar4 = (int)lVar6;
                  if (iVar4 < local_27c) {
                    local_27c = iVar4;
                  }
                  iVar3 = (int)local_278;
                  local_278 = local_278 & 0xffffffff;
                  if (iVar3 <= (int)(iVar4 + 1U)) {
                    local_278 = (ulonglong)(iVar4 + 1U);
                  }
                }
                break;
              }
              lVar7 = lVar7 + 1;
            } while (iVar4 != lVar7);
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < local_194);
      }
      *(int *)(param_1 + 0x1ec) = local_27c;
      *(int *)(param_1 + 0x1f0) = (int)local_278;
      *(undefined4 *)(param_1 + 0x1e8) = local_1b8;
      lVar6 = local_268;
      iVar4 = local_26c;
    }
    FUN_140059a0c((longlong)local_260);
    if (iVar4 != 0) goto LAB_1400593fd;
    iVar2 = 3;
  }
  else {
LAB_1400593cf:
    FUN_140059a0c((longlong)local_260);
  }
  FUN_14001c53d(lVar6,*(longlong *)(param_1 + 0x2a8));
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
LAB_1400593fd:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_2a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_2a8);
  }
  return iVar2;
}

