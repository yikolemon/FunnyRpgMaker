/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10076e52 */

void FUN_10076e52(void)

{
  int *unaff_FS_OFFSET;
  int local_34 [3];
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2bd0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_28 = 0xffffffff;
  FUN_10076b48(local_34,&local_28);
  local_14 = 0;
  FUN_10077d32(local_34);
  *local_24 = 1;
  DAT_1039cbc8 = 1;
  local_24 = local_24 + 0x10;
  FUN_10076c34(local_34);
  local_28 = 0x8f;
  FUN_10077a84(&local_28);
  DAT_10388110 = (uint)*(byte *)(local_34[0] + 0x14);
  local_14 = 0xffffffff;
  FUN_10004eae();
  *unaff_FS_OFFSET = local_1c;
  return;
}

