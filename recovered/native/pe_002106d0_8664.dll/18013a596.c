/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013a596 */

undefined8
FUN_18013a596(int param_1,undefined4 param_2,ushort *param_3,undefined4 param_4,short *param_5,
             ushort *param_6,undefined8 param_7,uint param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  uint local_44;
  ulonglong local_40;
  
  lVar1 = DAT_180419160;
  local_40 = DAT_180402640 ^ (ulonglong)auStack_88;
  if (*(int *)(DAT_180419160 + 0x167c) == param_1) {
    if (*(uint *)(DAT_180419160 + 0x169c) == 1) {
      cVar6 = *(char *)(DAT_180419160 + 0x120);
    }
    else {
      if (((*(uint *)(DAT_180419160 + 0x169c) & 0xfffffffe) != 2) ||
         (*(int *)(DAT_180419160 + 0x221c) != param_1)) goto LAB_18013a605;
      cVar6 = *(char *)(DAT_180419160 + 0x1688);
    }
    if (cVar6 == '\0') {
      FUN_180107456();
    }
  }
LAB_18013a605:
  if ((*(int *)(lVar1 + 0x167c) != param_1) ||
     ((param_8 & 0x200000) != 0 || (*(uint *)(lVar1 + 0x1fe4) & 0x800) != 0)) {
switchD_18013a684_default:
    uVar2 = 0;
    goto LAB_18013a62f;
  }
  switch(param_2) {
  case 0:
    local_44 = (uint)(char)(byte)*param_3;
    if (param_6 == (ushort *)0x0) {
      iVar3 = 0x7f;
    }
    else {
      iVar3 = (int)(char)(byte)*param_6;
    }
    if (param_5 == (short *)0x0) {
      iVar9 = -0x80;
    }
    else {
      iVar9 = (int)(char)*param_5;
    }
    local_58 = param_8;
    local_60 = param_7;
    local_68 = CONCAT44(local_68._4_4_,iVar3);
    uVar2 = FUN_18013a9d9(4,&local_44,param_4,iVar9);
    goto LAB_18013a910;
  case 1:
    local_44 = (uint)(byte)*param_3;
    if (param_6 == (ushort *)0x0) {
      uVar4 = 0xff;
    }
    else {
      uVar4 = (uint)(byte)*param_6;
    }
    if (param_5 == (short *)0x0) {
      cVar6 = '\0';
    }
    else {
      cVar6 = (char)*param_5;
    }
    local_58 = param_8;
    local_60 = param_7;
    local_68 = CONCAT44(local_68._4_4_,uVar4);
    uVar2 = FUN_18013ae93(5,&local_44,param_4,cVar6);
LAB_18013a910:
    if ((char)uVar2 != '\0') {
      *(byte *)param_3 = (byte)local_44;
    }
LAB_18013a62f:
    if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_88)) {
      return uVar2;
    }
    goto LAB_18013a9cb;
  case 2:
    local_44 = (uint)(short)*param_3;
    if (param_6 == (ushort *)0x0) {
      iVar3 = 0x7fff;
    }
    else {
      iVar3 = (int)(short)*param_6;
    }
    if (param_5 == (short *)0x0) {
      iVar9 = -0x8000;
    }
    else {
      iVar9 = (int)*param_5;
    }
    local_58 = param_8;
    local_60 = param_7;
    local_68 = CONCAT44(local_68._4_4_,iVar3);
    uVar2 = FUN_18013a9d9(4,&local_44,param_4,iVar9);
    goto LAB_18013a857;
  case 3:
    local_44 = (uint)*param_3;
    if (param_6 == (ushort *)0x0) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = (uint)*param_6;
    }
    if (param_5 == (short *)0x0) {
      sVar7 = 0;
    }
    else {
      sVar7 = *param_5;
    }
    local_58 = param_8;
    local_60 = param_7;
    local_68 = CONCAT44(local_68._4_4_,uVar4);
    uVar2 = FUN_18013ae93(5,&local_44,param_4,sVar7);
LAB_18013a857:
    if ((char)uVar2 != '\0') {
      *param_3 = (ushort)local_44;
    }
    goto LAB_18013a62f;
  case 4:
    if (param_6 == (ushort *)0x0) {
      uVar5 = 0x7fffffff;
    }
    else {
      uVar5 = *(undefined4 *)param_6;
    }
    if (param_5 == (short *)0x0) {
      uVar8 = 0x80000000;
    }
    else {
      uVar8 = *(undefined4 *)param_5;
    }
    local_58 = param_8;
    local_60 = param_7;
    local_68 = CONCAT44(local_68._4_4_,uVar5);
    uVar2 = FUN_18013a9d9(4,param_3,param_4,uVar8);
    break;
  case 5:
    if (param_6 == (ushort *)0x0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = *(undefined4 *)param_6;
    }
    if (param_5 == (short *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)param_5;
    }
    local_58 = param_8;
    local_60 = param_7;
    local_68 = CONCAT44(local_68._4_4_,uVar5);
    uVar2 = FUN_18013ae93(5,param_3,param_4,uVar8);
    break;
  case 6:
    local_68 = 0x7fffffffffffffff;
    if (param_6 != (ushort *)0x0) {
      local_68 = *(undefined8 *)param_6;
    }
    if (param_5 == (short *)0x0) {
      uVar2 = 0x8000000000000000;
    }
    else {
      uVar2 = *(undefined8 *)param_5;
    }
    local_58 = param_8;
    local_60 = param_7;
    uVar2 = FUN_18013b361(6,param_3,param_4,uVar2);
    break;
  case 7:
    if (param_6 == (ushort *)0x0) {
      local_68 = 0xffffffffffffffff;
    }
    else {
      local_68 = *(undefined8 *)param_6;
    }
    if (param_5 == (short *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)param_5;
    }
    local_58 = param_8;
    local_60 = param_7;
    uVar2 = FUN_18013b860(7,param_3,param_4,uVar2);
    break;
  case 8:
    uVar5 = DAT_1802de564;
    if (param_6 != (ushort *)0x0) {
      uVar5 = *(undefined4 *)param_6;
    }
    uVar8 = DAT_1802de560;
    if (param_5 != (short *)0x0) {
      uVar8 = *(undefined4 *)param_5;
    }
    local_58 = param_8;
    local_60 = param_7;
    local_68 = CONCAT44(local_68._4_4_,uVar5);
    uVar2 = FUN_18013bd97(8,param_3,param_4,uVar8);
    break;
  case 9:
    local_68 = DAT_1802df060;
    if (param_6 != (ushort *)0x0) {
      local_68 = *(undefined8 *)param_6;
    }
    uVar2 = DAT_1802df068;
    if (param_5 != (short *)0x0) {
      uVar2 = *(undefined8 *)param_5;
    }
    local_58 = param_8;
    local_60 = param_7;
    uVar2 = FUN_18013c301(9,param_3,param_4,uVar2);
    break;
  default:
    goto switchD_18013a684_default;
  }
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_88)) {
    return uVar2;
  }
LAB_18013a9cb:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_88);
}

