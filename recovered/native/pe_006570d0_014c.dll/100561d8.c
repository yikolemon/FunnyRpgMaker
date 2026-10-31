/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100561d8 */

void FUN_100561d8(undefined1 *param_1,uint *param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_58 [28];
  undefined1 local_3c [24];
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_58;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005acf0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
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
    break;
  default:
    local_24 = FUN_1001776c();
    FUN_10017682(local_3c,"type must be number, but is ",&local_24);
    local_14 = 0;
    FUN_10017546(local_58,0x12e,local_3c,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_58,&DAT_1036074c);
  }
  *param_2 = uVar1;
  *unaff_FS_OFFSET = local_1c;
  return;
}

