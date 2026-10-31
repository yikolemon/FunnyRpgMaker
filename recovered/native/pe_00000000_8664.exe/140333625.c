/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140333625 */

longlong FUN_140333625(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  
  uVar1 = *(undefined4 *)(param_2 + 0x4d0);
  lVar3 = FUN_140331d38(param_1,uVar1);
  if (lVar3 == 0) {
    lVar3 = FUN_14033224d(param_1,uVar1);
    *(uint *)(lVar3 + 0xd0) = *(uint *)(lVar3 + 0xd0) & 0xfffffe00 | 0x92;
    *(undefined4 *)(lVar3 + 0xb4) = *(undefined4 *)(param_1 + 4);
  }
  else if (*(longlong *)(lVar3 + 0x20) != 0) {
    FUN_14032f112(param_1,param_2,1);
    return 0;
  }
  bVar6 = *(byte *)(lVar3 + 0xd4);
  lVar5 = lVar3;
  if ((bVar6 & 1) == 0) {
    do {
      lVar4 = lVar5;
      lVar2 = lVar4;
      if ((*(byte *)(lVar4 + 0xd4) & 1) != 0) break;
      lVar5 = *(longlong *)(lVar4 + 0x18);
    } while (*(longlong *)(lVar4 + 0x18) != 0);
    do {
      lVar5 = lVar2;
      lVar2 = *(longlong *)(lVar5 + 0x18);
    } while (lVar2 != 0);
    FUN_14034137a(lVar5);
    FUN_1403413cb(lVar4,*(undefined8 *)(lVar4 + 0x48),*(undefined8 *)(lVar4 + 0x50),lVar3);
    bVar6 = *(byte *)(lVar3 + 0xd4);
  }
  FUN_140340e71(lVar3,param_2,1);
  *(byte *)(lVar3 + 0xd4) = *(byte *)(lVar3 + 0xd4) & 0xfe | bVar6 & 1;
  return lVar3;
}

