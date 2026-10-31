/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f7d3e */

uint __fastcall FUN_100f7d3e(int param_1,byte param_2)

{
  byte bVar1;
  undefined4 in_EAX;
  undefined3 uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    bVar1 = *(byte *)(param_1 + 0x38 + iVar3);
    uVar2 = (undefined3)((uint)in_EAX >> 8);
    in_EAX = CONCAT31(uVar2,bVar1);
    if (bVar1 >> 3 == param_2) {
      return CONCAT31(uVar2,bVar1) & 0xffffff07;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 8);
  return 0;
}

