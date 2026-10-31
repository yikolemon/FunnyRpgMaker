/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10102a1a */

undefined4 FUN_10102a1a(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  float fVar8;
  
  iVar4 = DAT_1039d74c;
  iVar7 = *(int *)(DAT_1039d74c + 0x14cc);
  if ((param_1 & 0xfffc005f) != 0) {
    FUN_100fcef5("Invalid flags for IsItemHovered()!");
  }
  if (((*(char *)(iVar4 + 0x2041) == '\x01') && ((param_1 >> 0xb & 1) == 0)) &&
     (*(char *)(iVar4 + 0x2040) != '\0')) {
    cVar5 = FUN_10102c44();
    if (cVar5 == '\0') {
      return 0;
    }
    if (((param_1 >> 10 & 1) == 0) && ((*(uint *)(iVar4 + 0x1e84) & 0x40) != 0)) {
      return 0;
    }
    if ((param_1 >> 0xc & 1) != 0) {
      param_1 = FUN_10102c78();
    }
  }
  else {
    uVar1 = *(uint *)(iVar4 + 0x1e88);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    if ((param_1 >> 0xc & 1) != 0) {
      param_1 = FUN_10102c78();
    }
    if ((*(int *)(iVar4 + 0x14d0) != iVar7) && ((param_1 & 0x200) == 0 && (uVar1 & 0x80) == 0)) {
      return 0;
    }
    iVar2 = *(int *)(iVar4 + 0x1e80);
    if (((((-1 < (char)param_1) && (iVar3 = *(int *)(iVar4 + 0x1528), iVar3 != 0)) &&
         ((iVar3 != iVar2 &&
          ((*(char *)(iVar4 + 0x1535) == '\0' && (*(char *)(iVar4 + 0x153a) == '\0')))))) &&
        ((iVar3 != *(int *)(iVar7 + 0xb4) || ((iVar2 != 0 && (*(int *)(iVar4 + 0x153c) != iVar2)))))
        ) && (iVar3 != *(int *)(iVar7 + 0xb8))) {
      return 0;
    }
    bVar6 = FUN_1010296d(iVar7,param_1);
    uVar1 = *(uint *)(iVar4 + 0x1e84);
    if (((byte)(uVar1 >> 0xd) & 1 | bVar6) != 1) {
      return 0;
    }
    if (((param_1 >> 10 & 1) == 0 & (byte)((uVar1 & 0x40) >> 6)) != 0) {
      return 0;
    }
    if ((iVar2 == *(int *)(iVar7 + 0xb4)) && (*(char *)(iVar7 + 0xfb) != '\0')) {
      return 0;
    }
    if (((((param_1 >> 8 & 1) == 0) && ((uVar1 & 0x4000) != 0)) && (iVar2 != 0)) &&
       (*(int *)(iVar4 + 0x1514) != iVar2)) {
      return 0;
    }
  }
  if ((param_1 >> 0x10 & 1) == 0) {
    fVar8 = 0.0;
    if ((short)param_1 < 0) {
      fVar8 = *(float *)(DAT_1039d74c + 0x11f4);
    }
  }
  else {
    fVar8 = *(float *)(DAT_1039d74c + 0x11f8);
  }
  if (((param_1 >> 0xd & 1) != 0) || (0.0 < fVar8)) {
    iVar7 = *(int *)(iVar4 + 0x1e80);
    if (iVar7 == 0) {
      iVar7 = FUN_10102c8c(iVar4 + 0x1e8c);
    }
    if (((param_1 >> 0x11 & 1) != 0) && (*(int *)(iVar4 + 0x244c) != iVar7)) {
      *(undefined4 *)(iVar4 + 0x2450) = 0;
    }
    *(int *)(iVar4 + 0x2448) = iVar7;
    if ((((param_1 >> 0xd & 1) != 0) && (*(int *)(iVar4 + 0x2458) != iVar7)) ||
       (*(float *)(iVar4 + 0x2450) <= fVar8 && fVar8 != *(float *)(iVar4 + 0x2450))) {
      return 0;
    }
  }
  return 1;
}

