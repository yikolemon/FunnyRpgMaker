/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10134b35 */

undefined4
FUN_10134b35(int param_1,undefined4 param_2,uint *param_3,undefined4 param_4,ushort *param_5,
            ushort *param_6,undefined4 param_7,uint param_8)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_3c;
  uint *local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  iVar3 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_3c;
  if (*(int *)(DAT_1039d74c + 0x1528) == param_1) {
    if (*(uint *)(DAT_1039d74c + 0x1548) == 1) {
      cVar1 = *(char *)(DAT_1039d74c + 0xec);
    }
    else {
      if (((*(uint *)(DAT_1039d74c + 0x1548) & 0xfffffffe) != 2) ||
         (*(int *)(DAT_1039d74c + 0x2060) != param_1)) goto LAB_10134b8d;
      cVar1 = *(char *)(DAT_1039d74c + 0x1534);
    }
    if (cVar1 == '\0') {
      FUN_101028d8();
    }
  }
LAB_10134b8d:
  if ((*(int *)(iVar3 + 0x1528) != param_1) ||
     ((param_8 & 0x200000) != 0 || (*(uint *)(iVar3 + 0x1e84) & 0x800) != 0)) {
switchD_10134bed_default:
    uVar2 = 0;
    goto LAB_10134bb2;
  }
  switch(param_2) {
  case 0:
    local_18 = (uint)(char)(byte)*param_3;
    if (param_6 == (ushort *)0x0) {
      iVar3 = 0x7f;
    }
    else {
      iVar3 = (int)(char)(byte)*param_6;
    }
    if (param_5 == (ushort *)0x0) {
      iVar6 = -0x80;
    }
    else {
      iVar6 = (int)(char)(byte)*param_5;
    }
    local_28 = CONCAT44(param_8,param_7);
    local_30 = CONCAT44(iVar3,iVar6);
    local_34 = param_4;
    local_38 = &local_18;
    local_3c = 4;
    uVar2 = FUN_10134f83();
    goto LAB_10134ed8;
  case 1:
    local_18 = (uint)(byte)*param_3;
    if (param_6 == (ushort *)0x0) {
      uVar4 = 0xff;
    }
    else {
      uVar4 = (uint)(byte)*param_6;
    }
    if (param_5 == (ushort *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (uint)(byte)*param_5;
    }
    local_28 = CONCAT44(param_8,param_7);
    local_30 = CONCAT44(uVar4,uVar7);
    local_34 = param_4;
    local_38 = &local_18;
    local_3c = 5;
    uVar2 = FUN_101354cf();
LAB_10134ed8:
    if ((char)uVar2 != '\0') {
      *(byte *)param_3 = (byte)local_18;
    }
LAB_10134bb2:
    if (DAT_10388d00 == (local_14 ^ (uint)&local_3c)) {
      return uVar2;
    }
    goto LAB_10134f78;
  case 2:
    local_18 = (uint)(short)(ushort)*param_3;
    if (param_6 == (ushort *)0x0) {
      iVar3 = 0x7fff;
    }
    else {
      iVar3 = (int)(short)*param_6;
    }
    if (param_5 == (ushort *)0x0) {
      iVar6 = -0x8000;
    }
    else {
      iVar6 = (int)(short)*param_5;
    }
    local_28 = CONCAT44(param_8,param_7);
    local_30 = CONCAT44(iVar3,iVar6);
    local_34 = param_4;
    local_38 = &local_18;
    local_3c = 4;
    uVar2 = FUN_10134f83();
    goto LAB_10134e03;
  case 3:
    local_18 = (uint)(ushort)*param_3;
    if (param_6 == (ushort *)0x0) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = (uint)*param_6;
    }
    if (param_5 == (ushort *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (uint)*param_5;
    }
    local_28 = CONCAT44(param_8,param_7);
    local_30 = CONCAT44(uVar4,uVar7);
    local_34 = param_4;
    local_38 = &local_18;
    local_3c = 5;
    uVar2 = FUN_101354cf();
LAB_10134e03:
    if ((char)uVar2 != '\0') {
      *(ushort *)param_3 = (ushort)local_18;
    }
    goto LAB_10134bb2;
  case 4:
    if (param_6 == (ushort *)0x0) {
      uVar2 = 0x7fffffff;
    }
    else {
      uVar2 = *(undefined4 *)param_6;
    }
    if (param_5 == (ushort *)0x0) {
      uVar5 = 0x80000000;
    }
    else {
      uVar5 = *(undefined4 *)param_5;
    }
    local_28 = CONCAT44(param_8,param_7);
    local_30 = CONCAT44(uVar2,uVar5);
    local_34 = param_4;
    local_38 = param_3;
    local_3c = 4;
    uVar2 = FUN_10134f83();
    break;
  case 5:
    if (param_6 == (ushort *)0x0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = *(undefined4 *)param_6;
    }
    if (param_5 == (ushort *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)param_5;
    }
    local_28 = CONCAT44(param_8,param_7);
    local_30 = CONCAT44(uVar2,uVar5);
    local_34 = param_4;
    local_38 = param_3;
    local_3c = 5;
    uVar2 = FUN_101354cf();
    break;
  case 6:
    uVar2 = 0xffffffff;
    uVar5 = 0x7fffffff;
    if (param_6 != (ushort *)0x0) {
      uVar2 = *(undefined4 *)param_6;
      uVar5 = *(undefined4 *)(param_6 + 2);
    }
    uVar9 = 0;
    uVar8 = 0x80000000;
    if (param_5 != (ushort *)0x0) {
      uVar9 = *(undefined4 *)param_5;
      uVar8 = *(undefined4 *)(param_5 + 2);
    }
    local_1c = param_8;
    local_20 = param_7;
    local_28 = CONCAT44(uVar5,uVar2);
    local_30 = CONCAT44(uVar8,uVar9);
    local_34 = param_4;
    local_38 = param_3;
    local_3c = 6;
    uVar2 = FUN_10135a12();
    break;
  case 7:
    if (param_6 == (ushort *)0x0) {
      uVar2 = 0xffffffff;
      uVar5 = 0xffffffff;
    }
    else {
      uVar2 = *(undefined4 *)param_6;
      uVar5 = *(undefined4 *)(param_6 + 2);
    }
    if (param_5 == (ushort *)0x0) {
      uVar9 = 0;
      uVar8 = 0;
    }
    else {
      uVar9 = *(undefined4 *)param_5;
      uVar8 = *(undefined4 *)(param_5 + 2);
    }
    local_1c = param_8;
    local_20 = param_7;
    local_28 = CONCAT44(uVar5,uVar2);
    local_30 = CONCAT44(uVar8,uVar9);
    local_34 = param_4;
    local_38 = param_3;
    local_3c = 7;
    uVar2 = FUN_10136123();
    break;
  case 8:
    uVar2 = DAT_102b89b4;
    if (param_6 != (ushort *)0x0) {
      uVar2 = *(undefined4 *)param_6;
    }
    uVar5 = DAT_102b89b0;
    if (param_5 != (ushort *)0x0) {
      uVar5 = *(undefined4 *)param_5;
    }
    local_28 = CONCAT44(param_8,param_7);
    local_30 = CONCAT44(uVar2,uVar5);
    local_34 = param_4;
    local_38 = param_3;
    local_3c = 8;
    uVar2 = FUN_101368df();
    break;
  case 9:
    local_28 = DAT_102b9518;
    if (param_6 != (ushort *)0x0) {
      local_28 = *(undefined8 *)param_6;
    }
    local_30 = DAT_102b9520;
    if (param_5 != (ushort *)0x0) {
      local_30 = *(undefined8 *)param_5;
    }
    local_1c = param_8;
    local_20 = param_7;
    local_34 = param_4;
    local_38 = param_3;
    local_3c = 9;
    uVar2 = FUN_10136f3e();
    break;
  default:
    goto switchD_10134bed_default;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_3c)) {
    return uVar2;
  }
LAB_10134f78:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

