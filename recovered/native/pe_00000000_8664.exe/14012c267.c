/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012c267 */

longlong FUN_14012c267(longlong *param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (param_1 != (longlong *)0x0) {
    if (*(code **)(*param_1 + 0x30) == (code *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
    }
    if (param_3 == '\0') {
      return lVar3;
    }
    if (lVar3 != 0) {
      return lVar3;
    }
    lVar3 = param_1[1];
    uVar1 = *(uint *)(lVar3 + 0x14);
    if ((ulonglong)uVar1 != 0) {
      puVar5 = (undefined8 *)(lVar3 + 0x18);
      do {
        plVar2 = (longlong *)*puVar5;
        if (((plVar2 != param_1) && (*(code **)(*plVar2 + 0x30) != (code *)0x0)) &&
           (lVar4 = (**(code **)(*plVar2 + 0x30))(plVar2,param_2), lVar4 != 0)) {
          return lVar4;
        }
        puVar5 = puVar5 + 1;
      } while (puVar5 < (undefined8 *)(lVar3 + (ulonglong)uVar1 * 8 + 0x18));
    }
  }
  return 0;
}

