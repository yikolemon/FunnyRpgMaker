/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10017476 */

void FUN_10017476(char *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
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
  local_18 = &LAB_10059090;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (*param_1 == '\x03') {
    piVar2 = *(int **)(param_1 + 8);
    if ((int *)param_2 == piVar2) {
      *unaff_FS_OFFSET = local_1c;
    }
    else {
      piVar1 = piVar2 + 4;
      if (0xf < (uint)piVar2[5]) {
        piVar2 = (int *)*piVar2;
      }
      local_20 = local_58;
      FUN_100180a6(piVar2,*piVar1);
      *unaff_FS_OFFSET = local_1c;
    }
    return;
  }
  local_24 = FUN_1001776c();
  FUN_10017682(local_3c,"type must be string, but is ",&local_24);
  local_14 = 0;
  FUN_10017546(local_58,0x12e,local_3c,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_58,&DAT_1036074c);
}

