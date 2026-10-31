/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f92e8 */

void __fastcall FUN_100f92e8(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = DAT_102b89a0;
  iVar2 = 0;
  do {
    *(undefined1 *)(param_1 + 0x9dc + iVar2) = 0;
    *(undefined8 *)(param_1 + 0x9e0 + iVar2) = uVar1;
    iVar2 = iVar2 + 0x10;
  } while (iVar2 != 0x70);
  *(undefined4 *)(param_1 + 0xb4) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0xb8) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  iVar2 = -0x14;
  do {
    *(undefined4 *)(param_1 + 0xb6c + iVar2) = 0xbf800000;
    *(undefined4 *)(param_1 + 0xb58 + iVar2) = 0xbf800000;
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0);
  *(undefined8 *)(param_1 + 0xc4) = 0;
  return;
}

