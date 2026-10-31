/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e3a12 */

undefined8 FUN_1400e3a12(longlong param_1,undefined2 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_58 [38];
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 8);
  local_32 = param_2;
  FUN_1400e61a7(param_1,&local_32);
  uVar5 = local_32;
  iVar1 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar9);
      lVar7 = *(longlong *)(lVar4 + 0x88);
      if (lVar7 == 0) {
        lVar7 = *(longlong *)(lVar2 + 0x2b8);
      }
      if (*(code **)(lVar7 + 0x28) != (code *)0x0) {
        cVar6 = (**(code **)(lVar7 + 0x28))(lVar2,lVar4,uVar5);
        if (cVar6 != '\0') {
          uVar8 = 1;
          goto LAB_1400e3a97;
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar1 * 8 != lVar9);
  }
  uVar8 = 0;
LAB_1400e3a97:
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
}

