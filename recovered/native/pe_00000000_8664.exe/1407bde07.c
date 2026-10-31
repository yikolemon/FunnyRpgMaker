/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bde07 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407bde07(void)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong unaff_RDI;
  uint *puVar3;
  
  uVar2 = (int)&stack0xffffffffffffffe0 - 0x1c;
  puVar3 = (uint *)(ulonglong)uVar2;
  if (0 < *(int *)(unaff_RDI + 0x40)) {
    do {
      if (((*(uint *)(ulonglong)*(uint *)(unaff_RDI + 0x2c) & 1) != 0) &&
         ((*(byte *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + 2) & 4) != 0)) {
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *(longlong *)(puVar3 + -4) = unaff_RDI;
        puVar3[-1] = 0;
        puVar3[-6] = 0x407bde60;
        puVar3[-5] = 1;
        uVar1 = FUN_1407bd044();
        uVar4 = (ulonglong)((int)(puVar3 + -4) + 8);
        *(undefined8 *)(uVar4 - 8) = 0xffffffffbf800000;
        *(undefined8 *)(uVar4 - 0x10) = 1;
        *(undefined8 *)(uVar4 - 0x18) = 0;
        *(undefined8 *)(uVar4 - 0x20) = uVar1;
        *(uint **)(uVar4 - 0x28) = puVar3 + 4;
        *(undefined8 *)(uVar4 - 0x30) = 0x1407bde73;
        FUN_1407559fe();
        puVar5 = (undefined4 *)(ulonglong)((int)(uVar4 - 0x28) + 0xc);
        puVar5[1] = *(undefined4 *)((ulonglong)((int)(uVar4 - 0x28) + 0x14) + 0x10);
        *puVar5 = puVar5[3];
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar5 + -2) = &UNK_1407bde95;
        FUN_140755a9a();
      }
    } while (0 < *(int *)(unaff_RDI + 0x40));
  }
  puVar3[2] = (uint)(*(float *)((ulonglong)*puVar3 + 0xd30) + *(float *)((ulonglong)*puVar3 + 0xd30)
                    + 0.0);
  if (_DAT_150b46bd6 == (puVar3[6] ^ uVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar3 + -2) = FUN_1407bdeef;
  FUN_1408802b0(puVar3[6] ^ uVar2);
}

