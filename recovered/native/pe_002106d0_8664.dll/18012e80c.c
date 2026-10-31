/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012e80c */

void FUN_18012e80c(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  
  lVar2 = DAT_180419160;
  lVar1 = *(longlong *)(DAT_180419160 + 0x2200);
  if (lVar1 == 0) {
    return;
  }
  if (*(longlong *)(DAT_180419160 + 0x23e8) != 0) {
    return;
  }
  if ((*(byte *)(lVar1 + 0x16) & 1) != 0) {
    return;
  }
  if (*(char *)(DAT_180419160 + 0x23da) != '\x01') {
    return;
  }
  cVar3 = FUN_180118b8a(0x200,1,0xffffffff);
  if (cVar3 == '\0') {
    return;
  }
  if (*(char *)(lVar2 + 0x138) != '\0') {
    return;
  }
  if (*(char *)(lVar2 + 0x13a) != '\0') {
    return;
  }
  cVar3 = *(char *)(lVar2 + 0x139);
  uVar4 = 0xffffffff;
  if ((*(byte *)(lVar2 + 0x30) & 1) != 0) {
    if (cVar3 != '\0') goto LAB_18012e8b2;
    uVar4 = 1;
    cVar3 = *(char *)(lVar2 + 0x21f4);
  }
  if (cVar3 == '\0') {
    uVar4 = (uint)(*(int *)(lVar2 + 0x167c) != 0);
  }
LAB_18012e8b2:
  *(uint *)(lVar2 + 0x22e0) = uVar4;
  uVar5 = 3;
  if (*(char *)(lVar1 + 0x110) != '\0') {
    uVar5 = 0x21;
  }
  FUN_18011711d(0xffffffff,uVar4 >> 0x1f ^ 3,0x1400,uVar5);
  *(undefined4 *)(lVar2 + 0x22e4) = 0xffffffff;
  return;
}

