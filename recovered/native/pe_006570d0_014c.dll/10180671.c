/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10180671 */

byte FUN_10180671(byte param_1,undefined1 param_2)

{
  byte bVar1;
  undefined1 **ppuVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_14 = 0xffffffff;
  local_18 = &LAB_10181170;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  ppuVar2 = &local_20;
  if (*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_1039dc0c) {
    FUN_1022c0d0(&DAT_1039dc0c);
    ppuVar2 = (undefined1 **)local_20;
    if (DAT_1039dc0c == -1) {
      local_14 = 0;
      DAT_1039dc08 = FUN_10180750();
      local_14 = 0xffffffff;
      FUN_1022c180(&DAT_1039dc0c);
      ppuVar2 = (undefined1 **)local_20;
    }
  }
  local_20 = (undefined1 *)ppuVar2;
  if ((param_1 & DAT_1039dc08) == 1) {
    iVar3 = FUN_1010330d();
    *(byte *)(iVar3 + 1) = *(byte *)(iVar3 + 1) | 4;
    *(undefined1 *)(iVar3 + 0x41) = 1;
    *(undefined1 *)(iVar3 + 0x42) = param_2;
  }
  bVar1 = DAT_1039dc08;
  *unaff_FS_OFFSET = local_1c;
  return bVar1;
}

