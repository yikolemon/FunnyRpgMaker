/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004ce96 */

int FUN_14004ce96(longlong param_1,uint param_2,int param_3)

{
  undefined1 (*pauVar1) [32];
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStackY_78 [32];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  lVar3 = *(longlong *)(param_1 + 0x98);
  local_3c = 0;
  pauVar1 = *(undefined1 (**) [32])(param_1 + 0x2e0);
  if (pauVar1 == (undefined1 (*) [32])0x0) {
    pauVar1 = FUN_14001c423(lVar3,0x300,&local_3c);
    if (local_3c != 0) goto LAB_14004d08a;
    *(undefined4 *)(pauVar1[0x17] + 0x18) = 0;
    *(undefined8 *)(pauVar1[1] + 8) = 0;
    *(undefined8 *)(pauVar1[8] + 8) = 0;
    *(undefined8 *)(pauVar1[8] + 0x10) = 0;
    *(undefined1 (**) [32])(param_1 + 0x2e0) = pauVar1;
  }
  if (param_2 == 0) {
LAB_14004cee3:
    if (param_3 == 0) goto LAB_14004d08a;
    if ((*(int *)(*pauVar1 + 4) == 0) || (*(int *)(*pauVar1 + 4) == param_3)) {
      *(int *)(*pauVar1 + 4) = param_3;
      goto LAB_14004d08a;
    }
  }
  else {
    if (*(uint *)*pauVar1 == 0) {
      lVar2 = FUN_14001c617(lVar3,0x38,0,param_2,0,&local_3c);
      *(longlong *)pauVar1[9] = lVar2;
      if (local_3c != 0) goto LAB_14004d08a;
      lVar2 = FUN_14001c617(lVar3,0xc4,0,param_2,0,&local_3c);
      *(longlong *)(pauVar1[0xd] + 8) = lVar2;
      if (local_3c != 0) goto LAB_14004d08a;
      lVar3 = FUN_14001c617(lVar3,0x10,0,param_2,0,&local_3c);
      *(longlong *)(pauVar1[0x11] + 0x18) = lVar3;
      if (local_3c != 0) goto LAB_14004d08a;
      *(longlong *)(pauVar1[8] + 0x18) = param_1 + 0xd8;
      *(longlong *)pauVar1[0xd] = param_1 + 0x114;
      *(longlong *)(pauVar1[0x11] + 0x10) = param_1 + 0x27c;
      if (param_2 != 1) {
        uVar4 = 3;
        if (3 < param_2 + 1) {
          uVar4 = (ulonglong)(param_2 + 1);
        }
        lVar2 = *(longlong *)pauVar1[9];
        lVar5 = *(longlong *)(pauVar1[0xd] + 8);
        lVar6 = 0;
        do {
          lVar5 = lVar5 + 0xc4;
          lVar2 = lVar2 + 0x38;
          lVar3 = lVar3 + 0x10;
          *(longlong *)(pauVar1[9] + lVar6 * 8 + 8) = lVar2;
          *(longlong *)(pauVar1[0xd] + lVar6 * 8 + 0x10) = lVar5;
          *(longlong *)(pauVar1[0x12] + lVar6 * 8) = lVar3;
          lVar6 = lVar6 + 1;
        } while (uVar4 - 2 != lVar6);
      }
      *(uint *)*pauVar1 = param_2;
      goto LAB_14004cee3;
    }
    if (*(uint *)*pauVar1 == param_2) goto LAB_14004cee3;
  }
  local_3c = 3;
LAB_14004d08a:
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStackY_78)) {
    return local_3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStackY_78);
}

