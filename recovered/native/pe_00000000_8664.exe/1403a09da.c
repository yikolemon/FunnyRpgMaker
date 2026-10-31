/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403a09da */

ulonglong FUN_1403a09da(longlong param_1,float param_2)

{
  ulonglong uVar1;
  float fVar2;
  
  if ((uint)(int)(DAT_1405387e0 + param_2) < 0x40) {
    return (ulonglong)
           *(byte *)(*(longlong *)(param_1 + 0x38) + 500 +
                    (ulonglong)(uint)(int)(DAT_1405387e0 + param_2));
  }
  fVar2 = (float)FUN_1403000b2(*(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x2c));
  fVar2 = (float)FUN_1404939a0(DAT_1404bda40 - fVar2 / param_2);
  fVar2 = (float)FUN_1404951a0(DAT_1404f05e4 / fVar2);
  uVar1 = FUN_14033d1af(((int)fVar2 - ((int)fVar2 + 1 >> 0x1f)) + 1U & 0xfffffffe,4,0x200);
  return uVar1;
}

