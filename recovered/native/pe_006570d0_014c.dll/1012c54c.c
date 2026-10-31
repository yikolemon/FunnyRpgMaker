/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012c54c */

void __fastcall FUN_1012c54c(float *param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  fVar2 = *(float *)(iVar1 + 0x14c) + *(float *)(DAT_1039d74c + 0xd1c);
  if ((((*(float *)(iVar1 + 0x26c) <= fVar2) &&
       (*(float *)(iVar1 + 0x270) <= *(float *)(iVar1 + 0x150))) &&
      (fVar2 + *param_1 <= *(float *)(iVar1 + 0x274))) &&
     (*(float *)(iVar1 + 0x150) + param_1[1] <= *(float *)(iVar1 + 0x278))) {
    FUN_10114a0e(0,0xbf800000);
  }
  return;
}

