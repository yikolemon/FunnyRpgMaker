/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011454d */

undefined4 FUN_1011454d(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar1 = DAT_1039d74c;
  uVar2 = FUN_101135c0(param_1);
  uVar5 = uVar2 & 0xf000;
  if (*(uint *)(iVar1 + 0x108) == uVar5) {
    uVar3 = uVar2 & 0xffff0fff;
    if (((uVar2 & 0xffff0fff) == 0) && (uVar3 = uVar5, uVar5 - 1 < (uVar5 ^ uVar5 - 1))) {
      uVar2 = 0;
      if (uVar5 != 0) {
        for (; (uVar5 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
      uVar3 = uVar2 + 0x28b;
      if ((uVar2 & 0x1c) != 0xc) {
        uVar3 = uVar5;
      }
    }
    uVar4 = FUN_10113d60(uVar3,param_2,param_3);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

