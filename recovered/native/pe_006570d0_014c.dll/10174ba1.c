/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10174ba1 */

void __fastcall FUN_10174ba1(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0x80;
  iVar2 = 0;
  do {
    if ((uVar1 & param_1) != 0) {
      *(undefined1 *)(param_2 + iVar2) = *(undefined1 *)(param_3 + iVar2);
    }
    iVar2 = iVar2 + 1;
    uVar1 = uVar1 >> 1;
  } while (iVar2 != 4);
  return;
}

