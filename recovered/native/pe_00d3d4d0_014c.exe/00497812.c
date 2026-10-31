/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00497812 */

void FUN_00497812(void)

{
  HANDLE hFile;
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  
  uVar2 = 0;
  do {
    iVar1 = (uVar2 & 0x3f) * 0x38 + (&DAT_00521cc8)[(int)uVar2 >> 6];
    if ((*(int *)(iVar1 + 0x18) == -1) || (*(int *)(iVar1 + 0x18) == -2)) {
      *(undefined1 *)(iVar1 + 0x28) = 0x81;
      if (uVar2 == 0) {
        DVar3 = 0xfffffff6;
      }
      else if (uVar2 == 1) {
        DVar3 = 0xfffffff5;
      }
      else {
        DVar3 = 0xfffffff4;
      }
      hFile = GetStdHandle(DVar3);
      if ((hFile != (HANDLE)0xffffffff) && (hFile != (HANDLE)0x0)) {
        DVar3 = GetFileType(hFile);
        if (DVar3 != 0) {
          *(HANDLE *)(iVar1 + 0x18) = hFile;
          if ((DVar3 & 0xff) == 2) {
            *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 8;
          }
          goto LAB_004978b4;
        }
      }
      *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x40;
      *(undefined4 *)(iVar1 + 0x18) = 0xfffffffe;
      if (DAT_005216c4 != 0) {
        *(undefined4 *)(*(int *)(DAT_005216c4 + uVar2 * 4) + 0x10) = 0xfffffffe;
      }
    }
    else {
      *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
    }
LAB_004978b4:
    uVar2 = uVar2 + 1;
    if (uVar2 == 3) {
      return;
    }
  } while( true );
}

