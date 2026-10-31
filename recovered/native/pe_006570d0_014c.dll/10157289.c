/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10157289 */

void __fastcall FUN_10157289(int param_1)

{
  int iVar1;
  int iVar2;
  float in_XMM0_Da;
  
  iVar1 = 0;
  do {
    iVar2 = -0x18;
    do {
      if (iVar1 == *(int *)(&UNK_102b9888 + iVar2)) goto LAB_101572b8;
      iVar2 = iVar2 + 4;
    } while (iVar2 != 0);
    *(float *)(param_1 + 0x14c + iVar1 * 0x10) =
         *(float *)(param_1 + 0x14c + iVar1 * 0x10) * in_XMM0_Da;
LAB_101572b8:
    iVar1 = iVar1 + 1;
    if (iVar1 == 0x3f) {
      return;
    }
  } while( true );
}

