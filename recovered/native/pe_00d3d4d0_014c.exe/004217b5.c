/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004217b5 */

undefined8 __fastcall FUN_004217b5(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = 0x1f;
    if (param_3 != 0) {
      for (; param_3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    uVar2 = 1 << ((byte)(iVar1 + 0x11U >> 1) & 0x1f);
    do {
      uVar3 = uVar2;
      uVar4 = __aulldiv(param_3 * 0x10000 - 1,
                        ((param_3 >> 0x10) - 1) + (uint)(param_3 * 0x10000 != 0),uVar3,0);
      param_2 = (undefined4)((ulonglong)uVar4 >> 0x20);
      uVar2 = (int)uVar4 + uVar3 + 1 >> 1;
    } while (uVar2 != uVar3);
  }
  return CONCAT44(param_2,uVar3);
}

