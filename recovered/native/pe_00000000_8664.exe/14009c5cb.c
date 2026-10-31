/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009c5cb */

void FUN_14009c5cb(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = DAT_140f2a910;
  if ((longlong)*(int *)(DAT_140f2a910 + 0x20e4) != 0x3f) {
    uVar2 = *(undefined8 *)(DAT_140f2a910 + 0x2b1c);
    puVar1 = (undefined8 *)
             (DAT_140f2a910 + 0xee8 + (longlong)*(int *)(DAT_140f2a910 + 0x20e4) * 0x10);
    *puVar1 = *(undefined8 *)(DAT_140f2a910 + 0x2b14);
    puVar1[1] = uVar2;
  }
  *(undefined4 *)(lVar3 + 0x20e4) = 0x3f;
  return;
}

