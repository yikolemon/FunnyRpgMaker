/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018f402 */

undefined4 * __fastcall FUN_1018f402(undefined4 *param_1)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_10;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0xe] = 0x3f800000;
  *unaff_FS_OFFSET = iVar1;
  return param_1;
}

