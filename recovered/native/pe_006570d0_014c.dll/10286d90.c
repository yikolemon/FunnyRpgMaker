/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10286d90 */

void FUN_10286d90(int param_1,int *param_2,ushort *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_94;
  undefined1 local_90 [48];
  undefined8 local_60;
  uint local_50;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffff0;
  local_94 = (uint)*param_3;
  switch(*param_2) {
  case 1:
  case 5:
    uVar3 = 8;
    break;
  case 2:
    uVar3 = 4;
    break;
  case 3:
    uVar3 = 0x11;
    break;
  case 4:
    uVar3 = 0x12;
    break;
  default:
    goto switchD_10286dd5_caseD_6;
  case 8:
    uVar3 = 0x10;
  }
  iVar2 = FUN_10280aa0(uVar3,param_2 + 6,local_94);
  if (iVar2 == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      local_60 = *(undefined8 *)(param_2 + 4);
      local_50 = local_50 & 0xffffffe3 | 3;
    }
    else {
      local_50 = local_50 & 0xfffffffe;
    }
    FUN_10280dd0(local_90,&local_94,uVar3,param_1,param_2 + 2,param_2 + 6);
  }
switchD_10286dd5_caseD_6:
  FUN_10281250(local_94,0xffff);
  if (((*param_2 == 8) || (cVar1 = FUN_102771a0(), cVar1 == '\0')) ||
     (iVar2 = FUN_102771c0(param_2), iVar2 == 0)) {
    FUN_10280a60(*param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

