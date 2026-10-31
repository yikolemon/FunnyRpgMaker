/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012b03c */

undefined8 FUN_14012b03c(longlong *param_1)

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
        lVar4 = FUN_14012ad43(lVar1 + 0xa8,param_1);
        if (lVar4 != 0) {
          FUN_14012ad5f(lVar1 + 0xa8,lVar4);
          FUN_140128b39(uVar3,lVar4);
          if (*(longlong **)(lVar1 + 0x80) == param_1) {
            *(undefined8 *)(lVar1 + 0x80) = 0;
            if (*(longlong *)(lVar1 + 0xa8) != 0) {
              *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(*(longlong *)(lVar1 + 0xa8) + 0x10);
            }
          }
          FUN_14012b107(uVar3,param_1,lVar2);
          uVar5 = 0;
        }
      }
    }
  }
  return uVar5;
}

