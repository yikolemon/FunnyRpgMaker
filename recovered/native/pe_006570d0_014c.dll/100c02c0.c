/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c02c0 */

int * __thiscall FUN_100c02c0(int *param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  piVar3 = (int *)*param_1;
  if (*(char *)(param_3 + 0xd) == '\0') {
    iVar4 = *param_4;
    iVar5 = *(int *)(param_3 + 0x10);
    if (param_3 == *piVar3) {
      if (iVar4 < iVar5) {
LAB_100c0339:
        *param_2 = param_3;
LAB_100c033b:
        param_2[1] = 1;
        goto LAB_100c03b1;
      }
LAB_100c0370:
      iVar5 = *param_1;
      iVar6 = *(int *)(iVar5 + 4);
      uVar7 = 0;
      iVar2 = iVar6;
      if (*(char *)(iVar6 + 0xd) == '\0') {
        do {
          iVar6 = iVar2;
          iVar1 = *(int *)(iVar6 + 0x10);
          if (iVar4 <= iVar1) {
            iVar5 = iVar6;
          }
          iVar2 = *(int *)(iVar6 + (uint)(iVar1 < iVar4) * 8);
        } while (*(char *)(iVar2 + 0xd) == '\0');
        uVar7 = (uint)(iVar4 <= iVar1);
      }
      if ((*(char *)(iVar5 + 0xd) != '\0') || (iVar4 < *(int *)(iVar5 + 0x10))) {
        *param_2 = iVar6;
        param_2[1] = uVar7;
        goto LAB_100c03b1;
      }
      *param_2 = iVar5;
      param_2[1] = 2;
    }
    else {
      if (iVar4 < iVar5) {
        local_18 = param_3;
        piVar3 = (int *)FUN_100244ca();
        iVar5 = *piVar3;
        iVar4 = *param_4;
        if (*(int *)(iVar5 + 0x10) < iVar4) {
          if (*(char *)(*(int *)(iVar5 + 8) + 0xd) != '\0') goto LAB_100c032a;
          goto LAB_100c0339;
        }
        goto LAB_100c0370;
      }
      if (iVar5 < iVar4) {
        local_1c = param_3;
        piVar3 = (int *)FUN_10016fb8();
        iVar5 = *piVar3;
        if ((*(char *)(iVar5 + 0xd) == '\0') && (iVar4 = *param_4, *(int *)(iVar5 + 0x10) <= iVar4))
        goto LAB_100c0370;
        if (*(char *)(*(int *)(param_3 + 8) + 0xd) != '\0') {
          *param_2 = param_3;
          goto LAB_100c032c;
        }
        *param_2 = iVar5;
        goto LAB_100c033b;
      }
      *param_2 = param_3;
      param_2[1] = 0;
    }
    *(undefined1 *)(param_2 + 2) = 1;
  }
  else {
    iVar5 = piVar3[2];
    if ((*(char *)(piVar3[1] + 0xd) == '\0') && (iVar4 = *param_4, iVar4 <= *(int *)(iVar5 + 0x10)))
    goto LAB_100c0370;
LAB_100c032a:
    *param_2 = iVar5;
LAB_100c032c:
    param_2[1] = 0;
LAB_100c03b1:
    *(undefined1 *)(param_2 + 2) = 0;
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_2;
}

