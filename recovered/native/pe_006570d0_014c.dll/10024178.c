/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10024178 */

int FUN_10024178(void)

{
  uint uVar1;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_18 = &LAB_100597f0;
  local_1c = ExceptionList;
  uVar1 = *(uint *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x14);
  if ((uVar1 & 1) == 0) {
    ExceptionList = &local_1c;
    *(uint *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x14) = uVar1 | 1;
    local_14 = 0;
    FUN_10024328();
    FUN_1022d880(&LAB_100243ca);
  }
  ExceptionList = local_1c;
  return *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0xc;
}

