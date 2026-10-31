/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010eb01 */

void __fastcall FUN_1010eb01(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int local_24;
  int local_20;
  undefined8 local_1c;
  uint local_14;
  
  iVar10 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  iVar9 = *(int *)(param_1 + 0x3c);
  local_20 = param_2;
  if (*(char *)(iVar9 + 0x55) == '\x01') {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(iVar9 + 8);
    FUN_1010e508(param_1);
LAB_1010eb5b:
    bVar5 = false;
  }
  else {
    if (*(int *)(iVar9 + 0xc) == *(int *)(param_1 + 0x54) &&
        *(int *)(iVar9 + 8) == *(int *)(param_1 + 0x50)) goto LAB_1010eb5b;
    *(undefined8 *)(iVar9 + 8) = *(undefined8 *)(param_1 + 0x50);
    bVar5 = true;
  }
  iVar9 = *(int *)(param_1 + 0x3c);
  if (*(char *)(iVar9 + 0x56) == '\x01') {
    local_24 = iVar10;
    uVar6 = *(undefined4 *)(iVar9 + 0x10);
    uVar4 = *(undefined4 *)(iVar9 + 0x14);
    *(undefined4 *)(param_1 + 0x58) = uVar6;
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x60) = uVar6;
    *(undefined4 *)(param_1 + 100) = uVar4;
    FUN_1010e508(param_1);
    iVar9 = *(int *)(param_1 + 0x3c);
LAB_1010ebe3:
    *(ulonglong *)(iVar9 + 0x20) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(iVar9 + 0x100) >> 0x20) +
                  (float)((ulonglong)*(undefined8 *)(iVar9 + 8) >> 0x20),
                  (float)*(undefined8 *)(iVar9 + 0x100) + (float)*(undefined8 *)(iVar9 + 8));
    FUN_10126046(&local_1c,iVar9 + 0x100,iVar9 + 0x108);
    *(undefined8 *)(iVar9 + 0x28) = local_1c;
    iVar10 = local_24;
    if (!bVar5) goto LAB_1010ec2b;
  }
  else {
    if (*(int *)(iVar9 + 0x14) == *(int *)(param_1 + 0x5c) &&
        *(int *)(iVar9 + 0x10) == *(int *)(param_1 + 0x58)) {
      local_24 = iVar10;
      goto LAB_1010ebe3;
    }
    *(undefined8 *)(iVar9 + 0x10) = *(undefined8 *)(param_1 + 0x58);
    iVar9 = *(int *)(param_1 + 0x3c);
    *(ulonglong *)(iVar9 + 0x20) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(iVar9 + 0x100) >> 0x20) +
                  (float)((ulonglong)*(undefined8 *)(iVar9 + 8) >> 0x20),
                  (float)*(undefined8 *)(iVar9 + 0x100) + (float)*(undefined8 *)(iVar9 + 8));
    FUN_10126046(&local_1c,iVar9 + 0x100,iVar9 + 0x108);
    *(undefined8 *)(iVar9 + 0x28) = local_1c;
  }
  FUN_101293f2();
LAB_1010ec2b:
  uVar7 = *(uint *)(*(int *)(param_1 + 0x3c) + 4) & 0xfffffae7;
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar11 = uVar1 >> 0xf & 0x400;
  uVar8 = uVar11 + uVar7;
  uVar7 = uVar11 + 0x10 + uVar7;
  uVar11 = uVar8;
  if (*(char *)(iVar10 + 0x72) != '\0') {
    uVar11 = uVar7;
  }
  if ((uVar1 & 0x16000000) != 0) {
    uVar11 = uVar7;
  }
  if ((uVar1 & 0x8000000) != 0) {
    uVar11 = uVar8;
  }
  uVar8 = uVar11;
  if (*(char *)(iVar10 + 0x73) != '\0') {
    uVar8 = uVar11 + 8;
  }
  if ((uVar1 & 0x16000000) != 0) {
    uVar8 = uVar11 + 8;
  }
  uVar7 = uVar8 | 0x60;
  if ((uVar1 & 0x16000000) == 0) {
    uVar7 = uVar8;
  }
  if ((uVar1 & 0x8000000) != 0) {
    uVar7 = uVar8;
  }
  *(uint *)(*(int *)(param_1 + 0x3c) + 4) =
       ~*(uint *)(param_1 + 0x28) & (uVar7 | *(uint *)(param_1 + 0x24));
  *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x48) = *(undefined4 *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x1c) == -1) {
    if ((local_20 == 0 || (uVar1 & 0x6000000) == 0) ||
       ((*(char *)(local_20 + 0x102) == '\x01' && (*(char *)(local_20 + 0xfa) != '\x01')))) {
      uVar6 = 0;
      if (*(char *)(iVar10 + 0x74) == '\0') {
        uVar6 = FUN_1010ad36();
      }
      *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x38) = uVar6;
      uVar6 = 0x11111111;
      if (*(char *)(iVar10 + 0x74) != '\0') {
        uVar6 = 0;
      }
    }
    else {
      puVar3 = *(undefined4 **)(local_20 + 0x3c);
      *(undefined4 **)(*(int *)(param_1 + 0x3c) + 0x38) = puVar3;
      uVar6 = *puVar3;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x34) = uVar6;
  }
  else {
    iVar9 = *(int *)(*(int *)(param_1 + 0x3c) + 0x34);
    *(int *)(*(int *)(param_1 + 0x3c) + 0x34) = *(int *)(param_1 + 0x1c);
    iVar10 = *(int *)(param_1 + 0x3c);
    iVar2 = *(int *)(iVar10 + 0x34);
    if (iVar2 != iVar9) {
      uVar6 = FUN_1010ad03(iVar2);
      *(undefined4 *)(iVar10 + 0x38) = uVar6;
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

