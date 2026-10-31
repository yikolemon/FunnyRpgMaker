/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013f25b */

void FUN_14013f25b(longlong param_1,uint *param_2)

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
      if (((uVar2 >> 8 & 1) != 0) && (*(ushort *)(param_1 + 0x188) <= uVar3)) {
        *(undefined1 *)(param_1 + 0x1d2) = 1;
        uVar2 = *param_2;
      }
      if (((uVar2 >> 9 & 1) != 0) && (*(char *)(param_1 + 0x18a) != '\0')) {
        *(undefined1 *)(param_1 + 0x1d2) = 1;
        uVar2 = *param_2;
      }
      if (((uVar2 >> 10 & 1) != 0) && (*(char *)(param_1 + 0x18b) != '\0')) {
        *(undefined1 *)(param_1 + 0x1d2) = 1;
        uVar2 = *param_2;
      }
      if (((uVar2 >> 0xb & 1) != 0) && (uVar3 < *(ushort *)(param_1 + 0x188))) {
        *(undefined1 *)(param_1 + 0x1d2) = 0;
        uVar2 = *param_2;
      }
      if (((uVar2 >> 0xc & 1) != 0) && (*(char *)(param_1 + 0x18a) != '\0')) {
        *(undefined1 *)(param_1 + 0x1d2) = 0;
        uVar2 = *param_2;
      }
      if ((uVar2 >> 0xd & 1) == 0) {
        return;
      }
      if (*(char *)(param_1 + 0x18b) == '\0') {
        return;
      }
    }
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x1d2) = uVar1;
  return;
}

