/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400daa7e */

ulonglong FUN_1400daa7e(longlong param_1,float param_2)

{
  ulonglong uVar1;
  float fVar2;
  
  if ((uint)(int)(DAT_140e8c6d4 + param_2) < 0x40) {
    return (ulonglong)
           *(byte *)(*(longlong *)(param_1 + 0x38) + 500 +
                    (ulonglong)(uint)(int)(DAT_140e8c6d4 + param_2));
  }
  fVar2 = (float)FUN_14004863e(*(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x2c));
  fVar2 = (float)FUN_1401a07b0(DAT_1401c86c8 - fVar2 / param_2);
  fVar2 = (float)FUN_1401a1f10(DAT_140211e84 / fVar2);
  uVar1 = FUN_1400a4c0f(((int)fVar2 - ((int)fVar2 + 1 >> 0x1f)) + 1U & 0xfffffffe,4,0x200);
  return uVar1;
}

