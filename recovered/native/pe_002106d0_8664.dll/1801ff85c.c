/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ff85c */

int FUN_1801ff85c(longlong param_1,int param_2,int param_3)

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
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  local_3c = 0;
  piVar2 = *(int **)(param_1 + 0x2e0);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_1801c9a4b(uVar1,0x300,&local_3c);
    if (local_3c != 0) goto LAB_1801ffa50;
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
LAB_1801ff8a9:
    if (param_3 == 0) goto LAB_1801ffa50;
    if ((piVar2[1] == 0) || (piVar2[1] == param_3)) {
      piVar2[1] = param_3;
      goto LAB_1801ffa50;
    }
  }
  else {
    if (*piVar2 == 0) {
      local_58 = 0;
      local_50 = &local_3c;
      uVar3 = FUN_1801c9c3f(uVar1,0x38,0,param_2);
      *(undefined8 *)(piVar2 + 0x48) = uVar3;
      if (local_3c != 0) goto LAB_1801ffa50;
      local_58 = 0;
      local_50 = &local_3c;
      uVar3 = FUN_1801c9c3f(uVar1,0xc4,0,param_2);
      *(undefined8 *)(piVar2 + 0x6a) = uVar3;
      if (local_3c != 0) goto LAB_1801ffa50;
      local_58 = 0;
      local_50 = &local_3c;
      lVar4 = FUN_1801c9c3f(uVar1,0x10,0);
      *(longlong *)(piVar2 + 0x8e) = lVar4;
      if (local_3c != 0) goto LAB_1801ffa50;
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
      goto LAB_1801ff8a9;
    }
    if (*piVar2 == param_2) goto LAB_1801ff8a9;
  }
  local_3c = 3;
LAB_1801ffa50:
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_78)) {
    return local_3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_78);
}

