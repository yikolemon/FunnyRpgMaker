/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008a084 */

undefined4 FUN_14008a084(longlong param_1,int param_2,undefined8 *param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  int local_80;
  undefined8 local_78;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  lVar3 = DAT_140f2a910;
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  uVar7 = param_4 & 0xfffffffb;
  if ((param_4 & 0x10) == 0) {
    uVar7 = param_4;
  }
  uVar9 = uVar7 & 0xfffffff7;
  if ((uVar7 & 0x20) == 0) {
    uVar9 = uVar7;
  }
  uVar7 = 0x1080001;
  if ((uVar9 & 0xc) == 0) {
    uVar7 = 0x1080103;
  }
  uVar7 = uVar7 | (uint)((uVar9 & 0x70) != 0) << 6 | param_5 | *(uint *)(lVar1 + 0x14) & 4;
  if ((char)uVar9 < '\0') {
    FUN_14007a7b5(3,DAT_140f2a910 + 0xf58);
    FUN_14007ab2c(7,*(undefined4 *)(lVar3 + 0xdfc));
    FUN_14007ab2c(8,*(undefined4 *)(lVar3 + 0xe00));
    FUN_14007ae77(2,lVar3 + 0xdf4);
    uVar9 = uVar9 | 3;
    uVar7 = uVar7 | 4;
  }
  FUN_14008a381(&local_68);
  if ((uVar9 & 0x20) != 0) {
    local_64 = 0;
  }
  uVar10 = 0;
  if ((uVar9 & 0x10) == 0) {
    uVar10 = local_68;
  }
  FUN_14008a3c7(&local_70,*param_3,uVar10,local_64);
  if (((*(byte *)(lVar3 + 0x2030) & 2) != 0) && ((*(byte *)(lVar3 + 0x2038) & 1) != 0)) {
    if (0.0 < *(float *)(lVar3 + 0x2054)) {
      uVar9 = uVar9 & 0xfffffffb;
      local_70 = *(float *)(lVar3 + 0x2054);
    }
    if (0.0 < *(float *)(lVar3 + 0x2058)) {
      uVar9 = uVar9 & 0xfffffff7;
      local_6c = *(float *)(lVar3 + 0x2058);
    }
  }
  FUN_140085d59(&local_70,0);
  uVar6 = uVar9;
  if ((*(uint *)(lVar3 + 0x2030) >> 9 & 1) != 0) {
    uVar6 = *(uint *)(lVar3 + 0x2070) | uVar9;
  }
  *(uint *)(lVar3 + 0x2070) = uVar6;
  *(uint *)(lVar3 + 0x2030) = *(uint *)(lVar3 + 0x2030) | 0x200;
  if (param_1 == 0) {
    local_88 = CONCAT44(local_88._4_4_,param_2);
    pcVar8 = "%s/%08X";
  }
  else {
    pcVar8 = "%s/%s_%08X";
    local_88 = param_1;
    local_80 = param_2;
  }
  FUN_140077ea7(&local_78,0,pcVar8,*(undefined8 *)(lVar1 + 8));
  uVar10 = *(undefined4 *)(lVar3 + 0xde8);
  if ((uVar9 & 1) == 0) {
    *(undefined4 *)(lVar3 + 0xde8) = 0;
  }
  uVar4 = FUN_140085d7e(local_78,0,uVar7);
  *(undefined4 *)(lVar3 + 0xde8) = uVar10;
  if ((char)uVar9 < '\0') {
    FUN_14007af87(3);
    FUN_14007a8e1(1);
  }
  lVar2 = *(longlong *)(lVar3 + 0x1608);
  *(int *)(lVar2 + 0xcc) = param_2;
  if (*(short *)(lVar2 + 0x118) == 1) {
    *(undefined8 *)(lVar1 + 0x158) = *(undefined8 *)(lVar2 + 0x60);
  }
  iVar5 = FUN_140077ff5(&DAT_140ecb17e,0,param_2);
  if (*(int *)(lVar3 + 0x167c) == iVar5) {
    FUN_14008076e();
  }
  if ((((uVar9 >> 8 & 1) == 0) && (*(int *)(lVar3 + 0x2214) == param_2)) &&
     ((*(short *)(lVar2 + 0x1b4) != 0 || (*(char *)(lVar2 + 0x1ba) == '\x01')))) {
    FUN_140081404(lVar2,0);
    FUN_14008a523(lVar2,0);
    FUN_140080508(iVar5,lVar2);
    *(undefined4 *)(lVar3 + 0x169c) = *(undefined4 *)(lVar3 + 0x2250);
  }
  if (DAT_140f17b40 != (local_60 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_60 ^ (ulonglong)auStack_a8);
  }
  return uVar4;
}

