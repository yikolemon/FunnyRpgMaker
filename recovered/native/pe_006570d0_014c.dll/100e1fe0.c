/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e1fe0 */

void FUN_100e1fe0(undefined1 *param_1,float *param_2)

{
  int *unaff_FS_OFFSET;
  float fVar1;
  undefined1 auStack_78 [24];
  undefined4 local_60;
  undefined1 local_5c [24];
  undefined1 local_44 [28];
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_78;
  local_18 = 0xffffffff;
  local_1c = &LAB_100ea9b0;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  switch(*param_1) {
  case 4:
    fVar1 = (float)(int)(char)param_1[8];
    break;
  case 5:
    fVar1 = (float)*(longlong *)(param_1 + 8);
    break;
  case 6:
    fVar1 = (float)*(longlong *)(param_1 + 8) +
            *(float *)(&DAT_102b7070 + (*(int *)(param_1 + 0xc) >> 0x1f) * -4);
    break;
  case 7:
    fVar1 = (float)*(double *)(param_1 + 8);
    break;
  default:
    local_60 = FUN_1001776c();
    FUN_10017682(local_5c,"type must be number, but is ",&local_60);
    local_18 = 0;
    FUN_10017546(local_44,0x12e,local_5c,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_44,&DAT_1036074c);
  }
  *param_2 = fVar1;
  *unaff_FS_OFFSET = local_20;
  return;
}

