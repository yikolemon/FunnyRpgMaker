/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1013053e */

void FUN_1013053e(int param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  
  iVar5 = DAT_1039d74c;
  iVar6 = *(int *)(DAT_1039d74c + 0x2414);
  bVar7 = *param_2;
  if (*(char *)(iVar6 + 0x4e) != '\x01') goto LAB_101305ee;
  bVar4 = *(char *)(iVar6 + 0x4c) == '\x01';
  if (*(char *)(iVar6 + 0x4c) == -1) {
    bVar4 = bVar7;
  }
  bVar7 = bVar4;
  if (*(char *)(iVar6 + 0x4f) == '\x01') {
    iVar1 = *(int *)(iVar6 + 0x28);
    iVar2 = *(int *)(DAT_1039d74c + 0x1e58);
    iVar3 = *(int *)(DAT_1039d74c + 0x1e5c);
    if ((*(char *)(iVar6 + 0x52) == '\0') && (*(int *)(DAT_1039d74c + 0x2204) == param_1)) {
      *(undefined1 *)(iVar6 + 0x52) = 1;
      if ((*(uint *)(iVar1 + 0x18) & *(uint *)(iVar1 + 0x1c)) == 0xffffffff) {
        *(int *)(iVar1 + 0x18) = iVar2;
        *(int *)(iVar1 + 0x1c) = iVar3;
        *(byte *)(iVar1 + 0x10) = bVar4;
      }
    }
    else if ((iVar3 != *(int *)(iVar1 + 0x1c) || iVar2 != *(int *)(iVar1 + 0x18)) &&
            (*(char *)(iVar6 + 0x51) == *(char *)(iVar6 + 0x52))) {
      if ((*(byte *)(iVar6 + 0x49) & 0x10) == 0) {
        bVar7 = bVar4 & *(byte *)(iVar6 + 0x30) >> 4;
      }
      goto LAB_101305e8;
    }
    bVar7 = *(char *)(iVar1 + 0x10) != '\0';
  }
LAB_101305e8:
  *param_2 = bVar7;
LAB_101305ee:
  if (param_3 != (uint *)0x0) {
    uVar8 = *param_3 & 0xfff7ffcf;
    if ((*(uint *)(iVar6 + 0x30) >> 0xe & 1) == 0) {
      if ((short)*(uint *)(iVar6 + 0x30) < 0) {
        uVar8 = uVar8 | 0x80020;
      }
      else {
        iVar6 = 0x10;
        if ((bVar7 != 0) && (iVar6 = 0x20, *(int *)(iVar5 + 0x1528) == param_1)) {
          iVar6 = (*(byte *)(iVar5 + 0x1537) ^ 1) * 0x10 + 0x10;
        }
        uVar8 = uVar8 + iVar6 + 0x80000;
      }
    }
    else {
      uVar8 = uVar8 | 0x80010;
    }
    *param_3 = uVar8;
  }
  return;
}

