/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018f50a */

ulonglong FUN_18018f50a(longlong param_1,float param_2)

{
  ulonglong uVar1;
  float fVar2;
  
  if ((uint)(int)(DAT_180327310 + param_2) < 0x40) {
    return (ulonglong)
           *(byte *)(*(longlong *)(param_1 + 0x38) + 500 +
                    (ulonglong)(uint)(int)(DAT_180327310 + param_2));
  }
  fVar2 = (float)FUN_1800eebe2(*(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x2c));
  fVar2 = (float)FUN_1802824d0(DAT_1802ac570 - fVar2 / param_2);
  fVar2 = (float)FUN_180283cd0(DAT_1802df114 / fVar2);
  uVar1 = FUN_18012bcdf(((int)fVar2 - ((int)fVar2 + 1 >> 0x1f)) + 1U & 0xfffffffe,4,0x200);
  return uVar1;
}

