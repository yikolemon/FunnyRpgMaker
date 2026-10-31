/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400926a8 */

undefined8 FUN_1400926a8(undefined8 param_1,undefined1 param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  lVar1 = DAT_140f2a910;
  uVar2 = FUN_1400916c4();
  uVar5 = uVar2 & 0xf000;
  if (*(uint *)(lVar1 + 0x13c) != uVar5) {
    return 0;
  }
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
  uVar4 = FUN_140091ea2(uVar3,param_2,param_3);
  return uVar4;
}

