/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801361c8 */

void FUN_1801361c8(int param_1,byte *param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  
  lVar4 = DAT_180419160;
  lVar1 = *(longlong *)(DAT_180419160 + 0x2638);
  bVar8 = *param_2;
  if (*(char *)(lVar1 + 0x52) != '\x01') goto LAB_180136267;
  bVar5 = *(char *)(lVar1 + 0x50) == '\x01';
  if (*(char *)(lVar1 + 0x50) == -1) {
    bVar5 = bVar8;
  }
  bVar8 = bVar5;
  if (*(char *)(lVar1 + 0x53) == '\x01') {
    lVar2 = *(longlong *)(lVar1 + 0x28);
    lVar3 = *(longlong *)(DAT_180419160 + 0x1fb8);
    if ((*(char *)(lVar1 + 0x56) == '\0') && (*(int *)(DAT_180419160 + 0x23cc) == param_1)) {
      *(undefined1 *)(lVar1 + 0x56) = 1;
      if (*(longlong *)(lVar2 + 0x18) == -1) {
        *(longlong *)(lVar2 + 0x18) = lVar3;
        *(byte *)(lVar2 + 0x14) = bVar8;
      }
    }
    else if ((*(longlong *)(lVar2 + 0x18) != lVar3) &&
            (*(char *)(lVar1 + 0x55) == *(char *)(lVar1 + 0x56))) {
      if ((*(byte *)(lVar1 + 0x4d) & 0x10) == 0) {
        bVar8 = bVar8 & *(byte *)(lVar1 + 0x34) >> 4;
      }
      goto LAB_180136264;
    }
    bVar8 = *(char *)(lVar2 + 0x14) != '\0';
  }
LAB_180136264:
  *param_2 = bVar8;
LAB_180136267:
  if (param_3 != (uint *)0x0) {
    uVar6 = *param_3 & 0xfff7ffcf;
    if ((*(uint *)(lVar1 + 0x34) >> 0xe & 1) == 0) {
      if ((short)*(uint *)(lVar1 + 0x34) < 0) {
        uVar6 = uVar6 | 0x80020;
      }
      else {
        iVar7 = 0x10;
        if ((bVar8 != 0) && (iVar7 = 0x20, *(int *)(lVar4 + 0x167c) == param_1)) {
          iVar7 = (*(byte *)(lVar4 + 0x168b) ^ 1) * 0x10 + 0x10;
        }
        uVar6 = uVar6 + iVar7 + 0x80000;
      }
    }
    else {
      uVar6 = uVar6 | 0x80010;
    }
    *param_3 = uVar6;
  }
  return;
}

