/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407ed8fc */

undefined8 FUN_1407ed8fc(longlong param_1,ushort param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x40);
  if (uVar2 != 0) {
    uVar1 = *(ushort *)(ulonglong)uVar2;
    while (uVar1 != 0) {
      uVar2 = uVar2 + 4;
      if ((uVar1 <= param_2) && (param_2 <= ((ushort *)(ulonglong)uVar2)[-1])) {
        return 0;
      }
      uVar1 = *(ushort *)(ulonglong)uVar2;
    }
  }
  return 1;
}

