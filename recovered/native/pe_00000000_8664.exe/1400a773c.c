/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a773c */

void FUN_1400a773c(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  
  lVar2 = DAT_140f2a910;
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x2200);
  if (lVar1 == 0) {
    return;
  }
  if (*(longlong *)(DAT_140f2a910 + 0x23e8) != 0) {
    return;
  }
  if ((*(byte *)(lVar1 + 0x16) & 1) != 0) {
    return;
  }
  if (*(char *)(DAT_140f2a910 + 0x23da) != '\x01') {
    return;
  }
  cVar3 = FUN_140091ea2(0x200,1,0xffffffff);
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
    if (cVar3 != '\0') goto LAB_1400a77e2;
    uVar4 = 1;
    cVar3 = *(char *)(lVar2 + 0x21f4);
  }
  if (cVar3 == '\0') {
    uVar4 = (uint)(*(int *)(lVar2 + 0x167c) != 0);
  }
LAB_1400a77e2:
  *(uint *)(lVar2 + 0x22e0) = uVar4;
  uVar5 = 3;
  if (*(char *)(lVar1 + 0x110) != '\0') {
    uVar5 = 0x21;
  }
  FUN_140090435(0xffffffff,uVar4 >> 0x1f ^ 3,0x1400,uVar5);
  *(undefined4 *)(lVar2 + 0x22e4) = 0xffffffff;
  return;
}

