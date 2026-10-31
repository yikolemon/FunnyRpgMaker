/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003bc89 */

void FUN_14003bc89(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStackY_58 [32];
  int local_2c;
  int local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStackY_58;
  if (*param_2 == 1) {
    plVar3 = (longlong *)(param_1 + 0xf8);
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
      goto LAB_14003bd71;
    }
    plVar3 = (longlong *)(param_1 + 0x130);
    uVar5 = (uint)*(ushort *)(param_1 + 0x120);
  }
  lVar2 = *plVar3;
  uVar4 = FUN_1400463fb(param_1,&local_28,&local_2c,lVar2,&local_24);
  if ((char)uVar4 == '\0') {
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
LAB_14003bd71:
  if (DAT_14012ea80 != (local_20 ^ (ulonglong)auStackY_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_20 ^ (ulonglong)auStackY_58);
  }
  return;
}

