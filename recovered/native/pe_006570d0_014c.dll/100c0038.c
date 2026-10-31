/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c0038 */

int * __thiscall FUN_100c0038(int *param_1,int *param_2,int param_3,uint *param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  piVar2 = (int *)*param_1;
  if (*(char *)(param_3 + 0xd) == '\0') {
    uVar3 = *param_4;
    uVar6 = *(uint *)(param_3 + 0x10);
    if (param_3 == *piVar2) {
      if (uVar3 < uVar6) {
LAB_100c00b1:
        *param_2 = param_3;
LAB_100c00b3:
        param_2[1] = 1;
        goto LAB_100c0129;
      }
LAB_100c00e8:
      iVar4 = *param_1;
      iVar5 = *(int *)(iVar4 + 4);
      uVar6 = 0;
      iVar1 = iVar5;
      if (*(char *)(iVar5 + 0xd) == '\0') {
        do {
          iVar5 = iVar1;
          uVar6 = *(uint *)(iVar5 + 0x10);
          if (uVar6 >= uVar3) {
            iVar4 = iVar5;
          }
          iVar1 = *(int *)(iVar5 + (uint)(uVar6 < uVar3) * 8);
        } while (*(char *)(iVar1 + 0xd) == '\0');
        uVar6 = (uint)(uVar3 <= uVar6);
      }
      if ((*(char *)(iVar4 + 0xd) != '\0') || (uVar3 < *(uint *)(iVar4 + 0x10))) {
        *param_2 = iVar5;
        param_2[1] = uVar6;
        goto LAB_100c0129;
      }
      *param_2 = iVar4;
      param_2[1] = 2;
    }
    else {
      if (uVar3 < uVar6) {
        local_18 = param_3;
        piVar2 = (int *)FUN_100244ca();
        iVar4 = *piVar2;
        uVar3 = *param_4;
        if (*(uint *)(iVar4 + 0x10) < uVar3) {
          if (*(char *)(*(int *)(iVar4 + 8) + 0xd) != '\0') goto LAB_100c00a2;
          goto LAB_100c00b1;
        }
        goto LAB_100c00e8;
      }
      if (uVar6 < uVar3) {
        local_1c = param_3;
        piVar2 = (int *)FUN_10016fb8();
        iVar4 = *piVar2;
        if ((*(char *)(iVar4 + 0xd) == '\0') && (uVar3 = *param_4, *(uint *)(iVar4 + 0x10) <= uVar3)
           ) goto LAB_100c00e8;
        if (*(char *)(*(int *)(param_3 + 8) + 0xd) != '\0') {
          *param_2 = param_3;
          goto LAB_100c00a4;
        }
        *param_2 = iVar4;
        goto LAB_100c00b3;
      }
      *param_2 = param_3;
      param_2[1] = 0;
    }
    *(undefined1 *)(param_2 + 2) = 1;
  }
  else {
    iVar4 = piVar2[2];
    if ((*(char *)(piVar2[1] + 0xd) == '\0') && (uVar3 = *param_4, uVar3 <= *(uint *)(iVar4 + 0x10))
       ) goto LAB_100c00e8;
LAB_100c00a2:
    *param_2 = iVar4;
LAB_100c00a4:
    param_2[1] = 0;
LAB_100c0129:
    *(undefined1 *)(param_2 + 2) = 0;
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_2;
}

