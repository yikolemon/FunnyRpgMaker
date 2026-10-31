/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002bca8 */

/* WARNING: Removing unreachable block (ram,0x1002bd56) */

void FUN_1002bca8(int param_1,int *param_2,uint *param_3,int param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong local_40;
  uint uStack_38;
  undefined4 uStack_34;
  ulonglong local_24;
  undefined1 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if (param_1 == 0) goto LAB_1002beca;
  if (param_1 == 1) {
    uVar2 = *param_3;
    uStack_38 = 0;
    uVar3 = *(uint *)(param_4 + 0xc);
    if ((int)uVar3 < 0) {
      if ((int)uVar2 < (int)*(uint *)(param_4 + 8)) {
        puVar1 = (ulonglong *)(*(int *)(param_4 + 0x10) + uVar2 * 0x10);
        local_40 = *puVar1;
        uStack_38 = (uint)puVar1[1];
        uStack_34 = *(undefined4 *)((int)puVar1 + 0xc);
      }
    }
    else if (uVar2 < 0xf) {
      bVar7 = (byte)(uVar2 * 4);
      bVar4 = bVar7 & 0x1f;
      uStack_38 = uVar3 >> (bVar7 & 0x1f);
      if ((uVar2 * 4 & 0x20) == 0) {
        uStack_38 = *(uint *)(param_4 + 8) >> bVar4 | uVar3 << 0x20 - bVar4;
      }
      uStack_38 = uStack_38 & 0xf;
      if (uStack_38 != 0) {
        local_40 = *(ulonglong *)(*(int *)(param_4 + 0x10) + uVar2 * 8);
      }
    }
  }
  else {
    FUN_1002c368(&local_40,*param_3,param_3[1]);
  }
  if (uStack_38 == 0) goto LAB_1002bf0b;
  cVar5 = (char)local_40;
  uVar8 = local_40;
  switch(uStack_38) {
  case 1:
    iVar6 = (int)local_40;
    if ((int)local_40 < 0) goto LAB_1002bf0b;
    goto LAB_1002bec5;
  case 2:
    uVar8 = local_40 & 0xffffffff;
    break;
  case 3:
    if ((longlong)local_40 < 0) {
      uVar8 = 0xffffffffffffffff;
    }
    break;
  case 4:
    break;
  case 5:
  default:
switchD_1002bd64_default:
    uVar8 = FUN_1002c39a();
    break;
  case 6:
    goto switchD_1002bd64_default;
  case 7:
    uVar8 = FUN_1002c39a(cVar5);
    break;
  case 8:
    uVar8 = FUN_1002c39a((int)cVar5);
    break;
  case 9:
    uVar8 = FUN_1002c39a((int)local_40);
    break;
  case 10:
    uVar8 = FUN_1002c3f8(local_40);
    break;
  case 0xb:
    uVar8 = FUN_1002c3f8(local_40);
    break;
  case 0xc:
    uVar8 = FUN_1002c39a((int)local_40);
    break;
  case 0xd:
    uVar8 = FUN_1002c3f8(local_40);
    break;
  case 0xe:
    uVar8 = FUN_1002c39a((int)local_40);
    break;
  case 0xf:
    local_24 = local_40;
    uVar8 = FUN_1002c3f8(local_40);
  }
  iVar6 = (int)uVar8;
  if ((int)uVar8 < 0 || (int)(uVar8 >> 0x20) != 0) {
LAB_1002bf0b:
    local_18 = 1;
    FUN_10025774();
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(&local_24,&DAT_103607ac);
  }
LAB_1002bec5:
  *param_2 = iVar6;
LAB_1002beca:
  if (DAT_10388d00 == (local_14 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

