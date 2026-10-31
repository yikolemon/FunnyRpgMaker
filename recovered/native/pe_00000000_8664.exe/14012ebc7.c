/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012ebc7 */

longlong * FUN_14012ebc7(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_2 + 0x20);
  local_30 = param_1;
  uVar3 = (**(code **)(param_2 + 0x10))(&local_30);
  plVar5 = plVar1 + (uVar3 & 0xffffffff) % (ulonglong)*(uint *)(param_2 + 4);
  lVar4 = *plVar5;
  if (lVar4 != 0) {
    do {
      cVar2 = (**(code **)(param_2 + 0x18))(lVar4,&local_30);
      if (cVar2 != '\0') break;
      plVar5 = plVar5 + -1;
      if (plVar5 < plVar1) {
        plVar5 = plVar1 + (*(int *)(param_2 + 4) - 1);
      }
      lVar4 = *plVar5;
    } while (lVar4 != 0);
  }
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_58)) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
}

