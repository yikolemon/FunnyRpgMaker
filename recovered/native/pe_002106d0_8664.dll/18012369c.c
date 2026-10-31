/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012369c */

void FUN_18012369c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = DAT_180419160;
  if ((longlong)*(int *)(DAT_180419160 + 0x20e4) != 0x3f) {
    uVar2 = *(undefined8 *)(DAT_180419160 + 0x2b1c);
    puVar1 = (undefined8 *)
             (DAT_180419160 + 0xee8 + (longlong)*(int *)(DAT_180419160 + 0x20e4) * 0x10);
    *puVar1 = *(undefined8 *)(DAT_180419160 + 0x2b14);
    puVar1[1] = uVar2;
  }
  *(undefined4 *)(lVar3 + 0x20e4) = 0x3f;
  return;
}

