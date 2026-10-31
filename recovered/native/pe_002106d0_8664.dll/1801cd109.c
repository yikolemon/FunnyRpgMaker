/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cd109 */

undefined8 FUN_1801cd109(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_1 == 0) {
    uVar3 = 0x21;
  }
  else {
    uVar3 = 0x22;
    if (param_2 != 0) {
      uVar2 = *(uint *)(param_1 + 0x14);
      if ((ulonglong)uVar2 != 0) {
        plVar5 = (longlong *)(param_1 + 0x18);
        lVar1 = param_1 + (ulonglong)uVar2 * 8;
        do {
          if (*plVar5 == param_2) {
            *(uint *)(param_1 + 0x14) = uVar2 - 1;
            plVar4 = (longlong *)(lVar1 + 0x10);
            for (; plVar5 < plVar4; plVar5 = plVar5 + 1) {
              *plVar5 = plVar5[1];
            }
            *plVar4 = 0;
            FUN_1801cd316(param_2);
            return 0;
          }
          plVar5 = plVar5 + 1;
        } while (plVar5 < (longlong *)(lVar1 + 0x18));
      }
    }
  }
  return uVar3;
}

