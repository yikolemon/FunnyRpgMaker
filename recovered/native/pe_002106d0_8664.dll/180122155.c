/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180122155 */

longlong FUN_180122155(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  
  uVar1 = *(undefined4 *)(param_2 + 0x4d0);
  lVar3 = FUN_180120868(param_1,uVar1);
  if (lVar3 == 0) {
    lVar3 = FUN_180120d7d(param_1,uVar1);
    *(uint *)(lVar3 + 0xd0) = *(uint *)(lVar3 + 0xd0) & 0xfffffe00 | 0x92;
    *(undefined4 *)(lVar3 + 0xb4) = *(undefined4 *)(param_1 + 4);
  }
  else if (*(longlong *)(lVar3 + 0x20) != 0) {
    FUN_18011dc42(param_1,param_2,1);
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
    FUN_18012feaa(lVar5);
    FUN_18012fefb(lVar4,*(undefined8 *)(lVar4 + 0x48),*(undefined8 *)(lVar4 + 0x50),lVar3);
    bVar6 = *(byte *)(lVar3 + 0xd4);
  }
  FUN_18012f9a1(lVar3,param_2,1);
  *(byte *)(lVar3 + 0xd4) = *(byte *)(lVar3 + 0xd4) & 0xfe | bVar6 & 1;
  return lVar3;
}

