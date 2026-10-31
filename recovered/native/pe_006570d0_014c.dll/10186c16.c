/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10186c16 */

undefined8 * __fastcall FUN_10186c16(undefined8 *param_1)

{
  float fVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  float10 fVar3;
  float10 fVar4;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = &LAB_10195f80;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  *param_1 = 0;
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((int)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  iVar2 = 0;
  *(undefined4 *)((int)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  local_18 = 1;
  _memset(param_1,0,0x21c);
  *(undefined4 *)((int)param_1 + 0x24) = 0x3f800000;
  do {
    fVar3 = (float10)FUN_102704b0();
    fVar4 = (float10)FUN_1026d4b0();
    param_1[iVar2 + 0xb] = CONCAT44((float)fVar3,(float)fVar4);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x30);
  fVar1 = *(float *)(param_1 + 4);
  FUN_100fdbca();
  fVar3 = (float10)FUN_1026d4b0();
  *(float *)(param_1 + 0x3b) = fVar1 / (DAT_1028b430 - (float)fVar3);
  *unaff_FS_OFFSET = local_20;
  return param_1;
}

