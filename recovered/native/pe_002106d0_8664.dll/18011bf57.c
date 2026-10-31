/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011bf57 */

void FUN_18011bf57(void)

{
  longlong lVar1;
  undefined1 uVar2;
  
  lVar1 = DAT_180419160;
  if ((*(longlong *)(DAT_180419160 + 0x2200) == 0) ||
     ((*(byte *)(*(longlong *)(DAT_180419160 + 0x2200) + 0x16) & 1) == 0)) {
    if (*(int *)(DAT_180419160 + 0x2250) == 3) {
      if ((*(byte *)(DAT_180419160 + 0x30) & 2) != 0) goto LAB_18011bf90;
      goto LAB_18011bf86;
    }
    if ((*(int *)(DAT_180419160 + 0x2250) == 2) && ((*(byte *)(DAT_180419160 + 0x30) & 1) == 0))
    goto LAB_18011bf86;
LAB_18011bf90:
    uVar2 = 1;
    if (*(char *)(DAT_180419160 + 0x7e) != '\x01') goto LAB_18011bf9e;
  }
  else {
LAB_18011bf86:
    uVar2 = 0;
  }
  *(undefined1 *)(DAT_180419160 + 0x21f4) = uVar2;
LAB_18011bf9e:
  *(undefined2 *)(lVar1 + 0x21f5) = 0x101;
  return;
}

