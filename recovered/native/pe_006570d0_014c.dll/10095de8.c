/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10095de8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10095de8(undefined1 *param_1,uint *param_2)

{
  uint uVar1;
  undefined1 local_58 [28];
  undefined1 local_3c [24];
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_58;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3a80;
  local_1c = ExceptionList;
  switch(*param_1) {
  case 4:
    uVar1 = (uint)(byte)param_1[8];
    break;
  case 5:
    uVar1 = *(uint *)(param_1 + 8);
    break;
  case 6:
    uVar1 = *(uint *)(param_1 + 8);
    break;
  case 7:
    uVar1 = (uint)*(double *)(param_1 + 8);
    uVar1 = (int)(*(double *)(param_1 + 8) - _DAT_102945c8) & (int)uVar1 >> 0x1f | uVar1;
    break;
  default:
    ExceptionList = &local_1c;
    local_24 = FUN_10087286();
    FUN_10017682(local_3c,"type must be number, but is ",&local_24);
    local_14 = 0;
    FUN_10017546(local_58,0x12e,local_3c,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_58,&DAT_1036074c);
  }
  *param_2 = uVar1;
  return;
}

