/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180197a3b */

longlong FUN_180197a3b(longlong param_1,uint param_2)

{
  return ((longlong)
          ((ulonglong)
           *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x78) +
                    (ulonglong)(param_2 & 0x7ffff) * 4) << 0x2c) >> 0x2c) * 8 +
         *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x68);
}

