/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00436bfc */

void __fastcall FUN_00436bfc(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x58c);
  if ((uVar1 != 0) && (*(int *)(param_1 + 0x584) != 0)) {
    uVar2 = *(int *)(param_1 + 0x584) * 0x2c + uVar1;
    do {
      if (*(int *)(uVar1 + 8) < param_2) {
        *(byte *)(uVar1 + 0xc) = *(byte *)(uVar1 + 0xc) | 0x10;
      }
      uVar1 = uVar1 + 0x2c;
    } while (uVar1 < uVar2);
  }
  return;
}

