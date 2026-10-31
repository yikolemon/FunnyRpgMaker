/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cc068 */

undefined8 FUN_1801cc068(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x24;
  if (param_1 != (longlong *)0x0) {
    lVar1 = *param_1;
    if (lVar1 == 0) {
      uVar5 = 0x23;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x90);
      if (lVar2 == 0) {
        uVar5 = 0x22;
      }
      else {
        uVar3 = *(undefined8 *)(lVar2 + 0x10);
        lVar4 = FUN_1801cbd6f(lVar1 + 0xa8,param_1);
        if (lVar4 != 0) {
          FUN_1801cbd8b(lVar1 + 0xa8,lVar4);
          FUN_1801c9b65(uVar3,lVar4);
          if (*(longlong **)(lVar1 + 0x80) == param_1) {
            *(undefined8 *)(lVar1 + 0x80) = 0;
            if (*(longlong *)(lVar1 + 0xa8) != 0) {
              *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(*(longlong *)(lVar1 + 0xa8) + 0x10);
            }
          }
          FUN_1801cc133(uVar3,param_1,lVar2);
          uVar5 = 0;
        }
      }
    }
  }
  return uVar5;
}

