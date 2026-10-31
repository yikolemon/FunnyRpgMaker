/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ee655 */

void FUN_1801ee655(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [32];
  uint *local_38;
  int local_2c;
  int local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  if (*param_2 == 1) {
    plVar4 = (longlong *)(param_1 + 0xf8);
    uVar5 = 0;
    if (4 < *(ushort *)(param_1 + 0xe8)) {
      uVar5 = *(ushort *)(param_1 + 0xe8) - 4;
    }
  }
  else {
    if (*param_2 != 0) {
      if (*(char *)(param_1 + 0x2c6) != '\0') {
        *(undefined4 *)(param_1 + 0x20) = 0x86;
      }
      goto LAB_1801ee73d;
    }
    plVar4 = (longlong *)(param_1 + 0x130);
    uVar5 = (uint)*(ushort *)(param_1 + 0x120);
  }
  lVar2 = *plVar4;
  local_38 = &local_24;
  cVar3 = FUN_1801f8dc7(param_1,&local_28,&local_2c,lVar2);
  if (cVar3 == '\0') {
    if (((local_28 != 0) && (*(int *)(param_1 + 0x324) == 0)) && (uVar5 != 0)) {
      uVar6 = 0;
      do {
        if (local_24 != uVar6) {
          piVar1 = (int *)(lVar2 + uVar6 * 8);
          *piVar1 = *piVar1 + local_28;
        }
        uVar6 = uVar6 + 1;
      } while (uVar5 != uVar6);
    }
    if (((local_2c != 0) && (*(int *)(param_1 + 0x324) != 7)) && (uVar5 != 0)) {
      uVar6 = 0;
      do {
        if (local_24 != uVar6) {
          piVar1 = (int *)(lVar2 + 4 + uVar6 * 8);
          *piVar1 = *piVar1 + local_2c;
        }
        uVar6 = uVar6 + 1;
      } while (uVar5 != uVar6);
    }
  }
LAB_1801ee73d:
  if (DAT_180402640 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
  }
  return;
}

