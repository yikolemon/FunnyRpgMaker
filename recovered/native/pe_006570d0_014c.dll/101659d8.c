/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101659d8 */

undefined4 __fastcall FUN_101659d8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  bool bVar2;
  
  if (param_3 == *(short *)(param_1 + 0x1c6)) {
    bVar2 = *(short *)(param_1 + 0x4e) == *(short *)(param_1 + 0x4c);
  }
  else {
    bVar2 = false;
  }
  if ((bVar2 == false) && (param_3 != *(short *)(param_1 + 0x1c0))) {
    if ((param_2 + 1 == (int)*(short *)(param_1 + 0x1e2)) || ((*(byte *)(param_1 + 5) & 0x18) != 0))
    {
      uVar1 = *(undefined4 *)(param_1 + 0x78);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x7c);
    }
  }
  else {
    uVar1 = FUN_100fcb39(bVar2 + '\x1d',0x3f800000);
  }
  return uVar1;
}

