/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140019bd2 */

longlong FUN_140019bd2(void)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x18);
  if ((uVar1 & 1) == 0) {
    *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x18)
         = uVar1 | 1;
    FUN_140019dc0(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 8
                 );
    FUN_140188ac0(FUN_140019e55);
  }
  return *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 8;
}

