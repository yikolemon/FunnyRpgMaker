/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403a8f0b */

longlong FUN_1403a8f0b(longlong param_1,uint param_2)

{
  return ((longlong)
          ((ulonglong)
           *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x78) +
                    (ulonglong)(param_2 & 0x7ffff) * 4) << 0x2c) >> 0x2c) * 8 +
         *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x68);
}

