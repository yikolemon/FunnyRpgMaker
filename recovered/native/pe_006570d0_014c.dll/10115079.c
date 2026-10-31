/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10115079 */

void FUN_10115079(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar1 = *(int *)(iVar1 + 0x14cc);
  *(ulonglong *)(iVar1 + 0x144) =
       CONCAT44((float)((ulonglong)*param_1 >> 0x20) +
                ((float)((ulonglong)*(undefined8 *)(iVar1 + 0x50) >> 0x20) -
                (float)((ulonglong)*(undefined8 *)(iVar1 + 0xc4) >> 0x20)),
                (float)*param_1 +
                ((float)*(undefined8 *)(iVar1 + 0x50) - (float)*(undefined8 *)(iVar1 + 0xc4)));
  *(undefined1 *)(iVar1 + 0x185) = 1;
  return;
}

