/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140324d6a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140324d6a(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  lVar6 = DAT_14062a630;
  local_38 = ram0x000140613b10 ^ (ulonglong)auStack_68;
  lVar9 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar9 + 0x71) == '\x01') {
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar9 + 8);
    FUN_140324718(param_1);
LAB_140324dc5:
    bVar5 = false;
  }
  else {
    if (*(longlong *)(lVar9 + 8) == *(longlong *)(param_1 + 0x60)) goto LAB_140324dc5;
    *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(param_1 + 0x60);
    bVar5 = true;
  }
  lVar9 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar9 + 0x72) == '\x01') {
    uVar8 = *(undefined8 *)(lVar9 + 0x10);
    *(undefined8 *)(param_1 + 0x70) = uVar8;
    *(undefined8 *)(param_1 + 0x68) = uVar8;
    FUN_140324718(param_1);
    lVar9 = *(longlong *)(param_1 + 0x48);
LAB_140324e3c:
    *(ulonglong *)(lVar9 + 0x20) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(lVar9 + 0x148) >> 0x20) +
                  (float)((ulonglong)*(undefined8 *)(lVar9 + 8) >> 0x20),
                  (float)*(undefined8 *)(lVar9 + 0x148) + (float)*(undefined8 *)(lVar9 + 8));
    FUN_14033d41a(lVar9,&local_40,lVar9 + 0x148,lVar9 + 0x150);
    *(undefined8 *)(lVar9 + 0x28) = local_40;
    if (!bVar5) goto LAB_140324e83;
  }
  else {
    if (*(longlong *)(lVar9 + 0x10) == *(longlong *)(param_1 + 0x68)) goto LAB_140324e3c;
    *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(param_1 + 0x68);
    lVar9 = *(longlong *)(param_1 + 0x48);
    *(ulonglong *)(lVar9 + 0x20) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(lVar9 + 0x148) >> 0x20) +
                  (float)((ulonglong)*(undefined8 *)(lVar9 + 8) >> 0x20),
                  (float)*(undefined8 *)(lVar9 + 0x148) + (float)*(undefined8 *)(lVar9 + 8));
    FUN_14033d41a(lVar9,&local_40,lVar9 + 0x148,lVar9 + 0x150);
    *(undefined8 *)(lVar9 + 0x28) = local_40;
  }
  FUN_1403409b4(*(undefined8 *)(param_1 + 0x48));
LAB_140324e83:
  uVar10 = *(uint *)(*(longlong *)(param_1 + 0x48) + 4) & 0xfffffae7;
  uVar2 = *(uint *)(param_1 + 0x14);
  uVar11 = uVar2 >> 0xf & 0x400;
  uVar1 = uVar11 + uVar10;
  uVar10 = uVar11 + 0x10 + uVar10;
  uVar11 = uVar1;
  if (*(char *)(lVar6 + 0x86) != '\0') {
    uVar11 = uVar10;
  }
  if ((uVar2 & 0x16000000) != 0) {
    uVar11 = uVar10;
  }
  if ((uVar2 & 0x8000000) != 0) {
    uVar11 = uVar1;
  }
  uVar1 = uVar11;
  if (*(char *)(lVar6 + 0x87) != '\0') {
    uVar1 = uVar11 + 8;
  }
  if ((uVar2 & 0x16000000) != 0) {
    uVar1 = uVar11 + 8;
  }
  uVar10 = uVar1 | 0x60;
  if ((uVar2 & 0x16000000) == 0) {
    uVar10 = uVar1;
  }
  if ((uVar2 & 0x8000000) != 0) {
    uVar10 = uVar1;
  }
  *(uint *)(*(longlong *)(param_1 + 0x48) + 4) =
       ~*(uint *)(param_1 + 0x30) & (uVar10 | *(uint *)(param_1 + 0x2c));
  *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x58) = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x24) == -1) {
    if ((param_2 == 0 || (uVar2 & 0x6000000) == 0) ||
       ((*(char *)(param_2 + 0x112) == '\x01' && (*(char *)(param_2 + 0x10a) != '\x01')))) {
      if (*(char *)(lVar6 + 0x88) == '\0') {
        uVar8 = FUN_140320dbe();
      }
      else {
        uVar8 = 0;
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x38) = uVar8;
      uVar7 = 0x11111111;
      if (*(char *)(lVar6 + 0x88) != '\0') {
        uVar7 = 0;
      }
    }
    else {
      puVar4 = *(undefined4 **)(param_2 + 0x48);
      *(undefined4 **)(*(longlong *)(param_1 + 0x48) + 0x38) = puVar4;
      uVar7 = *puVar4;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x34) = uVar7;
  }
  else {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x34);
    *(int *)(*(longlong *)(param_1 + 0x48) + 0x34) = *(int *)(param_1 + 0x24);
    lVar9 = *(longlong *)(param_1 + 0x48);
    if (*(int *)(lVar9 + 0x34) != iVar3) {
      uVar8 = FUN_140320d89();
      *(undefined8 *)(lVar9 + 0x38) = uVar8;
    }
  }
  if (ram0x000140613b10 == (local_38 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_38 ^ (ulonglong)auStack_68);
}

