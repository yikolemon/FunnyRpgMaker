/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043bc5c */

void __fastcall FUN_0043bc5c(int param_1,uint *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_2;
  if ((char)uVar2 == -1) {
    uVar1 = 1;
  }
  else {
    uVar3 = uVar2 & 0xff;
    if (uVar3 != 0) {
      if (((uVar2 >> 8 & 1) != 0) && (*(ushort *)(param_1 + 0xe4) <= uVar3)) {
        *(undefined1 *)(param_1 + 0x12e) = 1;
        uVar2 = *param_2;
      }
      if (((uVar2 >> 9 & 1) != 0) && (*(char *)(param_1 + 0xe6) != '\0')) {
        *(undefined1 *)(param_1 + 0x12e) = 1;
        uVar2 = *param_2;
      }
      if (((uVar2 >> 10 & 1) != 0) && (*(char *)(param_1 + 0xe7) != '\0')) {
        *(undefined1 *)(param_1 + 0x12e) = 1;
        uVar2 = *param_2;
      }
      if (((uVar2 >> 0xb & 1) != 0) && (uVar3 < *(ushort *)(param_1 + 0xe4))) {
        *(undefined1 *)(param_1 + 0x12e) = 0;
        uVar2 = *param_2;
      }
      if (((uVar2 >> 0xc & 1) != 0) && (*(char *)(param_1 + 0xe6) != '\0')) {
        *(undefined1 *)(param_1 + 0x12e) = 0;
        uVar2 = *param_2;
      }
      if ((uVar2 >> 0xd & 1) == 0) {
        return;
      }
      if (*(char *)(param_1 + 0xe7) == '\0') {
        return;
      }
    }
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x12e) = uVar1;
  return;
}

