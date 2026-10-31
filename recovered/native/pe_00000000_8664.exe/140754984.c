/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140754984 */

void FUN_140754984(void)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong unaff_RBX;
  float *pfVar3;
  ulonglong unaff_RBP;
  float10 in_ST0;
  ulonglong auStack_38 [3];
  
  auStack_38[0] =
       (ulonglong)
       (uint)(int)((*(float *)((unaff_RBX & 0xffffffff) + 4) - *(float *)((unaff_RBX >> 0x20) + 4))
                  / (float)unaff_RBP);
  auStack_38[1] = 0;
  uVar1 = FUN_140753b3a();
  *(uint *)(unaff_RBP >> 0x20) = uVar1;
  *(double *)((ulonglong)auStack_38 & 0xffffffff) =
       (double)((*(float *)((unaff_RBX & 0xffffffff) + 0xc) - *(float *)((unaff_RBX >> 0x20) + 4)) /
               *(float *)((ulonglong)((int)auStack_38 + 8) + 0x20));
  ((double *)((ulonglong)auStack_38 & 0xffffffff))[-1] = 2.6562924325931e-314;
  FUN_1408c5280();
  pfVar3 = (float *)(ulonglong)((int)auStack_38 + 8);
  *pfVar3 = (float)in_ST0;
  *(ulonglong *)(pfVar3 + -2) = (ulonglong)uVar1;
  *(ulonglong *)(pfVar3 + -4) = (ulonglong)(uint)(int)*pfVar3;
  pfVar3[-6] = 3.8326368;
  pfVar3[-5] = 1.4013e-45;
  uVar2 = FUN_140753b3a();
  *(undefined4 *)(ulonglong)*(uint *)((ulonglong)((int)(pfVar3 + -4) + 8) + 0x28) = uVar2;
  return;
}

