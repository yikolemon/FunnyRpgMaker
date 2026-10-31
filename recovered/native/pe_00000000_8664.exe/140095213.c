/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140095213 */

void FUN_140095213(void)

{
  longlong lVar1;
  undefined1 uVar2;
  
  lVar1 = DAT_140f2a910;
  if ((*(longlong *)(DAT_140f2a910 + 0x2200) == 0) ||
     ((*(byte *)(*(longlong *)(DAT_140f2a910 + 0x2200) + 0x16) & 1) == 0)) {
    if (*(int *)(DAT_140f2a910 + 0x2250) == 3) {
      if ((*(byte *)(DAT_140f2a910 + 0x30) & 2) != 0) goto LAB_14009524c;
      goto LAB_140095242;
    }
    if ((*(int *)(DAT_140f2a910 + 0x2250) == 2) && ((*(byte *)(DAT_140f2a910 + 0x30) & 1) == 0))
    goto LAB_140095242;
LAB_14009524c:
    uVar2 = 1;
    if (*(char *)(DAT_140f2a910 + 0x7e) != '\x01') goto LAB_14009525a;
  }
  else {
LAB_140095242:
    uVar2 = 0;
  }
  *(undefined1 *)(DAT_140f2a910 + 0x21f4) = uVar2;
LAB_14009525a:
  *(undefined2 *)(lVar1 + 0x21f5) = 0x101;
  return;
}

