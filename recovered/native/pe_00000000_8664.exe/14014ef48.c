/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014ef48 */

int FUN_14014ef48(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int *local_50;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  local_3c = 0;
  piVar2 = *(int **)(param_1 + 0x2e0);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_140128a1f(uVar1,0x300,&local_3c);
    if (local_3c != 0) goto LAB_14014f13c;
    piVar2[0xbe] = 0;
    piVar2[10] = 0;
    piVar2[0xb] = 0;
    piVar2[0x42] = 0;
    piVar2[0x43] = 0;
    piVar2[0x44] = 0;
    piVar2[0x45] = 0;
    *(int **)(param_1 + 0x2e0) = piVar2;
  }
  if (param_2 == 0) {
LAB_14014ef95:
    if (param_3 == 0) goto LAB_14014f13c;
    if ((piVar2[1] == 0) || (piVar2[1] == param_3)) {
      piVar2[1] = param_3;
      goto LAB_14014f13c;
    }
  }
  else {
    if (*piVar2 == 0) {
      local_58 = 0;
      local_50 = &local_3c;
      uVar3 = FUN_140128c13(uVar1,0x38,0,param_2);
      *(undefined8 *)(piVar2 + 0x48) = uVar3;
      if (local_3c != 0) goto LAB_14014f13c;
      local_58 = 0;
      local_50 = &local_3c;
      uVar3 = FUN_140128c13(uVar1,0xc4,0,param_2);
      *(undefined8 *)(piVar2 + 0x6a) = uVar3;
      if (local_3c != 0) goto LAB_14014f13c;
      local_58 = 0;
      local_50 = &local_3c;
      lVar4 = FUN_140128c13(uVar1,0x10,0);
      *(longlong *)(piVar2 + 0x8e) = lVar4;
      if (local_3c != 0) goto LAB_14014f13c;
      *(longlong *)(piVar2 + 0x46) = param_1 + 0xd8;
      *(longlong *)(piVar2 + 0x68) = param_1 + 0x114;
      *(longlong *)(piVar2 + 0x8c) = param_1 + 0x27c;
      if (param_2 != 1) {
        uVar5 = 3;
        if (3 < param_2 + 1U) {
          uVar5 = (ulonglong)(param_2 + 1U);
        }
        lVar6 = *(longlong *)(piVar2 + 0x48);
        lVar7 = *(longlong *)(piVar2 + 0x6a);
        lVar8 = 0;
        do {
          lVar7 = lVar7 + 0xc4;
          lVar6 = lVar6 + 0x38;
          lVar4 = lVar4 + 0x10;
          *(longlong *)(piVar2 + lVar8 * 2 + 0x4a) = lVar6;
          *(longlong *)(piVar2 + lVar8 * 2 + 0x6c) = lVar7;
          *(longlong *)(piVar2 + lVar8 * 2 + 0x90) = lVar4;
          lVar8 = lVar8 + 1;
        } while (uVar5 - 2 != lVar8);
      }
      *piVar2 = param_2;
      goto LAB_14014ef95;
    }
    if (*piVar2 == param_2) goto LAB_14014ef95;
  }
  local_3c = 3;
LAB_14014f13c:
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_78)) {
    return local_3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_78);
}

