/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140050c74 */

int FUN_140050c74(undefined8 *param_1,uint param_2,longlong *param_3,uint *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  local_4c = 0;
  if ((param_1 == (undefined8 *)0x0) || (*(uint *)(param_1 + 2) <= param_2)) {
    local_4c = 6;
    goto LAB_140050cf0;
  }
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[4];
  if (lVar2 == 0) {
    uVar5 = FUN_140020a41((longlong)plVar1,
                          *(int *)((longlong)param_1 + 0xc) + *(int *)(param_1 + 1) +
                          *(byte *)((longlong)param_1 + 0x14) * param_2);
    local_4c = (int)uVar5;
    if ((local_4c != 0) || (uVar8 = FUN_140050e1e(param_1,&local_4c), local_4c != 0))
    goto LAB_140050cf0;
    if (uVar8 == 0) goto LAB_140050d7a;
    do {
      uVar4 = FUN_140050e1e(param_1,&local_4c);
      if (uVar4 != 0) goto LAB_140050d94;
      param_2 = param_2 + 1;
    } while (param_2 < *(uint *)(param_1 + 2));
  }
  else {
    uVar7 = (ulonglong)param_2;
    uVar8 = *(uint *)(lVar2 + uVar7 * 4);
    if (uVar8 == 0) {
LAB_140050d7a:
      uVar8 = 0;
    }
    else {
      do {
        uVar4 = *(uint *)(lVar2 + 4 + uVar7 * 4);
        if (uVar4 != 0) goto LAB_140050d94;
        uVar7 = uVar7 + 1;
      } while (*(uint *)(param_1 + 2) != uVar7);
    }
  }
  uVar3 = (int)plVar1[1] + 1;
  uVar4 = 0;
LAB_140050d85:
  uVar6 = *(uint *)(param_1 + 3);
  if (uVar3 - uVar4 < uVar6) goto LAB_140050da1;
LAB_140050da5:
  if ((uVar8 == 0) || (uVar3 = uVar4 - uVar8, uVar4 < uVar8 || uVar3 == 0)) {
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    *param_4 = uVar3;
    if (param_1[5] == 0) {
      uVar5 = FUN_140020a41((longlong)plVar1,(uVar8 + *(int *)(param_1 + 3)) - 1);
      local_4c = (int)uVar5;
      if (local_4c == 0) {
        local_4c = FUN_140021039(plVar1,uVar3,param_3);
      }
    }
    else {
      *param_3 = param_1[5] + (ulonglong)uVar8 + -1;
    }
  }
LAB_140050cf0:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_78);
  }
  return local_4c;
LAB_140050d94:
  uVar3 = (int)plVar1[1] + 1;
  if (uVar4 <= uVar3) goto LAB_140050d85;
  uVar6 = *(uint *)(param_1 + 3);
LAB_140050da1:
  uVar4 = uVar3 - uVar6;
  goto LAB_140050da5;
}

