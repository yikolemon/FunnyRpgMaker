/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180024602 */

longlong FUN_180024602(void)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x28);
  if ((uVar1 & 1) == 0) {
    *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x28)
         = uVar1 | 1;
    FUN_1800247f0(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x18);
    FUN_18023ebf0(FUN_180024885);
  }
  return *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x18;
}

